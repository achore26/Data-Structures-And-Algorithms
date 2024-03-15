
/*
Q1) Write an efficient recursive algorithm that takes a sentence, start index index and end index index.
The algorithm should then return a sentence that contain words between the start index and end index
indices. Write recurrence relation of your algorithm and find time complexity using tracing tree
method
*/

#include <iostream>
#include <string>

using namespace std;

string extractWords(const string& sentence, int start, int end) {
    // Base case: If start index exceeds end index or end index exceeds the sentence length, return an empty string
    if (start >= end || end >= sentence.length()) {
        return "";
    }

    // Find the position of the next space or end of sentence after the starting index
    int nextSpace = sentence.find(' ', start);

    // If next space is beyond the ending index, set it to the ending index
    if (nextSpace == string::npos || nextSpace > end) {
        nextSpace = end + 1;
    }

    // Extract the word from the sentence and recurse for the remaining part
    return sentence.substr(start, nextSpace - start) + " " + extractWords(sentence, nextSpace + 1, end);
}

// Recurrence Relation:
// T(n) = T(n - k) + O(n)
// Where n is the length of the sentence, and k is the number of words processed in each recursive call.
//T(n) = (n * (n + 1)) / 2
//ANSWER = O(n^2)
