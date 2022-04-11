# Assignment1-still
 
The inspiration behind this artwork is the attached photo, having miscellaneous objects and line floating in space with a twist. The theme is anatomy, with the eyeballs floating around and a redbloodcell flowing through it's path.
![Screen Shot 2022-04-10 at 7 46 27 PM](https://user-images.githubusercontent.com/102983688/162793013-aa020fb0-9b71-447e-b14b-7b0b9debbd62.png)

I'm satisfied with the outcome, however, see room for improvement. I initially aimed to allow color adjustment via GUI, however, since the eyes have a fixed wrapped texture that can only be called in setup, this feature was not possible. 
The main components of this artwork are the spheres and lines in 3d space.
i followed the tutorial https://www.youtube.com/watch?v=rxGXCJeI5yQ to create the floating 3d cubes, then replaced the cubes with spheres. I then used the following to load image and wrap texture. https://openframeworks.cc/learning/02_graphics/how_to_load_and_display_an_image/
https://openframeworks.cc/ofBook/chapters/textures.html

The spheres consume the space dynamically, appear and reappear in various positions and dimensions of the 3d space.
Likewise, the lines have vertices added to them randomly as the user presses 'f'. Although the vertices and the spheres positions are arbitrary, their coordinates are constrained by an imaginary larger cube that has parameters "Range" which the user can increase through the slider. To draw the collection of spheres I created an array that stores all the spheres created on the screen and looped the sphere.draw() function for a chosen iteration of 10 spheres. The lines are of type polyline and have vertices added to them under a loop with a maximum iteration of 5 as that is a balance of closely packed yet sparse lines.
The colors I chose although are vibrant and contrasting. White,pinks and reds are fully opaque, saturated, and bright, hence the overall feeling the colors are supposed to convey is being overwhelmed and experiencing discomfort. I noticed that with the Red thick lines, the feeling of overwhelmingness heightens as the colors collectively appear more saturated.

The code has rules that the lines are drawn only at a range bordered by the spheres, hence there are no lines where there are no spheres. Since the range is a variable that can be controlled by the gui slider, the user can create art pieces by decreasing the space range to create more dense lines and vice versa. Ultimately, regardless of the change in space range parameter, the whole of the artwork is enclosed by a larger cube with a length/width/height variable range.


requires ofxGui
press 'f' to add lines

Thick lines, more dense lines in the center
![Screen Shot 2022-04-11 at 8 44 01 PM](https://user-images.githubusercontent.com/102983688/162792500-7514ee6c-c3b1-40e1-8cd1-8f281dbdcb17.png)
thin lines with less dense lines as you move further
![Screen Shot 2022-04-11 at 8 49 56 PM](https://user-images.githubusercontent.com/102983688/162791779-01eadf56-317b-400a-bd03-d2790c6da1be.png)

elegant piece
![Screen Shot 2022-04-11 at 8 50 18 PM](https://user-images.githubusercontent.com/102983688/162791787-82a64f1c-828e-4f8f-bcd1-3552787dc27e.png)
