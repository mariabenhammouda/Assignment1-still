#pragma once

#include "ofMain.h"
#include "ofxGui.h"


class ofApp : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();

        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y );
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void mouseEntered(int x, int y);
        void mouseExited(int x, int y);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
   
   
    ofEasyCam mainCam;
    ofSpherePrimitive sphere;
    vector<ofSpherePrimitive> spheres;
    vector<ofSpherePrimitive> sphere0;
    int Maxspherenumber=20;
    //int spaceRange=300;
    ofPolyline myline;
    ofxPanel gui;
    ofImage eye;
    
    ofParameterGroup sliderGroup;
    ofParameterGroup mainGroup;
    ofParameter<int> Thickness;
    ofParameter<int> spaceRange;
    ofParameter<bool> Rbc;
    float linepercent;
  
    



    
};
