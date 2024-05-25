#include<string>
using namespace std;

class Card{
    string id;
    string name;
    string description;
    string user;

    public:
    Card(string id, string name){
        this->id=id;
        this->name=name;
    }

    string getId(){
        return this->id;
    }

    string toString(){
        string res="";
        res+="Card Id: "+this->id;
        res+=" Name: "+this->name;
        res+='\n';
        return res;
    }
};