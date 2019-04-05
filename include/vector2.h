#ifndef __VECTOR2_H__
#define __VECTOR2_H__

#include <initializer_list>
#include <cmath>

namespace ngin28 {
namespace two_d {

float deg2grad(float deg);
float grad2deg(float grad);

class Vector2 {
 public:
  float x, y;

  Vector2();
  Vector2(float __x, float __y);
  Vector2(std::initializer_list<float> vals);
  Vector2(const Vector2 &src);
  ~Vector2();

  Vector2 operator+(const Vector2 &o) const;
  Vector2 operator-(const Vector2 &o) const;
  float dot(const Vector2 &o) const;
  Vector2 cross(const Vector2 &o) const;
  Vector2 &operator=(const Vector2 &o);
  bool operator==(const Vector2 &o) const;
  Vector2 norm() const;
  float len() const;

  void setx(float val);
  void sety(float val);
  void setxy(std::initializer_list<float> vals);
};

}  // namespace two_d
}  // namespace ngin28

#endif
