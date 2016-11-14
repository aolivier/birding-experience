//
//  FrameObject.cpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#include "FrameObject.h"
#include "ofGraphics.h"

FrameObject::FrameObject(ofVec2f position, ofVec2f size) : _position(position), _size(size) {
}

void FrameObject::render(){
  ofPushMatrix();
  
  if (_isSelected){
    ofSetColor(255.0f, 0, 0);
  }else{
    ofSetColor(0, 0, 0);
  }
  ofDrawRectangle(getPosition().x, getPosition().y, getSize().x, getSize().y);
  ofPopMatrix();
}

bool FrameObject::containsPoint(float x, float y){
  
  if ( x < _position.x){
    return false;
  }else if (x > (_position.x + _size.x)){
    return false;
  }else if ( y < _position.y){
    return false;
  }else if (y > (_position.y + _size.y)){
    return false;
  }
  
  return true;
}
