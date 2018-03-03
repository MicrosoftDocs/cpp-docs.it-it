---
title: Compilatore avviso (livello 4) C4487 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4487
dev_langs:
- C++
helpviewer_keywords:
- C4487
ms.assetid: 796144cf-cd3c-4edc-b6a4-96192b7eb4f0
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4c992385c9bd2a7f2c918956ba128ea45afa0752
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4487"></a>Avviso del compilatore (livello 4) C4487
'funzione_classe_derivata': corrisponde al metodo non virtuale ereditato 'funzione_classe_base' ma non è contrassegnato 'new' in modo esplicito  
  
 Una funzione in una classe derivata ha la stessa firma di una funzione di classe di base non virtuale. C4487 per ricordare che la funzione della classe derivata non sostituisce la funzione di classe di base. Contrassegnare in modo esplicito la funzione di classe derivata come `new` per risolvere il problema.  
  
 Per ulteriori informazioni, vedere [new (nuovo slot in vtable)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4487.  
  
```  
// C4487.cpp  
// compile with: /W4 /clr  
using namespace System;  
public ref struct B {  
   void f() { Console::WriteLine("in B::f"); }  
   void g() { Console::WriteLine("in B::g"); }  
};  
  
public ref struct D : B {  
   void f() { Console::WriteLine("in D::f"); }   // C4487  
   void g() new { Console::WriteLine("in D::g"); }   // OK  
};  
  
int main() {  
   B ^ a = gcnew D;  
   // will call base class functions  
   a->f();  
   a->g();  
}  
```