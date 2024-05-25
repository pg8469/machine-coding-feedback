#include<string>
#include"Card.cpp"
#include<set>
using namespace std;

class List{
    string id;
    string name;
    set<Card*> cards; // ids

    public:
    List(string id, string name){
        this->id=id;
        this->name=name;
    }

    void addCard(Card* c){
        cards.insert(c);
    }

    string getId(){
        return this->id;
    }

    string toString(){
        string res="";
        res+="List Id: "+this->id;
        res+=" Name: "+this->name;
        res+='\n';
        res+="Cards: \n";
        for(Card* c:cards){
            res+=c->toString();
        }
        res+='\n';
        return res;
    }
};