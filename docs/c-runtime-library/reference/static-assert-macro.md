---
title: Macro _STATIC_ASSERT
ms.date: 11/04/2016
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
helpviewer_keywords:
- _STATIC_ASSERT macro
ms.assetid: 89b0350c-2c2f-4be6-9786-8b1f0780a5da
ms.openlocfilehash: 5d3aa1d9665b48a0690d8eb62353fc98c5a550f7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62354698"
---
# <a name="staticassert-macro"></a>Macro _STATIC_ASSERT

Valutare un'espressione in fase di compilazione e genera un errore quando il risultato viene **FALSE**.

## <a name="syntax"></a>Sintassi

```C
_STATIC_ASSERT(
    booleanExpression
);
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Espressione (inclusi i puntatori) che restituisce a diverso da zero (**TRUE**) oppure 0 (**FALSE**).

## <a name="remarks"></a>Note

Questa macro è simile al [macro Assert e ASSERTE](assert-asserte-assert-expr-macros.md), ad eccezione del fatto che *booleanExpression* viene valutata in fase di compilazione anziché in fase di esecuzione. Se *booleanExpression* restituisca **FALSE** (0), [errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) viene generato.

## <a name="example"></a>Esempio

In questo esempio, controlliamo se il [sizeof](../../c-language/sizeof-operator-c.md) un' **int** maggiore o uguale a 2 byte e indica se la [sizeof](../../c-language/sizeof-operator-c.md) un **lungo** è di 1 byte. Il programma non verrà compilato e genererà [errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) poiché un **lungo** è maggiore di 1 byte.

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
