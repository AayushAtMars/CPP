#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("file.txt");
    if(file.is_open()){
        file<<"Hello World gw458m34 ctm78t c5jn8y9 8jdt6 c8jt9y6o oijy6 hny689cyj";
        file.close();
    }

    ifstream infile("file.txt");
    string content;
    if(infile.is_open()){
    getline(infile,content);
    cout<<content<<endl;
        file.close();
    }
    return 0;
}