---
title: _strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _strlwr_s_l
- _mbslwr_s_l
- _mbslwr_s
- _wcslwr_s
- _strlwr_s
- _wcslwr_s_l
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _strlwr_s_l
- _strlwr_s
- mbslwr_s_l
- strlwr_s_l
- _wcslwr_s
- strlwr_s
- mbslwr_s
- _wcslwr_s_l
- wcslwr_s_l
- _tcslwr_s
- _tcslwr_s_l
- _mbslwr_s_l
- wcslwr_s
- _mbslwr_s
dev_langs:
- C++
helpviewer_keywords:
- _tcslwr_s function
- wcslwr_s function
- _mbslwr_s function
- _wcslwr_s function
- strlwr_s_l function
- mbslwr_s_l function
- _strlwr_s function
- string conversion [C++], case
- strlwr_s function
- wcslwr_s_l function
- _tcslwr_s_l function
- mbslwr_s function
- strings [C++], case
- _wcslwr_s_l function
- converting case, CRT functions
- _strlwr_s_l function
- _mbslwr_s_l function
- case, converting
- tcslwr_s function
- tcslwr_s_l function
- strings [C++], converting case
ms.assetid: 4883d31b-bdac-4049-83a1-91dfdeceee79
caps.latest.revision: 42
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 945616409565cca278ee71bf77c9fee26c821133
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="strlwrs-strlwrsl-mbslwrs-mbslwrsl-wcslwrs-wcslwrsl"></a>_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l

Converte una stringa in minuscolo usando le impostazioni locali correnti o un oggetto impostazioni locali passato. Queste versioni di [_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **mbslwr_s** e **mbslwr_s_l** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _strlwr_s(
   char *str,
   size_t numberOfElements
);
errno_t _strlwr_s_l(
   char *str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _mbslwr_s(
   unsigned char *str,
   size_t numberOfElements
);
errno_t _mbslwr_s_l(
   unsigned char *str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _wcslwr_s(
   wchar_t *str,
   size_t numberOfElements
);
errno_t _wcslwr_s_l(
   wchar_t *str,
   size_t numberOfElements,
   _locale_t locale
);
template <size_t size>
errno_t _strlwr_s(
   char (&str)[size]
); // C++ only
template <size_t size>
errno_t _strlwr_s_l(
   char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _mbslwr_s(
   unsigned char (&str)[size]
); // C++ only
template <size_t size>
errno_t _mbslwr_s_l(
   unsigned char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _wcslwr_s(
   wchar_t (&str)[size]
); // C++ only
template <size_t size>
errno_t _wcslwr_s_l(
   wchar_t (&str)[size],
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa con terminazione Null da convertire in minuscolo.

*numberOfElements*<br/>
Dimensioni del buffer.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Un codice di errore diverso da zero in caso di esito negativo.

Queste funzioni convalidano i relativi parametri. Se *str* non è una stringa con terminazione null valida, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, le funzioni restituiscono **EINVAL** e impostare **errno** al **EINVAL**. Se *numberOfElements* è minore della lunghezza della stringa, le funzioni restituiscono inoltre **EINVAL** e impostare **errno** a **EINVAL**.

## <a name="remarks"></a>Note

Il **strlwr_s** converte (funzione), posto, le lettere maiuscole nel *str* in caratteri minuscoli. **mbslwr_s** è una versione a caratteri multibyte **strlwr_s**. **wcslwr_s** è una versione a caratteri wide **strlwr_s**.

Il valore di output è interessato dalla configurazione dell'impostazione delle **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale](setlocale-wsetlocale.md) per altre informazioni. Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcslwr_s**|**_strlwr_s**|**_mbslwr_s**|**_wcslwr_s**|
|**tcslwr_s_l**|**_strlwr_s_l**|**_mbslwr_s_l**|**_wcslwr_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strlwr_s**, **strlwr_s_l**|\<string.h>|
|**mbslwr_s**, **mbslwr_s_l**|\<mbstring.h>|
|**wcslwr_s**, **wcslwr_s_l**|\<string.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_strlwr_s.cpp
// This program uses _strlwr_s and _strupr_s to create
// uppercase and lowercase copies of a mixed-case string.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[] = "The String to End All Strings!";
   char *copy1, *copy2;
   errno_t err;

   err = _strlwr_s( copy1 = _strdup(str), strlen(str) + 1);
   err = _strupr_s( copy2 = _strdup(str), strlen(str) + 1);

   printf( "Mixed: %s\n", str );
   printf( "Lower: %s\n", copy1 );
   printf( "Upper: %s\n", copy2 );

   free( copy1 );
   free( copy2 );

   return 0;
}
```

```Output
Mixed: The String to End All Strings!
Lower: the string to end all strings!
Upper: THE STRING TO END ALL STRINGS!
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md)<br/>
