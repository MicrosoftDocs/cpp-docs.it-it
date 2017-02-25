---
title: "Errore del compilatore C3246 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3246"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3246"
ms.assetid: ad85224a-e540-479b-a5eb-a3bc3964c30b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3246
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': impossibile ereditare da 'type' perché dichiarata come 'sealed'  
  
 Una classe contrassegnata come [sealed](../../misc/sealed.md) non può essere la classe base per un'altra classe.  
  
 L'esempio seguente genera l'errore C3246:  
  
```  
// C3246_2.cpp // compile with: /clr /LD ref class X sealed {}; ref class Y : public X {}; // C3246  
```  
  
 L'esempio seguente genera l'errore C3246:  
  
```  
// C3246.cpp // compile with: /clr:oldSyntax /LD #using <mscorlib.dll> __sealed __gc class X {}; __gc class Y : public X {}; // C3246  
```