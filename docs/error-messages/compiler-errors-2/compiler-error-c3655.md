---
title: "Errore del compilatore C3655 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3655"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3655"
ms.assetid: 724919ab-2915-4b61-8794-44648e162d62
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3655
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': funzione già sottoposta a override esplicito  
  
 Una funzione non può essere sottoposta a override esplicito due volte.  Per ulteriori informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3655:  
  
```  
// C3655.cpp  
// compile with: /clr /c  
public ref struct B {  
   virtual void f();  
   virtual void g();  
};  
  
public ref struct D : B {  
   virtual void f() new sealed = B::f;  
   virtual void g() new sealed = B::f;   // C3655  
   // try the following line instead  
   // virtual void g() new sealed = B::g;  
};  
```