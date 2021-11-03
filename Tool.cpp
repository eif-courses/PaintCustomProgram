//
// Created by Marius on 11/3/2021.
//

#include "Tool.h"

Tool::Tool(string str) {
  name = str;
}

string Tool::getName() {
  return name;
}

void Tool::selectTool() {
  cout << "You selected: " << name << endl;
}

void Tool::removeTool() {
  cout << "Removing random tool" << endl;
}