---
title: "Avviso del compilatore (livello 4) C4487 | Microsoft Docs"
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
  - "C4487"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4487"
ms.assetid: 796144cf-cd3c-4edc-b6a4-96192b7eb4f0
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4487
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione\_classe\_derivata': corrisponde al metodo non virtuale ereditato 'funzione\_classe\_base' ma non è contrassegnato 'new' in modo esplicito  
  
 Una funzione in una classe derivata ha la stessa firma di una funzione di classe base non virtuale.  L'avviso C4487 viene visualizzato per segnalare che una funzione della classe derivata non esegue l'override di una funzione della classe base.  Per non visualizzare l'avviso, contrassegnare in modo esplicito la funzione della classe derivata come `new`.  
  
 Per ulteriori informazioni, vedere [new \(new slot in vtable\)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4487:  
  
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