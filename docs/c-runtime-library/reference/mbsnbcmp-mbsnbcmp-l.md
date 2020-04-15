---
title: _mbsnbcmp, _mbsnbcmp_l
ms.date: 4/2/2020
api_name:
- _mbsnbcmp
- _mbsnbcmp_l
- _o__mbsnbcmp
- _o__mbsnbcmp_l
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbsnbcmp
- tcsnbmp
- _mbsnbcmp_l
- mbsnbcmp_l
- _mbsnbcmp
helpviewer_keywords:
- mbsnbcmp_l function
- mbsnbcmp function
- tcsncmp function
- _mbsnbcmp_l function
- _tcsncmp function
- _mbsnbcmp function
ms.assetid: dbc99e50-cf85-4e57-a13f-067591f18ac8
ms.openlocfilehash: 2334d7755a3eaf3fb973783db17ca398e6b7f0b5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81340686"
---
# <a name="_mbsnbcmp-_mbsnbcmp_l"></a>_mbsnbcmp, _mbsnbcmp_l

Confronta i primi **n** byte di due stringhe di caratteri multibyte.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _mbsnbcmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _mbsnbcmp_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*stringa1*, *stringa2*<br/>
Stringhe da confrontare.

*count*<br/>
Numero di byte da confrontare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Il valore restituito indica la relazione ordinale tra le sottostringhe di *string1* e *string2*.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|*string1* substring è minore di *string2* substring.|
|0|*string1* substring è identica alla sottostringa *string2.*|
|> 0|*string1* substring è maggiore di *string2* substring.|

In un errore di convalida dei parametri, **_mbsnbcmp** e **_mbsnbcmp_l** \<restituito **_NLSCMPERROR**, definito in \<> string.h e> mbstring.h.

## <a name="remarks"></a>Osservazioni

Le funzioni **_mbsnbcmp** confrontano al massimo i primi byte *di conteggio* in *string1* e *string2* e restituiscono un valore che indica la relazione tra le sottostringhe. **_mbsnbcmp** è una versione di **_mbsnbicmp**con distinzione tra maiuscole e minuscole. A differenza di **_mbsnbcoll**, **_mbsnbcmp** non è influenzato dall'ordine di confronto delle impostazioni locali. **_mbsnbcmp** riconosce le sequenze di caratteri multibyte in base alla [tabella codici](../../c-runtime-library/code-pages.md)multibyte corrente.

**_mbsnbcmp** è simile a **_mbsncmp**, ad eccezione del fatto che **_mbsncmp** confronta le stringhe in base ai caratteri anziché in byte.

Il valore di output è influenzato dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali, che specifica i byte iniziali e finali dei caratteri multibyte. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). La funzione **_mbsnbcmp** utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. La funzione **_mbsnbcmp_l** è identica, ad eccezione del fatto che utilizza invece il parametro *locale.* Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *string1* o *string2* è un puntatore null, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono **_NLSCMPERROR** e **errno** è impostato su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|---------------------------------------|--------------------|-----------------------|
|**_tcsncmp**|[strncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|**_mbsnbcmp**|[wcsncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|
|**_tcsncmp_l**|[strncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|**_mbsnbcml**|[wcsncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbcmp**|\<mbstring.h>|
|**_mbsnbcmp_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mbsnbcmp.c
#include <mbstring.h>
#include <stdio.h>

char string1[] = "The quick brown dog jumps over the lazy fox";
char string2[] = "The QUICK brown fox jumps over the lazy dog";

int main( void )
{
   char tmp[20];
   int result;
   printf( "Compare strings:\n          %s\n", string1 );
   printf( "          %s\n\n", string2 );
   printf( "Function: _mbsnbcmp (first 10 characters only)\n" );
   result = _mbsncmp( string1, string2 , 10 );
   if( result > 0 )
      _mbscpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      _mbscpy_s( tmp, sizeof(tmp), "less than" );
   else
      _mbscpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:   String 1 is %s string 2\n\n", tmp );
   printf( "Function: _mbsnicmp _mbsnicmp (first 10 characters only)\n" );
   result = _mbsnicmp( string1, string2, 10 );
   if( result > 0 )
      _mbscpy_s( tmp, sizeof(tmp), "greater than" );
   else if( result < 0 )
      _mbscpy_s( tmp, sizeof(tmp), "less than" );
   else
      _mbscpy_s( tmp, sizeof(tmp), "equal to" );
   printf( "Result:   String 1 is %s string 2\n\n", tmp );
}
```

### <a name="output"></a>Output

```Output
Compare strings:
          The quick brown dog jumps over the lazy fox
          The QUICK brown fox jumps over the lazy dog

Function: _mbsnbcmp (first 10 characters only)
Result:   String 1 is greater than string 2

Function: _mbsnicmp _mbsnicmp (first 10 characters only)
Result:   String 1 is equal to string 2
```

## <a name="see-also"></a>Vedere anche

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
