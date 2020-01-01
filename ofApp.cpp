#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    // init variables
    i = 0, col = 1, u0 = ofGetWidth()/2, v0 = ofGetHeight()/2, slx = 8 * 4, sly = 8 * 4;
    x0 = 0.5, y0 = 0.0;
    bgColor = ofGetBackgroundColor();
}

//--------------------------------------------------------------
void ofApp::update(){
    x = y0 - 0.97 * x0 - 3.0 + 4.0 / (1.0 + x0 * x0);
    y = - 0.98 * x0;
    x0 = x;
    y0 = y;
    u = (int)(x0 * slx) + u0;
    v = v0 + (int)(- y0 * sly);
    i++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(bgColor);
    ofFill();
    ofDrawRectangle(0, 0, 200, 15);
    ofSetColor(255, 255, 255);
    ofDrawBitmapString("total frames: " + ofToString(i), 10, 10);
    ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
    ofDrawCircle(u, v, 1.0);
    if (i % 10000 == 0 || (i < 10000 && i % 1000 == 0) || (i < 1000 && i % 100 == 0)) {
        screen.grabScreen(0, 0 , ofGetWidth(), ofGetHeight());
        screen.save("screenshot_" + ofToString(i) + ".png");
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'x') {
        screen.grabScreen(0, 0 , ofGetWidth(), ofGetHeight());
        screen.save("screenshot_" + ofToString(i) + ".png");
    }
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
