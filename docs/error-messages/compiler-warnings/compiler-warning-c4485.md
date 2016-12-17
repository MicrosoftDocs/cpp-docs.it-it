---
title: "Avviso del compilatore C4485 | Microsoft Docs"
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
  - "C4485"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4485"
ms.assetid: a6f2b437-ca93-4dcd-b9cb-df415e10df86
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4485
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione\_override': corrisponde al metodo di classe base di riferimento 'funzione\_classe\_base', ma non è contrassegnato 'new' o 'override'; verrà utilizzato 'new' \(e non 'virtual'\)  
  
 Una funzione di accesso esegue l'override, con o senza la parola chiave `virtual` della funzione di accesso di una classe base, ma l'identificatore `override` o `new` non è stato incluso nella firma della funzione di override.  Per risolvere il problema, aggiungere l'identificatore `new` o `override`.  
  
 Per ulteriori informazioni, vedere [override](../../windows/override-cpp-component-extensions.md) e [new \(new slot in vtable\)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md).  
  
 L'avviso C4485 viene sempre generato come un errore.  Per eliminarlo, utilizzare il pragma [warning](../../preprocessor/warning.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4485:  
  
```  
// C4485.cpp  
// compile with: /clr  
delegate void Del();  
  
ref struct A {  
   virtual event Del ^E;  
};  
  
ref struct B : A {  
   virtual event Del ^E;   // C4485  
};  
  
ref struct C : B {  
   virtual event Del ^E {  
      void raise() override {}  
      void add(Del ^) override {}  
      void remove(Del^) override {}  
   }  
};  
```