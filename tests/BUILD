cc_test(
    name = "prometheus-test",
    srcs = [
        "counter_test.cc",
        "family_test.cc",
        "gauge_test.cc",
        "histogram_test.cc",
        "mock_metric.h",
        "registry_test.cc",
    ],
    copts = ["-Iexternal/googletest/include"],
    linkstatic = 1,
    deps = [
        "//:prometheus-cpp",
        "@googletest//:main",
    ],
)
