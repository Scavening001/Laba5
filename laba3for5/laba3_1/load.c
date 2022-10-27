#include "load.h"
#include "func.h"
#include <stdio.h>
#include <windows.h>
void Load(const char* const s)
{
    void* lib;
    void (*fun)(void);
    lib = LoadLibrary(s);
    if(!lib)
    {
        printf("cannot open library '%s'\n", s);
        return;
    }
    fun = (void (*)(void))GetProcAddress((HINSTANCE)lib, "func");
    if(fun == NULL)
    {
        printf("cannot load function func\n");
    }
    else{
        fun();
    }
    FreeLibrary((HINSTANCE)lib);
}
