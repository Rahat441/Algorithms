class Solution {
public:
    int romanToInt(string s) {
        
        
    map<string, int> sample_map;
    sample_map.insert(pair<string, int>("I", 1));
    sample_map.insert(pair<string, int>("V", 5));
    sample_map.insert(pair<string, int>("X", 10));
    sample_map.insert(pair<string, int>("L", 50));
    sample_map.insert(pair<string, int>("C", 100));
    sample_map.insert(pair<string, int>("D", 500));
    sample_map.insert(pair<string, int>("M", 1000));


   
        int output = 0;
        int i = s.length() - 1;
        
        string first, sec, temp;
        while (i >= 0){
            
            if(i == 0){
                temp = s[i];
                output += sample_map[temp];
                cout<< output;
                break;
                
            }
            first = s[i];
            sec = s[i-1];
            cout<<first<<endl;
            if(sample_map[first]> sample_map[sec] ){
                output += sample_map[first] - sample_map[sec];
                
                i--;
            }
            else {
                output += sample_map[first];
                cout<< output;
            }
        
            i-=1;
        }
        
        
        return output;
    }
};

/* */