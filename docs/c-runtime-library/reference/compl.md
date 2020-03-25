---
title: compl
ms.date: 11/04/2016
api_name:
- compl
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
- std::compl
- std.compl
- compl
helpviewer_keywords:
- compl function
ms.assetid: e03f6fb5-cb8b-4afa-99c0-905f4105fb34
ms.openlocfilehash: ae1924ba8cdbcdeb9a06c241bc1fadfc66efd613
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80170307"
---
# <a name="compl"></a>compl

Alternativa all'operatore ~.

## <a name="syntax"></a>Sintassi

```C
#define compl ~
```

## <a name="remarks"></a>Osservazioni

La macro restituisce l'operatore ~.

## <a name="example"></a>Esempio

```cpp
// iso646_compl.cpp
// compile with: /EHsc
#include <iostream>
#include <iso646.h>

int main( )
{
   using namespace std;
   int a = 1, result;

   result = ~a;
   cout << result << endl;

   result= compl(a);
   cout << result << endl;
}
```

```Output
-2
-2
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iso646. h >
