---
title: "Errore del compilatore C3210 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3210"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3210"
ms.assetid: c6e9d309-fabc-4e7d-b526-be20d9fe3f6a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3210
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': la dichiarazione di accesso può essere applicata solo ai membri di una classe base  
  
 Una [dichiarazione using](../../cpp/using-declaration.md) è stata specificata in modo non corretto.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3210:  
  
```  
// C3210.cpp  
// compile with: /c  
struct A {  
protected:  
   int i;  
};  
  
struct B {  
   using A::i;   // C3210  
};  
  
struct C : public A {  
   using A::i;   // OK  
};  
```