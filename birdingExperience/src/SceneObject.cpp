//
//  SceneObject.cpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#include "SceneObject.h"

SceneObject::SceneObject() : _position(ofVec3f(0,0,0)), _scale( ofVec3f(1.0,1.0,1.0)){
  
}

void SceneObject::render(){
  
}

void SceneObject::setPosition(float x, float y, float z){
  _position.set(x, y, z);
}

void SceneObject::setScale(float x, float y, float z){
  _scale.set(x,y,z);
}
