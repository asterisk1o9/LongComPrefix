
#include "solution.h"

vector<string>sortedVect;

void solution::sortVector(vector<string> &strs) {


}

string solution::longestCommonPrefix(vector<string>& strs) {

	string longestCommonPrefix = "";
	if (strs[0].length() == 0) {//if the first index in our vector of strings is empty then return lcp because their is none, vector is empty
		return longestCommonPrefix;
	}
	int index = 0;
	for (char e : strs[0]){//for the characters in our first string
		for (int i = 1; i < strs.size(); i++) {
			if (index >= strs[i].length() || e != strs[i].at(index)) {//if our index goes past the length of our string at i
				//or if the current character in our next string at index is not the same as the first character in the first string
			return longestCommonPrefix;
			}
		}
		longestCommonPrefix += e;
		index++;//move to the next character in our strings
	}
	return longestCommonPrefix;
}