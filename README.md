# Assignment1-still
 
The inspiration behind this artwork is the attached photo, having miscellaneous objects and line floating in space. I'm satisfied with the outcome, however, see room for improvement. I initially aimed to allow color adjustment via GUI, however, since the cubes can only be called in setup, this feature was not possible. Furthermore, to achieve a similar look to the inspo photo I would have liked to add more shapes to create depth and dimension. 
The main components of this artwork are cubes and lines in 3d space.
The cubes consume the space dynamically, appear and reappear in various positions and dimensions of the 3d space.
Likewise, the lines have vertices added to them randomly as the user presses 'f' and the line color rotates between black and white. Although the vertices and the cube positions are arbitrary, their coordinates are constrained by an imaginary larger cube that has parameters "Range" which the user can increase by pressing the up key and decrease by pressing the down key. To draw the collection of boxes I created an array that stores all the boxes created on the screen and looped the boxes.draw() function for a chosen iteration of 10 boxes. The lines are of type polyline and have vertices added to them under a loop with a maximum iteration of 10 as that is a balance of closely packed yet sparse lines.
The colors I chose although are complementary colors, blue and pink, they are both fully opaque, saturated, and bright, hence the overall feeling the colors are supposed to convey is being overwhelmed and confused. The line colors rotate between black and white with each 'f' key pressed. I noticed that with the white thick lines, the feeling of overwhelmingness heightens as the colors collectively appear brighter, however, with the same thickness lines but in the color black, the colors are less vibrant.

The code has rules that the lines are drawn only at a range bordered by the cubes, hence there are no lines where there are no cubes. Since the range is a variable that can be controlled by the up/down keys, the user can create art pieces by decreasing the space range to create more dense lines and vice versa. Ultimately, regardless of the change in space range parameter, the whole of the artwork is enclosed by a larger cube with a length/width/height variable range. 

