---
title: "&lt;new&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<new>"
  - "<new>"
  - "std.<new>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nuova intestazione"
ms.assetid: 218e2a15-34e8-4ef3-9122-1e90eccf8559
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# &lt;new&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diversi tipi e funzioni che controllano l'allocazione e la liberazione di spazio di archiviazione nel controllo del programma.  Definisce inoltre i componenti per la segnalazione degli errori di gestione della memoria.  
  
## Sintassi  
  
```  
  
#include <new>  
  
```  
  
## Note  
 Alcune delle funzioni dichiarate in questa intestazione sono sostituibili.   L'implementazione fornisce una versione predefinita, il cui comportamento è illustrato in questo documento.   Un programma può, tuttavia, definire una funzione con la stessa firma per sostituire la versione predefinita in fase di collegamento.  La versione di sostituzione deve soddisfare i requisiti descritti in questo documento.  
  
### Oggetti  
  
|||  
|-|-|  
|[nothrow](../Topic/nothrow%20\(%3Cnew%3E\).md)|Fornisce un oggetto da usare come argomento per le versioni `nothrow` di **new** e **delete**.|  
  
### Typedef  
  
|||  
|-|-|  
|[new\_handler](../Topic/new_handler.md)|Tipo che punta a una funzione appropriata per l'uso come nuovo gestore.|  
  
### Funzioni  
  
|||  
|-|-|  
|[set\_new\_handler](../Topic/set_new_handler.md)|Installa una funzione utente che viene chiamata quando una nuova funzione non riesce nel tentativo di allocare memoria.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator delete](../Topic/operator%20delete%20\(%3Cnew%3E\).md)|Funzione chiamata da un'espressione delete per rendere nuovamente disponibile l'archiviazione di singoli oggetti.|  
|[operator delete&#91;&#93;](../Topic/operator%20delete\(%3Cnew%3E\).md)|Funzione chiamata da un'espressione delete per deallocare memoria per una matrice di oggetti.|  
|[operator new](../Topic/operator%20new%20\(%3Cnew%3E\).md)|La funzione chiamata da un'espressione new per allocare memoria per singoli oggetti.|  
|[operator new&#91;&#93;](../Topic/operator%20new\(%3Cnew%3E\).md)|La funzione chiamata da un'espressione new per allocare memoria per una matrice di oggetti.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe bad\_alloc](../standard-library/bad-alloc-class.md)|La classe descrive un'eccezione generata per indicare che una richiesta di allocazione ha avuto esito negativo.|  
|[Classe nothrow\_t](../standard-library/nothrow-t-structure.md)|La classe viene usata come parametro di funzione per l'operatore new per indicare che la funzione deve restituire un puntatore null per segnalare un errore di allocazione, invece di generare un'eccezione.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)