// Copyright 2022 UNN-CS
#include <cstdint>
#include <cmath>
#include <stdexcept>
#include "circle.h"

Circle::Circle(double _rad) {
  if (_rad < 0.0) {
    std::invalid_argument("radius cannot be negative");
  }
  radius = _rad;
  ference = 2.0 * PI * _rad;  // 2πr
  area = PI * _rad * _rad;    // πr^2
}

void Circle::setRadius(double _rad) {
  if (_rad < 0.0) {
    std::invalid_argument("radius cannot be negative");
  }
  radius = _rad;
  ference = 2.0 * PI * _rad;  // 2πr
  area = PI * _rad * _rad;    // πr^2
}

void Circle::setFerence(double _fer) {
  if (_fer < 0.0) {
    std::invalid_argument("ference cannot be negative");
  }
  ference = _fer;
  radius = _fer / (2.0 * PI);   // C:(2π)
  area = PI * radius * radius;  // πr^2
}

void Circle::setArea(double _area) {
  if (_area < 0.0) {
    std::invalid_argument("area cannot be negative");
  }
  area = _area;
  radius = std::sqrt(_area / PI);  // √(S:π)
  ference = 2.0 * PI * radius;     // 2πr
}

double Circle::getRadius() {
  return radius;
}

double Circle::getFerence() {
  return ference;
}

double Circle::getArea() {
  return area;
}
