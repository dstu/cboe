cc_library(
    name = "area",
    hdrs = ["area.hpp"],
    deps = [
        "//src/tools:vector2d",
    ],
    visibility = ["//visibility:public"],
)    

cc_library(
    name = "item",
    hdrs = [
        "item.hpp",
        "item_abilities.hpp",
        "item_variety.hpp",
    ],
    srcs = ["item.cpp"],
    deps = [
        "//src:alchemy",
        "//src:damage",
        "//src:location",
        "//src:oldstructs",
        "//src:race",
        "//src:skills_traits",
        "//src:spell",
        "//src:types",
        "//src/tools:rw",
        "//src/tools:utility",
    ],
    visibility = ["//visibility:public"],
)


cc_library(
    name = "monster",
    hdrs = [
        "monster_abilities.hpp",
        "monster.hpp",
    ],
    srcs = ["monster.cpp"],
    deps = [
        "//src:damage",
        "//src:fields",
        "//src:oldstructs",
        "//src:race",
        "//src:spell",
        "//src:types",
        "//src/gfx:gfxsheets",
        "//src/tools:rw",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "special",
    hdrs = ["special.hpp"],
    srcs = ["special.cpp"],
    deps = [
        "//src:damage",
        "//src:fields",
        "//src:location",
        "//src:oldstructs",
        "//src:skills_traits",
        "//src:spell",
        "//src:types",
        "//src/dialogxml/dialogs:strdlog",
        "//src/tools:utility",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "quest",
    hdrs = ["quest.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "scenario",
    hdrs = [
        "outdoors.hpp",
        "scenario.hpp",
        "town.hpp",
    ],
    srcs = [
        "outdoors.cpp",
        "scenario.cpp",
        "town.cpp",
    ],
    deps = [
        ":area",
        ":monster",
        ":item",
        ":quest",
        ":shop",
        ":special",
        ":talking",
        ":terrain",
        ":vehicle",
        "//src:location",
        "//src:oldstructs",
        "//src/tools:rw",
        "//src/tools:vector2d",
        "//src/tools:mathutil",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "shop",
    hdrs = ["shop.hpp"],
    srcs = ["shop.cpp"],
    deps = [
        "//src/dialogxml/widgets:pictypes",
        "//src/scenario:item",
        "//src/tools:utility",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "talking",
    hdrs = ["talking.hpp"],
    srcs = ["talking.cpp"],
    deps = [
        ":shop",
        "//src:oldstructs",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "terrain",
    hdrs = [
        "terrain.hpp",
        "terrain_abilities.hpp",
    ],
    srcs = ["terrain.cpp"],
    deps = [
        "//src:damage",
        "//src:location",
        "//src:oldstructs",
        "//src:types",
        "//src/dialogxml/widgets:pictypes",
        "//src/gfx:gfxsheets",
    ],
    visibility = ["//visibility:public"],
)
    
cc_library(
    name = "vehicle",
    hdrs = ["vehicle.hpp"],
    srcs = ["vehicle.cpp"],
    deps = [
        "//src:location",
        "//src:oldstructs",
    ],
    visibility = ["//visibility:public"],
)
