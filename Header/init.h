
#if !defined(INIT_H)
#define INIT_H

    typedef struct {
        int numcheval;
        int num_case ;
        int position[2];
    } pion ;
   
    typedef struct {
        int numJoueur;
        char *nomJoueur[30];
        char *couleur[6];
        pion cheval[4];
    } joueur ;

    int nbJoueurs();
    void nomJoueurs(int);
    int ordreJeu(int);
    void viderBuffer();

#endif // INIT_H