#include "msort.hpp"

using vecIter = std::vector<int>::iterator;

void merge(vecIter beginFirst,
           vecIter endFirst,
           vecIter beginSecond,
           vecIter endSecond) {
    auto const begin = beginFirst;

    std::vector<int> temp(std::distance(beginFirst, endSecond));
    auto it = temp.begin();

    while (beginFirst != endFirst && beginSecond != endSecond) {
        if (*beginFirst <= *beginSecond) {
            *it = *beginFirst;
            beginFirst++;
        } else {
            *it = *beginSecond;
            beginSecond++;
        }

        it++;
    }

    while (beginFirst != endFirst) {
        *it = *beginFirst;
        it++;
        beginFirst++;
    }

    while (beginSecond != endSecond) {
        *it = *beginSecond;
        it++;
        beginSecond++;
    }

    it = temp.begin();
    beginFirst = begin;
    for (; beginFirst != endSecond; beginFirst++, it++) {
        *beginFirst = *it;
    }
}

void msort(vecIter begin, vecIter end) {
    size_t len = std::distance(begin, end);
    if (len <= 1) {
        return;
    }

    auto mid = begin + (len / 2);

    msort(begin, mid);
    msort(mid, end);

    merge(begin, mid, mid, end);
}

/*
bool isSorted(vecIter begin, vecIter end) {
    for (auto hare = begin + 1; hare != end; hare++, begin++) {
        if (*hare < *begin) {
            return false;
        }
    }

    return true;
}


int main() {
    std::vector<int> vec(100000);

    // First create an instance of an engine.
    std::random_device rnd_device;
    // Specify the engine and distribution.
    std::mt19937 mersenne_engine{rnd_device()};  // Generates random integers
    std::uniform_int_distribution<int> dist{1, 1024};

    auto gen = [&dist, &mersenne_engine]() {
        return dist(mersenne_engine);
    };

    std::generate(std::begin(vec), std::end(vec), gen);
    assert(isSorted(vec.begin(), vec.end()) == false);

    msort(vec.begin(), vec.end());

    assert(isSorted(vec.begin(), vec.end()));

    std::cout << "Done";

    return 0;
}
*/
