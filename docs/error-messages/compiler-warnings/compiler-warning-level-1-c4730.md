---
title: Compilatore avviso (livello 1) C4730 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4730
dev_langs:
- C++
helpviewer_keywords:
- C4730
ms.assetid: 11303e3f-162b-4b19-970a-479686123a68
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 467d9fd04e2fef78d480fc4db1417b6e4c8d5641
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33285473"
---
# <a name="compiler-warning-level-1-c4730"></a>Avviso del compilatore (livello 1) C4730
'main': miste m64 e a virgola mobile espressioni possono generare codice non corretto  
  
 Una funzione utilizza [m64](../../cpp/m64.md) e **float**/**doppie** tipi. Poiché i registri MMX e a virgola mobile condividono lo stesso fisico spazio di registro (non può essere utilizzato contemporaneamente), utilizzando `__m64` e **float**/**doppie** tipi nello stesso funzione può causare il danneggiamento dei dati, causando un'eccezione.  
  
 Utilizzare in modo sicuro `__m64` tipi e tipi a virgola mobile nella stessa funzione, ogni istruzione che utilizza uno dei tipi deve essere separati dal **m_empty** (per MMX) o **m_femms** (per 3DNow!) funzione intrinseca.  
  
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