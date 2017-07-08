#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    radius = 40;
    ofEnableAlphaBlending();
    ofSetCircleResolution(50);
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    location = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    velocity = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));
}

//--------------------------------------------------------------
void ofApp::update(){
    location += velocity;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 127, 255, 127);
    ofDrawCircle(location, radius);
    // Bound at the edge of window
    if (location.x < radius || location.x > ofGetWidth() - radius) {
        velocity.x *= -1;
    }
    if (location.y < radius || location.y > ofGetHeight() - radius) {
        velocity.y *= -1;
    }
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
