
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
                printf("숫자를 입력해 주세요(1.품목생성 2.목록 3.업데이트 4.삭제 5.저장 6.불러오기 7.검색 0.끝내기) :");
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
                        printf("업데이트하고 싶은 제품 숫자 입력 : "); 
                        scanf("%d", &select);
                        updateMultiProduct(p1, select);

                }else if(num==4){
                        printf("삭제하고 싶은 제품 숫자 입력 : "); 
                        scanf("%d", &select);
                        deleteMultiProduct(p1, select);
                }else if(num==5){ 
                        saveFile(p1, count);
                }
                else if(num==6){ 
                        count = loadFile(p1, MAX);
                }
                else if(num==7){ 
                        printf("1. 이름 검색 2.가격 검색 3.별점 검색 : "); 
                        scanf("%d", &num);
                        if(num == 1){
                                searchProduct(p1, count);
                        }
                        else if(num ==2){ 
                                searchPrice(p1, count);
                        }
                        else if(num ==3){ 
                                searchStar(p1, count);
                        }else{ 
                                printf("잘못 입력하셨습니다.\n"); 
                        }
                }              
     }    
        return 0;
}

