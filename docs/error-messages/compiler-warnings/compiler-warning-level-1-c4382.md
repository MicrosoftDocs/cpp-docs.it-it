---
title: Avviso del compilatore (livello 1) C4382
ms.date: 11/04/2016
f1_keywords:
- C4382
helpviewer_keywords:
- C4382
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
ms.openlocfilehash: 7b8dbf77defab2a711ad931057c740193908474b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186972"
---
# <a name="compiler-warning-level-1-c4382"></a>Avviso del compilatore (livello 1) C4382

> generazione di '*Type*': un tipo con __clrcall distruttore o un costruttore di copia può essere individuato solo nel modulo/CLR: pure

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Quando viene compilato con **/CLR** (non **/CLR: pure**), la gestione delle eccezioni prevede che le funzioni membro in un tipo nativo siano [__cdecl](../../cpp/cdecl.md) e non [__clrcall](../../cpp/clrcall.md). Non è possibile intercettare tipi nativi con funzioni membro che usano `__clrcall` convenzione di chiamata in un modulo compilato con **/CLR**.

Se l'eccezione viene rilevata in un modulo compilato con **/CLR: pure**, è possibile ignorare questo avviso.

Per altre informazioni, vedere [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

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
