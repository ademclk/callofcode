#include "solution.h"

std::vector<int> remove_dupes(std::vector<int> const &vec) {
    std::unordered_set<int> seen;
    std::vector<int> uniques;

    for (auto const &num : vec) {
        if (seen.count(num) == 0) {
            uniques.push_back(num);
            seen.insert(num);
        }
    }

    return uniques;
}

/*
int main() {
    std::vector<int> test = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 2, 2, 2, 2, 3, 4, 5};
    auto temp = remove_dupes(test);

    // Output -> 1 2 3 4 5
    for (auto const &num : temp) {
        std::cout << num << " ";
    }
}
*/
