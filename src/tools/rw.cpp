#include "src/tools/rw.hpp"

#include <algorithm>

std::string read_maybe_quoted_string(std::istream& from) {
	std::string result;
	from >> std::ws;
	if(from.peek() == '"' || from.peek() == '\'') {
		char delim = from.get();
		getline(from, result, delim);
		if(result.empty()) return result;
		while(result[result.length() - 1] == '\\') {
			result[result.length() - 1] = delim;
			std::string nextPart;
			getline(from, nextPart, delim);
			// Collapse any double backslashes; remove any single backslashes
			for(std::string::iterator iter = nextPart.begin(); iter != nextPart.end(); iter++) {
				if(iter[0] == '\\' && iter + 1 != nextPart.end() && iter[1] != '\\') {
					iter = nextPart.erase(iter);
					// After this, iter points to the second of the two backslashes, so
					// when incremented by the loop, it'll point to the character after the backslashes.
				}
			}
			// Note that this does not support escaping the single quotes in strings delimited by double quotes, and vice versa.
			result += nextPart;
		}
	} else from >> result;
	return result;
}

std::string maybe_quote_string(std::string which) {
	if(which.find_first_of(' ') != std::string::npos || which[0] == '"' || which[0] == '\'') {
		// The string contains spaces or starts with a quote, so quote it.
		// We may have to escape quotes or backslashes.
		int apos = 0, quot = 0, bslash = 0;
		std::for_each(which.begin(), which.end(), [&apos,&quot,&bslash](char c) {
			if(c == '\'') apos++;
			if(c == '"') quot++;
			if(c == '\\') bslash++;
		});
		char quote_c;
		// Surround it in whichever quote character appears fewer times.
		if(quot < apos) quote_c = '"';
		else quote_c = '\'';
		// Let's create this string to initially have the required size.
		std::string temp;
		size_t quoted_len = which.length() + std::min(quot,apos) + bslash + 2;
		temp.reserve(quoted_len);
		temp += quote_c;
		for(size_t i = 0; i < which.length(); i++) {
			if(which[i] == quote_c) {
				temp += '\\';
				temp += quote_c;
			} else if(which[i] == '\\')
				temp += R"(\\)";
			else temp += which[i];
		}
		temp += quote_c;
		which.swap(temp);
	}
	return which;
}
