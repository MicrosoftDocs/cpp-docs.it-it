---
title: _memccpy | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _memccpy
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _memccpy
dev_langs:
- C++
helpviewer_keywords:
- _memccpy function
- memccpy function
ms.assetid: 9a2337df-6e85-4eba-b247-dd0532f45ddb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6addc369de344b40a616b2ee1efbe840e98cc6d4
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43199540"
---
# <a name="memccpy"></a>_memccpy

Copia caratteri da un buffer.

## <a name="syntax"></a>Sintassi

```C
void *_memccpy(
   void *dest,
   const void *src,
   int c,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Puntatore alla destinazione.

*src*<br/>
Puntatore all'origine.

*c*<br/>
Ultimo carattere da copiare.

*count*<br/>
Numero di caratteri.

## <a name="return-value"></a>Valore restituito

Se il carattere *c* viene copiato **memccpy** restituisce un puntatore al carattere in *dest* che seguono immediatamente il carattere. Se *c* non viene copiato, restituisce **NULL**.

## <a name="remarks"></a>Note

Il **memccpy** funzione Copia 0 o più caratteri della *src* al *dest*, interrompe dopo il carattere *c* è stato copiato o quando *conteggio* caratteri sono stati copiati, a seconda del valore raggiunto per primo.

**Nota sulla sicurezza** Assicurarsi che il buffer di destinazione sia della stessa dimensione o più grande del buffer di origine. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/desktop/SecBP/avoiding-buffer-overruns).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_memccpy**|\<memory.h> o \<string.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_memccpy.c

#include <memory.h>
#include <stdio.h>
#include <string.h>

char string1[60] = "The quick brown dog jumps over the lazy fox";

int main( void )
{
   char buffer[61];
   char *pdest;

   printf( "Function: _memccpy 60 characters or to character 's'\n" );
   printf( "Source: %s\n", string1 );
   pdest = _memccpy( buffer, string1, 's', 60 );
   *pdest = '\0';
   printf( "Result: %s\n", buffer );
   printf( "Length: %d characters\n", strlen( buffer ) );
}
```

### <a name="output"></a>Output

```Output
Function: _memccpy 60 characters or to character 's'
Source: The quick brown dog jumps over the lazy fox
Result: The quick brown dog jumps
Length: 25 characters
```

## <a name="see-also"></a>Vedere anche

[Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memcpy, wmemcpy](memcpy-wmemcpy.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
