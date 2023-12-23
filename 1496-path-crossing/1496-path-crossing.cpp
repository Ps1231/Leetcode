class Solution {
public:
    bool isPathCrossing(string path) {
        int len=path.length();
        unordered_set<string> visited;
        visited.insert("0,0");
        int x=0;int y=0;
        int value;
        int arx[len],ary[len];
        for(int i=0;i<len;i++)
        {
            if (path[i]=='N')
            {
                y=y+1;
            }
         else if (path[i]=='S')
            {
                y=y-1;
            }
         else if (path[i]=='E')
            {
                x=x+1;
            }
         else if (path[i]=='W')
            {
                x=x-1;
            }
            string hash = to_string(x) + "," + to_string(y);
            if (visited.find(hash) != visited.end()) {
                return true;
            }
            
            visited.insert(hash);
        }
        
        return false;
    }
};