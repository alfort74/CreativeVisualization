#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    radius = 5;
    ofEnableAlphaBlending();
    ofSetCircleResolution(50);
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < location.size(); i++){
        location[i] += velocity[i];
    }

    if (location.size() < MAX_NUM) {
        location.push_back(ofVec2f(ofGetWidth()/2, ofGetHeight()/2));
        // location.push_back(ofVec2f(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight())));
        velocity.push_back(ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5)));
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < location.size(); i++) {
        // Draw a circle at each location
        ofSetColor(0, 127, 255, 127);
        ofDrawCircle(location[i], radius);
        // Bound at the edge of window
        if (location[i].x < radius || location[i].x > ofGetWidth() - radius) {
            velocity[i].x *= -1;    // Reverse the vertical velocity (Bound)
        }
        if (location[i].y < radius || location[i].y > ofGetHeight() - radius) {
            velocity[i].y *= -1;    // Reverse the horizontal velocity (Bound)
        }
    }
    // Indicate the number of particles
    ofSetColor(255);
    ofDrawBitmapString("num = " + ofToString(location.size()), 20, 20);
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
    if (location.size() < MAX_NUM) {
        location.push_back(ofVec2f(x, y));
//        location.push_back(ofVec2f(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight())));
        velocity.push_back(ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5)));
    }

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
