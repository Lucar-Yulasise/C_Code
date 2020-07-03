#include<stdio.h>
int insert(int arry[],int num);

int delelement(int arry[],int elem);


int serch(int arry[],int num);


int updata(int num,int index);
int main(){
  int arrys[] = {0};  
  insert(arrys,6);
  
  for(int i=0;i<6;i++){
    printf("%4d",arrys[i]);
  
  }
  
  return 0;
}

int insert(int arry[],int num){
  int pos;
  int inserttion;
  printf("请输入插入数据的位置：");
  scanf("%d",&pos);
  printf("请输入数值：");
  printf("%d",&insertion);
  
  for(int i=0;i<num-1;i++){
    if(pos-1==i){
      for(int j=num-1;j>=pos;j--){
      arry[j] = arry[j-1];
      
      }
      arry[i] = insertion;
    }
  
  }
  


}
