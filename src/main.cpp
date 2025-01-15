#include "ide.h"
#include "circular_linked_list_ide.h"

#include <iostream>
#include <string>

int main() {
    LinkedList list;
    list.SayHello();

    int count = 0;
    IDE vscode;
    vscode.setName("vscode");
    std::cout << vscode.getName() << std::endl;
    std::cout << vscode.getId() << std::endl;

    IDE visual_studio("Visual Studio");
    visual_studio.setVersion("v.10010");
    std::cout << visual_studio.getVersion() << std::endl;
    std::cout << visual_studio.getId() << std::endl;

    visual_studio.setType(IdeType::TextEditor);
    std::cout << (int)visual_studio.getType() << std::endl;
    std::cout << visual_studio.getAdress() << std::endl;
    std::cout << vscode.getId() << std::endl;

    return 0;
}