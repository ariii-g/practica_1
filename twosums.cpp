#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { //Constructor
        unordered_map<int, int> num_map;  
        for (int i = 0; i < nums.size(); ++i ){
            int com = target - nums[i];
            if (num_map.find(com) != num_map.end()) {
                return {num_map[com], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};

int main() {        
    vector<int> nums;
    cout << "Ingrese los números separados por espacio y finalizar con -4: ";
    
    int num;
    while (cin >> num && num != -4) {
        nums.push_back(num);
    }
    
    int target;
    cout << "Ingrese el valor objetivo (target): ";
    cin >> target;
    
    Solution solucion;
    vector<int> resultado = solucion.twoSum(nums, target);
    
    if (!resultado.empty()) {
        cout << "[" << resultado[0] << ", " << resultado[1] << "]" << endl;
    } else {
        cout << "No se encontró una solución." << endl;
    }
    
    return 0;
}
