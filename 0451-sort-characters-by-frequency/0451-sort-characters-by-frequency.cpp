class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int> umap;
        string result="";
        for (int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        priority_queue<pair<int, char>> maxHeap;
        for (auto& it : umap) 
        {
        maxHeap.push({it.second, it.first});
        }
        while (!maxHeap.empty()) 
        {
        auto top = maxHeap.top();
        maxHeap.pop();
        result.append(top.first, top.second); // Append char 'top.second' 'top.first' times
        }
    
    return result;

    }
    
};