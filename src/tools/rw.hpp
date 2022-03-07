#ifndef SRC_RW_HPP
#define SRC_RW_HPP

#include <array>
#include <fstream>
#include <sstream>
#include <string>

std::string read_maybe_quoted_string(std::istream& from);
std::string maybe_quote_string(std::string which);

template<typename T>
struct array_value_type{
	using type = typename T::value_type;
};

template<typename T, int D1, int D2>
struct array_value_type<T[D1][D2]> {
	using type = T;
};

template<typename T>
void writeArray(std::ostream& to, const T& array, int width, int height) {
	using int_type = decltype(typename array_value_type<T>::type() + 1);
	for(int y = 0; y < height; y++) {
		to << array[0][y];
		for(int x = 1; x < width; x++)
			to << '\t' << int_type(array[x][y]);
		to << '\n';
	}
	to << '\f';
}

template<typename T>
void readArray(std::istream& from, T& array, int width, int height) {
        using int_type = decltype(typename array_value_type<T>::type() + 1);
	from >> std::ws;
	std::string arrayContents;
	getline(from, arrayContents, '\f');
	std::istringstream arrayIn(arrayContents);
	for(int y = 0; y < height; y++) {
		std::string line;
		getline(arrayIn, line);
		std::istringstream lineIn(line);
		lineIn.flags(from.flags());
		int_type temp;
		for(int x = 0; x < width; x++)
			lineIn >> temp, array[x][y] = temp;
		if(!arrayIn) break;
	}
}

#endif // SRC_RW_HPP
