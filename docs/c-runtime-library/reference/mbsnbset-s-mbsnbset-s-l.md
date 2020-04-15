---
title: _mbsnbset_s, _mbsnbset_s_l
ms.date: 4/2/2020
api_name:
- _mbsnbset_s_l
- _mbsnbset_s
- _o__mbsnbset_s
- _o__mbsnbset_s_l
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
- mbsnbset_s
- _mbsnbset_s_l
- _mbsnbset_s
- mbsnbset_s_l
helpviewer_keywords:
- tcsnset_s function
- mbsnbset_s function
- mbsnbset_s_l function
- _mbsnbset_s_l function
- _tcsnset_s_l function
- _mbsnbset_s function
- _tcsnset_s function
- tcsnset_s_l function
ms.assetid: 811f92c9-cc31-4bbd-8017-2d1bfc6fb96f
ms.openlocfilehash: 0ecfac1f9c0f1f9aeb8de85411b0b2f696b578e2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81339019"
---
# <a name="_mbsnbset_s-_mbsnbset_s_l"></a>_mbsnbset_s, _mbsnbset_s_l

Imposta i primi **n** byte di una stringa di caratteri multibyte su un carattere specificato. Queste versioni di [_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _mbsnbset_s(
   unsigned char *str,
   size_t size,
   unsigned int c,
   size_t count
);
errno_t _mbsnbset_s_l(
   unsigned char *str,
   size_t size,
   unsigned int c,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t _mbsnbset_s(
   unsigned char (&str)[size],
   unsigned int c,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbsnbset_s_l(
   unsigned char (&str)[size],
   unsigned int c,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Stringa da modificare.

*Dimensione*<br/>
Dimensione del buffer di stringa.

*C*<br/>
Impostazione di caratteri a un byte singolo o multibyte.

*count*<br/>
Numero di byte da impostare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo; in caso contrario un codice di errore.

## <a name="remarks"></a>Osservazioni

Le funzioni **_mbsnbset_s** e **_mbsnbset_s_l** impostano al massimo i primi byte di *conteggio* da *str* a *c*. Se *count* è maggiore della lunghezza di *str*, viene utilizzata la lunghezza di *str* anziché *count*. Se *c* è un carattere multibyte e non può essere impostato interamente nell'ultimo byte specificato da *count*, l'ultimo byte viene riempito con un carattere vuoto. **_mbsnbset_s** e **_mbsnbset_s_l** non inseriscono un valore null di terminazione alla fine di *str*.

**_mbsnbset_s** e **_mbsnbset_s_l** simili **a _mbsnset**, con la differenza che impostano i byte *di conteggio* anziché i caratteri di *conteggio* di *c*.

Se *str* è **NULL** o *count* è zero, questa funzione genera un'eccezione di parametro non valido, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e la funzione restituisce **NULL**. Inoltre, se *c* non è un carattere multibyte valido, **errno** viene impostato su **EINVAL** e viene invece utilizzato uno spazio.

Il valore di output è influenzato dall'impostazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali; Per ulteriori informazioni, vedere [setlocale, _wsetlocale.](setlocale-wsetlocale.md) Il **_mbsnbset_s** versione di questa funzione utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. la versione **_mbsnbset_s_l** è identica, ad eccezione del fatto che utilizza invece il parametro locale che viene passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni viene semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente eliminando la necessità di specificare un argomento per la dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsnset_s**|**_strnset_s**|**_mbsnbset_s**|**_wcsnset_s**|
|**_tcsnset_s_l**|`_strnset_s _l`|**_mbsnbset_s_l**|**_wcsnset_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbset_s**|\<mbstring.h>|
|**_mbsnbset_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mbsnbset_s.c
#include <mbstring.h>
#include <stdio.h>

int main( void )
{
   char string[15] = "This is a test";
   /* Set not more than 4 bytes of string to be *'s */
   printf( "Before: %s\n", string );
   _mbsnbset_s( string, sizeof(string), '*', 4 );
   printf( "After:  %s\n", string );
}
```

## <a name="output"></a>Output

```Output
Before: This is a test
After:  **** is a test
```

## <a name="see-also"></a>Vedere anche

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
