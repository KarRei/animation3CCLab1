#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    xpos = 50;  // horizontal start position
    xsteps = 5;
    ypos = 100;  // vertical start position
    ysteps = 2;
    rad = 50;
    
    ofBackground(ofColor::black);  // black background
}

//--------------------------------------------------------------
void ofApp::update(){
    
    xpos = xpos + xsteps;
    ypos = ypos + ysteps;
    
    if (xpos > ofGetWidth()-rad){
        rad = ofRandom(5, 100);
        xpos = ofGetWidth()-rad;
        xsteps = -xsteps;
        
    } else if (xpos < rad){
        rad = ofRandom(5, 100);
        xpos = rad;
        xsteps = -xsteps;
        
    } else if (ypos > ofGetHeight()-rad){
        rad = ofRandom(5, 100);
        ypos = ofGetHeight()-rad;
        ysteps = -ysteps;
        
    } else if (ypos < rad){
        rad = ofRandom(5, 100);
        ypos = rad;
        ysteps = -ysteps;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(230, 123, 10);
    ofDrawCircle(xpos, ypos, rad);
    
    ofSetColor(20, 213, 10);
    string info = "position: " + ofToString(xpos,2);
    ofDrawBitmapString(info , 100, 100);
    
    string info2 = "steps: " + ofToString(xsteps,2);
    ofDrawBitmapString(info2 , 100, 120);
    
    string info3 = "frame rate: " + ofToString(ofGetFrameRate(),2);
    ofDrawBitmapString(info3 , 100, 140);
    
    
    
    
}
