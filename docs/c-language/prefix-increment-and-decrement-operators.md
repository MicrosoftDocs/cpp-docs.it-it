---
title: "Operatori di incremento e decremento in forma prefissa | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "decremento (operatori)"
  - "decremento (operatori), sintassi"
  - "incremento (operatori), tipi"
ms.assetid: 9a441bb9-d94a-4b6a-9db2-0d0d76bc480d
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Operatori di incremento e decremento in forma prefissa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori unari \(`++` e **––**\) vengono chiamati operatori di decremento o incremento di "prefisso", quando gli stessi operatori di decrementano o incremento si trovano prima dell'operando.  Decremento e incremento suffisso hanno maggiore precedenza, rispetto ad incremento e decremento prefisso.  L'operando deve essere un valore integrale, a virgola mobile o un tipo di puntatore e deve essere un'espressione l\-value modificabile \(un'espressione priva dell'attributo **const**\).  Il risultato è un l\-value.  
  
 Quando l'operatore si trova prima del suo operando, l'operando viene incrementato o decrementato e il suo nuovo valore corrisponde al risultato dell'espressione.  
  
 Un operando di tipo integrale o mobile viene incrementato o decrementato dell'intero 1.  Il tipo del risultato è uguale al tipo di operando.  Un operando di tipo puntatore viene incrementato o decrementato alle dimensioni dell'oggetto che indirizza.  Un puntatore incrementato punta all'oggetto successivo; mentre un puntatore decrementato punta all'oggetto precedente.  
  
## Esempio  
 In questo esempio viene illustrato l'operatore di decremento prefisso unario:  
  
```  
if( line[--i] != '\n' )  
    return;  
```  
  
 In questo esempio, la variabile `i` viene decrementata prima di essere utilizzata come indice in `line`.  
  
## Vedere anche  
 [Operatori unari C](../c-language/c-unary-operators.md)