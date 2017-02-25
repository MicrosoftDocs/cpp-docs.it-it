---
title: "Errore del compilatore C3482 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3482"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3482"
ms.assetid: bf99558e-bef4-421c-bb16-dcd9c54c1011
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3482
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

è possibile utilizzare 'this' come acquisizione di espressioni lambda solo all'interno di una funzione membro non statica  
  
 Non è possibile passare `this` all'elenco di acquisizione di un'espressione lambda dichiarata in un metodo statico o in una funzione globale.  
  
### Per correggere l'errore  
  
-   Convertire la funzione contenitore in un metodo non statico oppure  
  
-   Rimuovere il puntatore `this` dall'elenco di acquisizione dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3482:  
  
```  
// C3482.cpp // compile with: /c class C { public: static void staticMethod() { [this] {}(); // C3482 } };  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)