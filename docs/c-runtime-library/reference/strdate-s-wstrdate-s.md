---
title: _strdate_s, _wstrdate_s
description: _strdate_s e _wstrdate_s sono versioni CRT sicure delle funzioni _strdate e _wstrdate che inseriscono la data corrente in un buffer.
ms.date: 11/01/2019
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
ms.openlocfilehash: 7d04c134fcd19753ac0cecf8cc3b87e902d92e83
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73625767"
---
# <a name="_strdate_s-_wstrdate_s"></a>_strdate_s, _wstrdate_s

Copia la data di sistema corrente in un buffer. Queste funzioni sono versioni di [_strdate, _wstrdate](strdate-wstrdate.md) con miglioramenti per la sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _strdate_s(
   char *buffer,
   size_t size
);
errno_t _wstrdate_s(
   wchar_t *buffer,
   size_t size
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

\ *buffer*
Puntatore a un buffer per inserire la stringa di data formattata.

*dimensioni* \
Dimensione del buffer in unità di caratteri.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Se si verifica un errore, il valore restituito è un codice di errore. I codici di errore sono definiti in ERRNO.H. Vedere la tabella seguente per gli errori esatti generati da questa funzione. Per altre informazioni sui codici di errore, vedere [errno](../../c-runtime-library/errno-constants.md).

## <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*size*|INVIO|Contenuto del *buffer*|
|--------------|------------------------|------------|--------------------------|
|**NULL**|(qualsiasi)|**EINVAL**|Non modificato|
|Not **null** (che punta a un buffer valido)|0|**EINVAL**|Non modificato|
|Not **null** (che punta a un buffer valido)|0 < *dimensioni* < 9|**EINVAL**|Stringa vuota|
|Not **null** (che punta a un buffer valido)|*dimensioni* > = 9|0|Data corrente, formattata come specificato nella sezione Note|

## <a name="security-issues"></a>Problemi di sicurezza

Se il parametro *size* è maggiore di nove, il passaggio di un valore non valido e non null per il *buffer* comporta una violazione di accesso.

Il passaggio di un valore per *dimensioni* maggiori delle dimensioni effettive del *buffer* comporta un sovraccarico del buffer.

## <a name="remarks"></a>Note

Queste funzioni forniscono versioni più sicure di **_strdate** e **_wstrdate**. La funzione **_strdate_s** copia la data di sistema corrente nel buffer a cui punta il *buffer*. Il formato è `mm/dd/yy`, dove `mm` è il mese a due cifre, `dd` è il giorno a due cifre e `yy` è costituito dalle ultime due cifre dell'anno. Ad esempio, la stringa `12/05/99` rappresenta il 5 dicembre 1999. Il buffer deve avere una lunghezza di almeno nove caratteri.

**_wstrdate_s** è una versione a caratteri wide di **_strdate_s**; l'argomento e il valore restituito di **_wstrdate_s** sono stringhe a caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Quando il *buffer* è un puntatore **null** o la *dimensione* è inferiore a nove caratteri, viene richiamato il gestore di parametri non validi. Viene descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1. Impostano **errno** su **EINVAL** se il buffer è **null** o se le *dimensioni* sono minori o uguali a 0. In alternativa, il **errno** viene impostato su **ERANGE** se *size* è minore di 9.

In C++l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di *dimensione* . E possono sostituire automaticamente le funzioni non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstrdate_s**|**_strdate_s**|**_strdate_s**|**_wstrdate_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strdate**|\<time.h>|
|**_wstrdate**|\<time.h> o \<wchar.h>|
|**_strdate_s**|\<time.h>|

## <a name="example"></a>Esempio

Vedere l'esempio per [time](time-time32-time64.md).

## <a name="see-also"></a>Vedere anche

[Time Management](../../c-runtime-library/time-management.md)\ (Gestione del tempo)
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)\
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)\
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)\
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)\
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)\
[time, _time32, _time64](time-time32-time64.md)\
[_tzset](tzset.md)
