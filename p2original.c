#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter the values of the 1st coordinate:\n");
  scanf("%f %f",x1,y1);
  printf("enter the values of the 2nd coordinate:\n");
  scanf("%f %f",x2,y2);
  printf("enter the values of the 3rd coordinate:\n");
  scanf("%f %f",x3,y3);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float area;
  area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
  if (area==0)
    return 0;
  else
    return 1;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if (istriangle!=0)
    printf("the points %f%f %f%f %f%f can form a triangle",x1,y1,x2,y2,x3,y3);
  else
    printf("the coordinates %f%f %f%f %f%f cannot form a triangle",x1,y1,x2,y2,x3,y3);
}

int main()
{
  float x1,y1,x2,y2,x3,y3;
  int ist;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  ist= is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,ist);
  return 0;
}