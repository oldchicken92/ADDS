#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        int start = 0;
        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found = s1.find(s2.substr(start, i));
            if (found != string::npos) {
                result.push_back(found);
                start = i;
                
            } else {
                result.push_back(-1);
                return result;
            }
        }
        return result;
    }

int main(){

    string str = "263452345642346572345";
    string sub = "2345";
    Finder find;
    vector<int> result = find.findSubstrings(str,sub);
    

    return 0;
}