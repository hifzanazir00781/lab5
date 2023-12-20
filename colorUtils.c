
#include "colorUtils.h"
#include<math.h>

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int min(int x,int y,int z){
  int n = x < y ? x : y;
  n = n < z ? n : z;
  return n;
}

int toGrayScaleLightness(int r, int g, int b)
{
 return(max(r,g,b) + min(r,g,b)) / 2;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}


int toGrayScaleLuminosity(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return round (0.21*r + 0.72*g + 0.07*b);
}


int toSepiaRed(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return round (0.393*r + 0.769*g + 0.189*b);
}

int toSepiaGreen(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return round (0.349*r + 0.686*g + 0.168*b);
}

int toSepiaBlue(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return round (0.72*r + 0.534*g + 0.131*b);
}
