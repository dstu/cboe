cc_library(
    name = "cursors",
    hdrs = ["cursors.hpp"],
    visibility = ["//visibility:public"],
)

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
    srcs = ["prefs.win.cpp"],
    # TODO(blaze): Set platform targets and use select() here.
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
)
