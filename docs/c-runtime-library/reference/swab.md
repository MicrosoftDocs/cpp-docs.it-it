---
title: _swab | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
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
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1ab841400bd002595508806797a9a204415b5f15
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

*src* i dati da copiare e invertite.

*distruttore* percorso di archiviazione per dati invertiti.

*n* numero di byte da copiare e scambiate.

## <a name="return-value"></a>Valore restituito

Il **swab** funzione non restituisce un valore. La funzione imposterà **errno** per **EINVAL** se il *src* o *dest* puntatore è null o *n* è minore di rispetto a zero e il parametro non valido viene richiamato gestore, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Se *n* è pari, il **swab** funzione copie *n* byte da *src*scambia ogni coppia di byte adiacenti e archivia il risultato in *dest*. Se *n* è dispari, **swab** copia e scambia il primo *n*-1 byte di *src*, e non viene copiato il byte finale. Il **swab** funzione viene in genere utilizzata per preparare i dati binari per il trasferimento a un computer che utilizza un ordine dei byte diverso.

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
