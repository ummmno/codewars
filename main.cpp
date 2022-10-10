#include <iostream>

bool scramble(const std::string& i1, const std::string& i2){
    std::string s1 = i1;
    std::string s2 = i2;
    for(auto& i: s2){
        bool found = false;
        for(auto& y: s1){
            if(i == y){
                y = 'A';
                found = true;
                break;
            }
        }
        if(!found){
            std::cout << s2 << " false" <<std::endl;
            return false;
        }
    }
    std::cout << s2 << " true" <<std::endl;
    return true;
}

int main()
{
    std::cout << scramble("scriptingjava", "javascript") <<std::endl;
}


