#include "generativeArt.h"

//--------------------------------------------------------------
void generativeArt::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void generativeArt::update(){

}

//--------------------------------------------------------------
void generativeArt::draw(){
    
    // Fade out
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    ofSetColor(0, 0, 0, 3);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    // Draw randomwalker
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetColor(255, 255, 255, 10);
    for (int i = 0; i < 100; i++){
        walker[i].draw();
    }
}

//--------------------------------------------------------------
void generativeArt::keyPressed(int key){

}

//--------------------------------------------------------------
void generativeArt::keyReleased(int key){

}

//--------------------------------------------------------------
void generativeArt::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void generativeArt::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void generativeArt::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void generativeArt::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void generativeArt::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void generativeArt::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void generativeArt::windowResized(int w, int h){

}

//--------------------------------------------------------------
void generativeArt::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void generativeArt::dragEvent(ofDragInfo dragInfo){ 

}
