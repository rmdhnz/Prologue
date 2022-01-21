import cv2 as cv
from cv2 import imshow

img = cv.imread('d:/FADHLY/EL REAL.jpg')
gray = cv.cvtColor(img,cv.COLOR_BGR2GRAY)
imshow('Gray', gray)

haar_cascade = cv.CascadeClassifier('d:/FADHLY/PROGRAMMING/MyFuckingCode/Python/haar_face.xml')

face_react = haar_cascade.detectMultiScale(gray, scaleFactor=1.1,minNeighbors=3)

print(f'Number of faces found : {len(face_react)}')

for (x,y,w,h) in face_react : 
    cv.rectangle(img,(x,y),(x+w,y+h),(0,255,0),thickness=2)

imshow('detected', img)
cv.waitKey(0)
