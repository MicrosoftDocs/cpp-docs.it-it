---
title: "Errore del compilatore C3654 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3654"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3654"
ms.assetid: 57d96e3f-6bbb-4eaa-934b-26c23b4ceb2e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3654
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'testo': errore di sintassi nell'override esplicito  
  
 È stata rilevata una stringa non prevista in un override esplicito.  Per ulteriori informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3654:  
  
```  
// C3654.cpp  
// compile with: /clr /c  
public ref struct B {  
   virtual void f() = 0;  
   virtual void g() = 0;  
   virtual void h() = 0;  
};  
  
public ref struct Q : B {  
   virtual void f() = B::f, 3 {}   // C3654  
   // try the following line instead  
   // virtual void g() = B::g, B::h {}  
};  
```