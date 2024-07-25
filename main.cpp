#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    InitWindow(1200, 800, "sorting");
    SetTargetFPS(40);

    int height[24];
    int i=0,j=0;

    for(int k=0;k<24;k++){
         height[k]= rand() % 800;
    }


    while(!WindowShouldClose()){
        BeginDrawing();

        for(int k=0;k<24;k++){
            DrawRectangle(k*50,00,45,height[k],WHITE);
        }

        ClearBackground(BLACK);
        if(height[j]>height[j+1]){
            int temp=height[j];
            height[j]=height[j+1];
            height[j+1]=temp;
        }
        j=j+1;
        if(j==23){
            j=0;
            i=i+1;
        }
      
        EndDrawing();
    }

    CloseWindow();
    return 0;
}