---
title: Algoritmi (C++ moderno) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 6f758d3c-a7c7-4a50-92bb-97b2f6d4ab27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ce233b4ffa33873b752ebc409fb8570856acbff
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940199"
---
# <a name="algorithms-modern-c"></a>Algoritmi (C++ moderno)
Per la programmazione C++ moderna, è consigliabile usare gli algoritmi nel [libreria Standard C++](../standard-library/cpp-standard-library-reference.md). Di seguito sono riportati alcuni esempi importanti:  
  
-   **for_each**, che è l'algoritmo di attraversamento predefinito. (Anche **trasformare** per la semantica non-in-place.)  
  
-   **find_if**, che è l'algoritmo di ricerca predefinito.  
  
-   **ordinamento**, **lower_bound**e altri predefinito a ordinamento e ricerca gli algoritmi.  
  
 Per scrivere un criterio di confronto, utilizzare strict **<** e usare *espressioni lambda denominati* quando possibile.  
  
```cpp  
auto comp = [](const widget& w1, const widget& w2)  
      { return w1.weight() < w2.weight(); }  
  
sort( v.begin(), v.end(), comp );  
  
auto i = lower_bound( v.begin(), v.end(), comp );  
```  
  
## <a name="loops"></a>Cicli  
 Quando possibile, usare in base a intervallo **per** cicli chiamate dell'algoritmo e/o, anziché i cicli scritti a mano. **Copia**, **trasformare**, **count_if**, **remove_if**, e altri simili ad essi sono notevolmente migliori dei cicli scritti a mano perché il loro scopo è ovvio che semplificano la scrittura di codice privo di errori. Inoltre, molti algoritmi della libreria Standard C++ includono ottimizzazioni dell'implementazione che li rendono più efficiente.  
  
 Al contrario dei vecchi C++ simile al seguente:  
  
```cpp  
for ( auto i = strings.begin(); i != strings.end(); ++i ) {  
   /* ... */  
}  
  
auto i = v.begin();  
  
for ( ; i != v.end(); ++i ) {  
  if (*i > x && *i < y) break;  
}  
```  
  
 Usare C++ moderno come segue:  
  
```cpp  
for_each( begin(strings), end(strings), [](string& s) {  
   // ...  
} );  
  
auto i = find_if( begin(v), end(v),  [=](int i) { return i > x && i < y; } );  
```  
  
### <a name="range-based-for-loops"></a>Basato su intervallo per i cicli  
 Basato su intervallo **per** ciclo è una C + + 11 funzionalità del linguaggio, non un algoritmo della libreria Standard C++. Ma merita di essere menzionato in questa discussione sui cicli. Basato su intervallo **per** i cicli sono un'estensione delle **per** (parola chiave) e forniscono un modo pratico ed efficiente per scrivere cicli che scorrono un intervallo di valori. I contenitori della libreria Standard C++, stringhe e matrici sono pronti all'uso in base a intervallo **per** cicli. Per abilitare questa nuova sintassi di iterazione per il tipo definito dall'utente, aggiungere il supporto seguente:  
  
-   Oggetto **begin** metodo che restituisce un iteratore all'inizio della struttura e un **end** metodo che restituisce un iteratore alla fine della struttura.  
  
-   Supporto dell'iteratore per questi metodi: * * operatore * **operator! =**, e **operator + +** (versione prefisso).  
  
 Questi metodi possono essere membri o funzioni autonome.  
  
## <a name="random-numbers"></a>Numeri casuali  
 Non è un segreto che la libreria CRT precedente **condizionano** funzione presenti molti difetti, che sono stati trattati in dettaglio nella community di C++. Nel linguaggio C++ moderno, non è necessario gestire tali aspetti negativi, né occorre creare il proprio generatore di numeri casuali distribuito uniformemente, poiché gli strumenti per rapidamente e facilmente la loro creazione sono disponibili nella libreria Standard C++, come illustrato nella [ \<random >](../standard-library/random.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)