#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();
        if(m==0)
            return {};
        int n = matrix[0].size();
        if(n==0)
            return {};

        

        int RIGHT=1,DOWN=2,LEFT=3,UP=4;


        std::vector<int> answers;


        int i=0;
        int j=0;


        int RIGHT_WALL=n;
        int LEFT_WALL=-1;
        int UP_WALL=0;
        int DOWN_WALL=m;


        int direction=RIGHT;
        while(answers.size() != m*n)
        {

            if(direction==RIGHT)
            {
                while(j < RIGHT_WALL)
                {
                    answers.push_back(matrix[i][j]);
                    j++;


                }

                direction=DOWN;
                RIGHT_WALL--;
                i++; j--;
            }
            else if(direction == DOWN )
            {
                while(i<DOWN_WALL)
                {
                    answers.push_back(matrix[i][j]);
                    i++;
                }

                direction=LEFT;
                DOWN_WALL--;

                i--; j--;
            }
            else if(direction==LEFT)
            {
                while(j>LEFT_WALL)
                {
                    answers.push_back(matrix[i][j]);

                    j--;
                }

                direction=UP;
                LEFT_WALL++;
                j++; i--;
            }
            else if(direction==UP)
            {
                while(i > UP_WALL)
                {
                    answers.push_back(matrix[i][j]);
                    i--;
                }
                direction=RIGHT;
                UP_WALL++;
                i++; j++;
            }

        }



    


        return answers;
    }
};