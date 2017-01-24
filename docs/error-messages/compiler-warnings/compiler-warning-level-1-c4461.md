---
title: "Avviso del compilatore (livello 1) C4461 | Microsoft Docs"
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
  - "C4461"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4461"
ms.assetid: 104ffecc-3dd4-4cb1-89a8-81154fbe46d9
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4461
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': questa classe ha un finalizzatore 'finalizzatore' ma non un distruttore 'dtor'  
  
 La disponibilità di un finalizzatore all'interno di un tipo implica la presenza di risorse da eliminare.  A meno che il finalizzatore non venga chiamato esplicitamente dal distruttore del tipo, Common Language Runtime determina quando eseguirlo dopo l'uscita degli oggetti dall'ambito.  
  
 Se si definisce un distruttore nel tipo e si chiama esplicitamente il finalizzatore dal distruttore, è possibile eseguire il finalizzatore in modo deterministico.  
  
 Per ulteriori informazioni, vedere [Distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4461:  
  
```  
// C4461.cpp  
// compile with: /W1 /clr /c  
ref class A {  
protected:  
   !A() {}   // C4461  
};  
  
// OK  
ref struct B {  
   ~B() {  
      B::!B();  
   }  
  
   !B() {}  
};  
```