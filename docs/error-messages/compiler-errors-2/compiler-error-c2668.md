---
title: "Errore del compilatore C2668 | Microsoft Docs"
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
  - "C2668"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2668"
ms.assetid: 041e9627-1c76-420e-a653-cfc83f933bd3
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2668
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': chiamata ambigua a funzione in overload  
  
 È stato impossibile risolvere la chiamata di funzione in overload specificata.  È possibile eseguire il cast esplicito di uno o più parametri effettivi.  
  
 Questo errore può anche verificarsi con l'utilizzo di template.  Se nella stessa classe è presente una funzione membro regolare e una funzione membro basata su template con la stessa firma, la funzione basata su template deve venire per prima.  Si tratta di una limitazione dell'implementazione corrente di Visual C\+\+.  
  
 Per ulteriori informazioni sull'ordine parziale dei template di funzione, vedere l’articolo della Knowledge Base Q240869 \(informazioni in lingua inglese\).  
  
 Se si compila un progetto ATL contenente un oggetto COM che supporta `ISupportErrorInfo`, vedere l'articolo della Knowledge Base Q243298.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2668:  
  
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
  
## Esempio  
 Un altro modo per risolvere questo errore consiste nell'uso di una [dichiarazione using](../../cpp/using-declaration.md):  
  
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
  
## Esempio  
 Questo errore può anche venire generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003: conversione ambigua su cast della costante 0.  
  
 La conversione su un cast che utilizza la costante 0 è ambigua poiché int richiede una conversione sia a long che a void\*.  Per risolvere questo errore, eseguire il cast 0 sul tipo esatto del parametro di funzione per il quale verrà utilizzato in modo che non sia necessario effettuare alcuna conversione. Questo codice sarà valido nelle versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+.  
  
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
  
## Esempio  
 Questo errore può verificarsi perché CRT dispone ora di formati float e double di tutte le funzioni matematiche.  
  
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
  
## Esempio  
 Questo errore può verificarsi a causa della rimozione di pow\(int, int\) da math.h in CRT.  
  
```  
// C2668e.cpp  
#include <math.h>  
int main() {  
   pow(9,9);   // C2668  
   pow((double)9,9);   // OK  
}  
```