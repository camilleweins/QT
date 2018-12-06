//
//  quadtree.h
//  visualTree
//
//  Created by Camille Weins on 12/5/18.
//

#include "ofApp.h"
#include "rectangle.h"

#include <vector>

#ifndef quadtree_h
#define quadtree_h

class Qtree {
public:
    Rectangle boundary;
    Rectangle range;
    
    Rectangle ne;
    Rectangle nw;
    Rectangle se;
    Rectangle sw;
    //ofRectangle boundary;

//    Qtree(ofRectangle, float);
    Qtree(boundary, float);

    Qtree();
    //QuadTree(QuadTree *);
    void subdivide();
    void insert(ofPoint);
    void query(range, vector<int> *found);
    void show(qtree);

    Qtree northeast; //sections of quadtree
    Qtree northwest;
    Qtree southeast;
    Qtree southwest;
    
    Qtree qtree;
    //Rectangle rect;
private:
    ///vector<ofPoint> points;
    //ofRectangle boundary;
    float capacity;
    bool divided;
    vector<ofPoint> &points;
    vector<int> *found;
    float x;
    float y;
    float w;
    float h;
    
};
 
#endif /* quadtree_h */
