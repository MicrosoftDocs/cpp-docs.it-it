---
description: 'Altre informazioni su: errore del compilatore C2104'
title: Errore del compilatore C2104
ms.date: 11/04/2016
f1_keywords:
- C2104
helpviewer_keywords:
- C2104
ms.assetid: 2ea78896-72a6-4901-a1fa-f33ea88ad61b
ms.openlocfilehash: 407bb77c3c1fe19410a68a1dc48baf562dc6c5b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170243"
---
# <a name="compiler-error-c2104"></a>Errore del compilatore C2104

' &' nel campo di bit ignorato

Non è possibile prendere l'indirizzo di un campo di bit.

L'esempio seguente genera l'C2104:

```cpp
// C2104.cpp
struct X {
   int sb : 1;
};

int main() {
   X x;
   &x.sb;   // C2104
   x.sb;   // OK
}
```
