#include <gtest/gtest.h>

#include "test_lottieanimation_capi.cpp"
#include "test_lottieanimation.cpp"
#include "test_vpath.cpp"
#include "test_vrect.cpp"

extern "C" int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
