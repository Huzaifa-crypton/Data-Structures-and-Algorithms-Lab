#include <iostream>
#include <vector>
using namespace std;

class AdjGraph
{
    public:
        int A = [[],[],[],[],[],[]];
        AdjGraph(int vertex)
        {
            for (int i = 0 ; i <= 5 ; i++)
            {
                for (int j = 0 ; j <= 5 ; j ++)
                {
                    A[i][j] = 0;        
                }
            }
        }
        void insertEdge( int a , int b)
        {
            A[a][b] = 1;
        }
        void inverseGraph( int a , int b)
        {
            for (int i = 0 ; i <= 5 ; i++)
            {
                for (int j = 0 ; j <= 5 ; j ++)
                {
                    if (A[i][j] = 1)
                    {
                        A[i][j] = 0;
                        A[j][i] = 1;

                    }
                            
                }
            }
        }
        void displayGraph()
        {
            for (int i = 0 ; i <= 5 ; i++)
            {
                for (int j = 0; j<=5 ; j ++)
                {
                    cout<<A[i][j] << " , ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    int vertex = 6;
    AdjGraph a = new AdjGraph(vertex);
    a.insertEdge (0 , 4);
    a.insertEdge (1 , 3);
    a.displayGraph();


}