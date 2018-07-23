---
title: memchr, wmemchr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- wmemchr
- memchr
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
- memchr
- wmemchr
dev_langs:
- C++
helpviewer_keywords:
- memchr function
- wmemchr function
ms.assetid: 5a348581-28f1-4256-8434-687245f7fc9f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 43c76ae09f491ff163391f0ee46564af7bb629fe
ms.sourcegitcommit: 04d327940787df1297b72d534f388a035d472af0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/20/2018
ms.locfileid: "39181172"
---
# <a name="memchr-wmemchr"></a>memchr, wmemchr

Individuare i caratteri in un buffer.

## <a name="syntax"></a>Sintassi

```C
void *memchr(
   const void *buffer,
   int c,
   size_t count
); // C only
void *memchr(
   void *buffer,
   int c,
   size_t count
); // C++ only
const void *memchr(
   const void *buffer,
   int c,
   size_t count
); // C++ only
wchar_t *wmemchr(
   const wchar_t * buffer,
   wchar_t c,
   size_t count
); // C only
wchar_t *wmemchr(
   wchar_t * buffer,
   wchar_t c,
   size_t count
); // C++ only
const wchar_t *wmemchr(
   const wchar_t * buffer,
   wchar_t c,
   size_t count
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Puntatore al buffer.

*c*<br/>
Carattere da cercare.

*count*<br/>
Numero di caratteri da controllare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce un puntatore alla posizione del primo *c* nelle *buffer*. In caso contrario, restituisce NULL.

## <a name="remarks"></a>Note

`memchr` e `wmemchr` cercano la prima occorrenza *c* nel primo *conteggio* byte del *buffer*. Arresta quando trova *c* o quando ha controllato i primi *conteggio* byte.

In C, queste funzioni accettano un **const** puntatore per il primo argomento. In C++ sono disponibili due overload. L'overload che accetta un puntatore alla **const** restituisce un puntatore a **const**; la versione che accetta un puntatore a non -**const** restituisce un puntatore a non -**const** . La macro _CRT_CONST_CORRECT_OVERLOADS è definito se entrambi i **const** e non-**const** sono disponibili versioni di queste funzioni. Se non occorre**const** comportamento per entrambi gli overload C++, definire il simbolo CONST_RETURN.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`memchr`|\<memory.h> o \<string.h>|
|`wmemchr`|\<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_memchr.c

#include <memory.h>
#include <stdio.h>

int  ch = 'r';
char str[] =    "lazy";
char string[] = "The quick brown dog jumps over the lazy fox";
char fmt1[] =   "         1         2         3         4         5";
char fmt2[] =   "12345678901234567890123456789012345678901234567890";

int main( void )
{
   char *pdest;
   int result;
   printf( "String to be searched:\n             %s\n", string );
   printf( "             %s\n             %s\n\n", fmt1, fmt2 );

   printf( "Search char: %c\n", ch );
   pdest = memchr( string, ch, sizeof( string ) );
   result = (int)(pdest - string + 1);
   if ( pdest != NULL )
      printf( "Result:      %c found at position %d\n", ch, result );
   else
      printf( "Result:      %c not found\n" );
}
```

### <a name="output"></a>Output

```Output
String to be searched:
             The quick brown dog jumps over the lazy fox
                      1         2         3         4         5
             12345678901234567890123456789012345678901234567890

Search char: r
Result:      r found at position 12
```

## <a name="see-also"></a>Vedere anche

[Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memcpy, wmemcpy](memcpy-wmemcpy.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strchr, wcschr, _mbschr, _mbschr_l](strchr-wcschr-mbschr-mbschr-l.md)<br/>
