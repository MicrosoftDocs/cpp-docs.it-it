---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4817'
title: Avviso del compilatore (livello 1) C4817
ms.date: 11/04/2016
f1_keywords:
- C4817
helpviewer_keywords:
- C4817
ms.assetid: a68f5486-6940-4934-9f93-bfd4d71f92a9
ms.openlocfilehash: 28865701853eea46a440459b1de8be49b69d5a50
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255197"
---
# <a name="compiler-warning-level-1-c4817"></a>Avviso del compilatore (livello 1) C4817

'member': utilizzo non valido di '.' per l'accesso al membro. Sostituito con '->' dal compilatore.

È stato usato l'operatore di accesso al membro errato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4817.

```cpp
// C4817.cpp
// compile with: /clr /W1
using namespace System;
int main() {
   array<Int32> ^ a = gcnew array<Int32>(100);
   Console::WriteLine( a.Length );   // C4817
   Console::WriteLine( a->Length );   // OK
}
```
