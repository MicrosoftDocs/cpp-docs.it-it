---
description: 'Altre informazioni su: _scprintf, _scprintf_l, _scwprintf, _scwprintf_l'
title: _scprintf, _scprintf_l, _scwprintf, _scwprintf_l
ms.date: 11/04/2016
api_name:
- _scprintf_l
- _scwprintf
- _scwprintf_l
- _scprintf
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
- scprintf
- _scprintf_l
- _scwprintf_l
- _scprintf
- scwprintf
- _scwprintf
- scprintf_l
- _sctprintf_l
- scwprintf_l
- _sctprintf
helpviewer_keywords:
- scprintf function
- sctprintf_l function
- scwprintf_l function
- _scwprintf_l function
- _sctprintf_l function
- sctprintf function
- _scwprintf function
- _scprintf_l function
- _sctprintf function
- scprintf_l function
- formatted text [C++]
- _scprintf function
- scwprintf function
ms.assetid: ecbb0ba6-5f4c-4ce6-a64b-144ad8b5fe92
ms.openlocfilehash: 8082c2281069b2350cecf032d6378baff7b93557
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277232"
---
# <a name="_scprintf-_scprintf_l-_scwprintf-_scwprintf_l"></a>_scprintf, _scprintf_l, _scwprintf, _scwprintf_l

Restituisce il numero di caratteri nella stringa formattata.

## <a name="syntax"></a>Sintassi

```C
int _scprintf(
   const char *format [,
   argument] ...
);
int _scprintf_l(
   const char *format,
   locale_t locale [,
   argument] ...
);
int _scwprintf(
   const wchar_t *format [,
   argument] ...
);
int _scwprintf_l(
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Stringa di controllo del formato.

*argument*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri che verrebbero generati se la stringa dovesse essere stampata o inviata a un file o un buffer tramite i codici di formattazione specificati. Il valore restituito non include il carattere Null di terminazione. **_scwprintf** esegue la stessa funzione per i caratteri wide.

Se *Format* è un puntatore **null** , viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ogni *argomento* , se presente, viene convertito in base alla specifica di formato corrispondente nel *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso formato e la stessa funzione dell'argomento *Format* per [printf](printf-printf-l-wprintf-wprintf-l.md).

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_sctprintf**|**_scprintf**|**_scprintf**|**_scwprintf**|
|**_sctprintf_l**|**_scprintf_l**|**_scprintf_l**|**_scwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_scprintf**, **_scprintf_l**|\<stdio.h>|
|**_scwprintf**, **_scwprintf_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt__scprintf.c

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main( void )
{
   int count;
   int size;
   char *s = NULL;

   count = _scprintf( "The value of Pi is calculated to be %f.\n",
                      M_PI);

   size = count + 1; // the string will need one more char for the null terminator
   s = malloc(sizeof(char) * size);
   sprintf_s(s, size, "The value of Pi is calculated to be %f.\n",
                      M_PI);
   printf("The length of the following string will be %i.\n", count);
   printf("%s", s);
   free( s );
}
```

```Output
The length of the following string will be 46.
The value of Pi is calculated to be 3.141593.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
