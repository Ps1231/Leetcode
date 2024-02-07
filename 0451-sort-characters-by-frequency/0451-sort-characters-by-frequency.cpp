class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        multimap<int,char> mm;
        string newString="";

        for(auto a : s)
            umap[a]++;

        for(auto a : umap)
            mm.insert({a.second, a.first});

        for(auto it = mm.rbegin(); it != mm.rend(); ++it)
             for (int i = 0; i < it->first; ++i) {
                 newString += it->second;
                }
           // newString += string(it->first, it->second);

        return newString;
    }
};
