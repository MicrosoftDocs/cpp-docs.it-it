---
title: Errore del compilatore C3828
ms.date: 11/04/2016
f1_keywords:
- C3828
helpviewer_keywords:
- C3828
ms.assetid: 8d9cee75-9504-4bc8-88b6-2413618a3f45
ms.openlocfilehash: 68a82105a2ff7d58090e9f345bf7aafb34d492d4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50515284"
---
# <a name="compiler-error-c3828"></a>Errore del compilatore C3828

'object type': gli argomenti di posizione non consentiti durante la creazione di istanze di gestione o WinRTclasses

Quando si crea un oggetto di un tipo gestito o un tipo Windows Runtime, non è possibile utilizzare il form di posizione dell'operatore [ref new, gcnew](../../windows/ref-new-gcnew-cpp-component-extensions.md) oppure [nuove](../../cpp/new-operator-cpp.md).

L'esempio seguente genera l'errore C3828 e mostra come risolverlo:

```
// C3828a.cpp
// compile with: /clr
ref struct M {
};

ref struct N {
   static array<char>^ bytes = gcnew array<char>(256);
};

int main() {
   M ^m1 = new (&N::bytes) M();   // C3828
   // The following line fixes the error.
   // M ^m1 = gcnew M();
}
```