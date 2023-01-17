#include<iostream>
using namespace std;

int main(){
    int print_control_x = 1;
    int print_control_y = 5 * 2 - 1;

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5 * 2; i++)
    {
      if (j == print_control_x || j == print_control_y)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }
    }
    print_control_x++;
    print_control_y--;
    printf("\n");
  }

}