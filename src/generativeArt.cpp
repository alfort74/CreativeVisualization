#include "generativeArt.h"


void drawPerlinNoise(){
    float value;
    float scaleX = 0.007;		//1.0 / scaleX is coherence in x
    float scaleY = 0.008;		//1.0 / scaleY is coherence in y
    float posX0 = 593.2;
    float posY0 = 43.7;
    
    for (int y = 0; y < ofGetHeight(); y++){
        for (int x = 0; x < ofGetWidth(); x++){
//            value =ofNoise(x, y);
            value = ofNoise(x*scaleX+posX0, y*scaleY+posY0);
            ofSetColor(255*value, 255*value, 255*value);
            ofDrawRectangle(x, y, 1, 1);
        }
    }
}

void walkAndFade(RandomWalker walker[]){
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
void generativeArt::setup(){
//    ofBackground(0, 0, 0);
//    ofSetFrameRate(30);
//    
//    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void generativeArt::update(){

}

//--------------------------------------------------------------
void generativeArt::draw(){
//    walkAndFade(walker);
    drawPerlinNoise();

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
