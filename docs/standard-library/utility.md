---
title: "&lt;utility&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<utility>"
  - "utility/std::<utility>"
  - "std.<utility>"
  - "std::<utility>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "utility (intestazione)"
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# &lt;utility&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce i tipi, le funzioni e gli operatori della libreria di modelli standard che semplificano la costruzione e la gestione di coppie di oggetti, utili quando è necessario considerare due oggetti come se fossero uno solo.  
  
## Sintassi  
  
```  
  
#include <utility>  
  
```  
  
## Note  
 Le coppie sono ampiamente usate nella Libreria standard di C\+\+.  Sono necessarie sia come argomenti e valori restituiti per diverse funzioni sia come tipi di elemento per contenitori quali la [classe map](../standard-library/map-class.md) e la [classe multimap](../standard-library/multimap-class.md).  L'intestazione \<utility\> viene inclusa automaticamente da \<map\> per semplificare la gestione dei rispettivi elementi di tipi coppia chiave\/valore.  
  
### Classi  
  
|||  
|-|-|  
|[tuple\_element](../standard-library/tuple-element-class-utility.md)|Classe che esegue il wrapping del tipo di un elemento `pair`.|  
|[tuple\_size](../standard-library/tuple-size-class-utility.md)|Classe che esegue il wrapping di un conteggio di elementi `pair`.|  
  
### Funzioni  
  
|||  
|-|-|  
|[forward](../Topic/forward.md)|Impedisce che il tipo di riferimento \(`lvalue` o `rvalue`\) dell'argomento venga nascosto dall'inoltro perfetto.|  
|[get](../Topic/get%20Function%20%3Cutility%3E.md)|Funzione che ottiene un elemento da un oggetto `pair`.|  
|[make\_pair](../Topic/make_pair.md)|Funzione di supporto del modello usata per costruire oggetti di tipo `pair`, in cui i tipi di componenti sono basati sui tipi di dati passati come parametri.|  
|[move](../Topic/move.md)|Restituisce l'argomento passato sotto forma di riferimento `rvalue`.|  
|[swap](../Topic/swap%20\(%3Cutility%3E\).md)|Scambia gli elementi di due oggetti `pair`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/operator!=%20\(%3Cutility%3E\).md)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|  
|[operator\=\=](../Topic/operator==%20\(%3Cutility%3E\).md)|Verifica se l'oggetto pair a sinistra dell'operatore è uguale all'oggetto pair a destra.|  
|[operator\<](../Topic/operator%3C%20\(%3Cutility%3E\).md)|Verifica se l'oggetto pair a sinistra dell'operatore è minore dell'oggetto pair a destra.|  
|[operator\<\=](../Topic/operator%3C=%20\(%3Cutility%3E\).md)|Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.|  
|[operator\>](../Topic/operator%3E%20\(%3Cutility%3E\).md)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore dell'oggetto pair a destra.|  
|[operator\>\=](../Topic/operator%3E=%20\(%3Cutility%3E\).md)|Verifica se l'oggetto pair a sinistra dell'operatore è maggiore o uguale all'oggetto pair a destra.|  
  
### Struct  
  
|||  
|-|-|  
|[identity](../standard-library/identity-structure.md)||  
|[pair](../standard-library/pair-structure.md)|Tipo che permette di considerare due oggetti come un singolo oggetto.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)