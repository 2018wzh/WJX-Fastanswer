#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int t;///题目数
int starth;
struct ans{
    string question;

}q[10000+5];
struct tiankong_question{
    string qtk;
}R[10000+5];
int tk;
int numtk;
int isname=0;
string isnameyes;
int main(int argc, char** argv){
    int xz=0;
    if(stricmp(argv[1],"Vink")!=0)
    MessageBox(NULL,"Final version 3 2020/4/18 15:44\nPowered By Vink\n","用户版本",MB_OK+48);
    cout<<"选择题(1/0)";
    cin>>xz;
    if(xz){
        wrongtimet:
        cout<<"选择题题目数\n";
        cin>>t;
        cout<<"请输入选择题起始头";
        cin>>starth;
        cout<<"好的，请您输入对应题的答案\n";
        for(int i=starth;i<=t+starth-1;i++){
            cout<<"输入选项选择第"<<i-starth+1<<"题"<<":";
            cin>>q[i].question;
        }
    }
    cout<<"是否有填空题,1有0没有"<<endl;
    cin>>tk;
    if(tk){
        cout<<"填空题个数\n";
        cin>>numtk;
        getchar();
        if(numtk>0){
            for(int i=1;i<=numtk;i++){
                cout<<"请输入填空题第"<<i<<"题:";
                getline(cin,R[i].qtk);
            }
        }
        else {
            cout<<"Invalid Syntax";
            getchar();
        }
    }
    cout<<"姓名?(1/0)";
    cin>>isname;
    if(isname){
        cout<<"输入姓名\n";
        cin>>isnameyes;
    }
    int submit=0;
    cout<<"提交按键?(1/0)"<<endl;
    cin>>submit;
    cout<<"OK,正在生成选择题快速答题代码到output.txt\n";

    ///make-config-file
    freopen("backupfile-do-not-open-or-delete","w",stdout);
    if(xz==1)
    {
        cout<<1<<endl;
        cout<<t<<endl;
        cout<<starth<<endl;
        for(int i=starth;i<=t+starth-1;i++){
            cout<<q[i].question<<endl;
        }
    }
    else cout<<0<<endl;
    if(tk==1){
        cout<<1<<endl<<numtk<<endl;
        for(int i=1;i<=numtk;i++){
            cout<<R[i].qtk<<endl;
        }
    }
    else cout<<0<<endl;
    if(isname==1){
        cout<<1<<endl<<isnameyes<<endl;
    }
    else cout<<0<<endl;
    if(submit==1){
        cout<<1<<endl;
    }
    else cout<<0<<endl;
    fclose(stdin);

    freopen("output.txt","w",stdout);
    if(xz){
        cout<<"var data = { \n";
        for(int i=starth;i<=t+starth-1;i++){
            cout<<"    "<<i<<": {"<<endl;
            cout<<"        "<<"'question': "<<i<<",\n";
            cout<<"        "<<"'selections': "<<" '"<<q[i].question<<"'\n";
            cout<<"    },\n";
        }
        cout<<"length: "<<t<<endl;
        cout<<"}\n";
        cout<<"for (var i = "<<starth<<"; i <= data.length+"<<starth-1<<"; i++) {\n";
        cout<<"         console.log(data[i])\n";
        cout<<"         let ele = document.getElementById('divquestion' + data[i]['question']).children[1]\n";
        cout<<"         data[i]['selections'].split('').map((x) => {\n";
        cout<<"         ele.children[x.charCodeAt(0) - 65].children[0].click()\n";
        cout<<"})\n";
        cout<<"}\n";

    }
    cout<<"var ljl = document.getElementsByTagName("<<char(34)<<"textarea"<<char(34)<<");"<<endl;
    if(isname){
        cout<<"ljl[0].focus();"<<endl;
        cout<<"ljl[0].value="<<char(34)<<isnameyes<<char(34)<<";\n";
        cout<<"ljl[0].blur();"<<endl;
    }
    for(int i=1;i<=numtk;i++){
        cout<<"ljl["<<i<<"].focus();\n";
        cout<<"ljl["<<i<<"].value="<<char(34)<<R[i].qtk<<char(34)<<";"<<endl;
        cout<<"ljl["<<i<<"].blur();\n";
    }
    if(submit){
        cout<<"document.getElementById("<<'"'<<"submit_button"<<'"'<<").click();\n";

    }
    MessageBox(NULL,"执行完毕到output.txt，请按任意键退出","WARNINGS",MB_OK+48);
    system("pause >nul");
    return 0;
}
///MessageBox(NULL,"执行完毕到output.txt，请按任意键退出","WARNINGS",MB_OK+48);
