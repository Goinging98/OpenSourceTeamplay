#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include<stdio.h>
#include<Windows.h>

#define N 20

int RGB[N][N][N] = { ' ' }; //RGB값을 저장할 배열 생성

using namespace cv; //OpenCV를 사용할려면 필수 네임스페이스

using namespace std;


void N1()
{
   printf("1의 RGB 값\n\n"); 

   Mat img; 

   img = imread("1.png"); //이미지를 읽어와야함. 리소스 파일에 사진이 있어야함

   int intensity_b = img.at<Vec3b>(41, 43)[0]; // 푸른계열 

   int intensity_g = img.at<Vec3b>(41, 43)[1]; // green channel

   int intensity_r = img.at<Vec3b>(41, 43)[2]; // red channel

   printf("R : %d G : %d B : %d \n\n", intensity_r, intensity_g, intensity_b);
}

int main() {


   N1();

   waitKey(0);

   return 0;
}
