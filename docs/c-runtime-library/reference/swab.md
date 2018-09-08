---
title: _swab | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _swab
- stdlib/_swab
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _swab
- stdlib/_swab
dev_langs:
- C++
helpviewer_keywords:
- _swab function
- swapping bytes
- swab function
- bytes, swapping
ms.assetid: 017142f2-050c-4f6a-8b49-6b094f58ec94
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2975e63f79818e5eac430056258b72b9c6641a49
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44100274"
---
# <a name="swab"></a>_swab

Inverte i byte.

## <a name="syntax"></a>Sintassi

```C
void _swab(
   char *src,
   char *dest,
   int n
);
```

## <a name="parameters"></a>Parametri

*src*<br/>
Dati da copiare e invertire.

*dest*<br/>
Posizione di archiviazione per i dati convertiti.

*n*<br/>
Numero di byte da copiare e invertire.

## <a name="return-value"></a>Valore restituito

Il **swab** funzione non restituisce un valore. La funzione imposterà **errno** per **EINVAL** se la *src* o *dest* puntatore è null o *n* è minore rispetto a zero e il parametro non valido viene richiamato gestore, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Se *n* è pari, il **swab** funzione copie *n* byte da *src*, inverte ogni coppia di byte adiacenti e archivia il risultato in *dest*. Se *n* è dispari, **swab** copia e inverte i primi *n*-1 byte di *src*, e il byte finale non viene copiato. Il **swab** funzione viene in genere utilizzata per preparare i dati binari per il trasferimento in un computer che utilizza un ordine dei byte diverso.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_swab**|C: \<stdlib.h> C++: \<cstdlib> o \<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_swab.c

#include <stdlib.h>
#include <stdio.h>

char from[] = "BADCFEHGJILKNMPORQTSVUXWZY";
char to[] =   "...........................";

int main()
{
    printf("Before: %s  %d bytes\n        %s\n\n", from, sizeof(from), to);
    _swab(from, to, sizeof(from));
    printf("After:  %s\n        %s\n\n", from, to);
}
```

```Output
Before: BADCFEHGJILKNMPORQTSVUXWZY  27 bytes
        ...........................

After:  BADCFEHGJILKNMPORQTSVUXWZY
        ABCDEFGHIJKLMNOPQRSTUVWXYZ.
```

## <a name="see-also"></a>Vedere anche

[Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
