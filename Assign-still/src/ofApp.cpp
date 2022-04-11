#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
    eye.load("Human-eye.jpg"); //load the image into xcode
    eye.getTexture().setTextureWrap(GL_REPEAT,GL_REPEAT);
    
    sliderGroup.setName("sliders"); //create slider group
    sliderGroup.add(Thickness.set("Thickness", 1, 0.5, 5)); //slider to adjust thickness
    sliderGroup.add(spaceRange.set("SpaceRange", 100, 20, 1000)); //slider to adjust the space range
    sliderGroup.add(Rbc.set("Redbloodcells",false)); // toggle to enable polyline line
    linepercent=0;
    mainGroup.add(sliderGroup);
    gui.setup(mainGroup); //setup gui
    
    
    ofBackground(0); // set the window background to black
    mainCam.setPosition(0, 0, 500); // set initial position for the easyCam 3D viewer
    for (int i=0; i<Maxspherenumber; i++){
        ofSpherePrimitive newsphere;
        newsphere.set(ofRandom(30,50),30); //set the radius randomly for each sphere in range 30-50
        newsphere.mapTexCoordsFromTexture(eye.getTexture()); //assign the texture/image to the sphere
        newsphere.setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange)); // assign the x,y,z coordinates as random within the space range
       
    spheres.push_back(newsphere); //add the sphere to the array of spheres
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
        linepercent+=0.0005; //increment to move sphere along line
    
   spheres[ofRandom(spheres.size())] .setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange)); //choose a random sphere between range of sphere array size,and randomize its position
    glm::vec3 eyeOrientation(ofRandom(360),ofRandom(360),ofRandom(360)); //create vector to store x,y,z rotation angle
    spheres[ofRandom(spheres.size())].setOrientation(eyeOrientation);//randomize the rotation movement of a random sphere
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    float time =ofGetSystemTimeMillis()/100;
    mainCam.begin();
    eye.getTexture().bind();
    ofPushMatrix();
    ofSetLineWidth(Thickness); // controll line width with slider
   // myline.draw();
    ofRotateDeg(time); //rotate the sphere with respect to time variable

   
       for( int x=0; x<spheres.size(); x++){
        eye.getTexture().bind();
    spheres[x].draw(); // assign the texture then draw spheres
        eye.getTexture().unbind();
    }
    
    ofPopMatrix();
    
        
    if(Rbc){ //if the Rbc is toggled true, then draw red blood cell and its path
        ofPushStyle();
        ofSetColor(255,0,0); //set colour to red, draw the line, then revert back without causing other changes in color
        myline.draw();
        ofPopStyle();
        ofPushStyle();
        ofSetColor(255,0,0);
        ofDrawSphere(myline.getPointAtPercent(linepercent),10);//get the x,y,z coordinates of myline then assign them to the x,y,z coordinates of the sphere
        ofPopStyle();
        
    }
    mainCam.end();
    ofDisableDepthTest();
    gui.draw(); //draw gui
        
    
        
    
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
        if (key=='f'){
            ofBackground(0); // set the window background to orage
            for (int i=0; i<7; i++){
                
               
             
                    ofSetColor(255);
                        myline.curveTo(ofRandom(-spaceRange,spaceRange), ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange)); //draw curved polyline with randomized vertices coordinates
                
                    
                   
                
            }
            myline.close();
            linepercent=0;
            
            if (key =='c'){
                myline.clear();
            }
                
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
