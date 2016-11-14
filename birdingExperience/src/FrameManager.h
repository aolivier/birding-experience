//
//  FrameManager.hpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#pragma once

#include "FrameObject.h"

// TODO: Decide what to do about collision detection

class FrameManager {
  
public:
  
  FrameManager();
  
  void updateFrameSelection(float x, float y);
  
  void addFrame(ofVec2f position, ofVec2f size);
  void render();
  
private:
    
  vector< shared_ptr<FrameObject> > _frameList;
  
  bool _drawFrames = true;
  
};
