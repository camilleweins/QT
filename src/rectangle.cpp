//
//  rectangle.cpp
//  visualTree
//
//  Created by Camille Weins on 12/6/18.
//
#include "rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
    rectangle.x = 300;
    rectangle.y = 300;
    rectangle.width = 300;
    rectangle.height = 300;
    
    range.x = ofGetMouseX();
    range.y = ofGetMouseY();
    range.width = 25;
    range.height = 25;
    
    //TODO: might need to make points class
    
}

bool Rectangle::contains(ofPoint point) {
    return(point.x > rectangle.x - rectangle.width &&
           point.x < rectangle.x + rectangle.width &&
           point.y > rectangle.y - rectangle.height &&
           point.y < rectangle.y + rectangle.height);
}

bool Rectangle::intersects(ofRectangle range) {
    return !(range.x - range.width > rectangle.x + rectangle.width ||
             range.x + range.width < rectangle.x - rectangle.width ||
             range.y - range.height > rectangle.y + rectangle.height ||
             range.y + range.height < rectangle.y - rectangle.height);
}
