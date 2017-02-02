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
    
    if (xpos > ofGetWidth()-50){
        xpos = ofGetWidth()-50;
        xsteps = -xsteps;
        rad = ofRandom(5, 100);
        
    } else if (xpos < 50){
        xpos = 50;
        xsteps = -xsteps;
        rad = ofRandom(5, 100);
        
    } else if (ypos > ofGetHeight()-50){
        ypos = ofGetHeight()-50;
        ysteps = -ysteps;
        rad = ofRandom(5, 100);
        
    } else if (ypos < 50){
        ypos = 50;
        ysteps = -ysteps;
        rad = ofRandom(5, 100);
        
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
