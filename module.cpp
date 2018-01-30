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
    /*double fact(int n);//函数声明
	double Add(int a,double b);//函数声明
    int b;
	double c,d;
	scanf("%d%lf",&b,&c);//注意double的占位符是 lf不是f也不是1f;
	printf("b=%d c=%f\n",b,c);
	d=2*Add(b,c);
	printf("%f %f\n",d,2*Add(b,c));*/

	//****函数的递归调用****
	/*函数直接或间接的调用自身--直接递归和间接递归  (递归函数用于解决将大规模问题逐渐缩小为小规模问题，例如将1,2,3,4,5,6倒序，
	只需要先考虑将两端的两个数字倒序，之后再将2,3,4,5这一块倒序，如此就可以通过递归缩小规模；递归算法必须有终止条件，否则将
	导致死循环；递归算法优点是算法简洁，缺点是效率不高，占用栈容量大，不适应深度递归)*/
	//求n!的递归调用实现(stratum方法)
	/*double stratum(int n);//函数声明
	int n;
	printf("please input a num to get stratum\n");
	scanf("%d",&n);
	printf("the startum of %d is:%lf\n",n,stratum(n));*/

	//根据Fibonacci数列0,1,1,2,3,5,8,13,21,...的规律，代码实现第i项的值
	/*利用递归思想编写代码*/
	/*int Fibonacci(int n);//声明函数
	int n;
	printf("please input the idex of Fibonacci number\n");
	scanf("%d",&n);
	printf("the Fibonacci series is flowing:\n");
	for(int i=0;i<n;i++)
		printf("%d\t",Fibonacci(i));
	printf("\n");
	printf("please input the idex that you want to know about the number of index\n");
	scanf("%d",&n);
	printf("the number is %d\n",Fibonacci(n-1));*/

	//利用递归思想实现1,2,3,4，...,n倒序排列
	/*void reverse(int data[],int len);//声明函数
	int data[]={1,2,3,4,5,6};
	reverse(data,6);*/

    //利用递归思想进行排序

	return 0; 
}
void reverse(int data[],int len)
{
	if(len<=1)
	{
		return;
	}
	reverse(data+1,len-2);
	int tmp;
	tmp=data[0];
	data[0]=data[len-1];
	data[len-1]=tmp;
	for(int i=0;i<len;i++)
	{
		printf("%d\t",data[i]);
	}
	printf("\n");
}
int Fibonacci(int n)
{
	int result;
    if(n==0)
		result=0;
	else if(n==1||n==2)
		result=1;
	else
		result=Fibonacci(n-1)+Fibonacci(n-2);
	return result;
}
double stratum(int n)
{
	double product;
	if(n==0||n==1)
		product=1;
	else
		product=n*stratum(n-1);
	return product;
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
