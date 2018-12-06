#include "ofApp.h"
#include "quadtree.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //boundary = ;
    for (int i = 0; i < 300; i++) {
        int x = glm::gaussRand(ofGetWindowWidth() / 2, ofGetWindowWidth() / 8);
        int y = glm::gaussRand(ofGetWindowHeight() / 2, ofGetWindowHeight() / 8);
        //fill vector with query data?
        ofPoint p(x, y);
        qtree->insert(p);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    &points = qtree->query(qtree.range);
    for (int p = 0; p < &points.length(); p++) {
        ofSetColor(0,255,0);
        ofNoFill();
        //draw the points bright green
        points(p.x, p.y);
    }
    
    show(qtree);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
