---
title: Errore del compilatore C2885
ms.date: 11/04/2016
f1_keywords:
- C2885
helpviewer_keywords:
- C2885
ms.assetid: 7743e5f3-a034-44b4-9ee8-5a6254c27f8c
ms.openlocfilehash: 1953cb8fb9f80c5c1f967e10583c2b7303075f59
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90742671"
---
# <a name="compiler-error-c2885"></a>Errore del compilatore C2885

' Class:: Identifier ': dichiarazione using non valida nell'ambito non di classe

È stata usata una Dichiarazione [using](../../cpp/using-declaration.md) in modo errato.

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: non è più valido avere una **`using`** dichiarazione in un tipo annidato. è necessario qualificare in modo esplicito ogni riferimento effettuato al tipo annidato, inserire il tipo in uno spazio dei nomi o creare un typedef.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C2885.

```cpp
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

Se si usa la **`using`** parola chiave con un membro di classe, C++ richiede di definire il membro all'interno di un'altra classe (una classe derivata).

L'esempio seguente genera l'C2885.

```cpp
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
