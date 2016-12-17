---
title: "Errore del compilatore C3609 | Microsoft Docs"
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
  - "C3609"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3609"
ms.assetid: 801e7f79-4ac6-4f8f-955f-703cdf095d00
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3609
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member': una funzione sealed o final deve essere virtuale  
  
 Le parole chiave [sealed](../../windows/sealed-cpp-component-extensions.md) e [final](../../cpp/final-specifier.md) sono consentite solo in una classe, struct o funzione membro contrassegnata come `virtual`.  
  
 L'esempio seguente genera l'errore C3609:  
  
```  
// C3609.cpp  
// compile with: /clr /c  
ref class C {  
   int f() sealed;   // C3609  
   virtual int f2() sealed;   // OK  
};  
```  
  
 **Estensioni gestite per C\+\+**  
  
 L'esempio seguente genera l'errore C3609:  
  
```  
// C3609c.cpp  
// compile with: /clr:oldSyntax /c  
__gc class C {  
   __sealed int f();   // C3609  
   __sealed virtual int f2();   // OK  
};  
```