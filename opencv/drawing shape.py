import cv2 as cv
import numpy as np

blank = np.zeros((400,400,3),np.uint8)
cv.line(blank,(0,0),(200,200),(255,0,0),2)
cv.rectangle(blank,(0,0),(200,200),(0,255,0),2)
cv.circle(blank,(200,200),200,(0,255,255),2)
cv.rectangle(blank,(400,400),(200,200),(0,255,0),2)
cv.line(blank,(200,200),(400,400),(255,0,0),2)

cv.imshow('Blank',blank)
cv.waitKey(0)
