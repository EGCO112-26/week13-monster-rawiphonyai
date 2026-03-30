//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;

    monster m1("Gozaro",210,15);
    monster m2("Mercury"),m4("Mars",210);
    monster m3("Venus");
    monster x[5]={{"Saturn",250},{"Polaris"},{"Jupiter",210,20},{"Gemini"}};
    p=new monster("Uranus",50,50);
    delete p; //destructor p
    return 0; //destructor x,m2,m1,m3,m4

}
