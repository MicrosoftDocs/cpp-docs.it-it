---
title: "Istruzione di espressione (C) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "istruzioni di espressione"
  - "istruzioni, espressione"
ms.assetid: 1085982b-dc16-4c1e-9ddd-0cd85c8fe2e3
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione di espressione (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un'istruzione di espressione viene eseguita, l'espressione viene valutata in base alle regole descritte in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md).  
  
## Sintassi  
 *expression\-statement*:  
 *expression*  opt **;**  
  
 Tutti gli effetti collaterali derivanti dalla valutazione delle espressioni vengono completati prima che venga eseguita l'istruzione successiva.  Un'istruzione di espressione vuota viene definita un'istruzione null.  Per ulteriori informazioni, vedere [Istruzione null](../c-language/null-statement-c.md).  
  
 In questi esempi vengono illustrate le istruzioni di espressione.  
  
```  
x = ( y + 3 );            /* x is assigned the value of y + 3  */  
x++;                      /* x is incremented                  */  
x = y = 0;                /* Both x and y are initialized to 0 */  
proc( arg1, arg2 );       /* Function call returning void      */  
y = z = ( f( x ) + 3 );   /* A function-call expression        */  
```  
  
 Nell'ultima istruzione l'espressione di chiamata di funzione, ovvero il valore dell'espressione, che include qualsiasi valore restituito dalla funzione, viene incrementato di 3 e viene quindi assegnato a entrambe le variabili `y` e `z`.  
  
## Vedere anche  
 [Istruzioni](../c-language/statements-c.md)