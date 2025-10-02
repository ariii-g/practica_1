#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) { //Constructor
       string num = to_string(x) ;
       string revi = string(num.rbegin(),num.rend());
       if (num == revi) {
        return true;
       }else{
        return false;
       }
    }
};
int main() {
    Solution sol;
    int numero;
    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero;
    if (sol.isPalindrome(numero)) {
        std::cout << numero << " si es palindrome." << std::endl;
    } else {
        std::cout << numero << " no es palindrome." << std::endl;
    }
    return 0;
}