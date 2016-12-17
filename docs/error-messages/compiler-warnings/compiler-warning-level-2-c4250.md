---
title: "Avviso del compilatore (livello 2) C4250 | Microsoft Docs"
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
  - "C4250"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4250"
ms.assetid: d47f7249-6b5a-414b-b2d4-56e5d246a782
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4250
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe1': eredita 'classe2::membro' tramite dominanza  
  
 Due o più membri hanno lo stesso nome.  Il membro in `class2` viene ereditato perché si tratta di una classe base per le altre classi che lo contengono.  
  
 Per evitare la visualizzazione dell'avviso C4250, utilizzare il pragma [warning](../../preprocessor/warning.md).  
  
 Dal momento che una classe base virtuale è condivisa tra più classi derivate, il nome in una classe derivata è dominante rispetto al nome in una classe base.  Ad esempio, data la seguente gerarchia di classi, sono presenti due definizioni di func ereditate all'interno del rombo: l'istanza di vbc::func\(\) attraverso la classe debole e dominant::func\(\) attraverso la classe dominante.  Una chiamata non qualificata di func\(\) attraverso un oggetto di classe rombo determina sempre la chiamata dell'istanza di dominate::func\(\).  Se la classe debole introducesse un'istanza di func\(\), nessuna delle due definizioni sarebbe dominante e la chiamata verrebbe contrassegnata come ambigua.  
  
```  
// C4250.cpp  
// compile with: /c /W2  
#include <stdio.h>  
struct vbc {  
   virtual void func() { printf("vbc::func\n"); }  
};  
  
struct weak : public virtual vbc {};  
  
struct dominant : public virtual vbc {  
   void func() { printf("dominant::func\n"); }  
};  
  
struct diamond : public weak, public dominant {};  
  
int main() {  
   diamond d;  
   d.func();   // C4250  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4250:  
  
```  
// C4250_b.cpp  
// compile with: /W2 /EHsc  
#include <iostream>  
using namespace std;  
class A {  
public:  
   virtual operator int () {  
      return 2;  
   }  
};  
  
class B : virtual public A {  
public:  
   virtual operator int () {  
      return 3;  
   }  
};  
  
class C : virtual public A {};  
  
class E : public B, public C {};   // C4250  
  
int main() {  
   E eObject;  
   cout << eObject.operator int() << endl;  
}  
```  
  
## Esempio  
 Di seguito viene illustrata una situazione più complessa.  Nell'esempio seguente viene generato l'errore C4250:  
  
```  
// C4250_c.cpp  
// compile with: /W2 /EHsc  
#include <iostream>  
using namespace std;  
  
class V {  
public:  
   virtual int f() {  
      return 1024;  
   }  
};  
  
class B : virtual public V {  
public:  
   int b() {  
      return f(); // B::b() calls V::f()  
   }  
};  
  
class M : virtual public V {  
public:  
   int f() {  
      return 7;  
   }  
};  
  
// because of dominance, f() is M::f() inside D,  
// changing the meaning of B::b's f() call inside a D  
class D : public B, public M {};   // C4250  
  
int main() {  
   D d;  
   cout << "value is: " << d.b();   // invokes M::f()  
}  
```