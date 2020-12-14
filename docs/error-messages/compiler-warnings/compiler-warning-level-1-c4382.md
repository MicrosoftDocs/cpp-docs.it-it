---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4382'
title: Avviso del compilatore (livello 1) C4382
ms.date: 11/04/2016
f1_keywords:
- C4382
helpviewer_keywords:
- C4382
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
ms.openlocfilehash: 038225aea9592070b44af138be9deb5076e2f5f7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311305"
---
# <a name="compiler-warning-level-1-c4382"></a>Avviso del compilatore (livello 1) C4382

> generazione di '*Type*': un tipo con __clrcall distruttore o un costruttore di copia può essere individuato solo nel modulo/CLR: pure

## <a name="remarks"></a>Commenti

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Quando viene compilato con **/CLR** (non **/CLR: pure**), la gestione delle eccezioni prevede che le funzioni membro in un tipo nativo siano [__cdecl](../../cpp/cdecl.md) e non [__clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro che usano `__clrcall` la convenzione di chiamata non possono essere rilevati in un modulo compilato con **/CLR**.

Se l'eccezione viene rilevata in un modulo compilato con **/CLR: pure**, è possibile ignorare questo avviso.

Per altre informazioni, vedere [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4382.

```cpp
// C4382.cpp
// compile with: /clr /W1 /c
struct S {
   __clrcall ~S() {}
};

struct T {
   ~T() {}
};

int main() {
   S s;
   throw s;   // C4382

   S * ps = &s;
   throw ps;   // OK

   T t;
   throw t;   // OK
}
```
