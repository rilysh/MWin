// Copyright (C) 2018-2020 MathInDOS
// License: BSLv1.0

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[])
{
    if(argv[1]==NULL){return 1;}
    if(!strcmp(argv[1], "/?") || !strcmp(argv[1], "-h"))
    {
        printf("MoveWindow Version-1.0\nCopyright(C) 2018-2020 MathInDOS\nBuild Date: 07 December 2020\n\nUsage:\nmovwin [Window Name] [X Coord] [Y Coord]\n\nNote: Rewrite title Window isn't moveable. ");
    return 0;
    }else{
    RECT rect;
    HWND hwnd = NULL;
    if(argv[1]==NULL)return 1;
    hwnd = FindWindow(NULL, argv[1]);
    if(argv[2]==NULL)return 1;
    if(argv[3]==NULL)return 1;
    int x = atol(argv[2]);
    int y = atol(argv[3]);
    if(hwnd==NULL) return 1;
    GetWindowRect(hwnd, &rect);

    if(x < 0 || y < 0)return 1;
    SetWindowPos(hwnd, HWND_TOP, x, y, rect.right-rect.left, rect.bottom-rect.top, 0);
    return 0;

    
    }
}
