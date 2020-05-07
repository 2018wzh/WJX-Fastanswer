#include<bits/stdc++.h>
#include <windows.h>
#include <ctype.h>
#include <tchar.h>
using namespace std;
int t;
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
    ///verify-start
    if(stricmp(argv[1],"-key")!=0){
        MessageBox(NULL,"access denied","     ",MB_OK+16);
        exit(0);
    }
    if(stricmp(argv[2],"-SGREBGFDTHGFDGVDDGHYMKKHGDDSCVHGFDDSFGHTRRBNNHGDFGHTHGFHSFGHJGFJHGFXNGFXHNTFHNJTFRHAHZRETHATRYTRUHJHFGDJGAGHFHBVNHGNHJYSJGHGDFHDAGFGRYGATREHTGHJFYJFHGJHHGFGHJGFHJYJSRHSGFSHFGBNGNHGMNSHMJSJNHGFSJSYTRJHSTRYJHSYTRJTFGJ")!=0){
        MessageBox(NULL,"access denied","     ",MB_OK+16);
        exit(0);
    }
    if(stricmp(argv[3],"ljlvink")!=0){
          MessageBox(NULL,"access denied","     ",MB_OK+16);
        exit(0);
    }
    ///verify-end
    int xz=0;
    cin>>xz;
    if(xz){
        wrongtimet:
        cin>>t;
        cin>>starth;
        for(int i=starth;i<=t+starth-1;i++){
            cin>>q[i].question;
        }
    }
    cin>>tk;
    if(tk){
        cin>>numtk;
        getchar();
        if(numtk>0){
            for(int i=1;i<=numtk;i++){
                getline(cin,R[i].qtk);
            }
        }
    }
    cin>>isname;
    if(isname){
        cin>>isnameyes;
    }
    int submit=0;
    cin>>submit;
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

