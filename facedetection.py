#pip installl opencv-python



import cv2

#this will roade the cascade in a fie
face_cascade = cv2.CascadeClassifier("haarcascade_frontaface_default.xml")
#this will rad the input image that we need to make the detection
img = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
img = cv2.imread("photos-_MG_8773.jpg")#this will read the input image that we need too make the detection
#this will detect the face that we have imported
faces = face_cascade.detectMultiScale(gray, 1.1,4)
#this will make or it will draw the ractangle between the face
for(x,y,w,h) in faces:
    cv2.rectangle(img,(x,y),(x+w, y+h), (255,0,0), 2)
    
    #this will display the output
    cv2.imshow("img", img)
    cv2.waitKey()
    #This is just a simple code that can be done by anyone in the absence io