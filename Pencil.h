//
// Created by Marius on 11/3/2021.
//

#ifndef PAINTCUSTOMPROGRAM_PENCIL_H
#define PAINTCUSTOMPROGRAM_PENCIL_H


#include "Tool.h"

class Pencil : public Tool {
public:
  explicit Pencil(const string &str);
  void draw();
};


#endif //PAINTCUSTOMPROGRAM_PENCIL_H
