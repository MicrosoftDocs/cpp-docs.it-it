---
title: "Errore del compilatore C3285 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3285"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3285"
ms.assetid: 04e8f210-d67e-4810-b153-e1efe2986c8f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3285
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

istruzione 'for each' non utilizzabile con variabili di tipo 'type'  
  
 L'istruzione `for each` ripete un gruppo di istruzioni incorporate per ciascun elemento di una matrice o di una raccolta di oggetti.  
  
 Per altre informazioni, vedere [for each, in](../../dotnet/for-each-in.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3285.  
  
```  
// C3285.cpp // compile with: /clr int main() { for each (int i in 0) {}   // C3285 array<int> ^p = { 1, 2, 3 }; for each (int j in p) {}   // OK }  
```