//
//  Rectangle.hpp
//  Chapter 13
//
//  Created by Waylon Wu on 11/30/16.
//  Copyright © 2016 Waylon Wu. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

// Rectangle class declaration.
class Rectangle
{
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

#endif /* Rectangle_h */
