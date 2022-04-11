#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
   // light.enable();
    eye.load("Human-eye.jpg");
    eye.getTexture().setTextureWrap(GL_REPEAT,GL_REPEAT);
    
    sliderGroup.setName("sliders");
    sliderGroup.add(Thickness.set("Thickness", 1, 0.5, 5));
    
    

    mainGroup.add(sliderGroup);
    gui.setup(mainGroup);
    
    
    ofBackground(48,25,52); // set the window background to orage
    mainCam.setPosition(0, 0, 400); // set initial position for the easyCam 3D viewer
    for (int i=0; i<Maxspherenumber; i++){
        ofSpherePrimitive newsphere;
        newsphere.set(ofRandom(20,50),50);
        newsphere.mapTexCoordsFromTexture(eye.getTexture());
        newsphere.setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
       
    spheres.push_back(newsphere);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
   spheres[ofRandom(spheres.size())] .setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
    glm::vec3 eyeOrientation(ofRandom(360),ofRandom(360),ofRandom(360));
    spheres[ofRandom(spheres.size())].setOrientation(eyeOrientation);
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float time =ofGetSystemTimeMillis()/100;
    mainCam.begin();
    eye.getTexture().bind();
    ofPushMatrix();
    myline.draw();
    ofRotateDeg(time);
/*    for (int i=0; i<100; i++) {
            ofDrawLine(-spaceRange, 50+(i*10), spaceRange, 75+(i*5));
        }*/
   
 
        
       for( int x=0; x<spheres.size(); x++){
        eye.getTexture().bind();
    spheres[x].draw();
        eye.getTexture().unbind();
    }
    
    
        
    ofPopMatrix();
    mainCam.end();
    ofDisableDepthTest();
    gui.draw();
    
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
        if (key=='f'){
            for (int i=0; i<7; i++){
                
                ofSetLineWidth(Thickness);
             
                    ofSetColor(255);
                    
                        myline.addVertex(ofRandom(-spaceRange,spaceRange), ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
                    
                    myline.close();}
             
            
        
                
            }
        
   
      
        
    
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
