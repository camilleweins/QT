//
//  Qtree.h
//  qtreeTest
//
//  Created by Camille Weins on 11/17/18.
//
#include "ofApp.h"

#ifndef Qtree_h
#define Qtree_h

class qPoint {
public:
    qPoint(int x, int y, float userData);
    
private:
    
    
};

class Rectangle {
public:
    // Parameterized Constructor
    Rectangle();
    
    void contains(float);
    void intersects(int);
    
private:
    int x;
    int y;
    int w;
    int h;
    
};


class QuadTree {
public:
    QuadTree(float, float);
    
    void subdivide();
    void insert();
    void query();
    
private:
    float points;
    bool divided;
    
};


#endif /* Qtree_h */
