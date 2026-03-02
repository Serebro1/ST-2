#include <cstdint>
#include <cmath>
#include "circle.h"
#include "tasks.h"

double earthRopeTask() {
  double earthRadius = 6378.1 * 1000;
  double extra = 1.0;
  Circle circle(earthRadius);

  double radius = circle.getRadius();
  circle.setFerence(circle.getFerence() + extra);

  double newRadius = circle.getRadius();
  return newRadius - radius;
}

double poolWalkwayCostTask() {
  Circle pool(3.0);
  Circle poolWithFence(4.0);
  return 1000.0 * (poolWithFence.getArea() - pool.getArea());
}

double poolFenceCostTask() {
  Circle poolWithFence(4.0);
  return poolWithFence.getFerence() * 2000.0;
}
