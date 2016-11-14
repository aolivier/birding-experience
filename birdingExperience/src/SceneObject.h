//
//  SceneObject.hpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#pragma once

//#include "ofConstants.h"
//#include "ofGraphics.h"
#include "ofMath.h"
//#include "ofShader.h"

class SceneObject {
  
public:
  
  SceneObject();
//  ~SceneObject();
  void render();
  
  void setPosition(float x, float y, float z);
  void setScale(float x, float y, float z);
  
protected:
  
  ofVec3f _position;
  ofVec3f _scale;
  
};
