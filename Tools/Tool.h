//
// Created by Marius on 11/3/2021.
//

#ifndef PAINTCUSTOMPROGRAM_TOOL_H
#define PAINTCUSTOMPROGRAM_TOOL_H
#include <iostream>
using namespace std;

class Tool {
private:
  string name;
public:
  explicit Tool(string str);
  string getName();
  void selectTool();
  void removeTool();
};


#endif //PAINTCUSTOMPROGRAM_TOOL_H
