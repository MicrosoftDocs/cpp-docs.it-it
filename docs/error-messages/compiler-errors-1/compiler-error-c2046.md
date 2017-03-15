---
title: "Errore del compilatore C2046 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2046"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2046"
ms.assetid: f0c8f9dd-dbd7-4c4a-8838-fde54208ec71
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2046
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

case non valido  
  
 La parola chiave `case` può trovarsi solo all'interno di un'istruzione `switch`.  
  
 L'esempio seguente genera l'errore C2046:  
  
```  
// C2046.cpp int main() { case 0:   // C2046 }  
```  
  
 Possibile soluzione:  
  
```  
// C2046b.cpp int main() { int i = 0; switch(i) { case 0: break; default: break; } }  
```