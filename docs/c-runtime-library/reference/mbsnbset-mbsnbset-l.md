---
description: 'Altre informazioni su: _mbsnbset, _mbsnbset_l'
title: _mbsnbset, _mbsnbset_l
ms.date: 4/2/2020
api_name:
- _mbsnbset
- _mbsnbset_l
- _o__mbsnbset
- _o__mbsnbset_l
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbsnbset
- mbsnbset_l
- _mbsnbset
- _mbsnbset_l
helpviewer_keywords:
- tcsnset function
- _tcsnset_l function
- _mbsnbset function
- _tcsnset function
- _mbsnbset_l function
- mbsnbset_l function
- tcsnset_l function
- mbsnbset function
ms.assetid: 8e46ef75-9a56-42d2-a522-a08450c67c19
ms.openlocfilehash: a99e92cec8b15c9534cec981652ce7c78fa31923
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240260"
---
# <a name="_mbsnbset-_mbsnbset_l"></a>_mbsnbset, _mbsnbset_l

Imposta i primi **n** byte di una stringa di caratteri multibyte su un carattere specificato. Sono disponibili versioni più sicure di queste funzioni. Vedere [_mbsnbset_s, _mbsnbset_s_l](mbsnbset-s-mbsnbset-s-l.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
unsigned char *_mbsnbset(
   unsigned char *str,
   unsigned int c,
   size_t count
);
unsigned char *_mbsnbset_l(
   unsigned char *str,
   unsigned int c,
   size_t count,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa da modificare.

*c*<br/>
Impostazione di caratteri a un byte singolo o multibyte.

*count*<br/>
Numero di byte da impostare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_mbsnbset** restituisce un puntatore alla stringa modificata.

## <a name="remarks"></a>Commenti

Le funzioni **_mbsnbset** e **_mbsnbset_l** impostano, al massimo, il primo *numero* di byte da *STR* a *c*. Se *count* è maggiore della lunghezza di *Str*, viene utilizzata la lunghezza di *Str* anziché *count*. Se *c* è un carattere multibyte e non può essere impostato interamente nell'ultimo byte specificato da *count*, l'ultimo byte viene riempito con un carattere vuoto. **_mbsnbset** e **_mbsnbset_l** non inserisce un valore null di terminazione alla fine di *Str*.

**_mbsnbset** e **_mbsnbset_l** sono simili ai **_mbsnset**, ad eccezione del fatto che imposta il *numero* di byte anziché i caratteri di *conteggio* di *c*.

Se *Str* è **null** o *count* è zero, questa funzione genera un'eccezione di parametro non valido, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**. Inoltre, se *c* non è un carattere multibyte valido, **errno** viene impostato su **EINVAL** e viene invece utilizzato uno spazio.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). La versione **_mbsnbset** di questa funzione usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; il **_mbsnbset_l** versione è identico, ad eccezione del fatto che usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

**Nota sulla sicurezza** Questa API è esposta a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsnset**|**_strnset**|**_mbsnbset**|**_wcsnset**|
|**_tcsnset_l**|**_strnset_l**|**_mbsnbset_l**|**_wcsnset_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbset**|\<mbstring.h>|
|**_mbsnbset_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mbsnbset.c
// compile with: /W3
#include <mbstring.h>
#include <stdio.h>

int main( void )
{
   char string[15] = "This is a test";
   /* Set not more than 4 bytes of string to be *'s */
   printf( "Before: %s\n", string );
   _mbsnbset( string, '*', 4 ); // C4996
   // Note; _mbsnbset is deprecated; consider _mbsnbset_s
   printf( "After:  %s\n", string );
}
```

### <a name="output"></a>Output

```Output
Before: This is a test
After:  **** is a test
```

## <a name="see-also"></a>Vedi anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
