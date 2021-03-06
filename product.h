#ifndef PRODUCT
#define PRODUCT

typedef struct Product{ 

    char name[50]; 
    float weight; 
    int price;
    float starPoint; 
    int starCount; 

}Product;

//***************************
//FILE 관련
//****************************
int loadFile(Product *p, int count);
//파일 정보 읽어서 구조체에 저장 
//결과값(성공여부)return. 
int saveFile(Product *p, int count);
//구조체 정보 txt파일에 저장
//결과(성공여부) return 
//****************************



//***************************
//CRUD
//****************************
int createProduct(Product *p); 
//Create 구조체의 주소값을 받아 제품 생성
//제품명, 중량, 값, 별점, 별점수 입력 받음
int readProduct(Product p); 
//Read 
//제품 정보 읽기
int updateProduct(Product *p);
//Update
//주소값을 받아 제품 정보 변경
int deleteProduct(Product *p);
//Delete
//주소 값을 받아 등록된 제품 삭제 
//****************************



//****************************
//Search 기능 
//****************************
void searchProduct(Product *p, int count);
void searchPrice(Product *p, int count);
void searchStar(Product *p, int count);
//Search1
//원하는 제품 이름으로 찾아 출력 
//****************************

#endif




