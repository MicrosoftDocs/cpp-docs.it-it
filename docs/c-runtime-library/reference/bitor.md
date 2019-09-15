---
title: bitor
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
- bitor
- std.bitor
- std::bitor
helpviewer_keywords:
- bitor function
ms.assetid: 3c0a3711-9c74-41f2-b400-2f7797da30d1
ms.openlocfilehash: bda47a4590095ecf089efa23b983622e2fbd1a59
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939451"
---
# <a name="bitor"></a>bitor

Alternativa all'operatore &#124;.

## <a name="syntax"></a>Sintassi

```C

#define bitor |
```

## <a name="remarks"></a>Note

La macro restituisce l'operatore &#124;.

## <a name="example"></a>Esempio

```cpp
// iso646_bitor.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 1, b = 2, result;

   result = a | b;
   cout << result << endl;

   result= a bitor b;
   cout << result << endl;
}
```

```Output
3
3
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iso646.h>