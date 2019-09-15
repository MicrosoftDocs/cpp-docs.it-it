---
title: _strdate_s, _wstrdate_s
ms.date: 11/04/2016
api_name:
- _strdate_s
- _wstrdate_s
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
- api-ms-win-crt-time-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _strdate_s
- wstrdate_s
- _wstrdate_s
- strdate_s
- _tstrdate_s
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
ms.openlocfilehash: fadd30ec81cff59d675212e59c8513656c7b2f35
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70940745"
---
# <a name="_strdate_s-_wstrdate_s"></a>_strdate_s, _wstrdate_s

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

|*buffer*|*numberOfElements*|INVIO|Contenuto del *buffer*|
|--------------|------------------------|------------|--------------------------|
|**NULL**|(qualsiasi)|**EINVAL**|Non modificato|
|Not **null** (che punta a un buffer valido)|0|**EINVAL**|Non modificato|
|Not **null** (che punta a un buffer valido)|0 < *numberOfElements* < 9|**EINVAL**|Stringa vuota|
|Not **null** (che punta a un buffer valido)|*numberOfElements* > = 9|0|Data corrente, formattata come specificato nella sezione Note|

## <a name="security-issues"></a>Problemi relativi alla sicurezza

Il passaggio di un valore non **null** non valido per il buffer comporterà una violazione di accesso se il parametro *NumberOfElements* è maggiore di 9.

Il passaggio di valori per dimensioni maggiori delle dimensioni effettive del *buffer* comporterà il sovraccarico del buffer.

## <a name="remarks"></a>Note

Queste funzioni forniscono versioni più sicure di **_strdate** e **_wstrdate**. La **funzione _strdate_s** copia la data di sistema corrente nel buffer a cui punta il *buffer*, formattato **mm**/**GG**/**AA**, dove **mm** è due cifre che rappresentano il mese, **gg** è costituito da due cifre che rappresentano il giorno e **YY** rappresenta le ultime due cifre dell'anno. Ad esempio, la stringa **12/05/99** rappresenta il 5 dicembre 1999. Il buffer deve avere una lunghezza di almeno 9 caratteri.

**_wstrdate_s** è una versione a caratteri wide di **_strdate_s**; l'argomento e il valore restituito di **_wstrdate_s** sono stringhe a caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Se il *buffer* è un puntatore **null** o se *NumberOfElements* è minore di 9 caratteri, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL** se il buffer è **null** o se *NumberOfElements* è minore o uguale a 0 oppure **errno** a **ERANGE** se *NumberOfElements* è minore di 9.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstrdate_s**|**_strdate_s**|**_strdate_s**|**_wstrdate_s**|

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
