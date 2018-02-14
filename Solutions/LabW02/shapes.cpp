#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>

void drawLine(int len, const char* pattern);
void drawRectangle(int width, int height);
void drawFramedRectangle(int width, int height);
void drawFramedRectangleWithCorners(int width, int height);
void drawHalfFilledRectangle(int width, int height);
void drawMuliplicationTable(int n, int m);

int main(int argc, char** argv){
    int shape;
    
    if (argc < 2){
        std::cout << "invalid number of arguments" << std::endl;
        return -1;
    }
    
    shape = atoi(argv[1]);
    if (shape == 1){
        if (argc != 3){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawLine(atoi(argv[2]), "*");
    } else if (shape == 2){
        if (argc != 3){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawLine(atoi(argv[2]), "...---... ");
    } else if (shape == 3){
        if (argc != 3){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawRectangle(atoi(argv[2]), atoi(argv[2]));
    } else if (shape == 4){
        if (argc != 4){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawRectangle(atoi(argv[2]), atoi(argv[3]));
    } else if (shape == 5){
        if (argc != 4){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawFramedRectangle(atoi(argv[2]), atoi(argv[3]));
    } else if (shape == 6){
        if (argc != 4){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawFramedRectangleWithCorners(atoi(argv[2]), atoi(argv[3]));
    } else if (shape == 7){
        if (argc != 4){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawHalfFilledRectangle(atoi(argv[2]), atoi(argv[3]));
    } else if (shape == 8){
        if (argc != 4){
            std::cout << "invalid number of arguments" << std::endl;
            return -1;
        }
        drawMuliplicationTable(atoi(argv[2]), atoi(argv[3]));
    } else {
        std::cout << "Invalid shape choice: " << shape << std::endl;
        return -2;
    }
}

void drawLine(int len, const char* pattern){
    for (int i = 0; i < len; i++){
        std::cout << pattern;
    }
    std::cout << std::endl;
}

void drawRectangle(int width, int height){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void drawFramedRectangle(int width, int height){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 0 || i == height-1 || j == 0 || j == width-1){
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void drawFramedRectangleWithCorners(int width, int height){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if ((i == 0 && j == 0) || (i==0 && j==width-1) || (i == height-1 && j == 0) || (i == height-1 && j == width-1)){
                std::cout << "+";
            } else if (i == 0 || i == height-1){
                std::cout << "-";
            } else if (j == 0 || j == width-1){
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void drawHalfFilledRectangle(int width, int height){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 0 || i == height-1 || j == 0 || j == width-1){
                std::cout << "*";
            } else if ((i + (j % 2)) % 2 == 0){
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void drawMuliplicationTable(int n, int m){
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            std::cout << std::setw(4);
            std::cout << i*j;
        }
        std::cout << std::endl;
    }
}