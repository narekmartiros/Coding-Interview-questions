#include <string>
#include <iostream>

std::string string_compression(std::string& str);

int main() {
    std::string st{"dcfg"};   
    std::cout << string_compression(st);
}

std::string string_compression(std::string& str) {
    int count = 1;
    int original_size = str.size();
    std::string original_str(str);
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] == str[i+1]) {
            str.erase(str.begin() + i);
            ++count;
            --i;
        }
        else{
            str.insert(i+1, std::to_string(count));
            count = 1;
            ++i;
        }
    }
    return (str.size()>original_size)?original_str:str;
}