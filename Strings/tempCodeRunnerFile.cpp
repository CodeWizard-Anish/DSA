 if(map1.find(s[i]) == map1.end() && map2.find(t[i]) == map2.end()){
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        } else {
            if(map1[s[i]] != t[i] || map2[t[i]] != s[i]){
                cout << "false" << endl;
                return 0;
            }
        }