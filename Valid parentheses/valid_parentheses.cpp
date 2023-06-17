class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> pairs = {{')','('} , {']','['} ,{ '}','{'}};
        stack<char> stack;
    for(char c : s){
        if(pairs.find(c) != pairs.end()){
           
           if(stack.empty()) return false;

           if(pairs[c] != stack.top()) return false;
            stack.pop();

        }else{
            stack.push(c);
        }
    }
    return stack.empty();

    }
};