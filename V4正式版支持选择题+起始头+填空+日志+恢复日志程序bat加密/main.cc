#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int t;///��Ŀ��
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
    MessageBox(NULL,"Final version 3 2020/4/18 15:44\nPowered By Vink\n","�û��汾",MB_OK+48);
    cout<<"ѡ����(1/0)";
    cin>>xz;
    if(xz){
        wrongtimet:
        cout<<"ѡ������Ŀ��\n";
        cin>>t;
        cout<<"������ѡ������ʼͷ";
        cin>>starth;
        cout<<"�õģ����������Ӧ��Ĵ�\n";
        for(int i=starth;i<=t+starth-1;i++){
            cout<<"����ѡ��ѡ���"<<i-starth+1<<"��"<<":";
            cin>>q[i].question;
        }
    }
    cout<<"�Ƿ��������,1��0û��"<<endl;
    cin>>tk;
    if(tk){
        cout<<"��������\n";
        cin>>numtk;
        getchar();
        if(numtk>0){
            for(int i=1;i<=numtk;i++){
                cout<<"������������"<<i<<"��:";
                getline(cin,R[i].qtk);
            }
        }
        else {
            cout<<"Invalid Syntax";
            getchar();
        }
    }
    cout<<"����?(1/0)";
    cin>>isname;
    if(isname){
        cout<<"��������\n";
        cin>>isnameyes;
    }
    int submit=0;
    cout<<"�ύ����?(1/0)"<<endl;
    cin>>submit;
    cout<<"OK,��������ѡ������ٴ�����뵽output.txt\n";

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
    MessageBox(NULL,"ִ����ϵ�output.txt���밴������˳�","WARNINGS",MB_OK+48);
    system("pause >nul");
    return 0;
}
///MessageBox(NULL,"ִ����ϵ�output.txt���밴������˳�","WARNINGS",MB_OK+48);
