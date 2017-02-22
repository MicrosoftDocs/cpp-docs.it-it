---
title: "&lt; tuple &gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<tuple>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tuple (intestazione) [TR1]"
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# &lt; tuple &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce un modello `tuple` le cui istanze contengono oggetti di tipi diversi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <tuple>  
```  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[tupla](../standard-library/tuple-class.md)|Esegue il wrapping di una sequenza di lunghezza fissa di elementi.|  
|[Classe tuple_element](../standard-library/tuple-element-class-tuple.md)|Esegue il wrapping del tipo di un elemento `tuple`.|  
|[Classe tuple_size](../standard-library/tuple-size-class-tuple.md)|Esegue il wrapping del conteggio di elementi `tuple`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore = =](../Topic/%3Ctuple%3E%20operators.md#operator_eq_eq)|Confronto tra `tuple` oggetti, uguale|  
|[operatore! =](../Topic/%3Ctuple%3E%20operators.md#operator_neq)|Confronto tra `tuple` oggetti, non uguali|  
|[operatore <](../Topic/%3Ctuple%3E%20operators.md#operator_lt_)|Confronto tra `tuple` oggetti, minore di|  
|[operatore < =](../Topic/%3Ctuple%3E%20operators.md#operator_lt__eq)|Confronto tra `tuple` oggetti, minore o uguale|  
|[operatore >](../Topic/%3Ctuple%3E%20operators.md#operator_gt_)|Confronto tra `tuple` oggetti, maggiore di|  
|[operatore > =](../Topic/%3Ctuple%3E%20operators.md#operator_gt__eq)|Confronto tra `tuple` oggetti, maggiori o uguali|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[Ottieni](../Topic/%3Ctuple%3E%20functions.md#get_function)|Ottiene un elemento da un oggetto `tuple`.|  
|[make_tuple](../Topic/%3Ctuple%3E%20functions.md#make_tuple_function)|Rende un `tuple` dai valori di elemento.|  
|[tie](../Topic/%3Ctuple%3E%20functions.md#tie_function)|Rende un `tuple` dai riferimenti agli elementi.|  
  
## <a name="see-also"></a>Vedere anche  
 [\< matrice>](../standard-library/array.md)

