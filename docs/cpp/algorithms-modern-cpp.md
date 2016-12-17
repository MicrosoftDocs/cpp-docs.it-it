---
title: "Algoritmi (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6f758d3c-a7c7-4a50-92bb-97b2f6d4ab27
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Algoritmi (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per la programmazione C\+\+ moderna, è consigliabile utilizzare gli algoritmi della [Libreria di modelli standard](../standard-library/cpp-standard-library-reference.md).  Ecco alcuni esempi importanti:  
  
-   `for_each`, che è l'algoritmo di attraversamento predefinito. \(Anche `transform` per la semantica non\-sul\-posto\).  
  
-   `find_if`, che è l'algoritmo di ricerca predefinito.  
  
-   `sort`, `lower_bound` e altri algoritmi di ordinamento e di ricerca predefiniti.  
  
 Per scrivere un confronto, utilizzare strict `<` e utilizzare *espressioni lambda denominati* quando possibile.  
  
```cpp  
  
auto comp = [](const widget& w1, const widget& w2)  
      { return w1.weight() < w2.weight(); }  
  
sort( v.begin(), v.end(), comp );  
  
auto i = lower_bound( v.begin(), v.end(), comp );  
  
```  
  
## Loops  
 Quando possibile, utilizzare cicli `for` basati su intervallo o chiamate dell'algoritmo, o entrambe le opzioni, anziché i cicli scritti a mano.  `copy`, `transform`, `count_if`, `remove_if` e altri simili ad essi sono notevolmente migliori dei cicli scritti a mano perché il loro scopo è ovvio e semplificano la scrittura del codice esente da errore.  Inoltre, molti algoritmi STL includono ottimizzazioni dell'implementazione che li rendono più efficienti.  
  
 Anziché il precedente codice C\+\+ simile al seguente:  
  
```cpp  
  
for( auto i = strings.begin(); i != strings.end(); ++i ) {  
  :::  
  :::  
}  
  
auto i = v.begin();  
  
for( ; i != v.end(); ++i ) {  
  if (*i > x && *i < y) break;  
}  
  
```  
  
 Utilizzare il linguaggio C\+\+ moderno come segue:  
  
```cpp  
  
for_each( begin(strings), end(strings), [](string& s) {  
  :::  
  :::  
} );  
auto i = find_if( begin(v), end(v),  [=](int i) { return i > x && i < y; }  );  
  
```  
  
### Cicli for basati su intervallo  
 Il ciclo `for` basato su intervallo è una funzionalità del linguaggio C\+\+ 11, non un algoritmo STL.  Ma merita di essere menzionato in questa discussione sui cicli.  I cicli `for` basati su intervallo sono un'estensione della parola chiave `for` e rappresentano un metodo pratico ed efficace per scrivere cicli che scorrono un intervallo di valori.  I contenitori, le stringhe e le matrici STL sono pronti all'uso con i cicli `for` basati su intervallo.  Per abilitare questa nuova sintassi di iterazione per il tipo definito dall'utente, aggiungere il supporto seguente:  
  
-   Un metodo `begin` che restituisce un iteratore all'inizio della struttura e un metodo `end` che restituisce un iteratore alla fine della struttura.  
  
-   Supporto dell'iteratore per questi metodi: `operator*`, `operator!=` e `operator++` \(versione prefisso\).  
  
 Questi metodi possono essere funzioni membro o autonome.  
  
## Numeri casuali  
 Non è segreto che la funzione CRT `rand()` precedente presenti molti difetti, che sono stati trattati ampiamente dalla community di C\+\+.  In C\+\+ moderno, non è necessario gestire tali aspetti negativi, né definire il proprio generatore di numeri casuali distribuito uniformemente, poiché gli strumenti per crearli rapidamente e in modo semplice sono disponibili nella libreria STL, come illustrato in [\<random\>](../standard-library/random.md).  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)