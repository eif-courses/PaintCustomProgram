#include <iostream>
#include "Tools/Paint.h"
#include "Tools/Eraser.h"
#include "Tools/Pencil.h"
#include "Tools/Magnifier.h"
#include "Tools/Text.h"
#include "Shapes/Hexagon.h"
#include "Shapes/Pentagon.h"
#include <SFML/Graphics.hpp>

int main() {


  // LINK FOR EXAMPLE CLION SFML LIBRARY
  // COMPILER MOVE TO OTHER PC PLACE
  // OTHER FOLDERS MOVE TO YOUR PROJECT
  // UPDATE CMAKELISTS.TXT file ADD SOME TEXT FROM EXAMPLE
  // https://github.com/eif-courses/SnakeExample
  // https://www.sfml-dev.org/learn.php

  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Application");

  sf::CircleShape circleShape(10);
  circleShape.setFillColor(sf::Color::Red);

  //Game loop
  while (window.isOpen())
  {
    //handle event
    sf::Event event;
    while (window.pollEvent(event))
    {
      if  (event.type == sf::Event::EventType::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)){
        window.close();
      }


      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
      {
        // left key is pressed: move our character
        circleShape.move(10.0f, 0.0f);
      }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        circleShape.move(-10.0f, 0.0f);
      }

      if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
      {
        sf::Vector2i localPosition = sf::Mouse::getPosition(window);
        circleShape.move((float)localPosition.x, (float)localPosition.y);
        // left mouse button is pressed: shoot
      }



    }
    window.clear(sf::Color::Black);
    window.draw(circleShape);
    //Render objects
    window.display();
  }

  Paint paint;

  Eraser eraser("Eraser");
  Pencil pencil("Pencil");
  Magnifier magnifier("Magnifier");
  Text text("Text");

  Hexagon hexagon("Hexagon", "red");
  Pentagon pentagon("Pentagon", "blue");

  Hexagon* hex = new Hexagon("Hex", "blue");


  vector<Action*> actions;


  actions.emplace_back(hex);

  actions.emplace_back(&hexagon);
  actions.emplace_back(&pencil);
  actions.emplace_back(&pentagon);


  for (Action *a: actions) {
    a->draw();
  }

  cout << endl;


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
