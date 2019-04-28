---
title: Avviso del compilatore (livello 1) C4273
ms.date: 11/04/2016
f1_keywords:
- C4273
helpviewer_keywords:
- C4273
ms.assetid: cc18611d-9454-40a4-ad73-69823d5888fb
ms.openlocfilehash: 4d00ed0113f9954e7400da24f37b51b9fdd247bb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207220"
---
# <a name="compiler-warning-level-1-c4273"></a>Avviso del compilatore (livello 1) C4273

'function': collegamento DLL non coerente

Due definizioni in un file di diverse utilizzano in modo [dllimport](../../cpp/dllexport-dllimport.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4273.

```
// C4273.cpp
// compile with: /W1 /c
char __declspec(dllimport) c;
char c;   // C4273, delete this line or the line above to resolve
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4273.

```
// C4273_b.cpp
// compile with: /W1 /clr /c
#include <stdio.h>
extern "C" int printf_s(const char *, ...);   // C4273
```