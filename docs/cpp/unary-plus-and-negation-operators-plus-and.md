---
title: "Operatori pi&#249; e operatori di negazione unari: + e - | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "+"
  - "-"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "- (operatore)"
  - "+ (operatore)"
  - "+ (operatore), operatori unari"
  - "negazione (operatore)"
  - "operatori unari, plus"
ms.assetid: 2c58c4f4-0d92-4ae3-9d0c-1a6157875cc1
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori pi&#249; e operatori di negazione unari: + e -
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
+ cast-expression  
```  
  
```  
  
- cast-expression  
  
```  
  
## \+ \(operatore\)  
 Il risultato dell'operatore unario più \(**\+**\) è il valore del relativo operando.  L'operando dell'operatore unario più deve essere un tipo aritmetico.  
  
 La promozione a intero viene eseguita su operandi integrali.  Il tipo risultante è il tipo a cui l'operando viene promosso.  Pertanto l'espressione `+ch`, dove `ch` è di tipo `char`, determina il tipo `int`, mentre il valore rimane invariato.  Per altre informazioni sulle modalità di esecuzione della promozione, vedere [Promozioni a intero](../misc/integral-promotions.md).  
  
## \- \(operatore\)  
 L'operatore di negazione unario \(**–**\) produce il corrispondente negativo del relativo operando.  L'operando nell'operatore di negazione unario deve essere un tipo aritmetico.  
  
 La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso.  Per altre informazioni sulle modalità di esecuzione della promozione, vedere [Promozioni a intero](../misc/integral-promotions.md).  
  
## Sezione specifica Microsoft  
 La negazione unaria di quantità senza segno viene eseguita sottraendo il valore dell'operando da 2^n, dove n è il numero di bit in un oggetto di tipo specificato senza segno.  Microsoft C\+\+ viene eseguito su processori che usano l'aritmetica di complementi a due.  In altri processori l'algoritmo per la negazione può variare.  
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)