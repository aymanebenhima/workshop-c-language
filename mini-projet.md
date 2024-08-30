# Mini-Projet : Système de Gestion de Stock dans une Librairie

## Objectif
Le projet consiste à créer un programme en C qui permet de gérer le stock de livres dans une librairie. Le programme doit offrir les fonctionnalités suivantes :
1. Ajouter un livre au stock.
2. Afficher tous les livres disponibles.
3. Rechercher un livre par son titre.
4. Mettre à jour la quantité d'un livre.
5. Supprimer un livre du stock.
6. Afficher le nombre total de livres en stock.

## Détails du Projet

### 1. Ajouter un Livre au Stock
- Le programme demande les informations suivantes pour chaque livre :
  - Titre du livre.
  - Auteur du livre.
  - Prix du livre.
  - Quantité en stock.
- Les informations sont stockées dans des tableaux distincts pour chaque attribut (titre, auteur, prix, quantité).

### 2. Afficher Tous les Livres Disponibles
- Le programme parcourt les tableaux et affiche les détails de chaque livre (titre, auteur, prix, quantité).

### 3. Mettre à Jour la Quantité d'un Livre
- Le programme permet de modifier la quantité en stock pour un livre donné.
- L'utilisateur spécifie le titre du livre et la nouvelle quantité.

### 4. Supprimer un Livre du Stock
- Le programme permet de supprimer un livre du stock en fonction de son titre.
- Après la suppression, le livre n'apparaît plus dans la liste des livres disponibles.

### 5. Afficher le Nombre Total de Livres en Stock
- Le programme calcule et affiche le nombre total de livres en stock, en additionnant les quantités de tous les livres.

## Fonctionnalités Requises
- **Variables** : Pour stocker les informations des livres (titre, auteur, prix, quantité).
- **Conditions** : Pour rechercher un livre, mettre à jour la quantité, et supprimer un livre.
- **Boucles** : Pour parcourir les livres et afficher leurs détails.
- **Tableaux** : Pour stocker plusieurs attributs des livres.
