cc_library(
    name = "drawable",
    hdrs = ["drawable.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "drawable_manager",
    hdrs = ["drawable_manager.hpp"],
    srcs = ["drawable_manager.cpp"],
    deps = [
        ":drawable",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "edit_stuff_done",
    hdrs = ["edit_stuff_done.hpp"],
    srcs = ["edit_stuff_done.cpp"],
    deps = [
        ":winutil",
        "//src/gfx:render",
        "//src:skills_traits",
        "//src/dialogxml/dialogs:choicedlog",
        "//src/dialogxml/dialogs:strdlog",
        "//src/dialogxml/widgets",
        "//src/fileio",
        "//src/universe",
        "//src/util",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "enum_map",
    hdrs = ["enum_map.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "event_listener",
    hdrs = ["event_listener.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "framerate_limiter",
    hdrs = ["framerate_limiter.hpp"],
    srcs = ["framerate_limiter.cpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "prefs",
    hdrs = ["prefs.hpp"],
    # TODO(bazel): Set platform targets and use select() here.
    srcs = ["prefs.win.cpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "rw",
    hdrs = ["rw.hpp"],
    srcs = ["rw.cpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "undo",
    hdrs = ["undo.hpp"],
    srcs = ["undo.cpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "vector2d",
    hdrs = ["vector2d.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "winutil",
    hdrs = ["winutil.hpp"],
    # TODO(bazel transition): Define targets for each platform and use select()
    # here.
    srcs = ["winutil.linux.cpp"],
    visibility = ["//visibility:public"],
    copts = ["-std=c++17"],
)
