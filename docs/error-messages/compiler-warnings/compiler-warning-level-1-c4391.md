---
title: Compilatore avviso (livello 1) C4391 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4391
dev_langs:
- C++
helpviewer_keywords:
- C4391
ms.assetid: 95c6182c-fae9-4174-8f7b-98aa352e68ca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d0b3873beb635afe81cee3030a78d2b1223197a7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047089"
---
# <a name="compiler-warning-level-1-c4391"></a>Avviso del compilatore (livello 1) C4391

'signature': tipo restituito non corretto per la funzione intrinseca, previsto 'type'

Una dichiarazione di funzione per una funzione intrinseca del compilatore contiene il tipo restituito errato. L'immagine risultante potrebbe non funzionare correttamente.

Per risolvere questo problema, correggere la dichiarazione o eliminare la dichiarazione e semplicemente #include il file di intestazione appropriato.

L'esempio seguente genera l'errore C4391:

```
// C4391.cpp
// compile with: /W1
// processor: x86
// uncomment the following line and delete the line that
// generated the warning to resolve
// #include "xmmintrin.h"

#ifdef  __cplusplus
extern "C" {
#endif

extern void _mm_load_ss(float *p);   // C4391

#ifdef  __cplusplus
}
#endif

int main()
{
}
```