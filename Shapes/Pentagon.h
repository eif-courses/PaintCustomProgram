//
// Created by Marius on 11/10/2021.
//

#ifndef PAINTCUSTOMPROGRAM_PENTAGON_H
#define PAINTCUSTOMPROGRAM_PENTAGON_H


#include "Shape.h"

class Pentagon : public Shape{
public:
  Pentagon(const string &name, const string &color);

  void draw() override;
};


#endif //PAINTCUSTOMPROGRAM_PENTAGON_H
