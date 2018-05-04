---
title: _strdate, _wstrdate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _strdate
- _wstrdate
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
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _tstrdate
- wstrdate
- _wstrdate
- _strdate
- strdate
dev_langs:
- C++
helpviewer_keywords:
- strdate function
- dates, copying
- tstrdate function
- _wstrdate function
- wstrdate function
- _strdate function
- _tstrdate function
- copying dates
ms.assetid: de8e4097-58f8-42ba-9dcd-cb4d9a9f1696
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8924ac1ad29408dd1d69a68c6f31d9194831fbc2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="strdate-wstrdate"></a>_strdate, _wstrdate

Copia la data di sistema corrente in un buffer. Sono disponibili versioni più sicure di queste funzioni. Vedere [_strdate_s, _wstrdate_s](strdate-s-wstrdate-s.md).

## <a name="syntax"></a>Sintassi

```C
char *_strdate(
   char *datestr
);
wchar_t *_wstrdate(
   wchar_t *datestr
);
template <size_t size>
char *_strdate(
   char (&datestr)[size]
); // C++ only
template <size_t size>
wchar_t *_wstrdate(
   wchar_t (&datestr)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*datestr*<br/>
Puntatore a un buffer contenente la stringa di data formattata.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore alla stringa di caratteri risultante *datestr*.

## <a name="remarks"></a>Note

Sono disponibili versioni più sicure di queste funzioni. Vedere [_strdate_s, _wstrdate_s](strdate-s-wstrdate-s.md). È consigliabile usare le funzioni più sicure laddove possibile.

Il **strDate** funzione Copia la data di sistema corrente nel buffer a cui puntata *datestr*formattato **mm**/**gg** / **yy**, dove **mm** corrisponde a due cifre che rappresenta il mese **gg** corrisponde a due cifre che rappresenta il giorno e **AA**  è le ultime due cifre dell'anno. Ad esempio, la stringa **12/05/99** rappresenta il 5 dicembre 1999. La lunghezza del buffer deve essere di almeno 9 byte.

Se *datestr* è un **NULL** puntatore, il gestore di parametri non validi viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** alla **EINVAL**.

**wstrdate** è una versione a caratteri wide **strDate**; l'argomento e il valore restituito di **wstrdate** sono stringhe a caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tstrdate**|**_strdate**|**_strdate**|**_wstrdate**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strdate**|\<time.h>|
|**_wstrdate**|\<time.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// strdate.c
// compile with: /W3
#include <time.h>
#include <stdio.h>
int main()
{
    char tmpbuf[9];

    // Set time zone from TZ environment variable. If TZ is not set,
    // the operating system is queried to obtain the default value
    // for the variable.
    //
    _tzset();

    printf( "OS date: %s\n", _strdate(tmpbuf) ); // C4996
    // Note: _strdate is deprecated; consider using _strdate_s instead
}
```

```Output
OS date: 04/25/03
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
