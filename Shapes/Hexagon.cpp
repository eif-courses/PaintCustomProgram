//
// Created by Marius on 11/10/2021.
//

#include "Hexagon.h"

void Hexagon::draw() {
  cout << "Hexagon is drawing................." << endl;
}

Hexagon::Hexagon(const string &name, const string &color) : Shape(name, color) {}
