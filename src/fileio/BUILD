cc_library(
    name = "fileio",
    hdrs = [
        "fileio.hpp",
        "map_parse.hpp",
        "special_parse.hpp",
        "town_import.tpp",
    ],
    srcs = [
        "estreams.cpp",
        "fileio.cpp",
        "fileio_scen.cpp",
        "fileio_party.cpp",
        "map_parse.cpp",
        "special_parse.cpp",
    ],
    deps = [
        "//src:location",
        "//src:porting",
        "//src/dialogxml/dialogs:strdlog",
        "//src/fileio:tarball",
        "//src/fileio/gzstream",
        "//src/fileio/resmgr",
        "//src/fileio/resmgr:res_cursor",
        "//src/fileio/resmgr:res_font",
        "//src/fileio/resmgr:res_image",
        "//src/fileio/resmgr:res_sound",
        "//src/fileio/resmgr:res_strings",
        "//src/fileio/xml-parser:tinyxml",
        "//src/gfx:gfxsheets",
        "//src/universe",
        "//src/scenario:special",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "tarball",
    hdrs = ["tarball.hpp"],
    srcs = ["tarball.cpp"],
    visibility = ["//visibility:public"],
)
