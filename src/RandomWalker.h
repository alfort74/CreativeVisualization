//
//  RandomWalker.h
//  creativeVisualization2017
//
//  Created by Hayato on 2017/07/08.
//
//

#pragma once

#include "ofMain.h"

class RandomWalker {
    
public:
    RandomWalker();
    void draw();
    
    ofVec2f position;
    int speed;
};
