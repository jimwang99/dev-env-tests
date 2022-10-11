cc_test(
    name = "test-hello",
    size = "small",
    srcs = [
        "test-hello.cc",
    ],
    deps = [
        "//lib-hello",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "test-world",
    size = "small",
    srcs = [
        "test-world.cc",
    ],
    deps = [
        "//lib-world",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "test-libtorch",
    size = "small",
    srcs = [
        "test-libtorch.cc",
    ],
    deps = [
        "@com_github_google_glog//:glog",
        "@com_google_googletest//:gtest_main",
        "@libtorch//:libtorch-cpu",
    ],
)
