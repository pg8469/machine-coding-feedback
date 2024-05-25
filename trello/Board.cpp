#include<string>
#include"List.cpp"
#include<set>
using namespace std;
class Board{
    string id;
    string name;
    string privacy = "PUBLIC";
    string url;
    set<string> members;
    set<List*> lists; // store list ids

    public:
    Board(string id, string name){
        this->id = id;
        this->name=name;
        this->url="/board/"+this->id;
    }

    string getId(){
        return this->id;
    }

    void addList(List* l){
        lists.insert(l);
    }

    string toString(){
        string res="";
        res+="Board Id: "+this->id;
        res+=" Name: "+this->name;
        res+='\n';
        res+="Lists: \n";
        for(List* l:lists){
            res+=l->toString();
        }
        res+='\n';
        return res;
    }
};