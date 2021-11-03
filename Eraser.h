//
// Created by Marius on 11/3/2021.
//

#ifndef PAINTCUSTOMPROGRAM_ERASER_H
#define PAINTCUSTOMPROGRAM_ERASER_H
#include "Tool.h"

class Eraser : public Tool{
public:
  explicit Eraser(const string &str);
  void erase();
};


#endif //PAINTCUSTOMPROGRAM_ERASER_H
