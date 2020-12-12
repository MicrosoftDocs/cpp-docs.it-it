---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4740'
title: Avviso del compilatore (livello 4) C4740
ms.date: 11/04/2016
f1_keywords:
- C4740
helpviewer_keywords:
- C4740
ms.assetid: 85528969-966a-44b4-8a2f-971704c64477
ms.openlocfilehash: 31c25660177931e468681f3e563a9885ca1faa01
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330536"
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
