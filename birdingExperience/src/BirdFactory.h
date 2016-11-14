//
//  BirdFactory.hpp
//  birdingExperience
//
//  Created by Alexandra Olivier on 11/13/16.
//
//

#pragma once

#include "BirdBase.h"

class BirdFactory {
  
public:
  
  BirdFactory();
  
  void addBird();
  void render();
  
private:
  
  vector< shared_ptr<BirdBase> > _birdList;

};
