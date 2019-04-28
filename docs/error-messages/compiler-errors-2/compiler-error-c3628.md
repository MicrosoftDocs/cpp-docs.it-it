---
title: Errore del compilatore C3628
ms.date: 11/04/2016
f1_keywords:
- C3628
helpviewer_keywords:
- C3628
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
ms.openlocfilehash: 581aae7e1f979b3dd39caf2ce3d263fdb856c56a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62221685"
---
# <a name="compiler-error-c3628"></a>Errore del compilatore C3628

'base class': gestite o WinRTclasses supportano solo l'ereditarietà pubblica

Si è verificato un tentativo di usare un oggetto gestito o WinRT classe come un [privati](../../cpp/private-cpp.md) o [protetto](../../cpp/protected-cpp.md) classe di base. Oggetto gestito o WinRT classe può essere utilizzata solo come classe di base con [pubblica](../../cpp/public-cpp.md) accesso.

L'esempio seguente genera l'errore C3628 e mostra come risolverlo:

```
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
