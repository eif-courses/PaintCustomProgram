//
// Created by Marius on 11/3/2021.
//

#include "Pencil.h"

Pencil::Pencil(const string &str) : Tool(str) {}

void Pencil::draw() {
  cout << "Pencil is drawing...." << endl;
}
