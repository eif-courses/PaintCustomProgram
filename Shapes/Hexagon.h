//
// Created by Marius on 11/10/2021.
//

#ifndef PAINTCUSTOMPROGRAM_HEXAGON_H
#define PAINTCUSTOMPROGRAM_HEXAGON_H


#include "Shape.h"

class Hexagon : public Shape{
public:
  Hexagon(const string &name, const string &color);
  void draw() override;
};


#endif //PAINTCUSTOMPROGRAM_HEXAGON_H
