cc_test(
    name = "my_test",
    srcs = ["my_test.cc"],
    copts = ["-Iexternal/gtest"],
    deps = ["@gtest//:gtest",
        "@gtest//:gtest_main", # Only if hello_test.cc has no main()
        "//lib:testobj",
        ],
    visibility = ["//visibility:public"],
    ## Adds the pthread library. We can alternatively also use cc_import, though this requires giving a direct path to .lib
    ## Doing this way is easier, though running the test actually requires us to have pthreadVC2.dll available in our PATH.
    linkopts = ["-DEFAULTLIB:pthreadVC2.lib"]
)
