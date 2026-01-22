/******************************************************************************
 * Họ và tên: [NGUYỄN HOÀNG ANH]
 * MSSV:      [PS48562]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    
    // Khai báo biến
    int choice;

    // Nhập dữ liệu
    printf("Menu:\n");
    printf("1. Bai 1: Tinh hoc luc\n");
    printf("2. Bai 2: Giai phuong trinh bac 1\n");
    printf("3. Bai 3: Tinh tien dien\n");
    printf("Nhap lua chon cua ban (1-3): ");
    scanf("%d", &choice);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    switch(choice) {
        case 1:
            printf("Ban da chon Bai 1: Tinh hoc luc\n");
            // Gọi hàm hoặc thực hiện mã cho bài 1 ở đây
            break;
        case 2:
            printf("Ban da chon Bai 2: Giai phuong trinh bac 1\n");
            // Gọi hàm hoặc thực hiện mã cho bài 2 ở đây
            break;
        case 3:
            printf("Ban da chon Bai 3: Tinh tien dien\n");
            // Gọi hàm hoặc thực hiện mã cho bài 3 ở đây
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
    }

    return 0;
}