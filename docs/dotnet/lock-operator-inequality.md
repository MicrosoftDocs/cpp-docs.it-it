---
title: lock::operator! = | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- lock.operator!=
- msclr.lock.operator!=
- msclr::lock::operator!=
- lock::operator!=
dev_langs:
- C++
helpviewer_keywords:
- lock::operator!=
ms.assetid: ed1d674e-9ee9-4257-8a7e-2e3567d50222
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: d96ddbd35b37f084e277951812f7868452ed09d5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438197"
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

Restituisce `true` se `t` è diverso dall'oggetto del blocco, `false` in caso contrario.

## <a name="example"></a>Esempio

```
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