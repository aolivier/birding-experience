//
//  FrameManager.cpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#include "FrameManager.h"
#include "ofGraphics.h"


FrameManager::FrameManager(){
  
}

void FrameManager::updateFrameSelection(float x, float y){
  for (auto &f : _frameList){
    if (f->containsPoint(x, y)){
      f->setIsSelected(true);
    }else{
      f->setIsSelected(false);
    }
  }
}


void FrameManager::addFrame(ofVec2f position, ofVec2f size){
  
  auto frame = make_shared<FrameObject>(position, size);
  
  _frameList.push_back(frame);
}

void FrameManager::render(){
  
  if (_drawFrames){
    for (auto &f : _frameList){
    
      // TODO: Placeholder for now
      f->render();
    }
  }
}
