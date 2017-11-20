---
title: Avviso del compilatore C4484 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4484
dev_langs: C++
helpviewer_keywords: C4484
ms.assetid: 3d30e5b3-2297-45b7-a37a-1360056fdd0e
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 06246c811c59ff126cd61d5c10d0d30a68857c2c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-c4484"></a>Avviso del compilatore C4484
'funzione_override': corrisponde al metodo di classe di base di riferimento 'funzione_classe_base', ma non è contrassegnato 'virtual', 'new' o 'override'; verrà utilizzato 'new' (e non 'virtual')  
  
 Durante la compilazione con **/clr**, il compilatore non sostituirà in modo implicito una funzione di classe di base, ovvero la funzione verrà visualizzato un nuovo slot in vtable. Per risolvere, specificare in modo esplicito se una funzione è una sostituzione.  
  
 Per altre informazioni, vedere:  
  
-   [/CLR (compilazione common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [override](../../windows/override-cpp-component-extensions.md)  
  
-   [New (nuovo slot in vtable)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md)  
  
 C4484 viene sempre generato come errore. Utilizzare il [avviso](../../preprocessor/warning.md) pragma C4484 di esclusione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4484.  
  
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