#include<stdio.h>
//��ȡ�������Сֵ
int getmin(int data[],int len)
{
	int min=data[0];
	for(int i=0;i<len;i++)
	{
		min=min>=data[i]?data[i]:min;
	}
	return min;
}
//��ȡ�������Сֵ����
int getminindex(int data[],int len)
{
	int minindex=0;
	int min=data[0];
	for(int i=0;i<len;i++)
	{
		min=min>=data[i]?data[i]:min;
	}
	for(i=0;i<len;i++)
	{
		if(data[i]==min)
			minindex=i;
	}
	return minindex;
}
int main()
{
	//****�����Ĵ�ֵ����****
	/*(���ú���ʱ���������βεı���������/���������У������õĺ�����Ϊ�����������������������ĺ�����Ϊ��������/,
	�����������뽫ʵ�ε�ֵ���ݸ��βα������βα�����ʵ�θ�ֵ���ڴ�����ʱ���ٿռ䱣����������������ִ����ϣ���ʱ���ٵĿռ�ͱ��ͷš�
	�βε�ֵ�ñ仯������Ӱ�쵽ʵ�α�����ֵ)*/
	/*void add(int,int);//����������
	int a,b;
	a=6;
	b=6;
	add(a,b);
	printf("ʵ��a��ֵΪ:%d\n",a);*/

	//****������Ƕ�׵���****
	/*����ʱ�໥�����ģ�������һ�������ж�������һ������������������Ƕ�׵���*/
    /*double fact(int n);//��������
	double Add(int a,double b);//��������
    int b;
	double c,d;
	scanf("%d%lf",&b,&c);//ע��double��ռλ���� lf����fҲ����1f;
	printf("b=%d c=%f\n",b,c);
	d=2*Add(b,c);
	printf("%f %f\n",d,2*Add(b,c));*/

	//****�����ĵݹ����****
	/*����ֱ�ӻ��ӵĵ�������--ֱ�ӵݹ�ͼ�ӵݹ�  (�ݹ麯�����ڽ�������ģ��������СΪС��ģ���⣬���罫1,2,3,4,5,6����
	ֻ��Ҫ�ȿ��ǽ����˵��������ֵ���֮���ٽ�2,3,4,5��һ�鵹����˾Ϳ���ͨ���ݹ���С��ģ���ݹ��㷨��������ֹ����������
	������ѭ�����ݹ��㷨�ŵ����㷨��࣬ȱ����Ч�ʲ��ߣ�ռ��ջ�����󣬲���Ӧ��ȵݹ�)*/
	//��n!�ĵݹ����ʵ��(stratum����)
	/*double stratum(int n);//��������
	int n;
	printf("please input a num to get stratum\n");
	scanf("%d",&n);
	printf("the startum of %d is:%lf\n",n,stratum(n));*/

	//����Fibonacci����0,1,1,2,3,5,8,13,21,...�Ĺ��ɣ�����ʵ�ֵ�i���ֵ
	/*���õݹ�˼���д����*/
	/*int Fibonacci(int n);//��������
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

	//���õݹ�˼��ʵ��1,2,3,4��...,n��������
	/*void reverse(int data[],int len);//��������
	int data[]={1,2,3,4,5,6};
	reverse(data,6);*/

    //���õݹ�˼���������
	/*void sort(int data[],int len);//��������

    int data[]={8,5,3,1,7,9,6,4,2,3,16,9,0,100,65};
	int len=sizeof(data)/sizeof(data[0]);
    sort(data,len);
    for(int i=0;i<len;i++)
		printf("%d\t",data[i]);
	printf("\n");*/

	//���õݹ�˼�뽫һ������ÿλ���������У�����:1668->8661;
    /*void invertOrder(int);
	int n;
	printf("please input a number that you want to invert its order\n");
	scanf("%d",&n);
	printf("the number have inverted after\n");
    invertOrder(n);
	printf("\n");*/



	return 0; 
}
void invertOrder(int n)
{
	if(n/10==0)
	{
		printf("%d",n);
		return;
	}
	int bites=n%10;
	printf("%d",bites);
	invertOrder(n/10);
}
//��������Сֵ�����������ǰ�棬һ�εݹ�
void sort(int data[],int len)
{
	int tmp;
	if(len<1)
		return;
	int min=getmin(data,len);
	int minindex=getminindex(data,len);
    if(minindex!=0)
	{
		tmp=data[minindex];
        data[minindex]=data[0];
		data[0]=tmp;
	}
    sort(data+1,len-1);
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
	printf("�β�a��ֵΪ:%d\n",a);
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
