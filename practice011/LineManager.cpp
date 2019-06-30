//
//  LineManager.cpp
//  practice10
//
//  Created by SerinaAkashi on 2018/06/08.
//

#include "LineManager.hpp"

LineManager::LineManager(float x, float angle){
    
    setup();
    
    //ラインを描画するx座標
    linePositionX = x;
    
    angleA = angle;
    angleB = angleA + angleOffser;
    
    
};

void LineManager::setup(){
    
    curveWidth = 20.0;
    curveThickness = 10.0;
    angleOffser = 0.4;
    increment = 0.1;
    
};

void LineManager::update(){
    
    angleA += increment;
    angleB = angleA + angleOffser;
    
    //11_02↓の動きにするには以下のコメントを外す
    //https://youtu.be/WND_pkea9Fo
    
//    if(angleA >= 360){
//        angleA = 0;
//    }

    
};

void LineManager::draw(){
    
    glEnableClientState(GL_VERTEX_ARRAY );
    glBegin(GL_QUAD_STRIP);

    
    //ラインの描画設定
    //1つのy座標にx座標を2点ずつ指定し、y座標ごとに繋げていく
    for(int y=0; y<=ofGetWindowHeight(); y+=10){
        
        x1 = sin(angleA+y/100)*curveWidth + linePositionX;
        x2 = sin(angleB+y/100)*curveWidth + linePositionX;
        
        //2つの頂点を描画しつなげる
        glVertex2f(x1, y);
        glVertex2f(x2 +curveThickness, y);
        
    }
    
    glEnd();
    
};
