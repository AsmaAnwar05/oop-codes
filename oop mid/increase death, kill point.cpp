#include<iostream>
using namespace std;

class game {
    int kill_count, death_count;
    public:
    game() {
        kill_count = death_count = 0;
    };
    game(int kill_count, int death_count) {
        this->kill_count = kill_count;
        this->death_count = death_count;
    }
        void show() {
        cout << "Kill Count: " << kill_count << endl;
        cout << "Death Count: " << death_count << endl;
    }
    friend void increase(game &g);
};
void increase(game &g) {
    g.kill_count= g.kill_count + 1;
g.death_count = g.death_count + 1;
}
int main() {
    game g1(2,3);
    cout<<"before_increase"<<endl;
    g1.show();
    increase(g1);
    cout<<"after_increase"<<endl;
    g1.show();


}