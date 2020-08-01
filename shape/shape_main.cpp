#include <iostream>
#include "shape.h"
using namespace std;

int main(){
  {
  Shape* sptr = new Rectangle(2,3);
   delete sptr;
  }

  cout << "success";
}
