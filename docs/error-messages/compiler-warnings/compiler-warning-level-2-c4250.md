---
title: Compilatore avviso (livello 2) C4250 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4250
dev_langs:
- C++
helpviewer_keywords:
- C4250
ms.assetid: d47f7249-6b5a-414b-b2d4-56e5d246a782
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4b0a49f42dec57677149ab5c36cfc1ab99822cc4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33291359"
---
# <a name="compiler-warning-level-2-c4250"></a>Avviso del compilatore (livello 2) C4250
'class1': eredita 'classe2:: membro' tramite dominanza  
  
 Due o più membri hanno lo stesso nome. Quello di `class2` viene ereditata perché è una classe base per le altre classi che contiene questo membro.  
  
 Per eliminare C4250, usare il [avviso](../../preprocessor/warning.md) pragma.  
  
 Poiché una classe base virtuale verrà condivisi tra più classi derivate, un nome in una classe derivata domina un nome in una classe base. Data la seguente gerarchia di classi, ad esempio, sono disponibili due definizioni di func ereditate all'interno di un rombo: l'istanza di vbc tramite la classe debole e il dominante:: introducesse tramite la classe dominante. Una chiamata non qualificata di introducesse tramite un oggetto di classe a forma di rombo, chiama sempre l'istanza dominate:: introducesse.  Se la classe debole introduce introducesse un'istanza di, non sarebbe dominante definizione e la chiamata viene contrassegnata come ambigua.  
  
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
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4250.  
  
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
  
## <a name="example"></a>Esempio  
 In questo esempio viene illustrata una situazione più complessa. L'esempio seguente genera l'errore C4250.  
  
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