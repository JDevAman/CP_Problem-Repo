// For Distinct String Permutations
void backtrack(string& s, string& current, vector<bool>& used, int& k, int& cnt){
    if(s.length() == current.length()){
        // Check for palindrome
        bool containsPalin = false;
        for(int i=0; i<= s.length() - k; i++){
            bool isPalin = true;
            for(int j=0; j<k/2; j++){
                if(current[i+j] != current[i+k - j -1]){ isPalin = false; break; }
            }
            if(isPalin){
                containsPalin = true;
                break;
            }
        }
        if(!containsPalin){
            ++cnt;
        }
        return;
    }


    for (int i = 0; i < s.length(); ++i) {
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

        used[i] = true;
        current.push_back(s[i]);
        
        backtrack(s, current, used, k, cnt);
        used[i] = false;
        current.pop_back();
    }
}