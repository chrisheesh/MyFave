#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main(){
  string input = "";
  vector<string> favorites;

  do{
    if( favorites.size() == 0 ){
      cout << "What is your favorite?\n";
    }
    else{
      cout << "What is your next favorite?\n";
    }
//<<<<<<< main
    
    std::getline(std::cin, input);
    //cin >> input;
    //list.push_back(input);
//=======
    //cin >> input;
    favorites.push_back(input);
//>>>>>>> main
  }while( input != "done" );

  list.pop_back();
  
  cout << "Your favorite list:\n";
  for(int i = 0; i < favorites.size(); i++){
    cout << favorites.at(i) << endl;
  }

  return 0;
}
