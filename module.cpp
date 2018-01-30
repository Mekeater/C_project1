#include<stdio.h>
int main()
{
	//****函数的传值调用****
	/*(调用函数时，对于有形参的被调函数，/函数调用中，被调用的函数成为被调函数，调用其他函数的函数称为主调函数/,
	主调函数必须将实参的值传递给形参变量，形参变量将实参赋值在内存中临时开辟空间保存起来，被调函数执行完毕，临时开辟的空间就被释放。
	形参的值得变化，不会影响到实参变量的值)*/
	/*void add(int,int);//函数的声明
	int a,b;
	a=6;
	b=6;
	add(a,b);
	printf("实参a的值为:%d\n",a);*/

	//****函数的嵌套调用****
	/*函数时相互独立的，不能在一个函数中定义另外一个函数，但函数可以嵌套调用*/
    double fact(int n);//函数声明
	double Add(int a,double b);//函数声明
    int b;
	double c,d;
	scanf("%d%lf",&b,&c);//注意double的占位符是 lf不是f也不是1f;
	printf("b=%d c=%f\n",b,c);
	d=2*Add(b,c);
	printf("%f %f\n",d,2*Add(b,c));

	//****函数的递归调用****

	return 0; 
}
void add(int a,int b)
{
	int c;
	a=2*a;
	printf("形参a的值为:%d\n",a);
	c=a+b;
	printf("the add of numbers%d\n",c);
}
double fact(int n)
{
	int product=1;
	for(int i=1;i<=n;i++)
		product*=i;
	return product;
}
double Add(int a,double b)
{
	double c;
	c=fact(a)+b;
	c+=b;
	return c;
}
