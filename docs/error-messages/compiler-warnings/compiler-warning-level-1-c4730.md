---
title: Avviso del compilatore (livello 1) C4730
ms.date: 11/04/2016
f1_keywords:
- C4730
helpviewer_keywords:
- C4730
ms.assetid: 11303e3f-162b-4b19-970a-479686123a68
ms.openlocfilehash: 4da60194deaeac3c79f8c3e9be3bd87d91bc7ca2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50487035"
---
# <a name="compiler-warning-level-1-c4730"></a>Avviso del compilatore (livello 1) C4730

'main': miste _m64 e a virgola mobile le espressioni possono generare codice non corretto

Una funzione Usa [__m64](../../cpp/m64.md) e **float**/**double** tipi. Poiché i registri MMX e a virgola mobile e condividono lo stesso fisico ripetere la registrazione dello spazio (non può essere usata contemporaneamente), usando `__m64` e **float**/**double** tipi nello stesso funzione può causare il danneggiamento dei dati, che probabilmente causa un'eccezione.

Usare in modo sicuro `__m64` i tipi e tipi a virgola mobile nella stessa funzione, ogni istruzione che usa uno dei tipi deve essere separati dal **m_empty** (per MMX) o **m_femms** (per 3DNow!) funzione intrinseca.

L'esempio seguente genera l'errore C4730:

```
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