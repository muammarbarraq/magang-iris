import cv2 as cv

def callback(value):
    pass

def main ():
    image = cv.imread("..\images\sampel.png")

    dimensi = (int(image.shape[1] * 0.5), int(image.shape[0] * 0.5))       # meresize dari gambar (mengecilkan)
    image_resize = cv.resize(image, dimensi)

    image_hsv =  cv.cvtColor(image_resize, cv.COLOR_BGR2HSV)
    
    L_H = 0
    U_H = 68
    L_S = 9
    U_S = 246
    L_V = 241
    U_V = 255
    
    tresh = cv.inRange(image_hsv,(L_H,L_S,L_V), (U_H,U_S,U_V))
    cv.imshow("jendela", tresh)
    cv.waitKey(0)

if __name__ == '__main__':
    main()

