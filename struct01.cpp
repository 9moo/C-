#include<stdio.h>
//�����ṹ��Book 
struct Book
{
	char name[20];//���� 
	short price;// �۸� 
 } ;//";"�������Ͷ��壬����ȱ�� 
 
 int main()
 {
 //���ýṹ�����ʹ����ṹ����� b1 
 	struct Book b1 ={"C���Գ������",55};
 	struct Book* B1 = &b1;//������ָ��������һ�� 
 	 printf("%s\n",(*B1).name);//����ָ�������ӡ 
 	 printf("%d\n",B1->price);//"->"���õ�ָ���ӡ��ʽ
	 printf("������%s\n",b1.name);//"."ѡ���Ա 
	 printf("�۸�%dԪ\n",b1.price);
	 b1.price = 40;//�޸� 
	 printf("�ۺ�ۣ�%dԪ\n",b1.price); 
	 
 	return 0;
 }
