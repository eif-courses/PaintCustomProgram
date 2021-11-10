//
// Created by Marius on 11/10/2021.
//

#include "Pentagon.h"

Pentagon::Pentagon(const string &name, const string &color) : Shape(name, color) {}

void Pentagon::draw() {
  cout << "Pentagon is drawing....";
}
