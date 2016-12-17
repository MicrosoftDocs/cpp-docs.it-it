---
title: "Errore del compilatore C3243 | Microsoft Docs"
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
  - "C3243"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3243"
ms.assetid: 35d8ad1a-377d-47df-be9d-c55eea23340f
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3243
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nessuna delle funzioni in overload è introdotta da 'interface'  
  
 Si è provato a [eseguire l'override esplicito](../../cpp/explicit-overrides-cpp.md) di un membro che non esiste nell'interfaccia specificata.  
  
 L'esempio seguente genera l'errore C3243:  
  
```  
// C3243.cpp #pragma warning(disable:4199) __interface IX14A { void g(); }; __interface IX14B { void f(); void f(int); }; class CX14 : public IX14A, public IX14B { public: void IX14A::g(); void IX14B::f(); void IX14B::f(int); }; void CX14::IX14A::f()   // C3243 occurs here { }  
```