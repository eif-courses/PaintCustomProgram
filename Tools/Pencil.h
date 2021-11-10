//
// Created by Marius on 11/3/2021.
//

#ifndef PAINTCUSTOMPROGRAM_PENCIL_H
#define PAINTCUSTOMPROGRAM_PENCIL_H


#include "Tool.h"
#include "../Shapes/Action.h"

class Pencil : public Tool, public Action{
public:
  explicit Pencil(const string &str);
  void draw() override;
};


#endif //PAINTCUSTOMPROGRAM_PENCIL_H
