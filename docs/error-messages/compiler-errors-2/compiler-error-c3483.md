---
title: "Errore del compilatore C3483 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3483"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3483"
ms.assetid: 18b3a2c5-dfc9-4661-9653-08a5798474cf
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3483
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var' fa già parte dell'elenco di acquisizione delle espressioni lambda  
  
 È stata passata più volte la stessa variabile all'elenco di acquisizione di un'espressione lambda.  
  
### Per correggere l'errore  
  
-   Rimuovere tutte le istanze della variabile dall'elenco di acquisizione.  
  
## Esempio  
 L'esempio seguente genera l'errore C3483 perché la variabile `n` è visualizzata più volte nell'elenco di acquisizione di un'espressione lambda:  
  
```  
// C3483.cpp int main() { int m = 6, n = 5; [m,n,n] { return n + m; }(); // C3483 }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)