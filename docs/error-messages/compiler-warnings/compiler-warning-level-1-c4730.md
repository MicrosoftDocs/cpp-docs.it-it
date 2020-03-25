---
title: Avviso del compilatore (livello 1) C4730
ms.date: 11/04/2016
f1_keywords:
- C4730
helpviewer_keywords:
- C4730
ms.assetid: 11303e3f-162b-4b19-970a-479686123a68
ms.openlocfilehash: ba6d305a414e99bd22ca603aaac2615994780c7d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185763"
---
# <a name="compiler-warning-level-1-c4730"></a>Avviso del compilatore (livello 1) C4730

' Main ': la combinazione di _m64 ed espressioni a virgola mobile può produrre codice errato

Una funzione usa [__m64](../../cpp/m64.md) e **float**/tipi **Double** . Poiché i registri MMX e a virgola mobile condividono lo stesso spazio di registro fisico (non può essere usato contemporaneamente), l'uso di `__m64` e **float**/tipi **Double** nella stessa funzione può causare il danneggiamento dei dati, causando probabilmente un'eccezione.

Per usare in modo sicuro i tipi `__m64` e i tipi a virgola mobile nella stessa funzione, ogni istruzione che usa uno dei tipi deve essere separata dalla **_m_empty ()** (per MMX) o **_m_femms ()** (per 3DNow!) intrinseco.

L'esempio seguente genera l'C4730:

```cpp
// C4730.cpp
// compile with: /W1
// processor: x86
#include "mmintrin.h"

void func(double)
{
}

int main(__m64 a, __m64 b)
{
   __m64 m;
   double f;
   f = 1.0;
   m = _m_paddb(a, b);
   // uncomment the next line to resolve C4730
   // _m_empty();
   func(f * 3.0);   // C4730
}
```
