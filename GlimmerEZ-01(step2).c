#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age;
    char name[20];
    int count = 0; /*应将count在`while`循环外进行初始化*/
    while(true)
	{
    printf("请输入你的姓名：");
    scanf("%s", name); /*应将输入放进循环内，以多次输入*/
    printf("请输入你的年龄：");
    scanf("%d", &age);
    int flag = 0;
    printf("My name is %s.\n", name);
    printf("I am %d years old.\n", age);
    printf("是否继续输入？（若继续请输入1，反之请输入0）："); /*中文分号应该改为英文分号*/
    scanf("%d", &flag); // 假设此处输入只会为0或1
    if(flag == 1) /*赋值号应该为判断号，否则恒为真*/
	{
      count++;
      continue;
    }else
	{
      printf("一共输入了%d次", count+1);/*输出结果应包含第一次输入，应该是count+1*/
      break;
  }
  }
  return 0;
}