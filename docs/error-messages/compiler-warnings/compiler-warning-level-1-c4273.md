---
title: Avviso del compilatore (livello 1) C4273
ms.date: 11/04/2016
f1_keywords:
- C4273
helpviewer_keywords:
- C4273
ms.assetid: cc18611d-9454-40a4-ad73-69823d5888fb
ms.openlocfilehash: fb24f195c6a8a0b0b2a221e57508a558b50a2b96
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626678"
---
# <a name="compiler-warning-level-1-c4273"></a>Avviso del compilatore (livello 1) C4273

' Function ': collegamento DLL non coerente

Due definizioni in un file differiscono per l'uso di [dllimport](../../cpp/dllexport-dllimport.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4273.

```cpp
// C4273.cpp
// compile with: /W1 /c
char __declspec(dllimport) c;
char c;   // C4273, delete this line or the line above to resolve
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4273.

```cpp
// C4273_b.cpp
// compile with: /W1 /clr /c
#include <stdio.h>
extern "C" int printf_s(const char *, ...);   // C4273
```