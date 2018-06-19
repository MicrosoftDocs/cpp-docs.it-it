---
title: _strdate_s, _wstrdate_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _strdate_s
- _wstrdate_s
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
- _strdate_s
- wstrdate_s
- _wstrdate_s
- strdate_s
- _tstrdate_s
dev_langs:
- C++
helpviewer_keywords:
- dates, copying
- tstrdate_s function
- wstrdate_s function
- _tstrdate_s function
- strdate_s function
- copying dates
- _strdate_s function
- _wstrdate_s function
ms.assetid: d41d8ea9-e5ce-40d4-864e-1ac29b455991
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8e4e9ff3783fc7a89e7af42ebf283209c034c0d6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32414311"
---
# <a name="strdates-wstrdates"></a>_strdate_s, _wstrdate_s

Copia la data di sistema corrente in un buffer. Queste sono versioni di [_strdate, _wstrdate](strdate-wstrdate.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _strdate_s(
   char *buffer,
   size_t numberOfElements
);
errno_t _wstrdate_s(
   wchar_t *buffer,
   size_t numberOfElements
);
template <size_t size>
errno_t _strdate_s(
   char (&buffer)[size]
); // C++ only
template <size_t size>
errno_t _wstrdate_s(
   wchar_t (&buffer)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Puntatore a un buffer che verrà compilato con la stringa di data formattata.

*numberOfElements*<br/>
Dimensioni del buffer.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in ERRNO.H. Vedere la tabella seguente per gli errori esatti generati da questa funzione. Per altre informazioni sui codici di errore, vedere [errno](../../c-runtime-library/errno-constants.md).

## <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*numberOfElements*|INVIO|Contenuto di *buffer*|
|--------------|------------------------|------------|--------------------------|
|**NULL**|(qualsiasi)|**EINVAL**|Non modificato|
|Non **NULL** (che punta a un buffer valido)|0|**EINVAL**|Non modificato|
|Non **NULL** (che punta a un buffer valido)|0 < *numberOfElements* < 9|**EINVAL**|Stringa vuota|
|Non **NULL** (che punta a un buffer valido)|*numberOfElements* > = 9|0|Data corrente, formattata come specificato nella sezione Note|

## <a name="security-issues"></a>Problemi relativi alla sicurezza

Passando un oggetto non valido non **NULL** valore per il buffer comporterà una violazione di accesso se il *numberOfElements* parametro è maggiore di 9.

Passando i valori per le dimensioni che è maggiore della dimensione effettiva dei *buffer* comporterà il sovraccarico del buffer.

## <a name="remarks"></a>Note

Queste funzioni forniscono versioni più sicure di **strDate** e **wstrdate**. Il **strdate_s** funzione Copia la data di sistema corrente nel buffer a cui puntata *buffer*formattato **mm**/**gg** / **yy**, dove **mm** corrisponde a due cifre che rappresenta il mese **gg** corrisponde a due cifre che rappresenta il giorno e **AA**  è le ultime due cifre dell'anno. Ad esempio, la stringa **12/05/99** rappresenta il 5 dicembre 1999. Il buffer deve avere una lunghezza di almeno 9 caratteri.

**wstrdate_s** è una versione a caratteri wide **strdate_s**; l'argomento e il valore restituito di **wstrdate_s** sono stringhe a caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

Se *buffer* è un **NULL** puntatore, o se *numberOfElements* è inferiore a 9 caratteri, viene richiamato il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** alla **EINVAL** se il buffer è **NULL** oppure se *numberOfElements*è minore o uguale a 0 o set **errno** alla **ERANGE** se *numberOfElements* è inferiore a 9.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tstrdate_s**|**_strdate_s**|**_strdate_s**|**_wstrdate_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strdate**|\<time.h>|
|**_wstrdate**|\<time.h> or \<wchar.h>|
|**_strdate_s**|\<time.h>|

## <a name="example"></a>Esempio

Vedere l'esempio per [time](time-time32-time64.md).

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
