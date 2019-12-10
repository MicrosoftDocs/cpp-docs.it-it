---
title: Avviso del compilatore (livello 4) C4740
ms.date: 11/04/2016
f1_keywords:
- C4740
helpviewer_keywords:
- C4740
ms.assetid: 85528969-966a-44b4-8a2f-971704c64477
ms.openlocfilehash: 679f577eb7911b401473ee570e367ed5a8a094eb
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74989483"
---
# <a name="compiler-warning-level-4-c4740"></a>Avviso del compilatore (livello 4) C4740

il flusso in entrata o in uscita dal codice dell'assembly inline impedisce l'ottimizzazione globale

Quando è presente un salto in o da un blocco di `asm`, le ottimizzazioni globali sono disabilitate per tale funzione.

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
