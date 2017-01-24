---
title: "Errore del compilatore C3496 | Microsoft Docs"
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
  - "C3496"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3496"
ms.assetid: e19885f2-677f-4c1e-bc69-e35852262dc3
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3496
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'this' viene sempre acquisito per valore. '&' verrà ignorato  
  
 Non è possibile acquisire il puntatore `this` per riferimento.  
  
### Per correggere l'errore  
  
-   Acquisire il puntatore `this` per valore.  
  
## Esempio  
 L'esempio seguente genera l'errore C3496 perché nell'elenco di acquisizione di un'espressione lambda compare un riferimento al puntatore `this`:  
  
```  
// C3496.cpp // compile with: /c class C { void f() { [&this] {}(); // C3496 } };  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)