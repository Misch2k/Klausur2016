#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int similaritySearch(string text, string pattern, int maxNumberOfMismatches, int startPosition)
{
    if(pattern == "") return 0;
    if(startPosition > text.length()-pattern.length() || pattern.length() > text.length()
            ) return -1;
    for(int i(startPosition); i <= text.length()-pattern.length(); ++i){
        int missMatchCount(0);
        for(int j(0); j < pattern.length(); ++j){
            //cout << "Text: " << text.at(i+j) << " - Pattern: " << pattern.at(j) << endl;
            if(text.at(i+j) != pattern.at(j)){
                missMatchCount++;
            }
        }
        if(missMatchCount <= maxNumberOfMismatches) return i;
    }
    return -1;
}

int main()
{
    cout << similaritySearch("GDFGHJDFFGJJGHJTYREYWERWETYDSGF", "FFKJJ", 1, 0);
    return 0;
}
