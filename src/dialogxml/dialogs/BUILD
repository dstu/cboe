# cc_library(
#     name = "base",
#     hdrs = ["dialog.hpp"],
#     srcs = ["dialog.cpp"],
#     deps = [
#         ":dlogevt",
#         "//src:location",
#         "//src:sounds",
#         "//src/fileio/xml-parser:tinyxml",
#         "//src/gfx:tiling",
#         "//src/tools:framerate_limiter",
#         "//src/tools:winutil",
#     ],
#     visibility = ["//visibility:public"],
# )

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

# cc_library(
#     name = "dialog",
#     hdrs = ["dialog.hpp"],
#     srcs = ["dialog.cpp"],
#     deps = [
#         ":dlogevt",
#         "//src:location",
#         "//src:sounds",
#         "//src/dialogxml/widgets:base",
#         "//src/fileio/xml-parser:tinyxml",
#         "//src/gfx:tiling",
#         "//src/tools:framerate_limiter",
#         "//src/tools:winutil",
#     ],
#     visibility = ["//visibility:public"],
# )

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
