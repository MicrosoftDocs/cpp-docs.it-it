---
title: Funzione swap (auto_handle) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- msclr::swap
- msclr.swap
dev_langs:
- C++
helpviewer_keywords:
- swap function
ms.assetid: 7dd91b5c-f0de-4634-a2e2-642626706e27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 36a118ec21ccb3eee7b90798cfb730e7402b308a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46425748"
---
# <a name="swap-function-autohandle"></a>Funzione swap (auto_handle)

Scambia gli oggetti tra uno `auto_handle` e un altro.

## <a name="syntax"></a>Sintassi

```
template<typename _element_type>
void swap(
   auto_handle<_element_type> % _left,
   auto_handle<_element_type> % _right
);
```

#### <a name="parameters"></a>Parametri

*a sinistra*<br/>
Oggetto `auto_handle`.

*a destra*<br/>
Un altro `auto_handle`.

## <a name="example"></a>Esempio

```
// msl_swap_auto_handle.cpp
// compile with: /clr
#include <msclr\auto_handle.h>

using namespace System;
using namespace msclr;

int main() {
   auto_handle<String> s1 = "string one";
   auto_handle<String> s2 = "string two";

   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",
      s1->ToString(), s2->ToString() );
   swap( s1, s2 );
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",
      s1->ToString(), s2->ToString() );
}
```

```Output
s1 = 'string one', s2 = 'string two'
s1 = 'string two', s2 = 'string one'
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\auto_handle.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[auto_handle](../dotnet/auto-handle.md)<br/>
[auto_handle::swap](../dotnet/auto-handle-swap.md)