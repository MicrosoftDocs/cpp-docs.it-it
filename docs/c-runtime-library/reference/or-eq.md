---
title: or_eq
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
- std::or_eq
- or_eq
- std.or_eq
helpviewer_keywords:
- or_eq function
ms.assetid: 1eb92464-ed58-40d8-a30e-f0a6aa2f4318
ms.openlocfilehash: d286fbfaf7c388a41b5c421915b921e3b091045d
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70951152"
---
# <a name="or_eq"></a>or_eq

Alternativa all'operatore &#124;=.

## <a name="syntax"></a>Sintassi

```C

#define or_eq |=
```

## <a name="remarks"></a>Note

La macro restituisce l'operatore &#124;=.

## <a name="example"></a>Esempio

```cpp
// iso646_oreq.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 3, b = 2, result;

   result= a |= b;
   cout << result << endl;

   result= a or_eq b;
   cout << result << endl;
}
```

```Output
3
3
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iso646.h>