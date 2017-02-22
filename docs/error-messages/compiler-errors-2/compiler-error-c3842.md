---
title: "Errore del compilatore C3842 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3842"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3842"
ms.assetid: 41a1a44a-c618-40a2-8d26-7da27d14095d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3842
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': qualificatori 'const' e 'volatile' non consentiti con funzioni membro di tipi WinRT o gestiti  
  
 [const](../../cpp/const-cpp.md) e [volatile](../../cpp/volatile-cpp.md) non sono supportati nelle funzioni membro dei tipi Windows Runtime o gestiti.  
  
 L'esempio seguente genera l'errore C3842:  
  
```  
// C3842a.cpp  
// compile with: /clr /c  
public ref struct A {  
   void f() const {}   // C3842  
   void f() volatile {}   // C3842  
  
   void f() {}  
};  
  
```