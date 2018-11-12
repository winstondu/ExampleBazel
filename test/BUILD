cc_test(
    name = "my_test",
    srcs = ["my_test.cc"],
    copts = ["-Iexternal/gtest"],
    deps = ["@gtest//:gtest",
        "@gtest//:gtest_main", # Only if hello_test.cc has no main()
        "//lib:testobj",
        ],
    visibility = ["//visibility:public"],
)
