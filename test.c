#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>



//int  main() {
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int *) (&a+1) ;
//	printf("%d   %d ", *(a + 1), *(ptr - 1)); // 2  5
//	return 0;
//}

//struct Test {
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa;
//}*p;
//
//
//int main() {
//	p = (struct	Test*)0x100000;
//
//	printf("%p\n", p + 0x1);  //指针+1 就是指针指向的地址+1 也就是结构体的大小
//	printf("%p\n", (unsigned long)p + 0x1);  //指针强行转换为整形+1 结果就是+1
//	printf("%p\n", (unsigned int*)p + 0x1);   //指针类型强行转换为int*+1 也就是+4
//
//	return 0;
//}



//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1); //4
//	int* ptr2 = (int*)((int)a + 1); //02000000  整形+1，也就是向后动一个字节，类型是int* 所以返回四个字节 
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5) }; //逗号表达式
//	int* p;
//	p = a[0];  //a[0]是一维数组的数组名，而现在a[0]即没有在 sizeof 内也没有 & ，因此表示的是一维数组的第一个元素，是1；
//	printf("%d", p[0]);  //p[0]==*(p+0)
//	return 0;
//}
//
// 
//int main() {
//	int a[3][2] = { {0,1},{2,3},{4,5} };
//	int* p;
//	p = a[0];
//	printf("%d",p[0]);  
//	return 0;
//}


int main() {
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4][2]== *(*(p+4)+2)
	//  100000000000000000000000000100--  -4的原码
	//  111111111111111111111111111011     反码
	//  111111111111111111111111111100     补码
	//  要是以%d 的形式打印的话，拿出原码打印所以结果是-4
	//  要是以%p 的形式打印的话  认为内存存放的是地址，地址没有原反补，直接打印 FFFFFFFC

	return 0;
}
