//
//  Particle.cpp
//  qtreeTest
//
//  Created by Camille Weins on 11/16/18.
//

#include <stdio.h>
#include "Particle.h"

Particle::Particle() {
    //fields
    x;
    y;
    highlight = false;
    r = 3;
    
}

void Particle::move() {
    x+=ofRandom(-1, 1);
    y+=ofRandom(-1, 1);

}

void Particle::render() {
    if (highlight == false) {
        ofSetColor(255);

    } else {
        ofSetColor(255,0,0);
    }
    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), r);

}
