cc_library(
    name = "alchemy",
    hdrs = ["alchemy.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "location",
    hdrs = ["location.hpp"],
    srcs = ["location.cpp"],
    deps = [
        "//src/tools:mathutil",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "porting",
    hdrs = ["porting.hpp"],
    srcs = ["porting.cpp"],
    deps = [
        ":location",
        ":oldstructs",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "damage",
    hdrs = ["damage.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "fields",
    hdrs = ["fields.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "spell",
    hdrs = ["spell.hpp"],
    srcs = ["spell.cpp"],
    deps = [
        ":skills_traits",
        "//src/tools:utility",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "skills_traits",
    hdrs = ["skills_traits.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "sounds",
    hdrs = ["sounds.hpp"],
    srcs = ["sounds.cpp"],
    deps = [
        "//src:types",
        "//src/fileio/resmgr:res_sound",
        "//src/tools:prefs",
        "//src/tools:mathutil",
    ],
    data = [
        "//rsrc/sounds",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "race",
    hdrs = ["race.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "oldstructs",
    hdrs = ["oldstructs.hpp"],
    srcs = ["oldstructs.cpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "types",
    hdrs = ["global.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "view_dialogs",
    hdrs = ["view_dialogs.hpp"],
    srcs = ["view_dialogs.cpp"],
    deps = [
        "//src/dialogxml/widgets",
        "//src/scenario",
        "//src/scenario:item",
        "//src/universe",
        "//src/tools:utility",
    ],
    visibility = ["//visibility:public"],
)
