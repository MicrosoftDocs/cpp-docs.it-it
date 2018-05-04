---
title: _strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _mbsnbcnt_l
- _mbsnccnt
- _wcsncnt
- _strncnt
- _mbsnccnt_l
- _mbsnbcnt
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _mbsnbcnt
- wcsncnt
- _tcsnbcnt
- _mbsnccnt
- _ftcsnbcnt
- mbsnbcnt
- strncnt
- mbsnbcnt_l
- mbsnccnt_l
- mbsnccnt
- _strncnt
- _wcsncnt
dev_langs:
- C++
helpviewer_keywords:
- _strncnt function
- _mbsnbcnt function
- _mbsnbcnt_l function
- _mbsnccnt_l function
- mbsnbcnt_l function
- mbsnbcnt function
- tcsnbcnt function
- mbsnccnt_l function
- strncnt function
- _tcsnbcnt function
- mbsnccnt function
- wcsncnt function
- _mbsnccnt function
- _wcsncnt function
ms.assetid: 2a022e9e-a307-4acb-a66b-e56e5357f848
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cf9bebda262bde4dd3bb2484a95b7b57a6960d99
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="strncnt-wcsncnt-mbsnbcnt-mbsnbcntl-mbsnccnt-mbsnccntl"></a>_strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l

Restituisce il numero di caratteri o byte entro un numero specificato.

> [!IMPORTANT]
> **mbsnbcnt**, **mbsnbcnt_l**, **mbsnccnt**, e **mbsnccnt_l** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
size_t _strncnt(
   const char *str,
   size_t count
);
size_t _wcsncnt(
   const wchar_t *str,
   size_t count
);
size_t _mbsnbcnt(
   const unsigned char *str,
   size_t count
);
size_t _mbsnbcnt_l(
   const unsigned char *str,
   size_t count,
   _locale_t locale
);
size_t _mbsnccnt(
   const unsigned char *str,
   size_t count
);
size_t _mbsnccnt_l(
   const unsigned char *str,
   size_t count,
   _locale_t locale
);

```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa da esaminare.

*count*<br/>
Numero di caratteri o byte per essere esaminate in *str*.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**mbsnbcnt** e **mbsnbcnt_l** restituire il numero di byte trovato nel primo *conteggio* di caratteri multibyte di *str*. **mbsnccnt** e **mbsnccnt_l** restituire il numero dei caratteri trovati nel primo *conteggio* di byte di *str*. Se viene rilevato un carattere NULL prima l'esame delle *str* ha completato, restituiscono il numero di byte o caratteri trovati prima del carattere NULL. Se *str* è costituito da meno di *conteggio* caratteri o byte, restituiscono il numero di caratteri o byte nella stringa. Se *conteggio* è minore di zero, restituiscono 0. Nelle versioni precedenti, queste funzioni sono un valore restituito di tipo **int** anziché **size_t**.

**strncnt** restituisce il numero di caratteri nel primo *conteggio* byte della stringa a byte singolo *str*. **wcsncnt** restituisce il numero di caratteri nel primo *conteggio* caratteri "wide" della stringa di caratteri wide *str*.

## <a name="remarks"></a>Note

**mbsnbcnt** e **mbsnbcnt_l** contare il numero di byte trovato nel primo *conteggio* di caratteri multibyte di *str*. **mbsnbcnt** e **mbsnbcnt_l** sostituire **mtob** e deve essere usato al posto di **mtob**.

**mbsnccnt** e **mbsnccnt_l** contare il numero dei caratteri trovati nel primo *conteggio* di byte di *str*. Se **mbsnccnt** e **mbsnccnt_l** riscontra un valore NULL nel secondo byte di un carattere a byte doppio, il primo byte viene anche considerato NULL e non è incluso nel valore del conteggio restituito. **mbsnccnt** e **mbsnccnt_l** sostituire **btom** e deve essere usato al posto di **btom**.

Se *str* è un puntatore null o è *conteggio* è 0, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md), **errno** è impostata su **EINVAL**, e la funzione restituisce 0.

Il valore di output è interessato dalla configurazione dell'impostazione delle **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale](setlocale-wsetlocale.md) per altre informazioni. Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|-------------|--------------------------------------|--------------------|-----------------------|
|**tcsnbcnt**|**_strncnt**|**_mbsnbcnt**|**_wcsncnt**|
|**_tcsnccnt**|**_strncnt**|**_mbsnbcnt**|N/D|
|**_wcsncnt**|N/D|N/D|**_mbsnbcnt**|
|**_wcsncnt**|N/D|N/D|**_mbsnccnt**|
|N/D|N/D|**_mbsnbcnt_l**|**_mbsnccnt_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbcnt**|\<mbstring.h>|
|**_mbsnbcnt_l**|\<mbstring.h>|
|**_mbsnccnt**|\<mbstring.h>|
|**_mbsnccnt_l**|\<mbstring.h>|
|**_strncnt**|\<tchar.h>|
|**_wcsncnt**|\<tchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mbsnbcnt.c

#include  <mbstring.h>
#include  <stdio.h>

int main( void )
{
   unsigned char str[] = "This is a multibyte-character string.";
   unsigned int char_count, byte_count;
   char_count = _mbsnccnt( str, 10 );
   byte_count = _mbsnbcnt( str, 10 );
   if ( byte_count - char_count )
      printf( "The first 10 characters contain %d multibyte characters\n", char_count );
   else
      printf( "The first 10 characters are single-byte.\n");
}
```

### <a name="output"></a>Output

```Output
The first 10 characters are single-byte.
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
