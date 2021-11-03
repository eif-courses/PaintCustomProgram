//
// Created by Marius on 11/3/2021.
//

#ifndef PAINTCUSTOMPROGRAM_PAINT_H
#define PAINTCUSTOMPROGRAM_PAINT_H
#include "Tool.h"
#include <vector>
using namespace std;

class Paint {
private:
  vector<Tool> tools;
public:
  vector<Tool> getTools();
  void addTool(Tool tool);
};


#endif //PAINTCUSTOMPROGRAM_PAINT_H
