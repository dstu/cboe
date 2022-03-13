cc_binary(
    name = "pcedit",
    srcs = [
        "pc.action.cpp",
        "pc.action.hpp",
        "pc.editors.cpp",
        "pc.editors.hpp",
        "pc.fileio.cpp",
        "pc.fileio.hpp",
        "pc.graphics.cpp",
        "pc.graphics.hpp",
        "pc.main.cpp",
        "pc.menu.cpp",
        "pc.menu.hpp",
        "pc.menus.hpp",
        # TODO(bazel): Switch on platform.
        "pc.menus.linux.cpp",
    ],
    deps = [
        "//src/fileio",
        "//src:sounds",
        "//src/dialogxml/dialogs:choicedlog",
        "//src/dialogxml/dialogs:strchoice",
    ],
    copts = ["-std=c++17"],
    linkopts = [
        "-L/usr/local/lib",
        "-lboost_filesystem",
        "-lboost_system",
        "-lsfml-audio",
        "-lsfml-graphics",
        "-lsfml-system",
        "-lsfml-window",
        "-ltgui",
        "-lX11",
        "-lGL",
    ],
)
    
