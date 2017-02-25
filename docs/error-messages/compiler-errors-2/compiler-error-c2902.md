---
title: "Errore del compilatore C2902 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2902"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2902"
ms.assetid: 89d78d0e-78e5-4c2c-a0f9-a60110e9395e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2902
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'token': token imprevisto dopo 'template'. Previsto identificatore  
  
 Il token che segue la parola chiave `template` non è un identificatore.  
  
 L'esempio seguente genera l'errore C2902:  
  
```  
// C2902.cpp // compile with: /c namespace N { template<class T> class X {}; class Y {}; } void g() { N::template + 1;   // C2902 } void f() { N::template X<int> x1;   // OK }  
```  
  
 C2902 può verificarsi anche quando si usano i generics:  
  
```  
// C2902b.cpp // compile with: /clr /c namespace N { generic<class T> ref class GC {}; } void f() { N::generic + 1;   // C2902 N::generic GC<int>^ x; }  
```