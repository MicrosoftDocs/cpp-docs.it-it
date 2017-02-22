---
title: "Classe gslice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::gslice"
  - "std.gslice"
  - "gslice"
  - "valarray/std::gslice"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gslice (classe)"
ms.assetid: f47cffd0-ea59-4b13-848b-7a5ce1d7e2a3
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe gslice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe di utilità per valarray usata per definire subset multidimensionali di valarray.  Se valarray viene considerato come matrice multidimensionale con tutti gli elementi in una matrice, la sezione estrae un vettore dalla matrice multidimensionale.  
  
## Note  
 La classe archivia i parametri che caratterizzano un oggetto di tipo [gslice\_array](../standard-library/gslice-array-class.md).  Il subset di valarray viene costruito indirettamente quando un oggetto di classe gslice viene visualizzato come argomento per un oggetto di classe [valarray](../Topic/valarray::operator.md)**\<Type\>**.  I valori archiviati che specificano il subset selezionato da valarray padre includono:  
  
-   Indice iniziale.  
  
-   Vettore lunghezza di classe **valarray\<size\_t\>**.  
  
-   Vettore stride di classe **valarray\<size\_t\>**.  
  
 I due vettori devono avere la stessa lunghezza.  
  
 Se il set definito da gslice è il subset di un valarray costante, gslice diventa un nuovo valarray.  Se il set definito da gslice è il subset di un valarray non costante, gslice ha una semantica di riferimento al valarray originale.  Il meccanismo di valutazione per i valarray non costanti consente di risparmiare tempo e memoria.  
  
 Le operazioni sui valarray sono consentite solo se i subset di origine e di destinazione definiti dai gslice sono distinti e tutti gli indici sono validi.  
  
### Costruttori  
  
|||  
|-|-|  
|[gslice](../Topic/gslice::gslice.md)|Definisce un subset di un `valarray` formato da più sezioni del `valarray`, che iniziano tutte dall'elemento specificato.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[size](../Topic/gslice::size.md)|Trova i valori della matrice che specificano il numero di elementi in una sezione generale di un `valarray`.|  
|[inizio](../Topic/gslice::start.md)|Trova l'indice iniziale di una sezione generale di un `valarray`.|  
|[stride](../Topic/gslice::stride.md)|Trova la distanza tra gli elementi in una sezione generale di un `valarray`.|  
  
## Requisiti  
 **Intestazione:** \<valarray\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)