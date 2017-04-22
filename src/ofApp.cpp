#include "ofApp.h"
#define NUM_IMG 8
#define SCSHOTS_PER_SEC 2

//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen();
    int i = 1;
    string fileName = "0001.jpg";
    while(ofFile::doesFileExist(fileName)){
        ofImage aImage;
        aImage.load(fileName);
        image.push_back(aImage);
        i++;
        char char1[32];
        sprintf(char1, "%04d.jpg", i);
        fileName = ofToString(char1);
    }
    currentFrame = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    if(ofGetFrameNum()%(60/SCSHOTS_PER_SEC)==0) currentFrame++;
    if(currentFrame >= NUM_IMG) currentFrame = 0;

}

//--------------------------------------------------------------
void ofApp::draw(){
    image[currentFrame].draw(0,0,ofGetWidth(),ofGetHeight());

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
