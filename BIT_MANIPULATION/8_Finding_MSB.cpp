#include <iostream>

int main() {
    int num = 23; // 23 in binary is 10111
    int msb = 0;
    while (num != 0) {
        num = num >> 1; // right shift by 1 bit
        msb++;
    }
    msb--; // adjust for the extra increment at the end
    std::cout << "The most significant set bit of " << 23 << " is at position " << msb << std::endl;
    return 0;
}
