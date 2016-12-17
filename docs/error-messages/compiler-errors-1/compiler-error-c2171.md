---
title: "Errore del compilatore C2171 | Microsoft Docs"
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
  - "C2171"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2171"
ms.assetid: a80343b5-ab3f-4413-b6f1-3ce9d7e519e5
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2171
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': non valido su operandi di tipo 'type'  
  
 Un operatore unario viene usato con un tipo di operando non valido.  
  
## Esempio  
 L'esempio seguente genera l'errore C2171.  
  
```  
// C2171.cpp int main() { double d, d1; d = ~d1;   // C2171 // OK int d2 = 0, d3 = 0; d2 = ~d3; }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C2171.  
  
```  
// C2171_b.cpp // compile with: /c class A { public: A() { STF( &A::D ); } void D() {} void DTF() { (*TF)();   // C2171 (this->*TF)();   // OK } void STF(void (A::*fnc)()) { TF = fnc; } private: void (A::*TF)(); };  
```