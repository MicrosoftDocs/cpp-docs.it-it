---
description: 'Altre informazioni su: _STATIC_ASSERT macro'
title: Macro _STATIC_ASSERT
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
- _STATIC_ASSERT
helpviewer_keywords:
- _STATIC_ASSERT macro
ms.assetid: 89b0350c-2c2f-4be6-9786-8b1f0780a5da
ms.openlocfilehash: bbdb615cccfb245868d4c282acf86c9228ea574b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97171199"
---
# <a name="_static_assert-macro"></a>Macro _STATIC_ASSERT

Valutare un'espressione in fase di compilazione e generare un errore quando il risultato è **false**.

## <a name="syntax"></a>Sintassi

```C
_STATIC_ASSERT(
    booleanExpression
);
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Espressione (inclusi i puntatori) che restituisce un valore diverso da zero (**true**) o 0 (**false**).

## <a name="remarks"></a>Commenti

Questa macro è simile alle [macro _ASSERT e _ASSERTE](assert-asserte-assert-expr-macros.md), con la differenza che *BooleanExpression* viene valutato in fase di compilazione anziché in fase di esecuzione. Se *BooleanExpression* restituisce **false** (0), viene generato l' [errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) .

## <a name="example"></a>Esempio

In questo esempio viene verificato se [sizeof](../../c-language/sizeof-operator-c.md) a **`int`** è maggiore o uguale a 2 byte e se [sizeof](../../c-language/sizeof-operator-c.md) a **`long`** è 1 byte. Il programma non verrà compilato e genererà un [errore del compilatore C2466](../../error-messages/compiler-errors-1/compiler-error-c2466.md) perché un **`long`** è maggiore di 1 byte.

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

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[_ASSERT, _ASSERTE _ASSERT_EXPR macro](assert-asserte-assert-expr-macros.md)<br/>
