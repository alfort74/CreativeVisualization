#include "guiCircle.h"

//--------------------------------------------------------------
void guiCircle::setup(){
    ofSetFrameRate(60);
    ofBackground(127);
    ofSetCircleResolution(32);
    
    // Set initial, min, and max value of color
    ofColor initColor = ofColor(0, 127, 255, 255);
    ofColor minColor = ofColor(0, 0, 0, 0);
    ofColor maxColor = ofColor(255, 255, 255, 255);
    
    // Set initial, min, and max value of position
    ofVec2f initPos = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    ofVec2f minPos = ofVec2f(0, 0);
    ofVec2f maxPos = ofVec2f(ofGetWidth(), ofGetHeight());
    
    gui.setup();
    gui.add(radius.setup("radius", 200, 0, 400));
    gui.add(color.setup("color", initColor, minColor, maxColor));
    gui.add(position.setup("position", initPos, minPos, maxPos));
}

//--------------------------------------------------------------
void guiCircle::update(){

}

//--------------------------------------------------------------
void guiCircle::draw(){
    ofSetColor(color);
    ofDrawCircle(ofVec2f(position), radius);
    
    gui.draw();
}

//--------------------------------------------------------------
void guiCircle::keyPressed(int key){

}

//--------------------------------------------------------------
void guiCircle::keyReleased(int key){

}

//--------------------------------------------------------------
void guiCircle::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void guiCircle::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void guiCircle::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void guiCircle::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void guiCircle::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void guiCircle::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void guiCircle::windowResized(int w, int h){

}

//--------------------------------------------------------------
void guiCircle::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void guiCircle::dragEvent(ofDragInfo dragInfo){ 

}
