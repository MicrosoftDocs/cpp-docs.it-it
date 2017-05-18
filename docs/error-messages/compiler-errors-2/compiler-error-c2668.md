---
title: Errore del compilatore C2668 | Documenti Microsoft
ms.custom: 
ms.date: 03/28/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2668
dev_langs:
- C++
helpviewer_keywords:
- C2668
ms.assetid: 041e9627-1c76-420e-a653-cfc83f933bd3
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: b790beb88de009e1c7161f3c9af6b3e21c22fd8e
ms.openlocfilehash: 6bb1dc7c1dbf26a4ff8ec25a46fe7128e0fb6aa8
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="compiler-error-c2668"></a>Errore del compilatore C2668
'function': chiamata ambigua a funzione in overload  
  
 Non è stato possibile risolvere la chiamata di funzione in overload specificato. È consigliabile eseguire il cast esplicito di uno o più parametri effettivi.  
  
 È anche possibile ottenere questo errore tramite l'utilizzo di modello. Se, nella stessa classe, si dispone di una funzione membro regolare e una funzione membro basate su modelli con la stessa firma, deve precedere quella basata su modelli. Si tratta di una limitazione dell'implementazione corrente di Visual C++.  
  
 Vedere della Knowledge Base Q240869 per ulteriori informazioni sull'ordinamento parziale dei modelli di funzione.  
  
 Se si compila un progetto ATL contenente un oggetto COM che supporta `ISupportErrorInfo`, vedere l'articolo della Knowledge Base Q243298.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2668:  
  
```  
// C2668.cpp  
struct A {};  
struct B : A {};  
struct X {};  
struct D : B, X {};  
  
void func( X, X ){}  
void func( A, B ){}  
D d;  
int main() {  
   func( d, d );   // C2668 D has an A, B, and X   
   func( (X)d, (X)d );   // OK, uses func( X, X )  
}  
```  
  
## <a name="example"></a>Esempio  
 Un altro modo per correggere l'errore riguarda una [dichiarazione using](../../cpp/using-declaration.md):  
  
```  
// C2668b.cpp  
// compile with: /EHsc /c  
// C2668 expected  
#include <iostream>  
class TypeA {  
public:  
   TypeA(int value) {}  
};  
  
class TypeB {  
   TypeB(int intValue);  
   TypeB(double dbValue);  
};  
  
class TestCase {  
public:  
   void AssertEqual(long expected, long actual, std::string  
                    conditionExpression = "");  
};  
  
class AppTestCase : public TestCase {  
public:  
   // Uncomment the following line to resolve.  
   // using TestCase::AssertEqual;  
   void AssertEqual(const TypeA expected, const TypeA actual,  
                    std::string conditionExpression = "");  
   void AssertEqual(const TypeB expected, const TypeB actual,  
                    std::string conditionExpression = "");  
};  
  
class MyTestCase : public AppTestCase {  
   void TestSomething() {  
      int actual = 0;  
      AssertEqual(0, actual, "Value");  
   }  
};  
```  
  
## <a name="example"></a>Esempio  
 Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: conversione ambigua su cast della costante 0.  
  
 Conversione in un cast usando la costante 0 è ambigua poiché int richiede una conversione sia a lungo e a void *. Per correggere l'errore, eseguire il cast tra 0 e il tipo esatto del parametro della funzione utilizzato per in modo che sia non necessaria alcuna conversione la (questo codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++).  
  
```  
// C2668c.cpp  
#include "stdio.h"  
void f(long) {  
   printf_s("in f(long)\n");  
}  
void f(void*) {  
   printf_s("in f(void*)\n");  
}  
int main() {  
   f((int)0);   // C2668  
  
   // OK  
   f((long)0);  
   f((void*)0);  
}  
```  
  
## <a name="example"></a>Esempio  
 Questo errore può verificarsi perché CRT dispone ora di form float e double di tutte le funzioni matematiche.  
  
```  
// C2668d.cpp  
#include <math.h>  
int main() {  
   int i = 0;  
   float f;  
   f = cos(i);   // C2668  
   f = cos((float)i);   // OK  
}  
```  
  
## <a name="example"></a>Esempio  
 Questo errore può verificarsi perché pow (int, int) è stato rimosso da Math. h in CRT.  
  
```  
// C2668e.cpp  
#include <math.h>  
int main() {  
   pow(9,9);   // C2668  
   pow((double)9,9);   // OK  
}  
```

## <a name="example"></a>Esempio  
Questo codice di Visual Studio 2015 ma non in Visual Studio 2017 e versioni successive con C2668. In Visual Studio 2015 il compilatore tratta erroneamente copy-list-initialization come l'oggetto copy-initialization normale, considerando solo la conversione dei costruttori per la risoluzione dell'overload. 

```
C++
struct A {
    explicit A(int) {}
};

struct B {
    B(int) {}
};

void f(const A&) {}
void f(const B&) {}

int main()
{
    f({ 1 }); // error C2668: 'f': ambiguous call to overloaded function
}
```
