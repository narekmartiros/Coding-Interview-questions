#include <string>
#include <iostream>

bool is_unique(std::string str);

int main() {

    std::string st{"o"};
    std::cout << is_unique(st);

}

bool is_unique(std::string str) {
    unsigned int arr[2]{};
    for(int i = 0; i<str.size(); ++i){
        if(arr[str[i] / 64] & 1 << str[i] % 64 ){
            return false;
        }
        arr[str[i] / 64] |= 1 << str[i] % 64;
    }
    return true;
}