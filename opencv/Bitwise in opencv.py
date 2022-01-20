import cv2 as cv
import numpy as np

blank = np.zeros((400,400), dtype='uint8')
circle = cv.circle(blank.copy(), (200,200), 200, 255, -1)
cv.imshow('Circle', circle)

box = cv.rectangle(blank.copy(), (30,30), (370,370), 255,-1)
cv.imshow('Box', box)

bitwiseand = cv.bitwise_and(box,circle)
cv.imshow('Bitwise and', bitwiseand)

bitwiseor = cv.bitwise_or(box,circle)
bitwisenot = cv.bitwise_not(box,circle)
bitwisenor = cv.bitwise_xor(box,circle)
cv.waitKey(0)
