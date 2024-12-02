#include "dispersematrix.h"

using namespace std;

void printma(vector<vector<int>> & m){

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    std::vector<std::vector<int>> matriz1 = {
        {24, 0},
        {1, 2},
        
    };


    std::vector<std::vector<int>> matriz2 = {
        {0, 0},
        {3, 4}
        
    }; 

    std::vector<std::vector<int>> matriz3 = {
        {0, 2, 1},
        {1, 2, 2},
        {0, 0, 3},
    };

    std::vector<std::vector<int>> matriz4= {
        {1, 0},
        {12, 0},
    };
    std::vector<std::vector<int>> matriz5 = {
        {1, 2, 0},
        {3, 4, 0},
        {0, 0, 0},
    };
    std::vector<std::vector<int>> matriz11= {
        {1, 2, 3},
        {0, 0, 0},
        {0, 0, 0},
    };
    std::vector<std::vector<int>> matriz6 = {
        {5, 2, 3, 4, 5},
        {1, 6, 4, 5, 6},
        
        
    };
    

    std::vector<std::vector<int>> matriz7 = {
        {0, 0, 0, 12, 0},
        {0, 0, 0, 0, 0},
        {13, 0, 0, 0, 0},
        {0, 0, 14, 0, 0},
        {0, 15, 0, 0, 0},
    };

    std::vector<std::vector<int>> matriz8 = {
        {0, 0, 0, 0, 0, 0, 16},
        {17, 0, 0, 0, 0, 0, 0},
        {0, 18, 0, 0, 0, 0, 0},
        {0, 0, 19, 0, 0, 0, 0},
        {0, 0, 0, 20, 0, 0, 0},
        {0, 0, 0, 0, 21, 0, 0},
        {0, 0, 0, 0, 0, 22, 0},
    };

    std::vector<std::vector<int>> matriz9 = {
        {0, 0, 23, 0, 0},
        {0, 0, 0, 24, 0},
        {25, 0, 0, 0, 26},
        {0, 27, 0, 0, 0},
        {0, 0, 28, 0, 0},
    };

    std::vector<std::vector<int>> matriz10 = {
        {0},
        {1},
        {0},
        {0},
        {0},
        {0},
        {0},
        
    };

    std::vector<std::vector<int>> matriz12= {
        {1, 0},
        {1, 2},
        {0, 0},
        {0, 0},
    };

    std::vector<std::vector<int>> matriz13 = {
        {0, 0, 0, 0, 0, 0, 16},
        {17, 0, 0, 0, 0, 0, 0},
        {0, 18, 0, 0, 0, 0, 0},
        {0, 0, 19, 0, 0, 0, 0},
        {0, 0, 0, 20, 0, 0, 0},
        {0, 0, 0, 0, 21, 0, 0},
        {0, 0, 0, 0, 0, 22, 0},
    };



    std::vector<std::vector<int>> matriz40x20 = {
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 4, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 5, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 5, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 6, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 7, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 4, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24},
        
    };

    std::vector<std::vector<int>> matrizP = {
        {0, 810, 1632, 0, 615, 527, 120, 60, 196, 195, 363},
        {0, 0, 340, 1200, 1394, 0, 0, 0, 0, 0, 121},
        {0, 0, 1156, 690, 0, 578, 0, 180, 0, 675, 473},
        {128, 1305, 884, 870, 0, 459, 0, 0, 476, 570, 429},
        {1184, 315, 680, 1320, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 612, 510, 1599, 289, 0, 0, 252, 510, 0}
    };

    std::vector<std::vector<int>> matrizP2 = {
        {0, 810, 1632, 0, 29, 527, 120, 60, 196, 195, 363},
        {47, 49, 340, 5, 25, 19, 0, 0, 0, 0, 121},
        {0, 34, 16, 690, 0, 578, 0, 180, 0, 675, 473},
        {30, 1305, 884, 870, 0, 459, 0, 0, 476, 570, 429},
        {34, 315, 680, 1320, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 612, 510, 1599, 39, 0, 0, 252, 510, 0}
    };

    std::vector<std::vector<int>> Matriz14 = {
        {0, 1620, 3264, 0, 644, 1054, 240, 120, 392, 390, 726},
        {47, 49, 680, 1205, 1419, 19, 0, 0, 0, 0, 242},
        {0, 34, 1172, 1380, 0, 1156, 0, 360, 0, 1350, 946},
        {158, 2610, 1768, 1740, 0, 918, 0, 0, 952, 1140, 858},
        {1218, 630, 1360, 2640, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1224, 1020, 3198, 328, 0, 0, 504, 1020, 0}
    };
    std::vector<std::vector<int>> Matriz15 = {
        {0, 47, 0, 158, 1218, 0},
        {1620, 49, 34, 2610, 630, 0},
        {3264, 680, 1172, 1768, 1360, 1224},
        {0, 1205, 1380, 1740, 2640, 1020},
        {644, 1419, 0, 0, 0, 3198},
        {1054, 19, 1156, 918, 0, 328},
        {240, 0, 0, 0, 0, 0},
        {120, 0, 360, 0, 0, 0},
        {392, 0, 0, 952, 0, 504},
        {390, 0, 1350, 1140, 0, 1020},
        {726, 242, 946, 858, 0, 0}
    };


    vector<pair<int, int>> vector1;
    for (int i = 1; i <= 5; ++i) {
        vector1.push_back(make_pair(i, 0));
    }

    // Ejemplo 2: Vector de parejas con números aleatorios
    vector<pair<int, int>> vector2;
    vector2.push_back(make_pair(4, 0));
    vector2.push_back(make_pair(0, 1));
    vector2.push_back(make_pair(8, 2));
    vector2.push_back(make_pair(1, 3));
    vector2.push_back(make_pair(2, 4));
    vector2.push_back(make_pair(3, 5));
    vector2.push_back(make_pair(4, 6));

    // Ejemplo 3: Vector de parejas con números negativos
    vector<pair<int, int>> vector3;
    vector3.push_back(make_pair(-1, 0));
    vector3.push_back(make_pair(-3, 0));
    vector3.push_back(make_pair(-5, 0));

    // multiplicacion;
    DisperseMatrix disperse1 (Matriz14);
    DisperseMatrix disperse2 (Matriz15);
    DisperseMatrix disperse3;

    vector<vector<int>> matrix;

    disperse3 = disperse1 * disperse2; 

    matrix = disperse3.rebuild();
    
    disperse3.printMatrix2();
    printf("\nmatriz: \n");
    printma(matrix);
    
    // -----------------------------------------------------

    // get
    /* DisperseMatrix disperse(matriz1);
    int numGet = disperse.get(1,0);
    cout << numGet << endl; */
    // -----------------------------------------------------


    // suma;
    /* DisperseMatrix disperse1 (matriz40x20);
    DisperseMatrix disperse2 (matriz13);
    DisperseMatrix disperse3;

    vector<vector<int>> matrix;

    disperse3 = disperse1 + disperse2; 

    matrix = disperse3.rebuild();
    
    disperse3.printMatrix2();
    printf("\nmatriz: \n");
    printma(matrix); */ 
    
    // -----------------------------------------------------
    // add
    // DisperseMatrix disperse1 (matrizP2);
    // DisperseMatrix disperse2 (matrizP);
    // vector<vector<int>> matrix;
    // disperse2.add(disperse1);
    // disperse2.printMatrix(" . ");
     
    // -----------------------------------------------------

    return 0;
   
    
}


