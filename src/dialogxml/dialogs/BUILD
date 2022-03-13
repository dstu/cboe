cc_library(
    name = "3choice",
    hdrs = ["3choice.hpp"],
    srcs = [
        "3choice.cpp",
        "basicbtns.cpp",
    ],
    deps = [
        ":choicedlog",
        "//src:types",
        "//src/dialogxml/widgets",
        "//src/dialogxml/widgets:pictypes",
        "//src/tools:mathutil",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "choicedlog",
    hdrs = ["choicedlog.hpp"],
    srcs = ["choicedlog.cpp"],
    deps = [
        "//src/dialogxml/widgets",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "dlogevt",
    hdrs = ["dlogevt.hpp"],
    deps = [
        "//src/dialogxml:keycodes",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "pictchoice",
    hdrs = ["pictchoice.hpp"],
    srcs = ["pictchoice.cpp"],
    deps = [
        "//src/dialogxml/widgets",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "strdlog",
    srcs = ["strdlog.cpp"],
    hdrs = ["strdlog.hpp"],
    deps = [
        "//src/dialogxml/widgets",
        "//src/dialogxml/widgets:pictypes",
        "//src:sounds",
        "//src/tools:winutil",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "strchoice",
    srcs = ["strchoice.cpp"],
    hdrs = ["strchoice.hpp"],
    deps = [
        "//src/dialogxml/widgets",
        "//src/tools:edit_stuff_done",
        "//src/fileio/resmgr:res_image",
    ],
    visibility = ["//visibility:public"],
)
