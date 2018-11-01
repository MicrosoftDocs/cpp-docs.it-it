---
title: Errore del compilatore C3012
ms.date: 11/04/2016
f1_keywords:
- C3012
helpviewer_keywords:
- C3012
ms.assetid: cc7040b1-b3fb-4da6-a474-877914d30332
ms.openlocfilehash: 9fe0ac7d3637cad3a5571c4631345dac1a0021bb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50503088"
---
# <a name="compiler-error-c3012"></a>Errore del compilatore C3012

> «*intrinseco*': funzione intrinseca non consentita direttamente in un'area parallela

Una funzione [intrinseca del compilatore](../../intrinsics/compiler-intrinsics.md) non è consentita in un'area `omp parallel` . Per risolvere questo problema, spostare gli oggetti intrinseci fuori dall'area di, o sostituirli con gli equivalenti non intrinseco.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3012 e viene illustrato un modo per risolvere il problema:

```cpp
// C3012.cpp
// compile with: /openmp
#ifdef __cplusplus
extern "C" {
#endif
void* _ReturnAddress();
#ifdef __cplusplus
}
#endif

int main()
{
   #pragma omp parallel
   {
      _ReturnAddress();   // C3012
   }
   _ReturnAddress();      // OK
}
```