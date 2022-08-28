#ifndef M_SORT_H
#define M_SORT_H

//#include <assert.h>

#include <algorithm>
//#include <iostream>
#include <iterator>
//#include <random>
#include <vector>

/**
 * @brief Performs merge sort on a range defined by two iterators.
 *
 * @param begin The start of the range.
 * @param end The end of the range.
 */
void msort(std::vector<int>::iterator begin, std::vector<int>::iterator end);

#endif
