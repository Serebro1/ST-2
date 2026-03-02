// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include "circle.h"
#include "tasks.h"

constexpr auto EPS = 1e-6;


// 4 test on negative argument in construct and sets
// 1 test on construct with zero argument
// 3 test on construct correct set radius and calc ference and area
// 3 test on setRadius correct set radius and calc ference and area
// 3 test on setFerence correct set ference and calc radius and area
// 3 test on setArea correct set area and calc radius and ference

// -----Earth and rope task tests------------

TEST(st2, EarthRopeTaskResultPositive) {
  EXPECT_GT(earthRopeTask(), 0.0);
}

TEST(st2, EarthRopeTaskResult) {
  double gap = earthRopeTask();
  EXPECT_NEAR(gap, 1.0 / (2.0 * PI), EPS);
}

// -----Walkway and fence of pool cost test--

TEST(st2, PoolWalkwayCostPositive) {
  EXPECT_GT(poolWalkwayCostTask(), 0.0);
}

TEST(st2, PoolFenceCostPositive) {
  EXPECT_GT(poolFenceCostTask(), 0.0);
}

TEST(st2, PoolWalkwayCostResult) {
  EXPECT_NEAR(poolWalkwayCostTask(), 21991.148575, EPS);
}

TEST(st2, PoolFenceCostResult) {
  EXPECT_NEAR(poolFenceCostTask(), 50265.482457, EPS);
}

