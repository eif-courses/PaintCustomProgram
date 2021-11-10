//
// Created by Marius on 11/3/2021.
//

#include "Magnifier.h"

Magnifier::Magnifier(const string &str) : Tool(str) {}

void Magnifier::zoomIn() {
  in += 0.1;
}

void Magnifier::zoomOut() {
  if(in > 0) {
    out -= 0.1;
  }
}