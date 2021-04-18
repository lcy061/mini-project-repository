#include <stdio.h>
#include "product.h"
#include "manager.h"
#define MAX 50


int main(){

   Product p1[MAX];
        int num=0;
        int count=0;
        int select;
        while(num != -1){
            
                #ifdef DEBUG
                printf("DEBUG :: Check\n");                            
                #endif
                printf("숫자 입력 부탁 :");
                scanf("%d", &num);
                if(num == 1){
                        createMultiProduct(p1,count++);
                }
                else if(num==2){
                                             
                       readMultiProduct(p1, count);
                }
                else if(num==3){
                        printf("업데이트 숫자 입력 : "); 
                        scanf("%d", &select);
                        updateMultiProduct(p1, select);

                }else if(num==4){
                        printf("삭제 숫자 입력 : "); 
                        scanf("%d", &select);
                        deleteMultiProduct(p1, select);
                }
      
     }    

        return 0;
}

