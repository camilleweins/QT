//
//  rectangle.h
//  visualTree
//
//  Created by Camille Weins on 12/6/18.
//
#include "ofApp.h"
#include "quadtree"

#ifndef rectangle_h
#define rectangle_h

class Rectangle {
public:
    ofRectangle rectangle;
    
    ofRectangle range;
    
    Rectangle();
//    ofPoint point;
    bool contains(ofPoint);
    bool intersects(ofRectangle);
    
private:

};


#endif /* rectangle_h */
