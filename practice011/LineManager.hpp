//1本のラインの設定

#include <stdio.h>
#include "ofMain.h"

class LineManager : public ofBaseApp{

    
public:
    
    LineManager(float x, float angle);
    void setup();
    void update();
    void draw();
    
private:
    float linePositionX;
    float angleA, angleB;
    float increment;
    float angleOffser;
    float curveWidth, curveThickness;
    float x1, x2;
};
