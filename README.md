# CPPquarium - groupe boulei_n 

CPPquarium est une application graphique pour simuler un aquarium.

## Outils 

Visual Studio 2019
[SFML 2.5](https://www.sfml-dev.org/tutorials/2.5/)

## Installation

1- Vous devez tout d'abord télécharger et installer la bibliothèque SFML 2.5.

2 - Récupérer le projet depuis le gitLab de l'école.

3 - Configuerer votre visual studio [How to](https://www.sfml-dev.org/tutorials/2.5/start-vc.php) avec la bibliothèque SFML.

## Fonctionnement ( UML )

[UML](/uploads/4b6bf0c4508994a03440b2e10c46ac0f/image.png)

Lorsque le joueur clique sur l'écran un poisson est généré. Toutes les 3 secondes une algue apparait, il faut cliquer dessus pour la faire disparaitre.

## Ce qui fonctionne

- Un menu avec accès au jeu.
- Une gestion des sons (Menu et Entités).
- Une gestion des évenements Utilisateur. (Click, Déplacement menu).
- Une gestion des entités avec les éléments demandé. (AbstractEntity -> Character ->Fish et Algues, Factory)
- Une gestion des scores (Poissons, Algues).
- Une gestion du temps sur le jeu (+Algues -> 3, gestion par seconde score).
- Une gestion de map (Tilemap, et tableau de Vertex).
- Une gestion colision poisson aquarium.



## License
[ETNA](https://etna.io/)