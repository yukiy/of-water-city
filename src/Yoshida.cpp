//
//  Yoshida.cpp
//  of-video-texture-sample
//
//  Created by Yuki Yoshida on 2023/12/23.
//

#include "Yoshida.hpp"

ofVideoPlayer vid;
ofImage img;
ofTexture vidTex;
ofPlanePrimitive plane;
ofEasyCam easyCam;

float rotationX = 0.0f;
float rotationY = 0.0f;
float rotationZ = 0.0f;
bool isVideoInitialized;

//--------------------------------------------------------------
void Yoshida::setup(){
    isVideoInitialized = false;
    //    vid.load("video.mp4");
    //    vid.setAnchorPercent(0.5, 0.5);
    //    vid.setVolume(0);
    //    vid.setLoopState(OF_LOOP_NORMAL);
    //    vid.play();
    
    img.load("kanto-output-20.jpg");
    
    /** camera setup */
    easyCam.setPosition(0, 0, 300);
    easyCam.lookAt(ofVec3f(0, 0, 0));
}

//--------------------------------------------------------------
void Yoshida::update(){
    
//    vid.update();
//
//    if (!vid.isLoaded()) return;
//
//    if (!isVideoInitialized) {
//        vidTex.allocate(vid.getWidth(), vid.getHeight(), GL_RGBA);
//        vidTex.loadData(vid.getPixels());
//        int planeWidth = ofGetWidth()/2;
//        int planeHeight = ofGetHeight()/2;
//        plane.set(planeWidth, planeHeight, 2, 2);
//        plane.mapTexCoordsFromTexture(vid.getTexture());
//        isVideoInitialized = true;
//    }

    
    int planeWidth = ofGetWidth()/2;
    int planeHeight = ofGetHeight()/2;
    plane.set(planeWidth, planeHeight, 2, 2);
    plane.mapTexCoordsFromTexture(img.getTexture());

    
//    float time = ofGetElapsedTimef();
//    float rotationSpeed = 30.0f;
//    rotationX = time * rotationSpeed;
//    rotationY = time * rotationSpeed;
//    rotationZ = time * rotationSpeed;
}

//--------------------------------------------------------------
void Yoshida::draw(){
    ofBackground(0);

    easyCam.begin();

//    ofPushMatrix();
//    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);
//    ofRotateX(rotationX);
//    ofRotateY(rotationY);
//    ofRotateZ(rotationZ);

//    plane.drawWireframe();

//  vid.getTexture().bind();
//    plane.draw();
//    vid.getTexture().unbind();

    img.bind();
    plane.draw();
    img.unbind();

//    ofPopMatrix();

    easyCam.end();
}
