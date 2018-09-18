---
title: Errore del compilatore C2425 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2425
dev_langs:
- C++
helpviewer_keywords:
- C2425
ms.assetid: 0ce59404-9aff-4e01-aa8d-27d23e92eb30
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 30f0bf6fb90a08647c9547108c17040fbf4c09ba
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071360"
---
# <a name="compiler-error-c2425"></a>Errore del compilatore C2425

'token': espressione non costante in 'contesto'

Il token fa parte di un'espressione non costante in questo contesto.

Per risolvere questo problema, sostituire il token con un valore letterale di costante o con un calcolo.

Il seguente codice di esempio genera l'errore C2425:

```
// C2425.cpp
// processor: x86
int main() {
   int i = 3;
   __asm {
      mov eax, [ebp - i]   // C2425
      mov eax, [ebp - 3]   // OK
   }
}
```