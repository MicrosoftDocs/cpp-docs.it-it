---
title: _atoi64, _atoi64_l, _wtoi64, _wtoi64_l
ms.date: 4/2/2020
api_name:
- _atoi64_l
- _wtoi64
- _atoi64
- _wtoi64_l
- _o__atoi64
- _o__atoi64_l
- _o__wtoi64
- _o__wtoi64_l
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
- api-ms-win-crt-convert-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _atoi64
- _tstoi64
- _ttoi64
- wtoi64
- _tstoi64_l
- atoi64
- _wtoi64_l
- _wtoi64
- wtoi64_l
- _atoi64_l
- atoi64_l
helpviewer_keywords:
- tstoi64 function
- wtoi64 function
- atoi64_l function
- _ttoi64 function
- string conversion, to integers
- wtoi64_l function
- atoi64 function
- _tstoi64 function
- _atoi64_l function
- _wtoi64_l function
- ttoi64 function
- _wtoi64 function
- _atoi64 function
ms.assetid: 2c3e30fd-545d-4222-8364-0c5905df9526
ms.openlocfilehash: 44b1abf816020258240d653cfbf8cd806fcb7dd1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232560"
---
# <a name="_atoi64-_atoi64_l-_wtoi64-_wtoi64_l"></a>_atoi64, _atoi64_l, _wtoi64, _wtoi64_l

Converte una stringa in un Integer a 64 bit.

## <a name="syntax"></a>Sintassi

```C
__int64 _atoi64(
   const char *str
);
__int64 _wtoi64(
   const wchar_t *str
);
__int64 _atoi64_l(
   const char *str,
   _locale_t locale
);
__int64 _wtoi64_l(
   const wchar_t *str,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa da convertire.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce il **`__int64`** valore prodotto interpretando i caratteri di input come numero. Il valore restituito è 0 per **_atoi64** se l'input non può essere convertito in un valore di tale tipo.

In caso di overflow con valori integrali positivi di grandi dimensioni, **_atoi64** restituisce **I64_MAX** e **I64_MIN** in caso di overflow con valori integrali negativi di grandi dimensioni.

In tutti i casi fuori intervallo, **errno** viene impostato su **ERANGE**. Se il parametro passato è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono 0.

## <a name="remarks"></a>Osservazioni

Queste funzioni convertono una stringa di caratteri in un Integer a 64 bit.

La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato. La funzione interrompe la lettura della stringa di input in corrispondenza del primo carattere che non riconosce come parte di un numero. Questo carattere potrebbe essere il carattere null ('\0' or L'\0') che termina la stringa.

L'argomento *Str* per **_atoi64** ha il formato seguente:

> [*spazi vuoti*] [*segno*] [*cifre*]

Uno spazio *vuoto* è costituito da caratteri di spazio o di tabulazione, che vengono ignorati; *segno* più (+) o meno (-); le *cifre* e corrispondono a una o più cifre.

**_wtoi64** è identico a **_atoi64** ad eccezione del fatto che accetta una stringa di caratteri wide come parametro.

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tstoi64**|**_atoi64**|**_atoi64**|**_wtoi64**|
|**_ttoi64**|**_atoi64**|**_atoi64**|**_wtoi64**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|--------------|---------------------|
|**_atoi64**, **_atoi64_l**|\<stdlib.h>|
|**_wtoi64**, **_wtoi64_l**|\<stdlib.h> o \<wchar.h>|

## <a name="example"></a>Esempio

Questo programma Mostra come i numeri archiviati come stringhe possono essere convertiti in valori numerici usando le funzioni **_atoi64** .

```C
// crt_atoi64.c
// This program shows how numbers stored as
// strings can be converted to numeric values
// using the _atoi64 functions.
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main( void )
{
    char    *str = NULL;
    __int64 value = 0;

    // An example of the _atoi64 function
    // with leading and trailing white spaces.
    str = "  -2309 ";
    value = _atoi64( str );
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );

    // Another example of the _atoi64 function
    // with an arbitrary decimal point.
    str = "314127.64";
    value = _atoi64( str );
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );

    // Another example of the _atoi64 function
    // with an overflow condition occurring.
    str = "3336402735171707160320";
    value = _atoi64( str );
    printf( "Function: _atoi64( \"%s\" ) = %d\n", str, value );
    if (errno == ERANGE)
    {
       printf("Overflow condition occurred.\n");
    }
}
```

```Output
Function: _atoi64( "  -2309 " ) = -2309
Function: _atoi64( "314127.64" ) = 314127
Function: _atoi64( "3336402735171707160320" ) = -1
Overflow condition occurred.
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_ecvt](ecvt.md)<br/>
[_fcvt](fcvt.md)<br/>
[_gcvt](gcvt.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l](atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)<br/>
