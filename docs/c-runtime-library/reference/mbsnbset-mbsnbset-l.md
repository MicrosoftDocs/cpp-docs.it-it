---
title: _mbsnbset, _mbsnbset_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _mbsnbset
- _mbsnbset_l
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
- mbsnbset
- mbsnbset_l
- _mbsnbset
- _mbsnbset_l
dev_langs:
- C++
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
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 462e435c1b93561cf5ca21dd20ad2025ac6f9661
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="mbsnbset-mbsnbsetl"></a>_mbsnbset, _mbsnbset_l

Imposta il primo **n** byte di una stringa di caratteri multibyte in un carattere specificato. Sono disponibili versioni più sicure di queste funzioni. Vedere [_mbsnbset_s, _mbsnbset_s_l](mbsnbset-s-mbsnbset-s-l.md).

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

**mbsnbset** restituisce un puntatore alla stringa modificata.

## <a name="remarks"></a>Note

Il **mbsnbset** e **mbsnbset_l** funzioni impostano al massimo, il primo *conteggio* byte di *str* a *c*. Se *conteggio* è maggiore della lunghezza di *str*, la lunghezza del *str* utilizzato al posto del *conteggio*. Se *c* è un carattere multibyte e non può essere interamente impostato nell'ultimo byte specificato da *conteggio*, l'ultimo byte viene riempito con un carattere vuoto. **mbsnbset** e **mbsnbset_l** non si impono una terminazione null alla fine del *str*.

**mbsnbset** e **mbsnbset_l** è simile a **mbsnset**, ad eccezione del fatto che imposta *conteggio* byte anziché *conteggio* caratteri di *c*.

Se *str* viene **NULL** oppure *conteggio* è uguale a zero, questa funzione genera un'eccezione di parametro non valido come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **NULL**. Inoltre, se *c* non è un carattere multibyte valido, **errno** è impostato su **EINVAL** e viene invece utilizzato uno spazio.

Il valore di output è interessato dalla configurazione dell'impostazione delle **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale](setlocale-wsetlocale.md) per altre informazioni. Il **mbsnbset** versione di questa funzione utilizza le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la **mbsnbset_l** versione è identica ad eccezione del fatto che usi il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

**Nota sulla sicurezza** Questa API è esposta a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tcsnset**|**_strnset**|**_mbsnbset**|**_wcsnset**|
|**tcsnset_l**|**_strnset_l**|**_mbsnbset_l**|**_wcsnset_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbset**|\<mbstring.h>|
|**_mbsnbset_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
