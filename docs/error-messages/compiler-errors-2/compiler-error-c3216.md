---
title: "Errore del compilatore C3216 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3216"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3216"
ms.assetid: bbab1efe-8779-4489-8bb0-b11e45f5cbe5
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3216
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il vincolo deve essere un parametro generico, non 'type'  
  
 Un vincolo non è stato creato nel formato corretto.  
  
 L'esempio seguente genera l'errore C3216:  
  
```  
// C3216.cpp // compile with: /clr interface struct A {}; generic <class T> where F : A   // C3216 // Try the following line instead: // where T : A    // C3216 ref class C {};  
```  
  
 L'esempio seguente illustra una possibile soluzione:  
  
```  
// C3216b.cpp // compile with: /clr /c interface struct A {}; generic <class T> where T : A ref class C {};  
```