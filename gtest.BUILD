cc_library(
    name = "main",
    srcs = glob(
        ["src/*.cc"],
        exclude = ["src/gtest-all.cc"]
    ),
    hdrs = glob(["include/**/*.h"]),
    copts = [
            "-Iexternal/gtest",
            "-Iexternal/gtest/include"
        ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)
