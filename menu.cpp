/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
      
        bool ac = 0;
        bool hm = 0;
        bool fan = 0;
        bool light = 0;
        cout<<"ac ="<<ac<<"  press 1 for ac on/off"<<endl;
         cout<<"hm = "<<hm<<"  press 2 for  hm on/off"<<endl;
          cout<<"fan = "<<fan<<"  press 3 for fan on/off"<<endl;
           cout<<"light = "<<light<<"  press 4 for light on/off"<<endl;
           cout<<"press 5 for exit";
           cout<<"1 = on, 0 = off"<<endl;
            int s = 0;
        
    while(true){
     int n;
    cin>>n;
    if(n == 5)
    {
        break;
    }
    else{
        
       
        
       
        
        switch(n){
            
            case 1: if(ac == 0){
                ac = 1;
                s += 1200;
                cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
                break;
            }
            else{
            ac = 0;
            s -= 1200;
            
             cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
             break;
            }
             case 2: if(hm == 0){
                hm = 1;
                s += 600;
                
                 cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
                break;
            }
            else{
            hm = 1;
            s -= 600;
             cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
             break;
            }
             case 3: if(fan == 0){
                fan = 1;
                s += 400;
               
                 cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
                break;
            }
            else{
            fan = 0;
            s -= 400;
             cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
             break;
            }
             case 4: if(light == 0){
                light = 1;
                s += 100;
                
                 cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
                break;
            }
            else{
            light = 0;
            s -= 100;
             cout<<"ac ="<<ac<<endl;
         cout<<"hm = "<<hm<<endl;
          cout<<"fan = "<<fan<<endl;
           cout<<"light = "<<light<<endl;
           if(s > 2000){
            cout<<"overload"<<endl;
        }else 
        cout<<"not overload"<<endl;
             break;
            }
            
            
            
        }
        
        
        
    }
    
}

    return 0;
}
