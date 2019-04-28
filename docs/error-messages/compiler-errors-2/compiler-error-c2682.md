---
title: Errore del compilatore C2682
ms.date: 11/04/2016
f1_keywords:
- C2682
helpviewer_keywords:
- C2682
ms.assetid: 30c6a7c4-f5f7-4fe8-81a8-c48938521ab4
ms.openlocfilehash: 8a9ec2f59f362df284e9bd5cd8df6ae986d59d77
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62266270"
---
# <a name="compiler-error-c2682"></a>Errore del compilatore C2682

non è possibile utilizzare operatore_cast convertire da 'type1' a 'type2'

Un operatore di cast ha provato a eseguire la conversione tra tipi non compatibili. Ad esempio, è possibile usare la [dynamic_cast](../../cpp/dynamic-cast-operator.md) operatore per convertire un puntatore a un riferimento. Il `dynamic_cast` operatore non può essere utilizzato per eseguire il cast qualificatori. Tutti i qualificatori per i tipi devono corrispondere.

È possibile usare la `const_cast` operatore per rimuovere gli attributi, ad esempio `const`, `volatile`, o `__unaligned`.

L'esempio seguente genera l'errore C2682:

```
// C2682.cpp
class A { virtual void f(); };
class B: public A {};

void g(A* pa) {
    B& rb = dynamic_cast<B&>(pa); // C2682
}
```

L'esempio seguente genera l'errore C2682:

```
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