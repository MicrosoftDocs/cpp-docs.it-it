---
title: Avviso del compilatore (livello 3) C4316
description: Descrizione dell'avviso del compilatore C++ C4316
ms.date: 11/04/2016
f1_keywords:
- C4316
helpviewer_keywords:
- C4316
ms.assetid: 10371f01-aeb8-40ac-a290-59e63efa5ad4
ms.openlocfilehash: 3cb512aa9b851f3b3b26f7a50854a4d887087e81
ms.sourcegitcommit: 8caaf5e00aeb727741a273aecafa15de293426cf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2020
ms.locfileid: "91806557"
---
# <a name="compiler-warning-level-3-c4316"></a>Avviso del compilatore (livello 3) C4316

L'oggetto allocato nell'heap potrebbe non essere allineato per questo tipo.

Un oggetto overaligned allocato usando `operator new` potrebbe non avere l'allineamento specificato. Eseguire l'override dell' [operatore New](../../c-runtime-library/new-operator-crt.md) e dell' [operatore delete](../../c-runtime-library/delete-operator-crt.md) per i tipi overaligned in modo che usino le routine di allocazione allineate, ad esempio [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) e [_aligned_free](../../c-runtime-library/reference/aligned-free.md). L'esempio seguente genera l'C4316:

```cpp
// C4316.cpp
// Test: cl /W3 /c C4316.cpp

__declspec(align(32)) struct S {}; // C4324

int main() {
    new S; // C4316
}
```
