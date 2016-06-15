# What is photogrammetry?

From Wikipedia: "Photogrammetry is the science of making measurements from photographs, especially for recovering the exact positions of surface points."

With a camera, you’ll take a series of 2D images and use them to measure the distance between certain points on your object in order to create a 3D model. The photographs will be captured from different positions and angles around your object. Then, using Agisoft Photoscan, we’ll stitch together chunks of 2D images into 3D meshes with texture. 

# Things to remember while taking your photographs:

* The type of camera you use does not matter. In fact, mirrorless cameras that operate with fewer megapixels (for example, smartphone cameras) often work better.
* Lenses are also irrelevant (although, you should avoid fisheye or wide angle lenses).
* Wherever possible, use a low ISO (say, 100 or 200), to avoid noise and grain in your photos.
* If your camera has a manual mode, then consider using it.
* When working with the natural or built environment, you might encounter hiccups with repetitive, shiny, plain, or reflective surfaces.
* Avoid taking photos with other objects in the frame, as stitching programs will try to absorb these objects into the model.
* It's nearly impossible to reconstruct moving objects, people, or animals (but that doesn't mean it's not amusing to try).
* Overcast skies are ideal. Generally speaking, light and shadow will influence the reconstruction process.
* Shoot frequently around a subject, with at least two consistent angles (e.g., high and low).
* Do NOT use a flash.
* Where possible, create 80% overlap across images. In many ways, such redundancy is conducive to making meshes. 
* Start with a simple project, say, a batch of 25 images. Often, you don't need a lot of data to create a compelling mesh.

# Photoscan workflow in short:

1. Add cameras
2. Align cameras
3. Generate dense cloud
4. Build mesh
5. Add texture

# Photoscan Workflow in detail: 

* Click the "add photos" button on the left (icon is a plus sign with a deck of images behind it).
* Select all photos you want in your batch and click open (you will then see the number of cameras, or photos, in your workspace on the left).
* If you wish, then you can select images on the right/bottom and use the intelligent scissors to create contours (removing the background) in individual images.
* In the menu, select "workflow," "align photos," with medium or high accuracy and --- if the object is static --- uncheck "constrain."
* Once processed, you'll see all of your cameras arranged in a sequence; click on a camera to see it.* If you want to reduce the region (or bounding box) around your cameras, click "resize region" (the icon looks like crosshairs over a square). Resize the box with your mouse.
* Now return to "workflow" and select "build dense cloud." To save processing time, you can select "medium" quality.
* Once the cloud is constructed, return to "workflow" again and "build mesh" (consider these settings: arbitrary, dense cloud, and medium). This process will consume a bit of time.
* If you'd like to remove faces from the model, then use the rectangle tool (icon is a square made of dashes) to select unwanted areas and then click the delete selection button (icon is an x).
* For the last key step, under "workflow," select "build texture."
* With the mesh and texture constructed, in the menu try Tools > Mesh > Map UVs. (UVW is the coordinate system for meshes. U and V are essentially X and Y, respectively.) This tool will rendering your 3D mesh into a series of faces, expressed as a 2D image. It will also give you some important data about your mesh, including density data.
* If you want to export your model as a PDF, TIFF, JPG, OBJ (for Rhino or Blender), or 3DS (for SketchUp), then try File > Export.

# Photoscan workflow in action: 

The first step in the Photoscan process is photo alignment, where you pinpoint areas that need more or less focus. Here, you can experiment with different combinations of camera points to achieve your desired collection of photographs. This step is especially useful when Photoscan attempts to absorb unwanted sections/objects of your photographs into the model (like other objects in the frame, walls, patterns, harsh light spots, etc).

![image alt text](images/photoscan1.png)

In the second step, you’re going to build a dense point cloud, where you resize or rotate sections of your object. This step is useful if a particular section of the model has been detached or is the wrong size. If you like, you can also take this opportunity to alter your model. Rather than attempting to directly replicate your original object, you can rearrange, resize, or flip different sections to modify your model. 

![image alt text](images/photoscan2.png)

Next, you’ll build a mesh and Photoscan will adapt your changes into an accurate model. 

![image alt text](images/photoscan3.png)

Finally, it’s time to add texture. This step adds texture onto the surface of your modelled object and your mesh begins to look like a thing.

![image alt text](images/photoscan4.png)

#Modify your model:
After you get acquainted with Agisoft and have created a couple of models using unaltered photographs, you might want to start thinking about ways to alter your model by digitally manipulating your images. Before running your photographs through the program, consider modifying your images with photo editing software. Any photo editing software will allow you to play with the contrast levels, brightness, and colour. If you want to edit your photographs further, you can use Photoshop (or a similar program) to completely rework your model. For example, you can add or subtract details, distort the image, play around with colouring/brightness/photo quality, add sections of another image to your images, etc.

