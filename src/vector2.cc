#include "../include/vector2.h"

using ngin28::two_d::Vector2;

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float __x, float __y) : x(__x), y(__y) {}
Vector2::Vector2(std::initializer_list<float> vals) {
  x = *(vals.begin());
  y = *(vals.begin() + 1);
}
Vector2::Vector2(const Vector2 &src) {
  x = src.x;
  y = src.y;
}

Vector2 Vector2::operator+(const Vector2 &o) const {
  return Vector2{x + o.x, y + o.y};
}
Vector2 Vector2::operator-(const Vector2 &o) const {
  return Vector2{x - o.x, y - o.y};
}
float Vector2::dot(const Vector2 &o) const {
  return x * o.x + y * o.y;
}

Vector2 Vector2::cross(const Vector2 &o) const {}

Vector2 &Vector2::operator=(const Vector2 &o) {
  x = o.x;
  y = o.y;
  return *this;
};

bool Vector2::operator==(const Vector2 &o) const {
  return x == o.x && y == o.y;
}
Vector2 Vector2::norm() const {
  auto l = len();
  return Vector2{x / l, y / l};
}
float Vector2::len() const {
  return sqrtf(x * x + y * y);
}
