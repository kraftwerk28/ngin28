#ifndef __NGIN28__
#define __NGIN28__
namespace ngin28 {
namespace two_d {

float deg2grad(float deg);
float grad2deg(float grad);

class Vector2 {
 private:
  float x_ = 0, y_ = 0;
  /* data */
 public:
  Vector2();
  Vector2(float x, float y);
  Vector2(const Vector2 &src);
  ~Vector2();
  float x();
  float y();
  Vector2 operator+(const Vector2 &o) const;
  Vector2 operator-(const Vector2 &o);
  float operator*(const Vector2 &o);
  Vector2 &operator=(const Vector2 &o);
  Vector2 norm();
  float len();
};

class Movable {
 public:
  Movable();
 protected:
  Vector2 center;
  float rotation;
  Vector2 lin_speed;
  float rot_speed;
  Vector2 lin_accel;
  float rot_accel;
};

class Rect : public Movable {
 private:
 public:
  Rect();
};
}  // namespace two_d
}  // namespace ngin28
#endif
