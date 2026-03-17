# 🔢 Lecture d’un Clavier Matriciel 4x4 avec Arduino

## 📌 Description

Ce projet Arduino implémente la **lecture d’un clavier matriciel 4x4** sans utiliser de bibliothèque externe.  
Le programme réalise un **scan manuel des lignes et des colonnes** pour identifier quelle touche est pressée.

Le clavier peut être utilisé pour :

- 🔐 **systèmes de contrôle d'accès**
- 🧮 **interfaces de saisie numérique**
- 🚪 **claviers de code (digicode)**
- 🤖 **interfaces utilisateur pour projets embarqués**

Le code fonctionne en **balayant successivement les lignes du clavier** et en lisant l’état des colonnes afin d’identifier la touche appuyée.

---

# ⚙️ Matériel utilisé

- 🟦 **Arduino (Uno / Nano / Mega)**
- 🔢 **Clavier matriciel 4x4**
- 🔌 Fils de connexion
- 🔋 Alimentation Arduino

---

# 🔌 Connexions Arduino

## Lignes du clavier

| Ligne | Pin Arduino |
|------|-------------|
| Ligne 0 | 9 |
| Ligne 1 | 8 |
| Ligne 2 | 7 |
| Ligne 3 | 6 |

## Colonnes du clavier

| Colonne | Pin Arduino |
|--------|-------------|
| Colonne 0 | 5 |
| Colonne 1 | 4 |
| Colonne 2 | 3 |
| Colonne 3 | 2 |

Les **colonnes sont configurées en `INPUT_PULLUP`**, ce qui signifie :

- état **HIGH** → aucune touche pressée  
- état **LOW** → touche pressée

---

# 🧠 Principe de fonctionnement

Le clavier est organisé en **4 lignes × 4 colonnes** :


1 2 3 A
4 5 6 B
7 8 9 C

0 # D


Le programme utilise une méthode appelée **scan matriciel**.

### Étapes :

1️⃣ Une ligne est mise à **LOW** (0V).  
2️⃣ Les autres lignes sont maintenues à **HIGH (5V)**.  
3️⃣ Les colonnes sont lues avec `digitalRead()`.  
4️⃣ Si une colonne passe à **LOW**, cela signifie que la touche correspondante est pressée.

Le processus est répété pour **chaque ligne du clavier**.

---

# 📊 Correspondance des touches

| Ligne | Colonne | Touche |
|------|--------|-------|
| L0 | C0 | 1 |
| L0 | C1 | 2 |
| L0 | C2 | 3 |
| L0 | C3 | A |
| L1 | C0 | 4 |
| L1 | C1 | 5 |
| L1 | C2 | 6 |
| L1 | C3 | B |
| L2 | C0 | 7 |
| L2 | C1 | 8 |
| L2 | C2 | 9 |
| L2 | C3 | C |
| L3 | C0 | * |
| L3 | C1 | 0 |
| L3 | C2 | # |
| L3 | C3 | D |

---

# 🔧 Fonction principale

Le code contient une fonction dédiée :

```cpp
unsigned char touche_clavier()

Cette fonction :

scanne toutes les lignes

détecte la colonne active

retourne le caractère correspondant à la touche pressée

Exemple de retour :

1 2 3 A
4 5 6 B
7 8 9 C
* 0 # D
▶️ Utilisation

1️⃣ Connecter le clavier aux pins indiquées.

2️⃣ Téléverser le programme sur l'Arduino.

3️⃣ Appeler la fonction dans votre loop() pour récupérer la touche pressée :

char touche = touche_clavier();

Ensuite, la touche peut être utilisée pour :

afficher sur un écran

entrer un mot de passe

contrôler un système

💡 Exemple d’application

Ce module peut être utilisé pour créer :

🔐 un digicode d’ouverture de porte

🚗 un système d'accès parking

📟 un menu interactif Arduino

🤖 une interface de commande robot

🚀 Améliorations possibles

Le projet peut être amélioré avec :

⏱ anti-rebond logiciel (debounce)

📟 affichage LCD ou OLED

🔐 gestion de mot de passe

🔔 buzzer de confirmation

📡 connexion à un système IoT

👨‍💻 Auteur

Projet réalisé par Nick

Projet pédagogique Arduino :
Lecture d’un clavier matriciel 4x4 sans bibliothèque