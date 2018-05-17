#include <iostream>
#include <cassert>
using namespace std;
char nibble_to_hex (uint8_t i) {
assert(0x0 <= i && i <= 0xf);
char digits[] = "0123456789abcdef";
return digits[i];
}
void print_in_hex (uint8_t byte){
    cout << nibble_to_hex (byte >> 4)
            << nibble_to_hex (byte & 0xf);
}
const uint8_t* as_bytes(const void* data);
void
print_in_hex (const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_hex(bytes[i]);
        if ((i + 1) % 16 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
const uint8_t*
as_bytes(const void* data) {
    return reinterpret_cast<const uint8_t*>(data);
}
char
bit_digit (uint8_t byte, uint8_t bit) {
    if (byte & (0x1 << bit)) {
        return '1';
    }
    return '0';
}
void
print_in_binary (uint8_t byte) {
    for (uint8_t bit = 7; bit > 0; bit--) {
        cout << bit_digit(byte, bit);
    }
    cout << bit_digit(byte,0);
}
void
print_in_binary(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_binary(bytes[i]);
        if ((i + 1) % 4 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
uint32_t calculator(uint32_t value_1, char sing, uint32_t value_2){
    switch(sing){
    case '&': return value_1&value_2; break;
    case '|': return value_1|value_2; break;
    case '^': return value_1^value_2; break;
    }
}
struct Student{
    char name[17];
    int year;
    double sred_ball;
    int sex:1;
    uint8_t course;
    Student *Starosta;
};
int main () {
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
    assert(nibble_to_hex(0xa) == 'a');
    assert(nibble_to_hex(0xb) == 'b');
    assert(nibble_to_hex(0xc) == 'c');
    assert(nibble_to_hex(0xd) == 'd');
    assert(nibble_to_hex(0xe) == 'e');
    assert(nibble_to_hex(0xf) == 'f');
    /*
    print_in_hex(234);
    print_in_hex(0xff);
    print_in_hex(0xab);
    cout << '\n';
    uint32_t u32 = 0x42;
    cout << "u32 bytes: ";
    print_in_hex(&u32, sizeof(u32));
    cout << '\n';
    print_in_binary(3);
    cout << '\n';
    print_in_binary(42);
    uint16_t oper1, oper3, res;
    char oper2;
    cin >> oper1 >> oper2 >> oper3;
    if (oper2 == '&') {
        res = oper1 & oper3;
    }
    print_in_hex(&oper1, sizeof(oper1));
    cout << oper1;
    print_in_hex(&oper3, sizeof(oper3));
    cout << "=";
    print_in_hex(&res, sizeof(res));
    cout << "\n";
    print_in_binary(&oper1, sizeof(oper1));
    cout << "oper1";
    print_in_hex(&oper3, sizeof(oper3));
    cout << '=';
    print_in_binary(&res, sizeof(res));
    cout << '\n';
    */

    Student studarray[3]={
            {"st1",2017,4.3,1,7,&studarray[1]},
            {"st2",2017,4.3,1,7,nullptr},
            {"st3",2017,4.3,1,7,&studarray[3]}
    };
    cout << "Adrees of array:" << &studarray<<'\n';
    cout<< "Sizeof array;"<<sizeof(studarray)<<'\n';
    cout<<"\t Adress of element:\t Size of elements"<<&studarray;
    for(int i=0;i<3;i++){
        cout<< i+1 << ":\t"<<&studarray[i]<<":\t"<<sizeof(studarray[i])<<'\n';
    }
   cout<<"first element\n";
    cout<<"\t Adress of field:\t sizeof field;\nOffset:\n";
    cout << "Name:\t\t" << &studarray[0].name << "\t\t"<<sizeof
    (studarray[1].name) << "\t\t" << offsetof(struct Student,name)<<endl;
    cout << "Year:\t\t" << &studarray[0].year << "\t\t" << sizeof
    (studarray[1].year) << "\t\t" << offsetof(struct Student,year)<< endl;
    cout << "Sred_ball:\t" << &studarray[0].sred_ball << "\t\t" << sizeof
    (studarray[1].sred_ball) << "\t\t" << offsetof(struct Student,sred_ball)<< endl;
    cout << "Course:\t" << &studarray[0].course<< "\t\t" << sizeof
    (studarray[1].course) << "\t\t" << offsetof(struct Student,course)<< endl;
    cout << "Starosta:\t" << &studarray[0].Starosta << "\t\t" << sizeof
    (studarray[1].Starosta) << "\t\t" << offsetof(struct Student,Starosta)<< endl;
    cout <<
    return 0;
}

