//
//  RandomWalker.cpp
//  creativeVisualization2017
//
//  Created by Hayato on 2017/07/08.
//
//

#include "RandomWalker.h"

RandomWalker::RandomWalker(){
    // Set the initial position to random
    position.x = ofRandom(ofGetWidth());
    position.y = ofRandom(ofGetHeight());
    speed = 2;
}

void RandomWalker::draw() {
    for (int i = 0; i < 10; i++){
        position.x += ofRandom(-1, 1) * speed;
        position.y += ofRandom(-1, 1) * speed;
        
        if (position.x < 0){
            position.x = ofGetWidth();
        } else if (position.x > ofGetWidth()){
            position.x = 0;
        }
        if (position.y < 0){
            position.y = ofGetHeight();
        } else if (position.y > ofGetHeight()){
            position.y = 0 ;
        }
        
        ofDrawCircle(position.x, position.y, 2);
    }
}
