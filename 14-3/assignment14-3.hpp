#ifndef ASSIGNMENT143_H
#define ASSIGNMENT143_H

#include <iostream>

using namespace std;

class Square{
  private:
    int width;
  public:
    Square(){
      width = 100;
    };

    void setWidth(int w){
      width = w;
    };

    int getWidth(){
      return width;
    };

    int getArea(){
      return width * 4;
    };

    friend class Rectangle;
};

class Rectangle{
  private:
    double width;
    double height;
  public:
    Rectangle(){
      width = 16;
      height = 54;
    };
    
    void setWidth(double w){
      width = w;
    };

    void setHeight(double h){
      height = h;
    };

    double getHeight()const {
      return height;
    };

    double getWidth() const{
      return width;
    };
    
    double getArea()const {
      return height * width;
    };

    Rectangle makeRectanglewithSquare(Square s){
      Rectangle newRect;

      newRect.setWidth(s.getWidth());
      
      return newRect; 
    }
};

#endif