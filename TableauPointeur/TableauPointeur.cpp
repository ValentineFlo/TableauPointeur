// TableauPointeur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    int tab[5] = {1, 2, 3, 4, 5};
    int *ptrTab[5];

    for (int i = 0; i < 5; i++)
    {
        ptrTab[i] = &(tab[i]); // a chaque fois que je rentre dans mon tableau, je met  la valeur tab à ptrTab  puis je passe a l'element suivant
    }

   
    for (int i = 0; i < 5; i++)
    {
        std::cout << *(ptrTab[i]) << std::endl;
    }



    return 0;
}

