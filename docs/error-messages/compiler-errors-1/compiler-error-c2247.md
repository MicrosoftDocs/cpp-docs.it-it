---
title: Errore del compilatore C2247 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2247
dev_langs: C++
helpviewer_keywords: C2247
ms.assetid: 72efa03e-615e-4ef9-aede-0a98654b20fd
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: eac2f90d689bf230b317a0443b5ec79ab40be632
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2247"></a>Errore del compilatore C2247
'identifier' non è accessibile perché 'class' Usa 'identificatore' per ereditare da 'class'  
  
 `identifier`viene ereditata da una classe dichiarata con accesso privato o protetto.  
  
 L'esempio seguente genera l'errore C2247:  
  
```  
// C2247.cpp  
class A {  
public:  
   int i;  
};  
class B : private A {};    // B inherits a private A  
class C : public B {} c;   // so even though C's B is public  
int j = c.i;               // C2247, i not accessible  
```  
  
 Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: controllo di accesso con i membri protetti. Un membro protetto (n) è accessibile solo tramite una funzione membro di una classe (B) che eredita dalla classe (A) dei quali (n) è un membro.  
  
 Per il codice è valido in Visual Studio .NET 2003 sia le versioni di Visual Studio .NET di Visual C++, dichiarare il membro come friend del tipo. È anche possibile usare l'ereditarietà pubblica.  
  
```  
// C2247b.cpp  
// compile with: /c  
// C2247 expected  
class A {  
public:  
   void f();  
   int n;  
};  
  
class B: protected A {  
   // Uncomment the following line to resolve.  
   // friend void A::f();  
};  
  
void A::f() {  
   B b;  
   b.n;  
}  
```  
  
 C2247 può anche essere generato in seguito alle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: ora accessibili alle classi base private. Una classe (A) che è una classe base privata in un tipo (B) non siano accessibile a un tipo (C) che utilizza B come classe base.  
  
 Per il codice è valido in Visual Studio .NET 2003 sia le versioni di Visual Studio .NET di Visual C++, utilizzare l'operatore di ambito.  
  
```  
// C2247c.cpp  
// compile with: /c  
struct A {};  
  
struct B: private A {};  
  
struct C : B {  
   void f() {  
      A *p1 = (A*) this;   // C2247  
      // try the following line instead  
      // ::A *p2 = (::A*) this;  
   }  
};  
```