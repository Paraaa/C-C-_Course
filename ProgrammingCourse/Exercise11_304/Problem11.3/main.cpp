#include <vector>
#include <algorithm>
#include <iostream> 
#include <fstream>

using namespace std;

ifstream infile;

class NameScore{
    private:
        string name;
        int score;
    
    public:     
        NameScore(){}
        friend istream& operator>>(istream &is, NameScore &ns){
            is >> ns.name >> ns.score;
            return is;
        }

        bool operator<(const NameScore &ns){
            return (name<ns.name);
        }

        string getName(){
            return name;
        }
        int getScore(){
            return score; 
        }
}; 

int main(){
    vector<NameScore> namesScores;
    NameScore ns = NameScore();

    ifstream pdata("names_and_score.txt");

    while(pdata >> ns){
        namesScores.push_back(ns); 
    }

    sort(namesScores.begin(),namesScores.end()); 
    int s = 0;
    string name = namesScores[2799].getName();
    for(int i = 0; i < 2800; i++){
        s += namesScores[i].getScore() * (i+1);
        //cout << namesScores[i].getName() << " " << namesScores[i].getScore() << endl; 
    }
    cout << "The 2800th name in the sorted list is: " << name << endl; 
    cout << "Total name score is: " << s << endl;
}

