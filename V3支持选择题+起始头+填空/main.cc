#include<bits/stdc++.h>
using namespace std;
int t;///��Ŀ��
int starth;
struct ans{
    string question;

}q[10000+5];
struct tiankong_question{
    string qtk;
}R[10000+5];
bool tk;
int numtk;
bool isname=0;
string isnameyes;
int main(){
    bool xz=0;
    cout<<"ѡ����(1/0)";
    cin>>xz;
    if(xz){
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
    bool submit=0;
    cout<<"�ύ����?(1/0)"<<endl;
    cin>>submit;
    cout<<"OK,��������ѡ������ٴ�����뵽output.txt\n";
    cout<<"ִ����ϵ�output.txt���밴������˳�";
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
    system("pause >nul");
    return 0;
}
