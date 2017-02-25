---
title: "Avviso del compilatore C4484 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4484"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4484"
ms.assetid: 3d30e5b3-2297-45b7-a37a-1360056fdd0e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore C4484
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione\_override': corrisponde al metodo di classe base di riferimento 'funzione\_classe\_base', ma non è contrassegnato 'virtual', 'new' o 'override'; verrà utilizzato 'new' \(e non 'virtual'\)  
  
 Durante la compilazione con **\/clr**, l'override di una funzione della classe base non verrà eseguito in modo implicito e nella tabella vtable della funzione verrà pertanto inserito un nuovo slot.  Per correggere l'errore, specificare in modo esplicito che la funzione è un override.  
  
 Per ulteriori informazioni, vedere:  
  
-   [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [override](../../windows/override-cpp-component-extensions.md)  
  
-   [new \(new slot in vtable\)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md)  
  
 L'avviso C4484 viene sempre generato come errore.  Per non visualizzarlo, utilizzare il pragma [warning](../../preprocessor/warning.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4484:  
  
```  
// C4484.cpp  
// compile with: /clr  
ref struct A {  
   virtual void Test() {}  
};  
  
ref struct B : A {  
   void Test() {}   // C4484  
};  
  
// OK  
ref struct C {  
   virtual void Test() {}  
   virtual void Test2() {}  
};  
  
ref struct D : C {  
   virtual void Test() new {}  
   virtual void Test2() override {}  
};  
```