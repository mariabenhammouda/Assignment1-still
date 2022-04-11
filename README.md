# Assignment1-still
 
The main components of this artwork are cubes and lines in 3d space.
The cubes consume the space dynamically, appear and reappear in various positions and dimensions of the 3d space.
Likewise the lines have vertices added to them randomly as the user presses 'f' and the line color rotates between black and white.Although the vertices and the cube positions are arbitrary, their cordinates are constraits by an imaginary larger cube the has parameters "Range" of which the user can increase by pressing up key and decrease by pressing down key. To draw the collection of boxes i created an array that stores all the boxes created on the screen and looped the boxes.draw() function for a chosen iteration of 10 boxes. The lines are of type polyline and have vertices added to them under a loop with maximum iteration of 10 as that is a balanc of closely packed yet sparse lines.
The colours i chose although are complementart colors, blue and pink, they are both fully opaque, saturated and bright, hence the overall feeling the colors are supposed to convey is being overwhelmed and confused. 
The code has rules that the lines are drawn only at a range bordered by the cubes, hence there are no lines where there are no cubes. Since the range is a variable that can be controlled by the up/down keys, the user can create art pieces by decreasing the space range to create more dense lines and vice versa. Ultimately, the regardless of the change in space range parameters the whole of the artwork is enclosed by a larger cube with length/width/height variable range. 

