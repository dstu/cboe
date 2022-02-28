cc_library(
    name = "universe",
    hdrs = [
        "creature.hpp",
        "living.hpp",
        "party.hpp",
        "pc.hpp",
        "population.hpp",
        "universe.hpp"],
    srcs = [
        "creature.cpp",
        "living.cpp",
        "party.cpp",
        "pc.cpp",
        "population.cpp",
        "universe.cpp",
    ],
    deps = [
        "//src:oldstructs",
        "//src:types",
        "//src/dialogxml/widgets:pictypes",
        "//src/scenario",
        "//src/scenario:monster",
        "//src/scenario:vehicle",
        "//src/scenario:item",
        "//src/scenario:quest",
    ],
    visibility = ["//visibility:public"],
)
