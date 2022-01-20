import cv2 as cv
import numpy as np

img = cv.imread('d:/FADHLY/gws.jpg')
# cv.imshow('Output', img)

#translation
def translate(image,x,y) : 
    transMat = np.float32([[1,0,x], [0,1,y]])
    dimension = (image.shape[1], image.shape[0])
    return cv.warpAffine(image,transMat,dimension)

translated = translate(img,100,-100)
# cv.imshow('Translated', translated)

#rotation
def rotate(img,angle,rotPoint=None) : 
    (height,width) = img.shape[:2]

    if rotPoint is None : 
        rotPoint = (width/2,height/2)

    rotMat = cv.getRotationMatrix2D(rotPoint,angle,1.0)
    dimension = (width,height)

    return cv.warpAffine(img,rotMat,dimension)

rotated = rotate(img,45,(0,0))
# cv.imshow('Rotate', rotated)    

#resize
resizeImage = cv.resize(img, (313,313))
#cv.imshow('Resize',resizeImage)

#Flipping
flip = cv.flip(img,-1)
# cv.imshow('Flip',flip)

#cropping
imgCrop = img[100:200,200:300]
cv.imshow('Crop', imgCrop)
cv.waitKey(0)
