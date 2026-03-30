//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string, int=10,int=1);
    //Atl+126
    ~monster();
};

monster::~monster(){
    cout<<"BYE BYE "<< name<<" hp: "<<hp<<endl;

}

monster::monster(string n="Vivi",int h,int p){
    name=n;
    if(hp>300) hp=300;
    hp=h;
    if(potion>20) potion=20;
    potion=p;

    cout<<"Monster "<<name <<" MaLeaw Naja!!! "<<endl;

}


#endif /* monster_h */
