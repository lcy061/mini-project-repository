
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
                printf("숫자를 입력해 주세요(1.품목생성 2.목록 3.업데이트 4.삭제 5.저장 0.끝내기) :");
                scanf("%d", &num);
                
                if(num == 0){
                        break;
                }
                else if(num == 1){
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
                }else if(num==5){ 
   		        saveFile(p1, count);
                }      
     }    
        return 0;
}

