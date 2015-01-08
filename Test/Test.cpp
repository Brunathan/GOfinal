
#include "..\GO-VS\Jeu.h"

#include <gtest/gtest.h>
#include <iostream>

TEST(test_jouable, depasse)
{
    Jeu nouvJeu(5);
    Coord C(-5,-5);
    EXPECT_FALSE(nouvJeu.jouable(C,1));
    EXPECT_FALSE(nouvJeu.jouable(C,-1));
}

TEST(test_vivant, vide)
{
    Jeu nouvJeu(5);
    Coord C(0,0);
    
    EXPECT_TRUE(nouvJeu.jouable(C,1));
    EXPECT_TRUE(nouvJeu.jouable(C,-1));
}

TEST(test_test, nbvides)
{
    Jeu nouvJeu(5);
    Coord C(0,0);
    int* couleur=new int;
    *couleur=2;

	int i;
	std::cin>>i;
    EXPECT_EQ(nouvJeu.test(C,couleur),nouvJeu.P->getTaille()*nouvJeu.P->getTaille());
}
