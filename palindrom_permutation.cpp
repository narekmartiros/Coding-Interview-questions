#include <string>
#include <iostream>

bool is_palindrome_permutation( std::string str);

int main() {
    std::string st {"tact co"};
    std::cout << is_palindrome_permutation(st);
}

bool is_palindrome_permutation( std::string str) {
    int table[128]{};
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] != ' ') {
            ++table[str[i]];
        }
    }
    int count = 0;
    for( int i = 0; i < 128; ++i) {
        if( table[i] == 1){
            ++count;
        }
        if(count > 1) {
            return false;
        }
    }
    return true;
}