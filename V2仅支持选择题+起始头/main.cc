#include<bits/stdc++.h>
using namespace std;
int t;///��Ŀ��
int starth;
struct ans{
    string question;

}q[10000+5];
int main(){
    cout<<"��Ŀ��\n";
    cin>>t;
    cout<<"������ѡ������ʼͷ";
    cin>>starth;
    cout<<"�õģ����������Ӧ��Ĵ�\n";
    for(int i=starth;i<=t+starth-1;i++){
        cout<<"����ѡ��ѡ���"<<i-starth+1<<"��"<<":";
        cin>>q[i].question;
    }
    cout<<"OK,��������ѡ������ٴ������\n";
    cout<<"///////////////////////////////////////\n";
    ///cout<<"screenfull.request=function(){};��nblur=null\n";
    ///cout<<"document.��nc��ntextmenu=document.onselectstart=null\n";
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
    return 0;
}
