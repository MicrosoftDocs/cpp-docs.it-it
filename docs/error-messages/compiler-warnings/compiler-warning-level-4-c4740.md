---
title: Compilatore avviso (livello 4) C4740 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4740
dev_langs:
- C++
helpviewer_keywords:
- C4740
ms.assetid: 85528969-966a-44b4-8a2f-971704c64477
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6353ac464d95e8805a9c9e55488a355f71372508
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056155"
---
# <a name="compiler-warning-level-4-c4740"></a>Avviso del compilatore (livello 4) C4740

flusso interno o all'esterno di codice dell'assembly inline impedisce l'ottimizzazione globale

Quando si verifica un incremento a o fuori un `asm` blocco, le ottimizzazioni globali sono disabilitate per tale funzione.

L'esempio seguente genera l'errore C4740:

```
// C4740.cpp
// compile with: /O2 /W4
// processor: x86
int main() {
   __asm jmp tester
   tester:;
}
```