---
title: lock::operator!=
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- lock.operator!=
- msclr.lock.operator!=
- msclr::lock::operator!=
- lock::operator!=
helpviewer_keywords:
- lock::operator!=
ms.assetid: ed1d674e-9ee9-4257-8a7e-2e3567d50222
ms.openlocfilehash: 5f202d6e7cc4c023b366f370ec2c419336822964
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558444"
---
# <a name="lockoperator"></a>lock::operator!=

Operatore di disuguaglianza.

## <a name="syntax"></a>Sintassi

```
template<class T> bool operator!=(
   T t
);
```

#### <a name="parameters"></a>Parametri

*t*<br/>
Oggetto da confrontare per verificarne la disuguaglianza.

## <a name="return-value"></a>Valore restituito

Restituisce **true** se `t` è diverso dall'oggetto del blocco **false** in caso contrario.

## <a name="example"></a>Esempio

```cpp
// msl_lock_op_ineq.cpp
// compile with: /clr
#include <msclr/lock.h>

using namespace System;
using namespace System::Threading;
using namespace msclr;

int main () {
   Object^ o1 = gcnew Object;
   Object^ o2 = gcnew Object;
   lock l1(o1);
   if (l1 != o2) {
      Console::WriteLine("Inequal!");
   }
}
```

```Output
Inequal!
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\lock.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[Membri lock](../dotnet/lock-members.md)<br/>
[lock::operator==](../dotnet/lock-operator-equality.md)