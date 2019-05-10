---
title: Errore del compilatore C2885
ms.date: 11/04/2016
f1_keywords:
- C2885
helpviewer_keywords:
- C2885
ms.assetid: 7743e5f3-a034-44b4-9ee8-5a6254c27f8c
ms.openlocfilehash: ff5e770052301e95f694d3712f95b82732c2faba
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447694"
---
# <a name="compiler-error-c2885"></a>Errore del compilatore C2885

'identificatore': dichiarazione using non valida nell'ambito di classe non

È stata usata un' [usando](../../cpp/using-declaration.md) dichiarazione in modo non corretto.

## <a name="example"></a>Esempio

Questo errore può verificarsi in seguito a operazioni di conformità del compilatore eseguite per Visual Studio 2005: non è più valido per avere una `using` dichiarazione per un tipo annidato, è necessario qualificare in modo esplicito ogni riferimento apportate al tipo annidato, inserire il tipo in un n amespace, o creare un typedef.

L'esempio seguente genera l'errore C2885.

```
// C2885.cpp
namespace MyNamespace {
   class X1 {};
}

struct MyStruct {
   struct X1 {
      int i;
   };
};

int main () {
   using MyStruct::X1;   // C2885

   // OK
   using MyNamespace::X1;
   X1 myX1;

   MyStruct::X1 X12;

   typedef MyStruct::X1 abc;
   abc X13;
   X13.i = 9;
}
```

## <a name="example"></a>Esempio

Se si usa il `using` richiede la parola chiave con un membro di C++ è possibile definire tale membro all'interno di un'altra classe (una classe derivata).

L'esempio seguente genera l'errore C2885.

```
// C2885_b.cpp
// compile with: /c
class A {
public:
   int i;
};

void z() {
   using A::i;   // C2885 not in a class
}

class B : public A {
public:
   using A::i;
};
```