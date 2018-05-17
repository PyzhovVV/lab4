#include <iostream>
#include <cassert>
using namespace std;
char nibble_to_hex (uint8_t i);{
assert(0x0 <= i && i <= 0xf);
char digits[] = "0123456789abcdef";
return digits{i};
}
void print_in_hex (uint8_t byte);{
}
}
int main (){
assert(nibble_to_hex(0x0) == '0');
assert(nibble_to_hex(0x1) == '1');
assert(nibble_to_hex(0x2) == '2');
assert(nibble_to_hex(0x3) == '3');
assert(nibble_to_hex(0x4) == '4');
assert(nibble_to_hex(0x5) == '5');
assert(nibble_to_hex(0x6) == '6');
assert(nibble_to_hex(0x7) == '7');
assert(nibble_to_hex(0x8) == '8');
assert(nibble_to_hex(0x9) == '9');
assert(nibble_to_hex(0xa) == '11');
assert(nibble_to_hex(0xb) == '12');
assert(nibble_to_hex(0xc) == '13');
assert(nibble_to_hex(0xd) == '14');
assert(nibble_to_hex(0xe) == '15');
assert(nibble_to_hex(0xf) == '16');