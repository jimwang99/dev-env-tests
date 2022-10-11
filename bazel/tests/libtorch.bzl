# Bazel build file for libtorch

cc_library(
    name = "libtorch-cpu",
    srcs = [
        "lib/libc10.so",
        "lib/libtorch.so",
        "lib/libtorch_cpu.so",
        "lib/libgomp-52f2fd74.so.1",
    ],
    hdrs = glob([
        "include/**/*.h",
    ]),
    includes = [
        "include",
        "include/torch/csrc/api/include",
    ],
    linkopts = [
        "-ltorch",
        "-ltorch_cpu",
        "-lc10",
    ],
    visibility = [
        "//visibility:public",
    ],
)
