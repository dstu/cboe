cc_library(
    name = "actions",
    hdrs = ["boe.actions.hpp"],
    srcs = ["boe.actions.cpp"],
    deps = [
        # ":combat",
        ":dlgutil",
        ":fileio",
        "//src:location",
        "//src/dialogxml:keycodes",
        "//src/scenario:monster",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "combat",
    hdrs = ["boe.combat.hpp"],
    srcs = ["boe.combat.cpp"],
    deps = [
        ":graphics",
        ":infodlg",
        ":lib",
        ":locutils",
        ":menus",
        ":monster",
        ":party",
        # ":specials",
        ":town",
        ":ui",
        "//src/universe",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "consts",
    hdrs = ["boe.consts.hpp"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "fileio",
    hdrs = ["boe.fileio.hpp"],
	srcs = ["boe.fileio.cpp"],
    deps = [
        ":dlgutil",
        # ":graphics",
        ":infodlg",
        ":locutils",
        ":town",
        "//src/fileio",
        "//src/util:mathutil",
        "//src:sounds",
        "//src/universe",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "menus",
    hdrs = ["boe.menus.hpp"],
    # TODO(blaze): Define platform targets and use select() here.
    srcs = ["boe.menus.linux.cpp"],
    deps = [
        ":lib",
        "//src:types",
        "//src/tools:drawable_manager",
        "//src/tools:event_listener",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "monster",
    hdrs = ["boe.monster.hpp"],
    srcs = ["boe.monster.cpp"],
    deps = [
        ":lib",
        "//src/dialogxml/widgets",
        "//src/universe",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "lib",
    hdrs = [
        "boe.global.hpp",
        "boe.consts.hpp",
    ],
)

cc_library(
    name = "dlgutil",
    hdrs = ["boe.dlgutil.hpp"],
    srcs = ["boe.dlgutil.cpp"],
    deps = [
        ":lib",
        "//src/dialogxml/dialogs:choicedlog",
        "//src/dialogxml/dialogs:strdlog",
        "//src/dialogxml/widgets",
        "//src/fileio",
        "//src/fileio/resmgr:res_strings",
        "//src:sounds",
        "//src/tools:cursors",
        "//src/tools:enum_map",
        "//src/tools:prefs",
        "//src/tools:winutil",
        "//src/util",
        "//src/util:mathutil",
        "//src/universe",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "graphics",
    hdrs = [
        "boe.graphics.hpp",
        "boe.graphutil.hpp",
        "boe.newgraph.hpp",
        "boe.text.hpp",
    ],
    srcs = [
        "boe.graphics.cpp",
        "boe.graphutil.cpp",
        "boe.newgraph.cpp",
        "boe.text.cpp",
    ],
    deps = [
        ":dlgutil",
        ":infodlg",
        ":items",
        ":lib",
        ":menus",
        ":monster",
        ":party",
        ":specials",
        ":town",
        "//src:location",
        "//src/dialogxml/widgets",
        "//src/gfx:gfxsheets",
        "//src/scenario",
        "//src/tools:enum_map",
        "//src/universe",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "locutils",
    hdrs = ["boe.locutils.hpp"],
    srcs = ["boe.locutils.cpp"],
    deps = [
        # ":graphics",
        ":lib",
        ":monster",
        "//src/universe",
        "//src/util:mathutil",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "ui",
    hdrs = ["boe.ui.hpp"],
    srcs = ["boe.ui.cpp"],
    deps = [
        ":consts",
        ":graphics",
        ":locutils",
        "//src/gfx:render",
        "//src/util:mathutil",
        "//src:location",
        "//src/tools:enum_map",
        "//src/fileio/resmgr:res_strings",
        "//src:oldstructs",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "party",
    hdrs = ["boe.party.hpp"],
    srcs = ["boe.party.cpp"],
    deps = [
        ":lib",
        "//src/dialogxml/dialogs:choicedlog",
        "//src/scenario",
        "//src/universe",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "infodlg",
    hdrs = ["boe.infodlg.hpp"],
    srcs = ["boe.infodlg.cpp"],
    deps = [
        "//src/scenario:item",
        "//src/scenario:monster",
        "//src/universe",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "items",
    hdrs = ["boe.items.hpp"],
    srcs = ["boe.items.cpp"],
    deps = [
        "//src/dialogxml/widgets",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "specials",
    hdrs = ["boe.specials.hpp"],
	srcs = ["boe.specials.cpp"],
    deps = [
        ":actions",
        # ":combat",
        ":dlgutil",
        ":fileio",
        ":lib",
        # ":graphics",
        ":infodlg",
        ":items",
        ":locutils",
        ":menus",
        ":monster",
        ":party",
        ":town",
        # ":townspec",
        "//src:sounds",
        "//src/dialogxml/dialogs:choicedlog",
        "//src/dialogxml/dialogs:strdlog",
        "//src/fileio",
        "//src/universe",
        "//src/util:mathutil",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "town",
    hdrs = ["boe.town.hpp"],
	srcs = ["boe.town.cpp"],
    deps = [
        "//src/dialogxml/dialogs:strdlog",
        "//src/scenario:outdoors",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "townspec",
    hdrs = ["boe.townspec.hpp"],
    srcs = ["boe.townspec.cpp"],
    deps = [
        ":combat",
        ":infodlg",
        ":items",
        ":lib",
        ":locutils",
        ":menus",
        ":monster",
        ":party",
        ":town",
        "//src/dialogxml/dialogs:choicedlog",
        "//src/dialogxml/dialogs:strdlog",
        "//src/tools:winutil",
        "//src/universe",
        "//src/util:mathutil",
        "//src/util",
        "//src:sounds",
    ],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "boe",
    srcs = [
	    "boe.main.cpp",
        "boe.main.hpp",
	    "boe.startup.cpp",
	    # "../pcedit/pc.editors.cpp",
	    # "../fileio/fileio_party.cpp",
	    # "../view_dialogs.cpp",
    ],
    deps = [
        ":actions",
        ":fileio",
        ":graphics",
        ":infodlg",
        ":items",
        ":lib",
        ":menus",
        ":party",
        ":ui",
        ":locutils",
        ":town",
        "//src/dialogxml/dialogs:choicedlog",
        "//src/util:mathutil",
        "//src/universe",
    ],
)
