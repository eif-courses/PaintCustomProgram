//
// Created by Marius on 11/3/2021.
//

#include "Eraser.h"

Eraser::Eraser(const string &str) : Tool(str) {}

void Eraser::erase() {
  cout << "ERASING.." << endl;
}
