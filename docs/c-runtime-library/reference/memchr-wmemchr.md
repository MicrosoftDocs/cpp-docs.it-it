---
title: memchr, wmemchr
ms.date: 03/31/2019
api_name:
- wmemchr
- memchr
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- memchr
- wmemchr
helpviewer_keywords:
- memchr function
- wmemchr function
ms.assetid: 5a348581-28f1-4256-8434-687245f7fc9f
ms.openlocfilehash: b4640004526eda4ff26e9601e15298bcb8ba3c79
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232469"
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

Se ha esito positivo, restituisce un puntatore alla prima posizione di *c* nel *buffer*. In caso contrario, restituisce NULL.

## <a name="remarks"></a>Osservazioni

`memchr`e `wmemchr` cercano la prima occorrenza di *c* nei primi caratteri di *conteggio* del *buffer*. Si interrompe quando viene trovato *c* o quando sono stati controllati i primi caratteri di *conteggio* .

In C queste funzioni accettano un **`const`** puntatore per il primo argomento. In C++ sono disponibili due overload. L'overload che accetta un puntatore a **`const`** restituisce un puntatore a **`const`** ; la versione che accetta un puntatore a non **`const`** restituisce un puntatore a non- **`const`** . Gli overload della macro \_ CRT \_ const \_ corretti \_ vengono definiti se **`const`** sono disponibili entrambe le versioni e non le **`const`** versioni di queste funzioni. Se è necessario il comportamento non- **`const`** per entrambi gli overload c++ in c++, definire il simbolo \_ const \_ return.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`memchr`|\<memory.h> o \<string.h>|
|`wmemchr`|\<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Manipolazione del buffer](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memcpy, wmemcpy](memcpy-wmemcpy.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strchr, wcschr, _mbschr, _mbschr_l](strchr-wcschr-mbschr-mbschr-l.md)<br/>
