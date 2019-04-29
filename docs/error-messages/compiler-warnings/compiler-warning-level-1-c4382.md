---
title: Avviso del compilatore (livello 1) C4382
ms.date: 11/04/2016
f1_keywords:
- C4382
helpviewer_keywords:
- C4382
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
ms.openlocfilehash: cca2f8cc13cc8317bac3736e142ef58e126ed994
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390490"
---
# <a name="compiler-warning-level-1-c4382"></a>Avviso del compilatore (livello 1) C4382

> generazione di '*tipo*': un tipo con distruttore clrcall o costruttore di copia può essere rilevato solo in /clr: pura modulo

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Quando viene compilato con **/clr** (non **/clr: pure**), la gestione delle eccezioni si aspetta che le funzioni membro in un tipo nativo può essere [cdecl](../../cpp/cdecl.md) e non [clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro che utilizzano `__clrcall` convenzione di chiamata non può essere intercettato in un modulo compilato con **/clr**.

Se l'eccezione viene intercettata in un modulo compilato con **/clr: pure**, è possibile ignorare questo avviso.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4382.

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