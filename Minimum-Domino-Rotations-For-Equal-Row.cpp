class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
      map<int,int>top,bottom;
      int mxTop = 0, mxBottom = 0 , x,y;
      for (auto it:tops){
        top[it]++;
        if(mxTop < top[it]){
            mxTop = top[it];
            x = it;
        }
      }
      for (auto it:bottoms){
        bottom[it]++;
        if(mxBottom < bottom[it]){
            mxBottom = bottom[it];
            y = it;
        }
      }
      bool ans = true;
      int cnt = 0;
      if(mxTop > mxBottom){
        for(int i = 0 ;i < tops.size();i++){
            if(tops[i] != x){
                swap(tops[i],bottoms[i]);
                cnt++;
            }
        }
         for(int i = 0 ;i < tops.size();i++){
            ans &= (x == tops[i]);
        }
      }else {
         for(int i = 0 ;i < bottoms.size();i++){
            if(bottoms[i] != y){
                swap(bottoms[i],tops[i]);
                cnt++;
            }
        }
         for(int i = 0 ;i < bottoms.size();i++){
            ans &= (y == bottoms[i]);
        }
      }
      return ans ? cnt : -1;
    }
};