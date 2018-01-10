---
title: Algoritmi (C++ moderno) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 6f758d3c-a7c7-4a50-92bb-97b2f6d4ab27
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5d89f6b5116459018cb50eb58b976f6f853ed088
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="algorithms-modern-c"></a>Algoritmi (C++ moderno)
Per la programmazione C++ moderna, si consiglia di utilizzare gli algoritmi di [della libreria Standard C++](../standard-library/cpp-standard-library-reference.md). Di seguito sono riportati alcuni esempi importanti:  
  
-   `for_each`, che è l'algoritmo di attraversamento predefinito. (Anche `transform` per la semantica non sul posto.)  
  
-   `find_if`, che è l'algoritmo di ricerca predefinito.  
  
-   `sort`, `lower_bound`e il predefinito algoritmi di ricerca e ordinamento.  
  
 Per scrivere un criterio di confronto, utilizzare strict `<` e utilizzare *denominato le espressioni lambda* quando è possibile.  
  
```cpp  
auto comp = [](const widget& w1, const widget& w2)  
      { return w1.weight() < w2.weight(); }  
  
sort( v.begin(), v.end(), comp );  
  
auto i = lower_bound( v.begin(), v.end(), comp );  
```  
  
## <a name="loops"></a>Cicli  
 Quando possibile, utilizzare basata sull'intervallo `for` cicli algoritmo chiamate e/o, invece di cicli scritta manualmente.`copy`, `transform`, `count_if`, `remove_if`, e altri come queste sono meglio cicli scritte a mano in quanto il loro scopo è evidente e semplificano la scrittura di codice privo di errori. Inoltre, molti algoritmi della libreria Standard C++ sono le ottimizzazioni di implementazione che li rendono più efficiente.  
  
 Invece di C++ precedenti simile al seguente:  
  
```cpp  
for ( auto i = strings.begin(); i != strings.end(); ++i ) {  
   /* ... */  
}  
  
auto i = v.begin();  
  
for ( ; i != v.end(); ++i ) {  
  if (*i > x && *i < y) break;  
}  
```  
  
 Usare C++ moderno simile al seguente:  
  
```cpp  
for_each( begin(strings), end(strings), [](string& s) {  
   // ...  
} );  
  
auto i = find_if( begin(v), end(v),  [=](int i) { return i > x && i < y; } );  
```  
  
### <a name="range-based-for-loops"></a>Basato su intervallo per i cicli  
 Basato su intervallo `for` ciclo è una 11 linguaggio funzionalità di C++, non un algoritmo della libreria Standard C++. Ma che merita menzione in questa discussione sui cicli. Basato su intervallo `for` cicli sono un'estensione del `for` (parola chiave) e fornire un modo semplice ed efficiente per scrivere cicli che eseguire l'iterazione su un intervallo di valori. Contenitori della libreria Standard C++, stringhe e matrici sono pronti per basata sull'intervallo `for` cicli. Per abilitare questa nuova sintassi di iterazione per il tipo definito dall'utente, aggiungere il supporto seguente:  
  
-   Oggetto `begin` metodo che restituisce un iteratore all'inizio della struttura e un `end` metodo che restituisce un iteratore alla fine della struttura.  
  
-   Supporto di iteratore per questi metodi: `operator*`, `operator!=`, e `operator++` (versione prefisso).  
  
 Questi metodi possono essere membri o funzioni autonome.  
  
## <a name="random-numbers"></a>Numeri casuali  
 Non è un segreto che CRT precedente `rand()` funzione dispone di molti punti deboli, che sono stati descritti in modo approfondito nella community di C++. Nel linguaggio C++ moderno, non è necessario gestire tali punti deboli, né è necessario inventare proprio generatore di numeri casuali distribuito in modo uniforme, perché gli strumenti per rapidamente e facilmente la loro creazione sono disponibili nella libreria C++ Standard, come illustrato nella [ \<casuale >](../standard-library/random.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)