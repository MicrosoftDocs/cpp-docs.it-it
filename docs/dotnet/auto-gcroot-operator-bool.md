---
title: auto_gcroot::operator bool
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- auto_gcroot.operator bool
- auto_gcroot::operator bool
- msclr.auto_gcroot.operator bool
- msclr::auto_gcroot::operator bool
- operator bool
helpviewer_keywords:
- bool operator
ms.assetid: 87d38498-4221-4de8-8d02-c2dd2e6274ec
ms.openlocfilehash: f07cd378eea9c68542a50b579b9aff17ec2b3693
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50659355"
---
# <a name="autogcrootoperator-bool"></a>auto_gcroot::operator bool

Operatore per l'uso di `auto_gcroot` in un'espressione condizionale.

## <a name="syntax"></a>Sintassi

```
operator bool() const;
```

## <a name="return-value"></a>Valore restituito

**true** se l'oggetto con wrapper è valida. **false** in caso contrario.

## <a name="remarks"></a>Note

Questo operatore converte effettivamente `_detail_class::_safe_bool` che è più sicura **bool** perché non può essere convertito in un tipo integrale.

## <a name="example"></a>Esempio

```cpp
// msl_auto_gcroot_operator_bool.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

int main() {
   auto_gcroot<String^> s;
   if ( s ) Console::WriteLine( "s is valid" );
   if ( !s ) Console::WriteLine( "s is invalid" );
   s = "something";
   if ( s ) Console::WriteLine( "now s is valid" );
   if ( !s ) Console::WriteLine( "now s is invalid" );
   s.reset();
   if ( s ) Console::WriteLine( "now s is valid" );
   if ( !s ) Console::WriteLine( "now s is invalid" );
}
```

```Output
s is invalid
now s is valid
now s is invalid
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\auto_gcroot.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[Membri auto_gcroot](../dotnet/auto-gcroot-members.md)<br/>
[auto_gcroot::operator!](../dotnet/auto-gcroot-operator-logical-not.md)