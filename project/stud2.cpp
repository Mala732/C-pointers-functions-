#include <bits/stdc++.h>

using namespace std;

int faculty();
int student(int);

int faculty(void){
    int attempts = 3;
    string faculty[2] = {"Ramesh","Suresh"};
    string name,pass;
    string password[2] = {"a123","b123"};
    while(attempts > 0){
        cout << "\nenter username: ";
        cin >> username;
        cout << "enter password: ";
        cin >> pass;

        for(int i = 0; i<2; i++){
            if(faculty[i] == name && password[i] == pass ){
                student(2);
                attempts = 0;
                break;
            }
        
        
    }
    return 0;
}

int student(int person){
    int attempts = 3;
    string username, pass;
    string user[3]  ={ "anu", "malu", "raju"};
    string name[3] = {"Anagha S","Malavika Vinod","Rajesh R"};
    string password[3] = {"anu123","malu123", "raju123"};
    int chem[3] = {96, 97, 68};
    int phy[3] = {79, 98, 100};
    int math[3] = {100, 65, 87};
    
    if (person == 1){
        while(attempts > 0){
            cout << "\nenter username: ";
            cin >> username;
            cout << "enter password: ";
            cin >> pass;
            
            for(int i = 0; i<3; i++){
                if(user[i] == username && password[i] == pass ){
                    cout << "Name: "<< name[i]<< endl;
                    cout << "Chemistry: "<< chem[i]<<endl;
                    cout << "Physics: "<< phy[i]<< endl;
                    cout << "Maths: "<< math[i]<<endl;
                    attempts = 0;
                    break;
                }
                else{
                    cout << "Your credentials doesn't match, you've got "<< attempts-1 << " attempts left\n";
                    attempts--;
                    break;
                }
            }
        }
    }
    if(person == 2){
        for(int i = 0; i<3; i++){
            cout << "username: " << user[i] <<endl;
            cout << "Chemistry: "<< chem[i]<<endl;
            cout << "Physics: "<< phy[i]<< endl;
            cout << "Maths: "<< math[i]<<endl;
            cout << "\n";
    }}
 
    return 0;
}


int main(){
    int login;
    while(true){
        cout << "1. Student\t 2.Faculty\nEnter 0 to exit\n";
        cin >> login;
        if (login == 1){
            student(1);
        }
        else if(login == 2){
            faculty();
        }
        else if(login==0){break;}
        }
    return 0;
}