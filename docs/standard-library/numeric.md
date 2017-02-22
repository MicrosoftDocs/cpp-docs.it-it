---
title: "&lt; numeric &gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<numeric>"
  - "std.<numeric>"
  - "<numeric>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "intestazione < numeric >"
ms.assetid: 6d6ccb94-48cc-479b-b4a9-bd9c78d4896a
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# &lt; numeric &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le funzioni di modello del contenitore che eseguono algoritmi per l'elaborazione numerica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <numeric>  
```  
  
## <a name="remarks"></a>Note  
 Tali algoritmi sono simili agli algoritmi STL (Standard Template Library), ma fanno invece parte della libreria C++ standard. Sono tuttavia compatibili con STL e, come gli algoritmi STL, possono operare su diverse strutture di dati. Tra le classi dei contenitori STL, ad esempio, [vettore](vector%20Class.md) e [elenco](../standard-library/list-class.md), strutture di dati definito dal programma e le matrici di elementi che soddisfano i requisiti di un algoritmo specifico. Gli algoritmi raggiungono tale livello di generalità accedendo a e attraversando gli elementi di un contenitore indirettamente tramite gli iteratori. Gli algoritmi consentono di elaborare gli intervalli dell'iteratore che vengono in genere specificati dalle relative posizioni iniziali o finali. Gli intervalli a cui si fa riferimento devono essere validi, ovvero tutti i puntatori negli intervalli devono essere dereferenziabili e, all'interno delle sequenze di ogni intervallo, l'ultima posizione deve essere raggiungibile dalla prima per incremento.  
  
 Gli algoritmi consentono di estendere le azioni supportate dalle operazioni e dalle funzioni membro di ciascun contenitore STL e consentono l'interazione con diversi tipi di oggetti contenitore contemporaneamente.  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[accumulare](../Topic/%3Cnumeric%3E%20functions.md#accumulate)|Calcola la somma di tutti gli elementi di un intervallo specificato, incluso un valore iniziale, calcolando le somme parziali successive oppure calcola il risultato dei risultati parziali successivi ottenuti utilizzando un'operazione binaria specificata anziché l'operazione di somma.|  
|[adjacent_difference](../Topic/%3Cnumeric%3E%20functions.md#adjacent_difference)|Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.|  
|[inner_product](../Topic/%3Cnumeric%3E%20functions.md#inner_product)|Calcola la somma del prodotto tra gli elementi di due intervalli e aggiunge tale somma a un valore iniziale specificato oppure calcola il risultato di una procedura generalizzata in cui le operazioni di somma e prodotto vengono sostituite da altre operazioni binarie specificate.|  
|[Iota](../Topic/%3Cnumeric%3E%20functions.md#iota)|Archivia un valore iniziale a partire dal primo elemento e inserendo gli incrementi successivi del valore (`value++`) in ciascun elemento dell'intervallo `[first, last)`.|  
|[partial_sum](../Topic/%3Cnumeric%3E%20functions.md#partial_sum)|Calcola una serie di somme in un intervallo di input dal primo elemento tramite il *i*elemento th e archivia il risultato di ciascuna somma nel *i*elemento th di un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di somma viene sostituita da un'altra operazione binaria specificata.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

