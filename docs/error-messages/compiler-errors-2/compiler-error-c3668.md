---
title: "Errore del compilatore C3668 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3668"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3668"
ms.assetid: 53a96698-bde4-4447-95b5-b5108291f60c
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C3668
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'metodo': il metodo con indicatore di override 'override' non ha eseguito l'override di alcun metodo delle classi base  
  
 Una funzione ha tentato di eseguire l'override di una funzione non esistente.  
  
 Per ulteriori informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3668:  
  
```  
// C3668.cpp  
// compile with: /c  
__interface I {  
   void f(int);   // virtual by default  
};  
  
class J {  
public:  
   void g(int);  
   virtual void h(int);  
};  
  
struct R : I,J {  
   virtual void f() override {}   // C3668  
   virtual void f(int) override {}   // OK  
  
   virtual void g(int) override {}   // C3668  
   virtual void h(int) override {}   // OK  
};  
```