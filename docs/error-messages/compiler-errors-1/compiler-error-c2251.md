---
title: "Errore del compilatore C2251 | Microsoft Docs"
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
  - "C2251"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2251"
ms.assetid: fefe050c-f8d3-4316-b237-8007dbcdd3bf
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2251
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

lo spazio dei nomi 'namespace' non contiene il membro 'member' \- Si intendeva 'member'?  
  
 Il compilatore non è riuscito a trovare un identificatore nello spazio dei nomi specificato.  
  
 L'esempio seguente genera l'errore C2251:  
  
```  
// C2251.cpp // compile with: /c namespace A { namespace B { void f1(); } using namespace B; } void A::f1() {}   // C2251 void A::B::f1() {}   // OK  
```