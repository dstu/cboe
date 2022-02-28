cc_library(
    name = "fileio",
    hdrs = ["fileio.hpp"],
    srcs = [
        "fileio.cpp",
        "fileio_scen.cpp",
        "fileio_party.cpp",
    ],
    deps = [
        "//src/dialogxml/dialogs:strdlog",
        "//src/fileio/gzstream",
        "//src/fileio/resmgr",
        "//src/fileio/resmgr:res_cursor",
        "//src/fileio/resmgr:res_font",
        "//src/fileio/resmgr:res_image",
        "//src/fileio/resmgr:res_sound",
        "//src/fileio/resmgr:res_strings",
        "//src/fileio:tarball",
        "//src/gfx:gfxsheets",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "tarball",
    hdrs = ["tarball.hpp"],
    srcs = ["tarball.cpp"],
    visibility = ["//visibility:public"],
)
