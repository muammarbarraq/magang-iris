import cv2 as cv

image = cv.imread("..\images\sampel.png")

dimensi = (int(image.shape[1]*0.5), int(image.shape[0]*0.5))       # meresize dari gambar (mengecilkan)

image_resize = cv.resize(
    image, dimensi)

image_gray = cv.cvtColor(image_resize, cv.COLOR_BGR2GRAY  )

image_hsv = cv.cvtColor (image_resize, cv.COLOR_BGR2HSV)

#cv.rectangle(image_resize, (0,0),(500,500),(255, 0 ,0),-1)

cv.circle(image_resize, (50, 50),50, (255,0,0),-1)
cv.imshow("jendela", image_resize)

cv.waitKey(0)