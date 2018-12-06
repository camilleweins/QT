//
//  quadtree.cpp
//  visualTree
//
//  Created by Camille Weins on 12/5/18.
//

#include <stdio.h>
#include "rectangle.h"
#include <vector>
#include "quadtree.h"

Qtree::Qtree() {
    qtree.boundary.x = 300;
    qtree.boundary.y = 300;
    qtree.boundary.width = 300;
    qtree.boundary.height = 300;
    
    capacity = 4;
    divided = false;
    
//    ofSetColor(255,255,255);
//    ofNoFill();
//    ofDrawRectangle(boundary);
}

void Qtree::subdivide() {
    x = qtree.boundary.x;
    y = qtree.boundary.y;
    w = qtree.boundary.width / 2;
    h = qtree.boundary.height / 2;
    
    qtree.ne = ne(x + qtree.boundary.width / 2, y - qtree.boundary.height / 2, qtree.boundary.width/2, qtree.boundary.height/2); //make quadrants of the quad tree
    northeast(ne, capacity);
    
    qtree.nw = nw(x - qtree.boundary.width / 2, y - qtree.boundary.height / 2, qtree.boundary.width / 2, qtree.boundary.height / 2);
    northwest(nw, capacity);
    
    qtree.se = se(x + qtree.boundary.width / 2, y + qtree.boundary.height / 2, qtree.boundary.width / 2, qtree.boundary.height / 2);
    southeast(se, capacity);
    
    qtree.sw = sw(x - qtree.boundary.width / 2, y + qtree.boundary.height / 2, qtree.boundary.width / 2, qtree.boundary.height / 2);
    southwest(sw, capacity);
    
    divided = true;
}

void Qtree::insert(ofPoint point) {
    if (!qtree.boundary->contains(point)) {
        return;
    }
    
    if (points.length() < capacity) { //if the quadrant is over capacity, subdivide it
        points.push_back(point);
    }
    else {
        if (!divided) { //flag to tell if quadtree has been divided
            subdivide();
        }
        northeast->insert(point);
        northwest->insert(point);
        southeast->insert(point);
        southeast->insert(point);
    }
}

void Qtree::query(qtree.range, int *found) {
    if (found.length() = 0) {
        found;
    }
    
    if (!qtree.range.intersects(qtree.boundary)) {
        return found;
    }
    
    for (int p = 0; p < points.length(); p++) {
        if (qtree.range.contains(p)) {
            found.push_back(p);
        }
    }
    if (divided) {
        northwest->query(qtree.range, found);
        northeast->query(qtree.range, found);
        southwest->query(qtree.range, found);
        southeast->query(qtree.range, found);
    }
    
    return found;
}

void Qtree::show(qtree) {
    function show(qtree) {
        ofSetColor(255,255,255);
        ofNoFill();
        ofRectangleMode(CENTER);
        ofRectangle rect(qtree.boundary.x, qtree.boundary.y, qtree.boundary.w * 2, qtree.boundary.h * 2);
        
        ofDrawRectangle(rect);
        
        for (int p = 0; p < points.length(); p++) {
            //strokeWeight(2);
            point(p.x, p.y);
        }
        
        if (qtree->divided) {
            show(qtree.northeast);
            show(qtree.northwest);
            show(qtree.southeast);
            show(qtree.southwest);
        }
    }
}
