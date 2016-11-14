#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  _birdFactory = make_unique<BirdFactory>();
  _frameManager = make_unique<FrameManager>();
  
  
  // Add some test frames
  _frameManager->addFrame(ofVec2f(200,200), ofVec2f(300,300));
  _frameManager->addFrame(ofVec2f(800,300), ofVec2f(100,100));
  
  
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

  _frameManager->render();
  _birdFactory->render();
  
  // draw mouse
  ofPushMatrix();
  ofSetColor(0, 0, 255);
  ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 10);
  ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  
  if (key == OF_KEY_DOWN){
    _birdFactory->addBird();
  }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  _frameManager->updateFrameSelection(x,y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  ofLog(OF_LOG_NOTICE, "Mouse position " + ofToString(x) + " " + ofToString(y));
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
