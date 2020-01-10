---
title: _mbclen, mblen, _mblen_l, _mbclen_l
description: Vengono descritte le funzioni Microsoft C Runtime Library (CRT) _mbclen, mblen, _mblen_l e _mbclen_l.
ms.date: 01/08/2020
api_name:
- _mbclen
- mblen
- _mblen_l
- _mbclen_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mblen
- ftclen
- _mbclen
- _mbclen_l
- tclen
- _ftclen
- _tclen
- mbclen
helpviewer_keywords:
- tclen function
- _mblen_l function
- _tclen function
- mblen_l function
- _mbclen function
- _mbclen_l function
- mbclen function
- mblen function
ms.assetid: d5eb92a0-b7a3-464a-aaf7-9890a8e3ed70
ms.openlocfilehash: 4676d850448af386a5aface69f616a4ac6f85cbf
ms.sourcegitcommit: 7bd3567fc6a0e7124aab51cad63bbdb44a99a848
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/08/2020
ms.locfileid: "75755076"
---
# <a name="_mbclen-mblen-_mblen_l-_mbclen_l"></a>_mbclen, mblen, _mblen_l, _mbclen_l

Ottiene la lunghezza e determina la validità di un carattere multibyte.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
size_t _mbclen(
   const unsigned char *c
);
size_t _mbclen_l(
   unsigned char const* c,
   _locale_t locale
);
int mblen(
   const char *mbstr,
   size_t count
);
int _mblen_l(
   const char *mbstr,
   size_t count,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

\ *c*
Carattere multibyte.

\ *mbstr*
Indirizzo di una sequenza di byte del carattere multibyte.

*conteggio*\
Numero di byte da controllare.

*impostazioni locali*\
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_mbclen** e **_mbclen_l** restituiscono 1 o 2, in base alla lunghezza del carattere multibyte *c*. Le funzioni restituiscono sempre 1 per UTF-8, indipendentemente dal fatto che *c* sia multibyte o meno. Non viene restituito alcun errore per **_mbclen**.

Se *mbstr* non è **null**, **mblen** e **_mblen_l** restituiscono la lunghezza, in byte, del carattere multibyte. Le funzioni **mblen** e **_mblen_l** funzionano correttamente in UTF-8 e possono restituire un valore compreso tra 1 e 3. Quando *mbstr* è **null** (o punta al carattere null a caratteri wide), **mblen** e **_mblen_l** restituiscono 0. L'oggetto a cui fa riferimento *mbstr* deve formare un carattere multibyte valido nei primi caratteri di *conteggio* , oppure **mblen** e **_mblen_l** return-1.

## <a name="remarks"></a>Note

La funzione **_mbclen** restituisce la lunghezza, in byte, del carattere multibyte *c*. Se *c* non punta al byte di apertura di un carattere multibyte (come determinato da una chiamata implicita a [_ismbblead](ismbblead-ismbblead-l.md), il risultato di **_mbclen** è imprevedibile.

**mblen** restituisce la lunghezza in byte di *mbstr* se è un carattere multibyte valido. Determina inoltre la validità dei caratteri multibyte associata alla tabella codici. **mblen** esamina il *conteggio* o un numero inferiore di byte contenuti in *mbstr*, ma non più di **MB_CUR_MAX** byte.

Il valore di output è interessato dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Le versioni di queste funzioni senza il suffisso **_L** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con suffisso **_L** hanno lo stesso comportamento, ma usano invece il parametro delle impostazioni locali passato. Per ulteriori informazioni [, vedere setlocale](setlocale-wsetlocale.md) e [impostazioni locali](../../c-runtime-library/locale.md).

**_mbclen**, **_mblen_l**e **_mbclen_l** sono specifici di Microsoft e non fanno parte della libreria C standard. Non è consigliabile usarli in cui si vuole usare il codice portatile. Per la compatibilità con il linguaggio C standard, usare invece **mblen** o **mbrlen** .

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tclen**|Mapping a una macro o a una funzione inline|**_mbclen**|Mapping a una macro o a una funzione inline|

## <a name="requirements"></a>Requisiti di

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbclen**|\<mbstring.h>|
|**mblen**|\<stdlib.h>|
|**_mblen_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mblen.c
/* illustrates the behavior of the mblen function
*/

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
    int      i;
    char    *pmbc = (char *)malloc( sizeof( char ) );
    wchar_t  wc   = L'a';

    printf( "Convert wide character to multibyte character:\n" );
    wctomb_s( &i, pmbc, sizeof(char), wc );
    printf( "   Characters converted: %u\n", i );
    printf( "   Multibyte character: %x\n\n", *pmbc );

    i = mblen( pmbc, MB_CUR_MAX );
    printf( "Length in bytes of multibyte character %x: %u\n", *pmbc, i );

    pmbc = NULL;
    i = mblen( pmbc, MB_CUR_MAX );
    printf( "Length in bytes of NULL multibyte character %x: %u\n", pmbc, i );
}
```

```Output
Convert wide character to multibyte character:
   Characters converted: 1
   Multibyte character: 61

Length in bytes of multibyte character 61: 1
Length in bytes of NULL multibyte character 0: 0
```

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)\
[Impostazioni locali](../../c-runtime-library/locale.md)\
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)\
[_mbccpy, _mbccpy_l](mbccpy-mbccpy-l.md)\
\ [mbrlen](mbrlen.md)
[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
