---
title: "Errore del compilatore C2247 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2247"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2247"
ms.assetid: 72efa03e-615e-4ef9-aede-0a98654b20fd
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C2247
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore' non accessibile. 'classe' utilizza 'identificatore' per ereditare da 'classe'  
  
 `identifier` viene ereditato da una classe dichiarata con accesso privato o protetto.  
  
 Il seguente codice di esempio genera l'errore C2247:  
  
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
  
 Questo errore può anche venire generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003: controllo di accesso con membri protetti.  È possibile accedere a un membro protetto \(n\) solo mediante una funzione membro di una classe \(A\) di cui \(n\) è membro.  
  
 Affinché il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+, dichiarare il membro come friend del tipo.  È anche possibile utilizzare l'eredità pubblica.  
  
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
  
 L'errore C2247 può anche venire generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003: ora non è possibile accedere alle classi base private.  Una classe base privata \(A\) a un tipo \(B\) non può essere accessibile a un tipo \(C\) che utilizza B come classe base.  
  
 Affinché il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+, utilizzare l'operatore di ambito.  
  
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