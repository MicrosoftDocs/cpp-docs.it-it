---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4937'
title: Avviso del compilatore (livello 4) C4937
ms.date: 11/04/2016
f1_keywords:
- C4937
helpviewer_keywords:
- C4937
ms.assetid: 2bb9f0e7-bbd6-4697-84de-95955e32ae29
ms.openlocfilehash: fa614e9f93cf83afbe3ff46e624f13b5199a28d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251245"
---
# <a name="compiler-warning-level-4-c4937"></a>Avviso del compilatore (livello 4) C4937

'text1' e 'text2' sono indistinguibili come argomenti per 'directive'

Il modo in cui vengono elaborati gli argomenti per le direttive impedisce di distinguere i nomi significativi per il compilatore, ad esempio le parole chiave con più rappresentazioni di testo (form con carattere di sottolineatura singolo e doppio).

Esempi di tali stringhe sono __cdecl e \_ _forceinline.  Si noti che in /Za sono abilitati solo i form con carattere di sottolineatura doppio.

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
