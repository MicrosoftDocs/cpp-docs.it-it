---
title: Avviso del compilatore (livello 1) C4561
ms.date: 11/04/2016
f1_keywords:
- C4561
helpviewer_keywords:
- C4561
ms.assetid: 3a10c12c-601b-4b6c-9861-331fd022e021
ms.openlocfilehash: b0fd27142f0404a53fa2fee87fb2309e2f54d2c2
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73965969"
---
# <a name="compiler-warning-level-1-c4561"></a>Avviso del compilatore (livello 1) C4561

' __fastcall ' incompatibile con l'opzione '/CLR ': conversione in '\__stdcall '

Impossibile utilizzare la convenzione di chiamata di funzione [__fastcall](../../cpp/fastcall.md) con l'opzione del compilatore [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) . Il compilatore ignora le chiamate a `__fastcall`. Per correggere il problema, rimuovere le chiamate a **__fastcall** o compilare senza **/CLR**.

L'esempio seguente genera l'C4561:

```cpp
// C4561.cpp
// compile with: /clr /W1 /c
// processor: x86
void __fastcall Func(void *p);   // C4561, remove __fastcall to resolve
```