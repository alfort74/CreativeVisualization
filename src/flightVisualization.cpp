#include "flightVisualization.h"

//--------------------------------------------------------------
void flightVisualization::setup(){
    ofBackground(0);
    ofSetCircleResolution(4);
    // Display level of logs
    ofSetLogLevel("ofxCsv", OF_LOG_VERBOSE);
    // Load CSV file
    if(csv.load("airports.dat")) {
        // Output all data to log
        for(int i = 0; i < csv.getNumRows(); i++){
            for(int j = 0; j < csv.getNumCols(); j++ ){
                cout << i << ": " << csv[i][j];
            }
            cout << endl;
        }
    }
    
}

//--------------------------------------------------------------
void flightVisualization::update(){

}

//--------------------------------------------------------------
void flightVisualization::draw(){
    ofSetColor(255, 255, 255);
    ofVec2f airportLoc;
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for(int i = 0; i < csv.getNumRows(); i++){
        ofxCsvRow row = csv[i];
        float latitude = row.getFloat(6);
        float longitude = row.getFloat(7);
        
        airportLoc.x = ofMap(row.getFloat(7), -180, 180, 0, ofGetWidth());
        airportLoc.y =ofMap(row.getFloat(6), 90, -90, 0, ofGetHeight());
        
        string type = row.getString(12);
        if(type == "airport"){
            ofSetColor(63, 127, 255);
        } else if(type == "station"){
            ofSetColor(63, 255, 127);
        } else if(type == "port"){
            ofSetColor(255, 127, 63);
        } else {
            ofSetColor(127);
        }
        
        // Calculate the position on sphere based on latitude and longitude
        ofQuaternion latRot, longRot, spinQuat;
        latRot.makeRotate(row.getFloat(6), 1, 0, 0);
        longRot.makeRotate(row.getFloat(7), 0, 1, 0);
        spinQuat.makeRotate(ofGetFrameNum(), 0, 1, 0);
        
        ofVec3f radius = ofVec3f(0, 0, ofGetHeight()/2.5);
        ofVec3f worldPoint = latRot * longRot * spinQuat * radius;
        
        ofDrawCircle(worldPoint, 1.5);
    }
    ofPopMatrix();
    
    ofSetColor(255);
    ofDrawBitmapStringHighlight("fps = " + ofToString(ofGetFrameRate()), 20, 20);

}

//--------------------------------------------------------------
void flightVisualization::keyPressed(int key){

}

//--------------------------------------------------------------
void flightVisualization::keyReleased(int key){

}

//--------------------------------------------------------------
void flightVisualization::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void flightVisualization::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void flightVisualization::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void flightVisualization::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void flightVisualization::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void flightVisualization::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void flightVisualization::windowResized(int w, int h){

}

//--------------------------------------------------------------
void flightVisualization::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void flightVisualization::dragEvent(ofDragInfo dragInfo){ 

}
