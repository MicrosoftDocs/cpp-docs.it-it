---
title: Errore del compilatore C2682
ms.date: 11/04/2016
f1_keywords:
- C2682
helpviewer_keywords:
- C2682
ms.assetid: 30c6a7c4-f5f7-4fe8-81a8-c48938521ab4
ms.openlocfilehash: 2697ce5a790fffe762d97ca3380853514de6d437
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220262"
---
# <a name="compiler-error-c2682"></a>Errore del compilatore C2682

non è possibile usare casting_operator per eseguire la conversione da' tipo1' a' tipo2'

Un operatore di cast ha tentato di eseguire la conversione tra tipi incompatibili. Non è ad esempio possibile utilizzare l'operatore [dynamic_cast](../../cpp/dynamic-cast-operator.md) per convertire un puntatore a un riferimento. **`dynamic_cast`** Non è possibile usare l'operatore per eseguire il cast di qualificatori. Tutti i qualificatori sui tipi devono corrispondere.

È possibile utilizzare l' **`const_cast`** operatore per rimuovere attributi come **`const`** , **`volatile`** o **`__unaligned`** .

L'esempio seguente genera l'C2682:

```cpp
// C2682.cpp
class A { virtual void f(); };
class B: public A {};

void g(A* pa) {
    B& rb = dynamic_cast<B&>(pa); // C2682
}
```

L'esempio seguente genera l'C2682:

```cpp
// C2682b.cpp
// compile with: /clr
ref struct R{};
ref struct RR : public R{};
ref struct H {
   RR^ r ;
   short s;
   int i;
};

int main() {
   H^ h = gcnew H();
   interior_ptr<int>lr = &(h->i);
   interior_ptr<short>ssr = safe_cast<interior_ptr<short> >(lr);   // C2682
   interior_ptr<short>ssr = reinterpret_cast<interior_ptr<short> >(lr);   // OK
}
```
