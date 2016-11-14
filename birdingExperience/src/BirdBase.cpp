//
//  BirdBase.cpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#include "BirdBase.h"
#include "ofLog.h"

BirdBase::BirdBase(){
  ofLog(OF_LOG_NOTICE, "Calling bird base constructor");
}

void BirdBase::render(){
  
  ofPushMatrix();
  
  ofTranslate(_position.x, _position.y);
  ofScale(_scale.x, _scale.y);
  
  ofSetColor(255, 0, 0);
  
  float r = 200;
  ofDrawCircle(-r/2.0f, -r/2.0f, r);
  // Something something
  
  ofPopMatrix();
  
}
