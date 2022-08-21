#ifndef REM_DUP_H
#define REM_DUP_H

//#include <iostream>
#include <unordered_set>
#include <vector>

/**
 * @brief Function to remove all duplicate elements from a vector.
 * Iterates over the elements and records the ones it sees.
 * Adds previously unseen elements to a new vector.
 * Returns this vector.
 *
 * @param vec The vector to remove the duplicates from
 * @return A vector with no duplicate elements.
 */
std::vector<int> remove_dupes(std::vector<int> const &vec);

#endif
