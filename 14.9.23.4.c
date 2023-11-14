#include<stdio.h>
extern int a=10;
fun1()
{
	printf("\nvalue of global a inside fun1 %d ", a);
	a++;
	
}
fun2()
{
	static int a=9;
	printf("\n value of a inside fun2 %d",a);
	a++;
}
main()
{
	fun1();
	fun1();
	fun1();
	fun2();
	fun2();
	fun2();
}
