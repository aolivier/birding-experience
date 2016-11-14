//
//  BirdFactory.cpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#include "BirdFactory.h"
#include "ofLog.h"

BirdFactory::BirdFactory(){

  ofLog(OF_LOG_NOTICE, "Creating BirdFactory class");
}

// Function adds bird
void BirdFactory::addBird(){
  
  auto bird = make_shared<BirdBase>();
  
  _birdList.push_back(bird);
  bird->setPosition(ofRandom(0,ofGetScreenWidth()), ofRandom(0,ofGetScreenHeight()), 0);
  
}

void BirdFactory::render(){
  
  for (auto &bird : _birdList){
    bird->render();
  }
}
