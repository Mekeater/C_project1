#include<stdio.h>
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
    double fact(int n);//��������
	double Add(int a,double b);//��������
    int b;
	double c,d;
	scanf("%d%lf",&b,&c);//ע��double��ռλ���� lf����fҲ����1f;
	printf("b=%d c=%f\n",b,c);
	d=2*Add(b,c);
	printf("%f %f\n",d,2*Add(b,c));

	//****�����ĵݹ����****

	return 0; 
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
