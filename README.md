# projetalgo
# 💣 Mission Logic Bomb - Système de Désamorçage de Sécurité

Bienvenue dans le programme de simulation de désamorçage de sécurité en console. Ce projet en langage C simule un scénario d'urgence où un agent doit s'authentifier, calibrer une fréquence instable et synchroniser des verrous mécaniques pour neutraliser une charge explosive.

---

## 📋 Fonctionnalités du Programme

Le programme s'articule autour de 4 phases clés de sécurité :

### Phase 1 : Authentification de l'Agent
* Demande le **Nom**, le **Prénom** et l'**Âge** de l'opérateur.
* Intègre une gestion d'espaces pour les noms composés.
* Système d'aiguillage automatique : un agent mineur bascule en **Mode Entraînement**, tandis qu'un agent majeur obtient un **Accès Expert**.

### Phase 2 : Calibrage de Fréquence
* Génération d'une fréquence secrète aléatoire et imprévisible comprise entre **1 et 100 Hz**.
* L'agent dispose d'un capital de **8 essais** pour verrouiller la bonne fréquence.
* Le système fournit des indications dynamiques en temps réel (*Fréquence trop BASSE* ou *Fréquence trop HAUTE*).

### Phase 3 : Synchronisation des Cadrans
* En cas de succès au calibrage, le système initie le déblocage des verrous rotatifs.
* Test automatisé et affichage de toutes les combinaisons possibles entre le **Cadran A** (positions 1 à 3) et le **Cadran B** (positions 1 à 3).

### Phase 4 : Conclusion de Mission
* **Scénario Victoire :** Désamorçage complet avec message personnalisé de félicitations affichant l'identité de l'agent.
* **Scénario Échec :** Détonation de la charge (`BOOM !!!`) si les 8 essais sont épuisés, révélant la fréquence correcte.

---

## 🛠️ Prérequis & Compilation

Pour exécuter ce programme, vous devez disposer d'un compilateur C (comme `codeblocks`).

