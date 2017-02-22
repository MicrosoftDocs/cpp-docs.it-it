---
title: "Errore del compilatore C3152 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3152"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3152"
ms.assetid: 4ee6e2cd-5d19-4b73-833d-765c35797e4b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3152
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'construct': 'keyword' può essere applicato solo a una classe, una struct o una funzione membro virtuale  
  
 Determinate parole chiave possono essere applicate solo a una classe C\+\+.  
  
 L'esempio seguente genera l'errore C3152 e mostra come risolverlo:  
  
```  
// C3152.cpp  
// compile with: /clr /c  
ref class C {  
   int (*pfn)() sealed;   // C3152  
   virtual int g() sealed;   // OK  
};  
```  
  
 L'esempio seguente genera l'errore C3152 e mostra come risolverlo:  
  
```  
// C3152_2.cpp  
// compile with: /clr:oldSyntax /c  
__value __interface A {};   // C3152;  
__value class X {};   // OK  
```