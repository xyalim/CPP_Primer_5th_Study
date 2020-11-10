#include "chapter_1_4_Loop.h"

void chapter_1_4_Loop::init() {
    std::cout << "You have to input forever unless you input an non-integral character\n"
        "Windows's user can press ctrl+z then press the enter key \n"
        "UNIX,linux and Mac OS X 's user can press ctrl+D \n"
        << std::endl;
    int num = 0, sum = 0;
    while (std::cin >> num) {
        sum += num;
    }

    std::cout << "Sum is: " << sum << std::endl;
    return;
}
