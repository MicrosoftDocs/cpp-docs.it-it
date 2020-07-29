---
title: Avviso del compilatore (livello 4) C4740
ms.date: 11/04/2016
f1_keywords:
- C4740
helpviewer_keywords:
- C4740
ms.assetid: 85528969-966a-44b4-8a2f-971704c64477
ms.openlocfilehash: 0aa4cb9df3f6f9d7499c67fb0b07bee5dabd6d73
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219833"
---
# <a name="compiler-warning-level-4-c4740"></a>Avviso del compilatore (livello 4) C4740

il flusso in entrata o in uscita dal codice dell'assembly inline impedisce l'ottimizzazione globale

Quando è presente un Jump in o fuori da un **`asm`** blocco, le ottimizzazioni globali sono disabilitate per tale funzione.

L'esempio seguente genera l'C4740:

```cpp
// C4740.cpp
// compile with: /O2 /W4
// processor: x86
int main() {
   __asm jmp tester
   tester:;
}
```
