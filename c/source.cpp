/* Hello World program */

#include<stdio.h>

class Average
{
public:
  Average(int maxNum);
  void add(float num);
  float get();

private:
  int _maxNum;
  float nums[100];
  int index = 0;
};

Average::Average(int maxNum)
{
  _maxNum = maxNum;
  float nums[_maxNum];

  for (int i = 0; i <= _maxNum; i++) {
    nums[i] = 0;
  }

}

void Average::add(float num)
{
  nums[index++] = num;
}

float Average::get()
{
  float total = 0;
  int num = 0;

  for (int i = 0; i < _maxNum; i++) {
     if (nums[i] == 0) { 
       continue;
     }      
     total += nums[i];
     num++;
  }
  return total / num;
}

int main()
{
    printf("Hello World");
/*
int b[5];
b[0] = 1;
b[1] = 2;
float o = b[0] + b[1];
float f = o/2;
printf("%f",f);
*/

    Average a(5);
a.add(10);
a.add(10);
a.add(19);
a.add(19);
a.add(19);

printf("%f",a.get());


}
