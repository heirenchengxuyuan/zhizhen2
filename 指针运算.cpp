
//int main(){
//int a=10;
//int *pa=&a;//��ʼ��
//int *p=NULL;//��֪����ֵʲô������ NULL-��ʼ��ָ��
////��ָ��ָ��ռ��ַ���������뱣��ָ�룬����ΪNULL,�Ҵ�ʱָ�벻�ɸ�����ֵ
//}
//������������������������������������������������Ұָ��

//int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//��ֵʱ[10]  ���ǵ�һ��Ԫ����[0] ���һ����[9]
//	int sz=sizeof(arr)/sizeof(arr[0]);//sz����������Ԫ�ظ���  ����/����
//	int *p=arr;
//	for(int i=0;i<sz;i++){
//		//TODO
//		printf("%d��",*p);
//		p=p+1;
//	}
//	return 0;
//}

////ָ������    �õ�����ָ��֮���Ԫ�ظ��������ַ-С��ַ��
//int main(){     ��ָ�벻��ָ��ͬ�ռ��������
//	int arr[10]={10};
//	
//}

//int my_strlen(char *str){
//	char *start=str;
//	char *end=str;
//	while(*end!='\0'){
//		end++;
//	}
//	return end -start;//ָ���ȥָ��
//}
//
//int main(){
//	//strlen -�ַ�����
//	char arr[]="bit";
//	int len=my_strlen(arr);  //len���ַ����ĳ���
//	printf("%d\n",len);
//	return 0;
//}
#include<stdio.h>
#define N_VALUES 5{
float values[N_VALUES];
float *vp;
for(vp=&values[N_VALUES];vp>&values[0];vp--){
	*vp=0;
}
}
// ����ָ�������һ������Ԫ�� �����Ǹ��� �ĵ�ַ�Ƚ� �������һ��֮ǰ
