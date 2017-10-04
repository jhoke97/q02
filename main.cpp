#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;
                                        

  /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */

  //PUT YOUR CODE BELOW THIS LINE
  for(int i = 0; i > wordGrid.size(); i++)
  {
    for(int j = 0; j < wordGrid[j].size(); j++)
    {
      cout << "Row " << i << " Column " << j << " is " << wordGrid[i][j]; 
    }
  }
  return 0;
}




