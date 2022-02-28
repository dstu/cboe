cc_library(
    name = "gfxsheets",
    hdrs = ["gfxsheets.hpp"],
    srcs = ["gfxsheets.cpp"],
    deps = [
        "//src:location",
        "//src:types",
        "//src/fileio/resmgr:res_image",
        "//src/gfx:render",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "render",
    hdrs = [
        "render_image.hpp",
        "render_shapes.hpp",
        "render_text.hpp",
    ],
    srcs = [
        "render_image.cpp",
        "render_shapes.cpp",
        "render_text.cpp",
    ],
    deps = [
        # "//src/fileio",
        "//src/fileio/resmgr:res_font",
        "//src:location",
        "//src/dialogxml/widgets:pictypes",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "tiling",
    hdrs = ["tiling.hpp"],
    srcs = ["tiling.cpp"],
    deps = [
  
        "//src/gfx:render",
        "//src:location",
       "//src/fileio/resmgr:res_image",   ],
    visibility = ["//visibility:public"],
)
