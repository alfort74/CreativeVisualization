#include "flightVisualization.h"

//--------------------------------------------------------------
void flightVisualization::setup(){
    ofBackground(0);
    // Display level of logs
    ofSetLogLevel("ofxCsv", OF_LOG_VERBOSE);
    // Load CSV file
    if(csv.load("airports.dat")) {
        // Output all data to log
        for(int i = 0; i < csv.getNumRows(); i++){
//            for(int j = 0; j < csv.getNumCols(); j++){
//                    cout << csv[i][j] << ", ";
//            }
//            cout << endl;
            ofxCsvRow row = csv[i];
            float latitude = row.getFloat(6);
            float longitude = row.getFloat(7);
            
            cout << i << ": latitude = " << latitude << ", longitude = " << longitude << endl;
        }
    }
    
}

//--------------------------------------------------------------
void flightVisualization::update(){

}

//--------------------------------------------------------------
void flightVisualization::draw(){

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
