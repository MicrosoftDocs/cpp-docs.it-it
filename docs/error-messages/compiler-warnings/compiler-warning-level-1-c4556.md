---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4556'
title: Avviso del compilatore (livello 1) C4556
ms.date: 08/27/2018
f1_keywords:
- C4556
helpviewer_keywords:
- C4556
ms.assetid: e4c0e296-b747-4db1-9608-30b8b74feac2
ms.openlocfilehash: a0e0780b541b74125135ab84daa6ecab80b57e83
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265857"
---
# <a name="compiler-warning-level-1-c4556"></a>Avviso del compilatore (livello 1) C4556

> il valore dell'argomento intrinseco immediato '*value*' non è compreso nell'intervallo '*lowerbound*  -  *upperbound*'

## <a name="remarks"></a>Commenti

Un intrinseco corrisponde a un'istruzione hardware. L'istruzione hardware dispone di un numero fisso di bit per codificare la costante. Se il *valore* non è compreso nell'intervallo, non verrà codificato correttamente. Il compilatore tronca i bit aggiuntivi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4556:

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
