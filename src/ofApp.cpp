#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    xpos = 50;  // horizontal start position
    xsteps = 5;
    ypos = 100;  // vertical start position
    ysteps = 2;
    
    ofBackground(ofColor::black);  // black background
}

//--------------------------------------------------------------
void ofApp::update(){
    
    xpos = xpos + xsteps;
    ypos = ypos + ysteps;
    
    if (xpos > ofGetWidth()){
        xpos = ofGetWidth();
        xsteps = -xsteps;
        
    } else if (xpos < 0){
        xpos = 0;
        xsteps = -xsteps;
        
    } else if (ypos > ofGetHeight()){
        ypos = ofGetHeight();
        ysteps = -ysteps;
        
    } else if (ypos < 0){
        ypos = 0;
        ysteps = -ysteps;
        
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(230, 123, 10);
    ofDrawCircle(xpos, ypos, 50);
    
    ofSetColor(20, 213, 10);
    string info = "position: " + ofToString(xpos,2);
    ofDrawBitmapString(info , 100, 100);
    
    string info2 = "steps: " + ofToString(xsteps,2);
    ofDrawBitmapString(info2 , 100, 120);
    
    string info3 = "frame rate: " + ofToString(ofGetFrameRate(),2);
    ofDrawBitmapString(info3 , 100, 140);
    
    
    
    
}