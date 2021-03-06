#include <stdio.h>
#include <string.h> 
#include "product.h"



int createProduct(Product *p){

        printf("제품 정보를 입력해주세요. \n");

        printf("제품명 : ");
        scanf("%s", p->name);
        printf("중량 : ");
        scanf("%f", &p->weight);
        printf("값 : ");
        scanf("%d", &p->price);
        printf("별점 : ");
        scanf("%f", &p->starPoint);
        printf("별점수 : ");
        scanf("%d", &p->starCount);

        printf("입력 완료\n");

        return 0;
}

int readProduct(Product p){

        if(p.price!=-1){ 
                printf("\n제품명 : %s\n", p.name);
                printf("중량 : %.1f KG\n ", p.weight);
                printf("값 : %d 원\n", p.price);
                printf("별점 : %.1f\n", p.starPoint);
                printf("별점수 : %d 명\n", p.starCount);
        }


        return 0;
}

int updateProduct(Product *p){

        printf("제품 정보를수정 해주세요. \n");

        printf("제품명 : ");
        scanf("%s", p->name);
        printf("중량 : ");
        scanf("%f", &p->weight);
        printf("값 : ");
        scanf("%d", &p->price);
        printf("별점 : ");
        scanf("%f", &p->starPoint);
        printf("별점수 : ");
        scanf("%d", &p->starCount);

        printf("수정 성공\n");

        return 0;

}


int deleteProduct(Product *p){

        printf("해당 제품을 삭제합니다.\n");

        p->price = -1;

        //가격이 -1인 제품을 삭제.



        return 0;
}


int saveFile(Product *p, int count){ 


        FILE *fp = fopen("info.txt", "w");
        
        for(int i = 0; i<count; i++){ 
                
                fprintf(fp, "%s %f %d %f %d\n", p[i].name, p[i].weight, p[i].price, p[i].starPoint, p[i].starCount);

        }

        


        fclose(fp); 
        
        printf("저장 성공\n");
        return 0; 
}


int loadFile(Product *p, int count){ 

        int num = 0; 
        

        FILE *fp = fopen("info.txt", "r");
        
        for(int i = 0; i < count; i++){
               fscanf(fp, "%s %f %d %f %d", p[num].name, &p[num].weight, &p[num].price, &p[num].starPoint, &p[num].starCount);


                if(feof(fp)){ break; }

               
                //printf("%s %f %d %f %d\n", p[num].name, p[num].weight, p[num].price, p[num].starPoint, p[num].starCount);


               num++;
               
               
        }       

        fclose(fp);         
        printf("불러오기 성공\n");
        return num; 
}

void searchProduct(Product *p, int count){ 

        char name[50]; 
        int num; 

        printf("찾고 싶은 제품명 입력: ");
        scanf("%s", name);

        for(int i=0; i<count; i++){ 
                if(!strcmp(name, p[i].name)){ 
                        
                        readProduct(p[i]);                        
                        printf("\n");
                        num++;          
                }
        }

        if(num == 0){ printf("찾으시는 제품이 없습니다."); }
        
}

void searchPrice(Product *p, int count){ 

        int pr; 
        int num; 

        printf("찾고 싶은 가격 입력: ");
        scanf("%d", &pr);

        for(int i=0; i<count; i++){ 
                if(pr == p[i].price){ 
                        
                        readProduct(p[i]);                        
                        printf("\n");
                        num++;          
                }
        }

        if(num == 0){ printf("찾으시는 제품이 없습니다."); }
        
}

void searchStar(Product *p, int count){ 

        float pr; 
        int num; 

        printf("찾고 싶은 최소 별점 입력: ");
        scanf("%f", &pr);

        for(int i=0; i<count; i++){ 
                if(pr <= p[i].starPoint){ 
                        
                        readProduct(p[i]);                        
                        printf("\n");
                        num++;          
                }
        }

        if(num == 0){ printf("찾으시는 제품이 없습니다."); }
        
}
