---
title: "Operatori di incremento e decremento in forma suffissa C | Microsoft Docs"
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
  - "incremento (operatori), sintassi"
  - "operatori scalari"
  - "tipi [C], scalari"
ms.assetid: 56ba218d-65f9-405f-8684-caccc0ca33aa
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Operatori di incremento e decremento in forma suffissa C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operandi degli operatori di incremento e di decremento in forma suffissa sono tipi scalari che sono l\-value modificabili.  
  
## Sintassi  
 *postfix\-expression*:  
 *postfix\-expression*  **\+\+**  
  
 *postfix\-expression*  **––**  
  
 Il risultato dell'operazione di incremento o di decremento in forma suffissa è il valore dell'operando.  Una volta ottenuto il risultato, il valore dell'operando viene incrementato \(o decrementato\).  Il codice seguente illustra l'operatore di incremento in forma suffissa.  
  
```  
if( var++ > 0 )  
    *p++ = *q++;  
```  
  
 In questo esempio la variabile `var` viene confrontata con 0, quindi viene incrementata.  Se prima di essere incrementato `var` era positivo, viene eseguita l'istruzione successiva.  Innanzitutto, il valore dell'oggetto a cui puntava `q` viene assegnato all'oggetto a cui puntava `p`.  Quindi, `q` e `p` vengono incrementati.  
  
## Vedere anche  
 [Operatori di incremento e decremento in forma suffissa: \+\+ e \-\-](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)