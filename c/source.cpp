/* Hello World program */

#include<stdio.h>
#include<vector>

class Average
{
public:
  Average(int maxNum);
  void add(float num);
  float get();

private:
  int _maxNum;
  float nums[5];
  int index = 0;
};

Average::Average(int maxNum)
{
  _maxNum = maxNum;
//  float nums[] = {0,0,0,0,0};

  std::fill_n(nums,5,0);

  //for (int i = 0; i < _maxNum; i++) {
  //  nums[i] = -10;
  //}

//	for (int j = 0; j < _maxNum; j++) {
//		printf("%f\n",nums[j]);
//	}

}

void Average::add(float num)
{
  nums[index] = num;
printf("%d:%f \n",index,num);
index++;
}

float Average::get()
{
  float total = 0;
  int num = 0;

  for (int i = 0; i < _maxNum; i++) {
     if (nums[i] == 0) { 
       continue;
     }  
     printf("i:%d ",i);    
     printf("%f\n",nums[i]);
     total += nums[i];
     num++;
  }
  printf("total %f\n",total);
  printf("num %d\n",num);
  return total / num;
}

int main()
{
    printf("Hello World\n");
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
a.add(11);
a.add(12);
a.add(13);
a.add(14);

printf("avg: %f",a.get());


}
