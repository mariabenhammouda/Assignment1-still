#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   // ofEnableDepthTest();
    
    sliderGroup.setName("sliders");
    sliderGroup.add(Thickness.set("Thickness", 1, 1, 5));
   
    

    mainGroup.add(sliderGroup);
    gui.setup(mainGroup);
    
    
    ofBackground(255,95,31); // set the window background to orage
    mainCam.setPosition(0, 0, 400); // set initial position for the easyCam 3D viewer
    for (int i=0; i<MaxBoxnumber; i++){
        ofBoxPrimitive newbox;
        newbox.set(50);
        newbox.setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
       
    for(int x=0; x<6; x++){
        newbox.setSideColor(x, ofColor::fromHsb(ofRandom(230,255),255,255));
    }
        boxes.push_back(newbox);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
   boxes[ofRandom(boxes.size())] .setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    mainCam.begin();
    
    myline.draw();
/*    for (int i=0; i<100; i++) {
            ofDrawLine(-spaceRange, 50+(i*10), spaceRange, 75+(i*5));
        }*/
   
 
    for( int x=0; x<boxes.size(); x++){
    boxes[x].draw();
    }
    mainCam.end();
    gui.draw();
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
        if (key=='f'){
            for (int i=0; i<7; i++){
                
                ofSetLineWidth(Thickness);
                if (white){
                    ofSetColor(255);
                    
                        myline.addVertex(ofRandom(-spaceRange,spaceRange), ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
                    
                    myline.close();}
                else
                    ofSetColor(0);
                
                    myline.addVertex(ofRandom(-spaceRange,spaceRange), ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
                myline.close();
                    
              }
            
            
            white=!white;
                
            }
        
       // myline.close();
      
        
    
    if (key == OF_KEY_UP){
        spaceRange+=20;
    }
    if (key == OF_KEY_DOWN){
        spaceRange-=20;
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
