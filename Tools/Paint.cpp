//
// Created by Marius on 11/3/2021.
//

//
//#include "Tool.h"
//#include <vector>
//using namespace std;
//
//class Paint {
//private:
//  vector<Tool> tools;
//public:
//  vector<Tool> getTools();
//  void addTool(Tool tool);
//};

#include "Paint.h"


void Paint::addTool(Tool tool) {
  tools.emplace_back(tool);
}

vector<Tool> Paint::getTools() {
  return tools;
}

