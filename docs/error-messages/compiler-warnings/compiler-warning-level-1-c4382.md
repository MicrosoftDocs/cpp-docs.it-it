---
title: Compilatore avviso (livello 1) C4382 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4382
dev_langs:
- C++
helpviewer_keywords:
- C4382
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29afe066fb86d0dd99216a63c057046ec76de55b
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704321"
---
# <a name="compiler-warning-level-1-c4382"></a>Avviso del compilatore (livello 1) C4382

> generazione di '*tipo*': un tipo con distruttore clrcall o costruttore di copia può essere rilevato solo in /clr: pura modulo

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

Quando viene compilato con **/clr** (non **/clr: pure**), la gestione delle eccezioni prevede che le funzioni membro in un tipo nativo da [cdecl](../../cpp/cdecl.md) e non [clrcall](../../cpp/clrcall.md). I tipi nativi con funzioni membro tramite `__clrcall` la convenzione di chiamata non può essere intercettato in un modulo compilato con **/clr**.

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