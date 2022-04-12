
//int main(){
//int a=10;
//int *pa=&a;//初始化
//int *p=NULL;//不知道赋值什么就这样 NULL-初始化指针
////若指针指向空间地址返还，且想保留指针，则置为NULL,且此时指针不可赋其他值
//}
//————————————————————————野指针

//int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//赋值时[10]  但是第一个元素是[0] 最后一个是[9]
//	int sz=sizeof(arr)/sizeof(arr[0]);//sz即计算数组元素个数  所有/单个
//	int *p=arr;
//	for(int i=0;i<sz;i++){
//		//TODO
//		printf("%d，",*p);
//		p=p+1;
//	}
//	return 0;
//}

////指针的相减    得到的是指针之间的元素个数（大地址-小地址）
//int main(){     若指针不是指向同空间则不能相减
//	int arr[10]={10};
//	
//}

//int my_strlen(char *str){
//	char *start=str;
//	char *end=str;
//	while(*end!='\0'){
//		end++;
//	}
//	return end -start;//指针减去指针
//}
//
//int main(){
//	//strlen -字符串长
//	char arr[]="bit";
//	int len=my_strlen(arr);  //len即字符串的长度
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
// 允许指针与最后一个数组元素 后面那个数 的地址比较 不允许第一个之前
