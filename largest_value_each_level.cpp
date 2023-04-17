// User function Template for C++

class Solution
{
public:
     vector<int> largestValues(Node *root)

     {

          vector<int> v;

          queue<Node *> q;

          q.push(root);

          while (!q.empty())

          {

               int n = q.size();

               int maxx = INT_MIN;

               for (int i = 0; i < n; i++)

               {

                    Node *temp = q.front();

                    if (maxx < temp->data)

                    {

                         maxx = temp->data;
                    }

                    if (temp->left)

                    {

                         q.push(temp->left);
                    }

                    if (temp->right)

                    {

                         q.push(temp->right);
                    }

                    q.pop();
               }

               v.push_back(maxx);
          }

          return v;
     }
};