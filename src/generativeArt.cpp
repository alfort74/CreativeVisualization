#include "generativeArt.h"

//--------------------------------------------------------------
void generativeArt::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    // Stop screen refreshing
    ofSetBackgroundAuto(false);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
}

//--------------------------------------------------------------
void generativeArt::update(){

}

//--------------------------------------------------------------
void generativeArt::draw(){
    ofSetColor(255, 255, 255, 5);
    walker.draw();
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
