---
title: Avviso del compilatore (livello 1) C4794
ms.date: 11/04/2016
f1_keywords:
- C4794
helpviewer_keywords:
- C4794
ms.assetid: badc9c36-fa1a-4fec-929b-7bfda7a7b79f
ms.openlocfilehash: 7d669280c0dc6a730a22480e602dac8cc6153449
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052373"
---
# <a name="compiler-warning-level-1-c4794"></a>Avviso del compilatore (livello 1) C4794

segmento della variabile di archiviazione locale di thread 'variable' modificato da 'section name' a '.tls$'

È stato usato [#pragma data_seg](../../preprocessor/data-seg.md) per inserire una variabile tls in una sezione che non inizia con .tls$.

La sezione .tls$*x* sarà presente nel file oggetto in cui vengono definite le variabili [__declspec(thread)](../../cpp/thread.md) . Da queste sezioni verrà generata una sezione .tls nel file EXE o DLL.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4794:

```cpp
// C4794.cpp
// compile with: /W1 /c
#pragma data_seg(".someseg")
__declspec(thread) int i;   // C4794

// OK
#pragma data_seg(".tls$9")
__declspec(thread) int j;
```