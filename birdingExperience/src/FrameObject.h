//
//  FrameObject.hpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

// TODO: We may want to have non-rectilinear frames
// Stick with rectangles for now

#pragma once

#include "ofMath.h"


class FrameObject {
  
public:
  
  FrameObject(ofVec2f position, ofVec2f size);
  
  ofVec2f getPosition(){ return _position; }
  ofVec2f getSize(){ return _size; }
  
  void render();
  
  bool containsPoint(float x, float y);
  void setIsSelected(bool selected){ _isSelected = selected; }
  
private:
  
  bool _isSelected = false;
  ofVec2f _position, _size;
  
};
