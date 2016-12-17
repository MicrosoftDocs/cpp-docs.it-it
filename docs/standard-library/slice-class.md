---
title: "Classe slice | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "valarray/std::slice"
  - "std.slice"
  - "slice"
  - "std::slice"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "slice (classe)"
ms.assetid: 00f0b03d-d657-4b81-ba53-5a9034bb2bf2
caps.latest.revision: 23
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe slice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe di utilità per valarray usata per definire subset unidimensionali di un elemento valarray padre.  Se valarray viene considerato come una matrice bidimensionale con tutti gli elementi di una matrice, slice estrae un vettore di una dimensione all'esterno della matrice bidimensionale.  
  
## Note  
 La classe archivia i parametri che caratterizzano un oggetto di tipo [slice\_array](../standard-library/slice-array-class.md). Il subset di valarray viene costruito indirettamente quando un oggetto della classe slice viene visualizzato come argomento per un oggetto della classe [valarray](../Topic/valarray::operator.md)**\<Type\>**.  I valori archiviati che specificano il subset selezionato da valarray padre includono:  
  
-   Un indice iniziale in valarray.  
  
-   Una lunghezza totale o un numero di elementi in slice.  
  
-   Uno stride o una distanza tra indici di elementi successivi in valarray.  
  
 Se il set definito da una slice è il subset di un valarray costante, slice è un nuovo valarray.  Se il set definito da una slice è il subset di un valarray non costante, slice contiene una semantica di riferimento al valarray originale.  Il meccanismo di valutazione per i valarray non costanti consente di risparmiare tempo e memoria.  
  
 Le operazioni sui valarray sono consentite solo se i subset di origine e di destinazione definiti dagli slice sono distinti e tutti gli indici sono validi.  
  
### Costruttori  
  
|||  
|-|-|  
|[slice](../Topic/slice::slice.md)|Definisce un subset di un `valarray` che è costituito da un numero di elementi che sono equidistanti e che iniziano da un elemento specificato.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[size](../Topic/slice::size.md)|Trova il numero di elementi in uno slice di un `valarray`.|  
|[inizio](../Topic/slice::start.md)|Trova l'indice iniziale di uno slice di un `valarray`.|  
|[stride](../Topic/slice::stride.md)|Trova la distanza tra gli elementi in uno slice di un `valarray`.|  
  
## Requisiti  
 **Intestazione:** \<valarray\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)