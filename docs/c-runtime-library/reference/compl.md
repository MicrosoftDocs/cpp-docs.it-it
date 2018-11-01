---
title: compl
ms.date: 11/04/2016
apiname:
- compl
apilocation:
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
apitype: DLLExport
f1_keywords:
- std::compl
- std.compl
- compl
helpviewer_keywords:
- compl function
ms.assetid: e03f6fb5-cb8b-4afa-99c0-905f4105fb34
ms.openlocfilehash: 7697b3dd334a158418f63bb40c04208b50a02d1a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50569559"
---
# <a name="compl"></a>compl

Alternativa all'operatore ~.

## <a name="syntax"></a>Sintassi

```C

#define compl ~

```

## <a name="remarks"></a>Note

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

**Intestazione:** \<iso646.h>