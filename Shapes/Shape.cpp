//
// Created by Marius on 11/10/2021.
//

#include "Shape.h"

Shape::Shape(const string &name, const string &color) : name(name), color(color) {}

const string &Shape::GetName() const {
  return name;
}

const string &Shape::GetColor() const {
  return color;
}
