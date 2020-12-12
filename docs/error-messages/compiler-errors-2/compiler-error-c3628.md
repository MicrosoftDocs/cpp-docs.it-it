---
description: 'Altre informazioni su: errore del compilatore C3628'
title: Errore del compilatore C3628
ms.date: 11/04/2016
f1_keywords:
- C3628
helpviewer_keywords:
- C3628
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
ms.openlocfilehash: ed0c434a40e6c513580e37b5fb2fc9f44b1dc5dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144404"
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
