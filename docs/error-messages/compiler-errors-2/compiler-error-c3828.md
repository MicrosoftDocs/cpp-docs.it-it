---
description: 'Altre informazioni su: errore del compilatore C3828'
title: Errore del compilatore C3828
ms.date: 11/04/2016
f1_keywords:
- C3828
helpviewer_keywords:
- C3828
ms.assetid: 8d9cee75-9504-4bc8-88b6-2413618a3f45
ms.openlocfilehash: 90c731ffc636355b5c9a1963facbcccabf356700
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249321"
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
