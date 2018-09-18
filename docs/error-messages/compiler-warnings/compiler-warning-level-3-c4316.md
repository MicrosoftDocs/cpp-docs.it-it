---
title: Compilatore avviso (livello 3) C4316 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4316
dev_langs:
- C++
helpviewer_keywords:
- C4316
ms.assetid: 10371f01-aeb8-40ac-a290-59e63efa5ad4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a4170481b95cca0d43aa03c776009a5030194a4c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032926"
---
# <a name="compiler-warning-level-3-c4316"></a>Compilatore avviso (livello 3) C4316

Oggetto allocato nell'heap non può essere allineato per questo tipo.

Un oggetto allineato allocato utilizzando `operator new` potrebbe non presentare l'allineamento specificato. Eseguire l'override [operatore new](../../c-runtime-library/operator-new-crt.md) e [operatore delete](../../c-runtime-library/operator-delete-crt.md) per i tipi sovrallineati in modo che utilizzino routine di allocazione allineata, ad esempio [aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) e[aligned_free](../../c-runtime-library/reference/aligned-free.md). L'esempio seguente genera l'errore C4316:

```cpp
// C4316.cpp
// Test: cl /W3 /c C4316.cpp

__declspec(align(32)) struct S {}; // C4324

int main() {
    new S; // C4316
}
```