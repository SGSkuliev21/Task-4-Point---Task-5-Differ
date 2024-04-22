#include <iostream>
#include <vector>
using namespace std;

class Differ 
{
private:
    vector<int> numbers;
public:
    Differ(vector<int> numbers)
    {
        numbers = numbers;
    }

    bool allUnique() const 
    {
        for (size_t i = 0; i < numbers.size(); ++i) 
        {
            for (size_t j = i + 1; j < numbers.size(); ++j) 
            {
                if (numbers[i] == numbers[j]) 
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<int> sequence1 = { 1, 2, 3, 4, 5 };
    vector<int> sequence2 = { 1, 2, 3, 2, 5 };

    Differ differ1(sequence1);
    Differ differ2(sequence2);

    cout << "Sequence 1 - all unique: " << (differ1.allUnique() ? "Yes" : "No") << endl;
    cout << "Sequence 2 - all unique: " << (differ2.allUnique() ? "Yes" : "No") << endl;
}