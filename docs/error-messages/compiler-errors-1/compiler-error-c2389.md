---
title: "Errore del compilatore C2389 | Microsoft Docs"
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
  - "C2389"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2389"
ms.assetid: 6122dc81-4ee3-49a5-a67d-d867808c9bac
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2389
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': operando 'nullptr' non valido  
  
 `nullptr` non può essere un operando.  
  
 L'esempio seguente genera l'errore C2389:  
  
```  
// C2389.cpp // compile with: /clr int main() { throw nullptr;   // C2389 }  
```