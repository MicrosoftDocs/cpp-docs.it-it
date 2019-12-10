---
title: Avviso del compilatore (livello 4) C4937
ms.date: 11/04/2016
f1_keywords:
- C4937
helpviewer_keywords:
- C4937
ms.assetid: 2bb9f0e7-bbd6-4697-84de-95955e32ae29
ms.openlocfilehash: dd7a7f9ac3d0ce0798a88f753cb0ccb4addbd5bc
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988747"
---
# <a name="compiler-warning-level-4-c4937"></a>Avviso del compilatore (livello 4) C4937

'text1' e 'text2' sono indistinguibili come argomenti per 'directive'

Il modo in cui vengono elaborati gli argomenti per le direttive impedisce di distinguere i nomi significativi per il compilatore, ad esempio le parole chiave con più rappresentazioni di testo (form con carattere di sottolineatura singolo e doppio).

Esempi di tali stringhe sono __cdecl e \__forceinline.  Si noti che in /Za sono abilitati solo i form con carattere di sottolineatura doppio.

L'esempio seguente genera l'errore C4937:

```cpp
// C4937.cpp
// compile with: /openmp /W4
#include "omp.h"
int main() {
   #pragma omp critical ( __leave )   // C4937
   ;

   // OK
   #pragma omp critical ( leave )
   ;
}
```
