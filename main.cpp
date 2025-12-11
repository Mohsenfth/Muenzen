#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
    Mat img = imread("../muenzen.bmp");
    if (img.empty()) {
        cout << "Bild konnte nicht geladen werden!" << endl;
        return -1;
    }

    Mat imgGauss;
    GaussianBlur(img, imgGauss,Size(0,0),2.0);

    // or blur();
    // or medianBlur();

    Mat imgSobel;
    // float tyoe cv_35F
    Sobel(imgGauss,imgSobel,);

    //magnitude();

    //minMaxLoc();

    //convertScaleAbs(,alpha,beta);

    //arrowedLine();

    //cvtColor();


    //imshow("Gaussi", imgGauss);
    imshow("Original", img);
    waitKey(0);
}