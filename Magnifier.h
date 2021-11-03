//
// Created by Marius on 11/3/2021.
//

#ifndef PAINTCUSTOMPROGRAM_MAGNIFIER_H
#define PAINTCUSTOMPROGRAM_MAGNIFIER_H


#include "Tool.h"

class Magnifier : public Tool{
private:
  double in = 0.0, out = 0.0;
public:
  explicit Magnifier(const string &str);
  void zoomIn();
  void zoomOut();

};


#endif //PAINTCUSTOMPROGRAM_MAGNIFIER_H
