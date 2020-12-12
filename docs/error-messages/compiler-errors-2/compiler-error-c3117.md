---
description: 'Altre informazioni su: errore del compilatore C3117'
title: Errore del compilatore C3117
ms.date: 11/04/2016
f1_keywords:
- C3117
helpviewer_keywords:
- C3117
ms.assetid: dceee392-d4c7-4599-b75e-7aaac7c36fdd
ms.openlocfilehash: 08f2d4c5d768cc97694e27e00db987f09722e6eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115911"
---
# <a name="compiler-error-c3117"></a>Errore del compilatore C3117

'% $S ': un'interfaccia può avere una sola classe di base

È stata dichiarata un'interfaccia che eredita da più classi base.

L'esempio seguente genera l'C3117:

```cpp
// C3117.cpp
#include <windows.h>

[ object, uuid("00000000-0000-0000-0000-000000000001") ]
__interface I1
{
};

[ object, uuid("00000000-0000-0000-0000-000000000002") ]
__interface I2
{
};

[ object, uuid("00000000-0000-0000-0000-000000000003") ]
__interface I3 : I1, I2
{   // C3117
};
```
