#include<stdio.h>
int main(){
	int rows=0,cols=0;
	int arr[100][100];
	while(1){
    printf("\n MENU \n ");
        
		printf("1. Nhap kich co va gia tri cac phan tu cua mang \n ");
        
		printf("2. In gia tri cac phan tu cua mang theo ma tran \n ");
        
		printf("3. In cac phan tu nam tren duong bien va tinh tich \n ");
        
		printf("4. In cac phan tu nam tren duong cheo chinh \n ");
        
		printf("5. In cac phan tu nam tren duong cheo phu \n ");
        
		printf("6. sap sep duong cheo chinh theo thu tu tang dan \n ");
        
		printf("7. tim kiem 1 phan tu va in ra mang \n ");
        
		printf("8. Thoat \n ");
        
		printf("Lua chon cua ban: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 8) {
            printf("Thoat chuong trinh.\n");
            break;
        }
        switch (choice) {
            case 1: {
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);
	            if (rows <= 0 || cols <= 0) {
                    printf("Kich thuoc khong hop le!\n");
                    rows = cols = 0;
                    break;
                }
                  printf("Nhap gia tri cac phan tu cua ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("arr[%d][%d] = ", i+1, j+1);
                        scanf("%d",&arr[i][j]);
                    }
                }
                break;
            }
             case 2: {
                if (rows == 0 || cols == 0) {
                    printf("Ma tran chua duoc nhap.\n");
                    break;
                }

                printf("Ma tran : \n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols ; j++) {
                        printf("%d ",arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
                    case 3: {
                if (rows == 0 || cols == 0) {
                    printf("Ma tran chua duoc nhap.\n");
                    break;
                }

                int product = 1;
                printf("Cac phan tu tren duong bien:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", product);
                break;
            }
            case 4: {
                if (rows == 0 || cols == 0) {
                    printf("Ma tran chua duoc nhap.\n");
                    break;
                }

                printf("Cac phan tu tren duong cheo chinh:\n");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            }
            case 5: {
                if (rows == 0 || cols == 0) {
                    printf("Ma tran chua duoc nhap.\n");
                    break;
                }

                printf("Cac phan tu tren duong cheo phu:\n");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
                break;
            }
            case 6: {
                if (rows == 0 || cols == 0) {
                    printf("Ma tran chua duoc nhap.\n");
                    break;
                }
                printf("Cac phan tu tren duong cheo chinh chua sap sep:\n");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][i]);
                    
                }
                printf("\n");
                printf("cac phan tu duong cheo chinh da sap sep la\n");
                for (int i = 0; i < rows && i < cols; i++) {
                	for (int j = 0; j < rows && j < cols; j++) {
                		if(arr[j][j]>arr[j+1][j+1]){
                			int temp=arr[j][j];
                			arr[j][j]=arr[j+1][j+1];
                			arr[j+1][j+1]=temp;
                }                		
                	}
						}
				for (int i = 1; i < rows+1 && i < cols+1; i++) {
                printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            }
            case 7: {
                if (rows == 0 || cols == 0) {
                    printf("Ma tran chua duoc nhap.\n");
                    break;
                }
                int a,b=0;
                printf("phan tu can tim la ");
                scanf("%d",&a);
                for(int i=0 ; i<rows ; i++){
                	for(int j=0 ; j<cols ; j++){
                		if(arr[i][j]==a){
                			printf("phan tu %d ton tai trong mang tai vi tri %d, %d",a,i+1,j+1);
                			b=1;
						}
					}
				}
				if(b==0){
					printf("phan tu khong thuoc mang");
				}
				printf("\n");
				break;
			}
}
}
return 0;
}
