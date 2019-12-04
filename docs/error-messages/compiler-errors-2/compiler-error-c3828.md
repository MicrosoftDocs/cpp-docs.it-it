---
title: Errore del compilatore C3828
ms.date: 11/04/2016
f1_keywords:
- C3828
helpviewer_keywords:
- C3828
ms.assetid: 8d9cee75-9504-4bc8-88b6-2413618a3f45
ms.openlocfilehash: 4b47ddbf0775cab2bd7214f68d1b4ed6e06e6eea
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74741703"
---
# <a name="compiler-error-c3828"></a>Errore del compilatore C3828

' Object Type ': argomenti di posizionamento non consentiti durante la creazione di istanze di Managed o WinRTclasses

Quando si crea un oggetto di un tipo gestito o di un tipo di Windows Runtime, non è possibile usare il formato di posizionamento di Operator [ref new, gcnew](../../extensions/ref-new-gcnew-cpp-component-extensions.md) o [New](../../cpp/new-operator-cpp.md).

L'esempio seguente genera l'errore C3828 e mostra come risolverlo:

```cpp
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
