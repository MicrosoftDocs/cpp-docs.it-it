---
title: Macro _STATIC_ASSERT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
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
- _STATIC_ASSERT
dev_langs:
- C++
helpviewer_keywords:
- _STATIC_ASSERT macro
ms.assetid: 89b0350c-2c2f-4be6-9786-8b1f0780a5da
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3076e2e2a27c4f13222ce5dba8bf66cc46ce20c1
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="staticassert-macro"></a>Macro _STATIC_ASSERT

Valutare un'espressione in fase di compilazione e generare un errore quando il risultato è **FALSE**.

## <a name="syntax"></a>Sintassi

```C
_STATIC_ASSERT(
    booleanExpression
);
```

### <a name="parameters"></a>Parametri

*booleanExpression* espressione (inclusi i puntatori) che restituisce a diverso da zero (**TRUE**) oppure 0 (**FALSE**).

## <a name="remarks"></a>Note

Questa macro è simile ai [macro Assert e ASSERTE](assert-asserte-assert-expr-macros.md), ad eccezione del fatto che *booleanExpression* viene valutata in fase di compilazione anziché in fase di esecuzione. Se *booleanExpression* restituisca **FALSE** (0), [errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) viene generato.

## <a name="example"></a>Esempio

In questo esempio, controlliamo se il [sizeof](../../c-language/sizeof-operator-c.md) un' **int** è maggiore o uguale a 2 byte e indica se la [sizeof](../../c-language/sizeof-operator-c.md) un **lungo** sia 1 byte. Il programma non verrà compilato e genererà [errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) poiché un **lungo** è maggiore di 1 byte.

```C
// crt__static_assert.c

#include <crtdbg.h>
#include <stdio.h>

_STATIC_ASSERT(sizeof(int) >= 2);
_STATIC_ASSERT(sizeof(long) == 1);  // C2466

int main()
{
    printf("I am sure that sizeof(int) will be >= 2: %d\n",
        sizeof(int));
    printf("I am not so sure that sizeof(long) == 1: %d\n",
        sizeof(long));
}
```

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-----------|---------------------|
|**_STATIC_ASSERT**|\<crtdbg.h>|

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[Macro _ASSERT, _ASSERTE, _ASSERT_EXPR](assert-asserte-assert-expr-macros.md)<br/>
