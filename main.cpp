#include "ide.h"
#include <iostream>
#include <string>

int main() {
    int count = 0;
    IDE vscode;
    vscode.setName("vscode");
    std::cout << vscode.getName() << std::endl;

    IDE visual_studio("Visual Studio");

    return 0;
}