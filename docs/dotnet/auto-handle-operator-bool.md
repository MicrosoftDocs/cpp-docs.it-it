---
title: bool auto_handle::operator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- auto_handle.operator bool
- msclr.auto_handle.operator bool
- operator bool
- msclr::auto_handle::operator bool
- auto_handle::operator bool
dev_langs:
- C++
helpviewer_keywords:
- auto_handle::operator bool
ms.assetid: 2e535e99-cf87-4008-b588-02c587d77453
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2534563ba85ec3d2d513c192637d3ae8b3beb971
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49162360"
---
# <a name="autohandleoperator-bool"></a>auto_handle::operator bool

Operatore per l'uso di `auto_handle` in un'espressione condizionale.

## <a name="syntax"></a>Sintassi

```
operator bool();
```

## <a name="return-value"></a>Valore restituito

**true** se l'oggetto con wrapper è valida. **false** in caso contrario.

## <a name="remarks"></a>Note

Questo operatore converte effettivamente `_detail_class::_safe_bool` che è più sicura **bool** perché non può essere convertito in un tipo integrale.

## <a name="example"></a>Esempio

```
// msl_auto_handle_operator_bool.cpp
// compile with: /clr
#include <msclr\auto_handle.h>

using namespace System;
using namespace msclr;

int main() {
   auto_handle<String> s1;
   auto_handle<String> s2 = "hi";
   if ( s1 ) Console::WriteLine( "s1 is valid" );
   if ( !s1 ) Console::WriteLine( "s1 is invalid" );
   if ( s2 ) Console::WriteLine( "s2 is valid" );
   if ( !s2 ) Console::WriteLine( "s2 is invalid" );
   s2.reset();
   if ( s2 ) Console::WriteLine( "s2 is now valid" );
   if ( !s2 ) Console::WriteLine( "s2 is now invalid" );
}
```

```Output
s1 is invalid
s2 is valid
s2 is now invalid
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\auto_handle.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[Membri auto_handle](../dotnet/auto-handle-members.md)<br/>
[auto_handle::operator!](../dotnet/auto-handle-operator-logical-not.md)