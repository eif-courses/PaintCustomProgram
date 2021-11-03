#include <iostream>
#include "Paint.h"
#include "Eraser.h"
#include "Pencil.h"
#include "Magnifier.h"
#include "Text.h"

int main() {
  Paint paint;

  Eraser eraser("Eraser");
  Pencil pencil("Pencil");
  Magnifier magnifier("Magnifier");
  Text text("Text");

  text.removeTool();

  pencil.removeTool();
  pencil.draw();

  eraser.erase();
  pencil.draw();
  magnifier.zoomIn(); //
  magnifier.zoomOut();

  paint.addTool(pencil);
  paint.addTool(eraser);


  for(Tool t: paint.getTools()){
    t.selectTool();
  }


  return 0;
}
