#include "globalH.h"
#include "chapter_1_2_IO.h"
#include "chapter_1_4_Loop.h"
#include "chapter_1_5_Class.h"
#include "Sales_item.h"

#define className chapter_1_5_Class

void chapter_1_5_write_Sales_item();
void chapter_1_5_add_Sales_item();
int main() {
    className tesingClass;
    tesingClass.init();
    //tesingClass.practice_1_4();
    //chapter_1_5_write_Sales_item();
    chapter_1_5_add_Sales_item();
    system("pause");
    return 0;
}

void chapter_1_5_write_Sales_item() {
    Sales_item book;
    std::cout << "please input book info" << std::endl;
    std::cin >> book;
    std::cout << book << std::endl;
}

void chapter_1_5_add_Sales_item() {
    Sales_item item1, item2;
    std::cout << "please input book info" << std::endl;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
}