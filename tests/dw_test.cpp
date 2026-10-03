#include "dw.h"
#include <gtest/gtest.h>

TEST(Dog, ReturnsNameFromBaseClass) {
  Dog fido("Fido", "Beagle");
  EXPECT_EQ(fido.get_name(), "Fido");
}

TEST(Dog, ReturnsOwnBreed) {
  Dog fido("Fido", "Beagle");
  EXPECT_EQ(fido.get_breed(), "Beagle");
}
