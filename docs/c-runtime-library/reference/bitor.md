---
title: bitor | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
- bitor
- std.bitor
- std::bitor
dev_langs:
- C++
helpviewer_keywords:
- bitor function
ms.assetid: 3c0a3711-9c74-41f2-b400-2f7797da30d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9796021fd59d47de1664139e584fc519a6ebfc68
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32392809"
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