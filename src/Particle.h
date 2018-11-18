//
//  Particle.h
//  qtreeTest
//
//  Created by Camille Weins on 11/16/18.
//
#include "ofApp.h"

#ifndef Particle_h
#define Particle_h


class Particle {
    
public:
    Particle();
    void move();
    void render();
    
private:
    float x;
    float y;
    bool highlight;
    float r;
    
    
};


#endif /* Particle_h */
