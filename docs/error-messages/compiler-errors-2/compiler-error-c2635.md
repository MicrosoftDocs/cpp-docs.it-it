---
description: 'Altre informazioni su: errore del compilatore C2635'
title: Errore del compilatore C2635
ms.date: 11/04/2016
f1_keywords:
- C2635
helpviewer_keywords:
- C2635
ms.assetid: 9deca2a8-2d61-42eb-9783-6578132ee3fb
ms.openlocfilehash: 8ecc6faaefb3dea5f0cfcded4d6817a807580254
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123383"
---
# <a name="compiler-error-c2635"></a>Errore del compilatore C2635

non è possibile convertire ' identificatore1 *' in ' identifier2 \* '. la conversione da una classe base virtuale è implicita

La conversione richiede un cast da una **`virtual`** classe base a una classe derivata, che non è consentita.

L'esempio seguente genera l'C2635:

```cpp
// C2635.cpp
class B {};
class D : virtual public B {};
class E : public B {};

int main() {
   B b;
   D d;
   E e;

   D * pD = &d;
   E * pE = &e;
   pD = (D*)&b;   // C2635
   pE = (E*)&b;   // OK
}
```
