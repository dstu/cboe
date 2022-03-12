cc_library(
    name = "res_cursor",
    hdrs = [
        "res_cursor.hpp",
        "cursors.hpp",
    ],
    srcs = [
        "res_cursor.cpp",
        # TODO(bazel): Add targets for other platforms and use select() here.
        "cursors.linux.cpp",
    ],
    deps = [
        ":resmgr",
    ],
    data = [
        "//rsrc/cursors",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "res_font",
    hdrs = ["res_font.hpp"],
    srcs = ["res_font.cpp"],
    deps = [
        ":resmgr",
    ],
    data = [
        "//rsrc/fonts",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "res_image",
    hdrs = ["res_image.hpp"],
    srcs = ["res_image.cpp"],
    deps = [
        ":resmgr",
    ],
    data = [
        "//rsrc/graphics",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "res_strings",
    hdrs = ["res_strings.hpp"],
    srcs = ["res_strings.cpp"],
    deps = [
        ":resmgr",
    ],
    data = [
        "//rsrc/strings",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "res_sound",
    hdrs = ["res_sound.hpp"],
    srcs = ["res_sound.cpp"],
    deps = [
        ":resmgr",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "resmgr",
    hdrs = ["resmgr.hpp"],
    visibility = ["//visibility:public"],
)
