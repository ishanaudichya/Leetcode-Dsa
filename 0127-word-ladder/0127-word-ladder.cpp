class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue <pair<string,int>> q;
        q.push({beginWord, 1});
        unordered_set<string> st (wordList.begin(), wordList.end());
        st.erase(beginWord);
        while(!q.empty()){
            string word = q.front().first;
            int step = q.front().second;
            q.pop();
            if(word == endWord) return step;
            for(int i = 0; i<word.size(); i++){
                char orignal = word[i];
                for(char al = 'a'; al<= 'z'; al++){
                    word[i]=al;
                    if(st.find(word) !=st.end()){
                        q.push({word, step+1});
                        st.erase(word);
                    }
                    
                }
                word[i]=orignal;
            }

        }
        return 0;
    }
};