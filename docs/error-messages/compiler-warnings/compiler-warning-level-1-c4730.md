---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4730'
title: Avviso del compilatore (livello 1) C4730
ms.date: 11/04/2016
f1_keywords:
- C4730
helpviewer_keywords:
- C4730
ms.assetid: 11303e3f-162b-4b19-970a-479686123a68
ms.openlocfilehash: e026d44bc76d58c934eeccc363f4385f43d15597
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150657"
---
# <a name="compiler-warning-level-1-c4730"></a>Avviso del compilatore (livello 1) C4730

' Main ': la combinazione di _m64 ed espressioni a virgola mobile può produrre codice errato

Una funzione usa [__m64](../../cpp/m64.md) e i **`float`** / **`double`** tipi. Poiché i registri MMX e a virgola mobile condividono lo stesso spazio di registro fisico (non può essere usato contemporaneamente), l'uso **`__m64`** **`float`** / **`double`** di tipi e nella stessa funzione può causare il danneggiamento dei dati, causando probabilmente un'eccezione.

Per usare in modo sicuro **`__m64`** i tipi e i tipi a virgola mobile nella stessa funzione, ogni istruzione che usa uno dei tipi deve essere separata dalla **_m_empty ()** (per MMX) o da **_m_femms ()** (per 3DNow!) intrinseco.

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
