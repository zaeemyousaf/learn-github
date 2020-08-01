#include <iostream>
using namespace std;
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
 private:
  char* shape_name;
 public:
  Shape();
  Shape(const char* _name);
  void set_shape_name(char* _name);
  char* get_shape_name();
  virtual float get_area()=0;
  virtual float get_perimeter()=0;
  virtual ~Shape();
};

class Rectangle: public Shape{
 private:
  float* length;
  float*  width;
 public:
   //Rectangle();
  Rectangle(float _length, float _width);
  Rectangle(Rectangle &rectangle);
  float get_area();
  float get_perimeter();
  ~Rectangle();
  };
//====================
class Circle: public Shape{
 private:
  float* radius;
 public:
  Circle();
  Circle(float _radius);
  Circle(Circle &circle);
  void set_radius(float _radius);
  float get_radius();
  float get_area();
  float get_perimeter();
  virtual ~Circle();
};
#endif
