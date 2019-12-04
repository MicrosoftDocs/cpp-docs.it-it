---
title: Errore del compilatore C3628
ms.date: 11/04/2016
f1_keywords:
- C3628
helpviewer_keywords:
- C3628
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
ms.openlocfilehash: 9976cb2425f8f855ffb2903c07de22822c781e20
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755824"
---
# <a name="compiler-error-c3628"></a>Errore del compilatore C3628

' base class ': gestito o WinRTclasses supporta solo l'ereditarietà pubblica

È stato effettuato un tentativo di usare una classe gestita o WinRT come classe di base [privata](../../cpp/private-cpp.md) o [protetta](../../cpp/protected-cpp.md) . Una classe gestita o WinRT può essere usata solo come classe di base con accesso [pubblico](../../cpp/public-cpp.md) .

L'esempio seguente genera l'errore C3628 e mostra come risolverlo:

```cpp
// C3628a.cpp
// compile with: /clr
ref class B {
};

ref class D : private B {   // C3628

// The following line resolves the error.
// ref class D : public B {
};

int main() {
}
```
