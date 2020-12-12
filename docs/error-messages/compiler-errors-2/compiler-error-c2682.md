---
description: 'Altre informazioni su: errore del compilatore C2682'
title: Errore del compilatore C2682
ms.date: 11/04/2016
f1_keywords:
- C2682
helpviewer_keywords:
- C2682
ms.assetid: 30c6a7c4-f5f7-4fe8-81a8-c48938521ab4
ms.openlocfilehash: 962debb0227347abe97e290db724fdb227212914
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177432"
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
