---
title: Errore del compilatore C2725
ms.date: 11/04/2016
f1_keywords:
- C2725
helpviewer_keywords:
- C2725
ms.assetid: 13cd5b1b-e906-4cd8-9b2b-510d587c665a
ms.openlocfilehash: b2e8c6a2d3368e2f7fc1277e3bf727848da50881
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90741397"
---
# <a name="compiler-error-c2725"></a>Errore del compilatore C2725

'exception': impossibile generare o intercettare un oggetto gestito o WinRT per valore o per riferimento

Il tipo di un'eccezione gestita o WinRT non è corretta.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'errore C2725 e mostra come risolverlo.

```cpp
// C2725.cpp
// compile with: /clr
ref class R {
public:
   int i;
};

int main() {
   R % r1 = *gcnew R;
   throw r1;   // C2725

   R ^ r2 = gcnew R;
   throw r2;   // OK
}
```

L'esempio seguente genera l'errore C2725 e mostra come risolverlo.

```cpp
// C2725b.cpp
// compile with: /clr
using namespace System;
int main() {
   try {}
   catch( System::Exception%) {}   // C2725
   // try the following line instead
   // catch( System::Exception ^e) {}
}
```
