---
title: "Errore del compilatore C3069 | Microsoft Docs"
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
  - "C3069"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3069"
ms.assetid: ca94291b-2bb4-4e3f-9acf-534234b83513
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3069
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': non consentito per il tipo di enumerazione  
  
 Un operatore non è supportato per le enumerazioni CLR.  Per altre informazioni, vedere [Operatori ed enumerazioni](../../misc/operators-and-enumerations.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3069:  
  
```  
// C3069.cpp // compile with: /clr enum struct E { e1 }; enum F { f1 }; int main() { E e = E::e1; bool tf; tf = !e;   // C3069 // supported for native enums F f = f1; tf = !f; }  
```