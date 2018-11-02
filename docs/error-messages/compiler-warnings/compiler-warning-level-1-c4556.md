---
title: Avviso del compilatore (livello 1) C4556
ms.date: 08/27/2018
f1_keywords:
- xml
- C4556
helpviewer_keywords:
- C4556
ms.assetid: e4c0e296-b747-4db1-9608-30b8b74feac2
ms.openlocfilehash: 53261b97249340ce56ce6ae0f5cc0eab7e97a107
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50538489"
---
# <a name="compiler-warning-level-1-c4556"></a>Avviso del compilatore (livello 1) C4556

> valore di argomento intrinseco immediato '*valore*'non è compreso nell'intervallo'*lowerbound* - *upperbound*'

## <a name="remarks"></a>Note

Funzione intrinseca corrisponde a un'istruzione di hardware. L'istruzione di hardware ha un numero fisso di bit per codificare la costante. Se *valore* è compreso nell'intervallo, la codifica non sarà corretta. Il compilatore tronca i bit aggiuntivi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4556:

```cpp
// C4556.cpp
// compile with: /W1
// processor: x86 IPF
#include <xmmintrin.h>

void test()
{
   __m64 m;
   _m_pextrw(m, 5);   // C4556
}

int main()
{
}
```