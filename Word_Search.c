// #include <stdio.h>
// #include <string.h>
// #define row 3
// #define col 4

// int rec(char board[row][col], char word[], int i, int j, int pos, int len, int flag)
// {
//      // printf("i = %d\nj = %d\npos = %d\n",i,j,pos);
//      if (i >= row || j >= col || i < 0 || j < 0)
//           return;
//      if (len <= pos)
//      {
//           flag = 1;
//           return;
//      }
//      if (board[i][j] != word[pos])
//           return;
//      else
//      {
//           board[i][j]='9';
//           pos++;
//           rec(board, word, i + 1, j, pos, len, flag);
//           rec(board, word, i - 1, j, pos, len, flag);
//           rec(board, word, i, j + 1, pos, len, flag);
//           rec(board, word, i, j - 1, pos, len, flag);
//      }
// }

// int ifWordExist(char board[row][col], char word[], int len)
// {
//      int flag = 0;
//      for (int i = 0; i < row; i++)
//      {
//           for (int j = 0; j < col; j++)
//           {
//                if (board[i][j] == word[0])
//                {
//                     rec(board, word, i, j, 0, len, flag);
//                }
//                if (flag == 1)
//                     return 1;
//           }
//      }
//      return 0;
// }

// int main()
// {
//      char board[row][col] = {{'a', 'g', 'b', 'c'},
//                              {'q', 'e', 'e', 'l'},
//                              {'g', 'b', 'k', 's'}};
//      char word[] = "geeks";
//      int len = strlen(word);
//      printf("%d", ifWordExist(board, word, len));
//      return 0;
// }




class Solution
{
public:
     void check(vector<vector<char>> &board, int i, int j, int &flag, string word, int h)
     {
          if (i >= board.size() || j >= board[0].size() || i < 0 || j < 0)
               return;

          if (word.length() <= h)
          {
               flag = 1;
               return;
          }
          if (board[i][j] != word[h])
               return;
          else
          {
               board[i][j] = '9';
               h++;

               check(board, i + 1, j, flag, word, h);
               check(board, i - 1, j, flag, word, h);
               check(board, i, j + 1, flag, word, h);
               check(board, i, j - 1, flag, word, h);
          }
     }
     bool isWordExist(vector<vector<char>> &board, string word)
     {
          int flag = 0;
          for (int i = 0; i < board.size(); i++)
          {
               for (int j = 0; j < board[0].size(); j++)
               {
                    if (board[i][j] == word[0])
                    {
                         check(board, i, j, flag, word, 0);
                    }
                    if (flag == 1)
                         return true;
               }
          }
          return false;
     }
};