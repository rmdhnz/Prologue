import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt

MainImage = cv.imread('d:/FADHLY/gws.jpg')
img = cv.resize(MainImage,(400,400))
cv.imshow('Main Image', img)

blank = np.zeros(img.shape[:2],dtype='uint8')

# gray = cv.cvtColor(img,cv.COLOR_BGR2GRAY)
# cv.imshow('Gray', gray)

circle = cv.circle(blank, (img.shape[1]//2,img.shape[0]//2),100,256,-1)
mask = cv.bitwise_and(img,img,mask=circle)
cv.imshow('Mask',mask)

# gray_hist = cv.calcHist([gray],[0],mask,[256],[0,256])

plt.figure()
plt.title('Grayscale Histogram')
plt.xlabel('Bins')
plt.ylabel('# of pixel')
# plt.plot(gray_hist)
# plt.xlim([0,256])
colors = ('b','g','r')
for i,col in enumerate(colors) : 
    hist = cv.calcHist([img],[i],None,[256],[0,256])
    plt.plot(hist,color=col)
    plt.xlim([0,256])
plt.show()
cv.waitKey(0)
