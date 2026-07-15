class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        //we have to find out 
        string h1,h2,m1,m2,s1,s2;
        //hour
        if(startTime[0]!='0') h1+=startTime[0];
        h1+=startTime[1];
        if(endTime[0]!='0') h2+=endTime[0];
        h2+=endTime[1];
        //min
        if(startTime[3]!='0') m1+=startTime[3];
        m1+=startTime[4];
        if(endTime[3]!='0') m2+=endTime[3];
        m2+=endTime[4];
        //sec
        if(startTime[6]!='0') s1+=startTime[6];
        s1+=startTime[7];
        if(endTime[6]!='0') s2+=endTime[6];
        s2+=endTime[7];

        int h1t,h2t,m1t,m2t,s1t,s2t;
        h1t = stoi(h1);
        h2t = stoi(h2);
        s1t =stoi(s1);
        s2t = stoi(s2);
        m1t=stoi(m1);
        m2t = stoi(m2);

        int hf,mf,sf;
        if(s2t<s1t){
            if(m2t==0){
                h2t--;
                m2t=59;
                s2t+=60;
            }else {
                m2t--;
                s2t+=60;
            }
        }
        sf = s2t-s1t;
        if(m2t<m1t){
            //sidha h2t se le lena hy
            h2t--;
            m2t+=60;
        }
        mf = m2t-m1t;
        hf=h2t-h1t;
        return hf*60*60 +sf+mf*60;

        
        
        
        
    }
};
