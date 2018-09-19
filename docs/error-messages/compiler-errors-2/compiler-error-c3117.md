---
title: Errore del compilatore C3117 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3117
dev_langs:
- C++
helpviewer_keywords:
- C3117
ms.assetid: dceee392-d4c7-4599-b75e-7aaac7c36fdd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fde62b5495afa4a8a0b76502cac78117fe0575fc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46090412"
---
# <a name="compiler-error-c3117"></a>Errore del compilatore C3117

'%$S s': un'interfaccia può avere solo una classe di base

È stata dichiarata un'interfaccia che eredita da più classi base.

L'esempio seguente genera l'errore C3117:

```
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