#include<iostream>
#include<string>
using namespace std;
class TextProcessor{
    string str;
    public:
    void getData(){
        cout<<"Enter a string:\n";
        getline(cin,str);
    }
    void process(){
        string temp="";
        int i=0;
        while(i<str.length() && str[i]==' ')
            i++;

        for(;i<str.length();i++){
            if(str[i]==' ' && temp[temp.length()-1]==' ')
                continue;
            temp += str[i];
        }
        if(temp[temp.length()-1]==' ')
            temp.erase(temp.length()-1);
        str = temp;
        if(str.length()>0){
            if(str[0]>='a' && str[0]<='z')
                str[0] = str[0]-32;
            for(int i=1;i<str.length();i++){
                if(str[i]>='A' && str[i]<='Z')
                    str[i] = str[i]+32;
            }
        }
    }
    void count(){
        int words=0, digits=0, special=0;
        for(int i=0;i<str.length();i++){
            if(str[i]>='0' && str[i]<='9')
                digits++;
            else if(!( (str[i]>='A' && str[i]<='Z') ||
                       (str[i]>='a' && str[i]<='z') ||
                       (str[i]==' ') ))
                special++;
        }
        if(str.length()>0)
            words = 1;
        for(int i=0;i<str.length();i++){
            if(str[i]==' ')
                words++;
        }
        cout<<"Processed string: "<<str<<endl;
        cout<<"Words = "<<words<<endl;
        cout<<"Digits = "<<digits<<endl;
        cout<<"Special characters = "<<special<<endl;

        if(special==0)
            cout<<"Valid string"<<endl;
        else
            cout<<"Invalid string"<<endl;
    }
};
int main(){
    TextProcessor t;
    t.getData();
    t.process();
    t.count();
    return 0;
}