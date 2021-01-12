#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
    int s_lengh;
    while(cin >> s_lengh, s_lengh!=0){
        string s;
        cin >> s;


        int min_dist = s_lengh;
        int last_R = -s_lengh,last_D = -s_lengh;
        // Scan the highway
        for (int i=0; i < s_lengh; ++i){
             //Restaurant and Drogstore
            if (s[i] == 'Z')
            {
              min_dist = 0;
              break;
            }
            // Restaraunt
            else if (s[i] == 'R')
            {
                last_R = i;
            }
            // Drogstore
            else if(s[i] == 'D')
            {
                last_D = i;
            }
            
            if(last_R != -s_lengh && last_D != -s_lengh){
                if(last_R - last_D >0 && min_dist > last_R - last_D){
                    min_dist = last_R - last_D;
                }
                if (last_D - last_R > 0 && min_dist > last_D - last_R)
                {
                    min_dist = last_D - last_R;
                }
                
            }
        

        }
    
      cout << min_dist << endl;

    }
    return 0;  
}