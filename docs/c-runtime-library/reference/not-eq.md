---
title: not_eq
ms.date: 11/04/2016
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- not_eq
- std::not_eq
- std.not_eq
helpviewer_keywords:
- not_eq function
ms.assetid: d87ad299-8b50-4393-a57f-06f70e1f23fb
ms.openlocfilehash: acce0e6bc50e50c8c5aadbcdf7ebf9b35a6aca00
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168759"
---
# <a name="not_eq"></a>not_eq

Alternativa all'operatore !=.

## <a name="syntax"></a>Sintassi

```C

#define not_eq !=
```

## <a name="remarks"></a>Osservazioni

La macro restituisce l'operatore !=.

## <a name="example"></a>Esempio

```cpp
// iso646_not_eq.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 0, b = 1;

   if (a != b)
      cout << "a is not equal to b" << endl;

   if (a not_eq b)
      cout << "a is not equal to b" << endl;
}
```

```Output
a is not equal to b
a is not equal to b
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iso646. h >
