---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4391'
title: Avviso del compilatore (livello 1) C4391
ms.date: 11/04/2016
f1_keywords:
- C4391
helpviewer_keywords:
- C4391
ms.assetid: 95c6182c-fae9-4174-8f7b-98aa352e68ca
ms.openlocfilehash: 89c3babcf78dd47188cb03afa629a5aeda923fc7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339910"
---
# <a name="compiler-warning-level-1-c4391"></a>Avviso del compilatore (livello 1) C4391

' Signature ': tipo restituito non corretto per la funzione intrinseca, previsto ' type '

Una dichiarazione di funzione per un compilatore intrinseco presenta il tipo restituito errato. L'immagine risultante potrebbe non essere eseguita correttamente.

Per correggere il problema, correggere la dichiarazione o eliminare la dichiarazione e semplicemente #include il file di intestazione appropriato.

L'esempio seguente genera l'C4391:

```cpp
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
