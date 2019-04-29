---
title: Errore del compilatore C2885
ms.date: 11/04/2016
f1_keywords:
- C2885
helpviewer_keywords:
- C2885
ms.assetid: 7743e5f3-a034-44b4-9ee8-5a6254c27f8c
ms.openlocfilehash: 8174faed09bdffbdc6974390cceb7c17661eab4b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388774"
---
# <a name="compiler-error-c2885"></a>Errore del compilatore C2885

'identificatore': dichiarazione using non valida nell'ambito di classe non

È stata usata un' [usando](../../cpp/using-declaration.md) dichiarazione in modo non corretto.

## <a name="example"></a>Esempio

Questo errore può verificarsi in seguito a operazioni di conformità del compilatore eseguite per Visual C++ 2005: non è più valido per avere una `using` dichiarazione per un tipo annidato, è necessario qualificare in modo esplicito ogni apportate al tipo annidato, inserire il tipo in un nome di riferimento spazio o creare un typedef.

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