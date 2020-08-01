#include <iostream>
#include "shape.h"
using namespace std;


template <class Type1, class Type2>
void copy(Type1 *&var1, Type2 *&var2){
  // copy var2 into var1
  if(var2 == 0) {
  var1=0;
  }
  else{
  int length=0;
  while(var2[length++]);
  var1 = new char[length];
  for(int i=0; i<=length; i++) var1[i]=var2[i];
  }

}


Shape::Shape(){
  shape_name = NULL;
}

Shape::Shape(const char* _name){
  copy(shape_name,_name);
}
char* Shape::get_shape_name(){
  return shape_name;
}
Shape::~Shape(){
  if(shape_name != NULL) delete shape_name;
  cout << "~shape called\n";
}
//=============
Rectangle::Rectangle(float _length,  float _width):
  Shape("Rectangle")
{
  length = new float(_length);
  width = new float(_width);
}
//---------------
float Rectangle::get_area(){
  return (*length) * (*width);
}
float Rectangle::get_perimeter(){
  return 2*(*length) + (*width);
}
Rectangle::~Rectangle(){
  if(length != NULL) delete length;
  if(width != NULL) delete width;
  cout <<  "~Rectangle called\n";
}
//=============
Circle::Circle():
  Shape("Circle")
{}
//-------------
Circle::Circle(float _radius):
  Shape("Circle")
{
  radius = new float(_radius);
}

Circle::Circle(Circle &_circle):
  Shape("Circle")
{
  this->radius = _circle.radius;
}
//------------
float Circle::get_area(){
  return 3.142 * (*radius) * (*radius);
}
float Circle::get_perimeter(){
  return 2*3.142* (*radius);
}

Circle::~Circle(){
  if(radius !=NULL) delete radius;
  cout << "~Circle called\n";
}
