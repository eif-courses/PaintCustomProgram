//
// Created by Marius on 11/10/2021.
//

#ifndef PAINTCUSTOMPROGRAM_SHAPE_H
#define PAINTCUSTOMPROGRAM_SHAPE_H

#include <iostream>
#include "Action.h"

using namespace std;

class Shape : public Action{
  string name;
  string color;
public:
  Shape(const string &name, const string &color);
  const string &GetName() const;
  const string &GetColor() const;
};


#endif //PAINTCUSTOMPROGRAM_SHAPE_H
