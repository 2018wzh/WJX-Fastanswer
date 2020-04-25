#include<bits/stdc++.h>
using namespace std;
int t;///题目数
struct ans{
    string question;

}q[10000+5];
int main(){
    cout<<"题目数\n";
    cin>>t;
    cout<<"好的，请您输入对应题的答案\n";
    for(int i=1;i<=t;i++){
        cout<<"第"<<i<<"题"<<":";
        cin>>q[i].question;
    }
    cout<<"OK,正在生成快速答题代码\n";
    cout<<"///////////////////////////////////////\n";
    cout<<"var data = { \n";
    for(int i=1;i<=t;i++){
        cout<<"    "<<i<<": {"<<endl;
        cout<<"        "<<"'question': "<<i<<",\n";
        cout<<"        "<<"'selections': "<<" '"<<q[i].question<<"'\n";
        cout<<"    },\n";
    }
    cout<<"length: "<<t<<endl;
    cout<<"}\n";
    cout<<"for (var i = 1; i <= data.length; i++) {\n";
    cout<<"         console.log(data[i])\n";
    cout<<"         let ele = document.getElementById('divquestion' + data[i]['question']).children[1]\n";
    cout<<"         data[i]['selections'].split('').map((x) => {\n";
    cout<<"         ele.children[x.charCodeAt(0) - 65].children[0].click()\n";
    cout<<"})\n";
    cout<<"}\n";
    return 0;
}
