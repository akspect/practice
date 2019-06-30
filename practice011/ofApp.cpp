#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);

    ofSetFrameRate(60);
    ofSetWindowShape(1280, 720);
    ofSetVerticalSync(true);
    
    //ラインを何本引くのか
    for(int i= 0; i<=ofGetWindowWidth(); i+= 20*4){
        lineManagerVector.push_back(LineManager(i, i*20));
    }
    
    time = 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    for(int i=0; i<lineManagerVector.size(); i++){
        
        lineManagerVector[i].update();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofBackground(120,120,100);
    ofBackground(0);
    ofSetColor(0);
    time++;


    
    for(int i=0; i<lineManagerVector.size(); i++){
        
        //カラーの設定
        ofColor color;
        color.setHsb(i*time/10%100, i*2, 250);
        ofSetColor(color);

        //ラインを1本描画する
        lineManagerVector[i].draw();
        
    }
    

    
    
    
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
