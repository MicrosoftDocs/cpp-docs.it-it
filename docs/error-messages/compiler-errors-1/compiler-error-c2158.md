---
title: "Errore del compilatore C2158 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2158"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2158"
ms.assetid: 39028899-e95c-4809-8e65-6111118641ee
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# Errore del compilatore C2158
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': la direttiva \#pragma make\_public è correntemente supportata solo per i tipi non modello nativi  
  
 Il pragma [make\_public](../../preprocessor/make-public.md) può essere applicato solo a un tipo non modello nativo.  
  
## Esempio  
 L'esempio seguente genera l'errore C2158.  
  
```  
// C2158.cpp // compile with: /clr /c ref class A {}; #pragma make_public(A)   // C2158 template< typename T > class B {}; #pragma make_public(B)   // C2158 #pragma make_public(B<int>)   // C2158 void C () {} #pragma make_public(C)   // C2158 class D {}; #pragma make_public(D)   // OK  
```