#include "flightVisualization.h"

//--------------------------------------------------------------
void flightVisualization::setup(){
    ofBackground(0);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetCircleResolution(3);
    
    // Display level of logs
    ofSetLogLevel("ofxCsv", OF_LOG_VERBOSE);
    
    // Display vertex of meshes as point
    mesh.setMode(OF_PRIMITIVE_POINTS);
    
    // Change the size of points based on distance
    static GLfloat distance[] = {0.0, 0.0, 1.0 };
    glPointParameterfv(GL_POINT_DISTANCE_ATTENUATION, distance);
    glPointSize(1500);
    
    // Load CSV file
    if(csv.load("airports-extended.dat")) {
        // Output all data to log
        for(int i = 0; i < csv.getNumRows(); i++){
            for(int j = 0; j < csv.getNumCols(); j++ ){
                cout << i << ": " << csv[i][j];
            }
            cout << endl;
        }
    }
    
    mesh.clear();
    
    for(int i = 0; i < csv.getNumRows(); i++){
        ofxCsvRow row = csv[i];
        float latitude = row.getFloat(6);
        float longitude = row.getFloat(7);
        
        string type = row.getString(12);
        ofFloatColor color;
        if(type == "airport"){
            color = ofFloatColor(0.2, 0.5, 1.0);
        } else if(type == "station"){
            color = ofFloatColor(1.0, 0.5, 0.2);
        } else if(type == "port"){
            color = ofFloatColor(0.5, 1.0, 0.2);
        } else {
            color = ofFloatColor(0.8);
        }
        
        // Calculate the position on sphere based on latitude and longitude
        ofQuaternion latRot, longRot, spinQuat;
        latRot.makeRotate(row.getFloat(6), 1, 0, 0);
        longRot.makeRotate(row.getFloat(7), 0, 1, 0);
        spinQuat.makeRotate(ofGetFrameNum(), 0, 1, 0);
        
        ofVec3f radius = ofVec3f(0, 0, 300);
        ofVec3f worldPoint = latRot * longRot * spinQuat * radius;
        
        mesh.addVertex(worldPoint);
        mesh.addColor(color);
    }

    
}

//--------------------------------------------------------------
void flightVisualization::update(){

}

//--------------------------------------------------------------
void flightVisualization::draw(){
    ofVec2f airportLoc;
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateY(ofGetFrameNum());
    mesh.draw();
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
