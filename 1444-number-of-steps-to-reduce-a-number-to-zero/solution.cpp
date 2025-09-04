class Solution {
public:

    int numberOfSteps(int num,int count=0) {
        if(num==0) return count;
        if(num%2==0){
            num/=2;
           
        }else{
            num-=1;
            
        }
        return numberOfSteps(num,count+1);
    }
};
