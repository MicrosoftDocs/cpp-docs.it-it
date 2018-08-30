---
title: Compilatore avviso (livello 1) C4556 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- xml
- C4556
dev_langs:
- C++
helpviewer_keywords:
- C4556
ms.assetid: e4c0e296-b747-4db1-9608-30b8b74feac2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 987e4dc3ba6aea7dcb01dc05cd94c45baced05b8
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211028"
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