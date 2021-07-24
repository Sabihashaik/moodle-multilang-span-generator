#include <iostream>
#include <string>

using namespace std; 

int main()
{
    string lang1,lang2; 
    cout<<"Enter language 1 and 2 code (seperate with new line)"<<endl;
    getline(cin,lang1);
    getline(cin,lang2);
    
    string text1,text2; 
    cout<<"Enter language 1 and 2 text (seperate with new line)"<<endl; 
    getline (cin, text1);
    getline (cin, text2);
 
    string start ="<span lang=\""+lang1+"\" class=\"multilang\">";
    string end="</span>";
    string structure = start+text1+end;
    
    string start2 ="<span lang=\""+lang2+"\" class=\"multilang\">";
    string end2="</span>";
    string structure2 = start2+text2+end2;
    
    cout<<"Your result is:"<<endl;
    string result = structure + structure2;
    
    cout<<result; 
    
 
}
