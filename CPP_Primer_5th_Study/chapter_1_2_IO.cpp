#include "chapter_1_2_IO.h"
/*
    why we use std:: ?
        because cin,cout and endl are stored in a namespace it is named std!

        Using standard library by namespace has side-effect,
        Althought we want to use name in namespace ,
        ex: std::cout, we must explicitly indicate the use of the scope operator (::) to indicate explicity.
        We want to define cout from std.

    key's explain:
    <<      output operator
    >>      input operator
    endl    manipulator     操纵符

    exe     executable file
    expression 表达式
    string literal 字符串字面值常量
    literal 字面 文字 常量 照字面的 字面意义的
    Stream is an important concept of c++ ,
    it provides two operators ( << and >> ) to extract data from an input stream
    or put data into an output stream.

*/
void chapter_1_2_IO::init()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << "and " << v2 << " is " << v1 + v2 << std::endl;
    return;
}
/*
    prefix "practice" will be used for exercises
*/
void chapter_1_2_IO::practice_1_4() {
    int num1, num2;
    std::cout << "Please input num1 and num2!" << std::endl;
    std::cin >> num1 >> num2;
    std::cout << "num1 + num2 = " << num1 + num2 << "\n" << "num1 * num2 = " << num1 * num2 << std::endl;

}
