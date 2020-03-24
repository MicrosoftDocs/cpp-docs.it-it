---
title: Avviso del compilatore (livello 3) C4316
ms.date: 11/04/2016
f1_keywords:
- C4316
helpviewer_keywords:
- C4316
ms.assetid: 10371f01-aeb8-40ac-a290-59e63efa5ad4
ms.openlocfilehash: 0d920cb3dc967854d1a507d06ce31fde6a670434
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198848"
---
# <a name="compiler-warning-level-3-c4316"></a>Avviso del compilatore (livello 3) C4316

L'oggetto allocato nell'heap potrebbe non essere allineato per questo tipo.

Un oggetto overaligned allocato usando `operator new` potrebbe non avere l'allineamento specificato. Eseguire l'override dell' [operatore New](../../c-runtime-library/operator-new-crt.md) e dell' [operatore delete](../../c-runtime-library/operator-delete-crt.md) per i tipi overaligned in modo che usino le routine di allocazione allineate, ad esempio [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) e [_aligned_free](../../c-runtime-library/reference/aligned-free.md). L'esempio seguente genera l'C4316:

```cpp
// C4316.cpp
// Test: cl /W3 /c C4316.cpp

__declspec(align(32)) struct S {}; // C4324

int main() {
    new S; // C4316
}
```
