---
title: _strdate_s, _wstrdate_s
description: _strdate_s e _wstrdate_s sono versioni CRT sicure delle funzioni _strdate e _wstrdate che inseriscono la data corrente in un buffer.
ms.date: 4/2/2020
api_name:
- _strdate_s
- _wstrdate_s
- _o__strdate_s
- _o__wstrdate_s
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: b4d977ba3546eae17218c63b1786fd26c784d340
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359827"
---
# <a name="_strdate_s-_wstrdate_s"></a>_strdate_s, _wstrdate_s

Copia la data di sistema corrente in un buffer. Queste funzioni sono versioni di [_strdate, _wstrdate](strdate-wstrdate.md) con miglioramenti della protezione come descritto in Funzionalità di [protezione in CRT](../../c-runtime-library/security-features-in-the-crt.md).

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

*Buffer*\
Puntatore a un buffer per inserire la stringa di data formattata.

*Dimensione*\
Dimensione del buffer in unità di caratteri.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in ERRNO.H. Vedere la tabella seguente per gli errori esatti generati da questa funzione. Per altre informazioni sui codici di errore, vedere [errno](../../c-runtime-library/errno-constants.md).

## <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*Dimensione*|Return|Contenuto del *buffer*|
|--------------|------------------------|------------|--------------------------|
|**Null**|(qualsiasi)|**Einval**|Non modificato|
|Non **NULL** (che punta al buffer valido)|0|**Einval**|Non modificato|
|Non **NULL** (che punta al buffer valido)|0 *formato* < < 9|**Einval**|stringa vuota|
|Non **NULL** (che punta al buffer valido)|*taglia* >9|0|Data corrente, formattata come specificato nella sezione Note|

## <a name="security-issues"></a>Problemi di sicurezza

Il passaggio di un valore non NULL non valido per *il buffer* genera una violazione di accesso se il parametro *size* è maggiore di 9.

Se si passa un valore per *la dimensione* maggiore della dimensione effettiva del *buffer,* si ottiene un sovraccarico del buffer.

## <a name="remarks"></a>Osservazioni

Queste funzioni forniscono versioni più sicure di **_strdate** e **_wstrdate**. La funzione **_strdate_s** copia la data di sistema corrente nel buffer a cui punta *buffer.* È formattato, `mm/dd/yy`dove `mm` è il mese `dd` a due cifre, `yy` è il giorno a due cifre ed è le ultime due cifre dell'anno. Ad esempio, la stringa `12/05/99` rappresenta il 5 dicembre 1999. Il buffer deve essere lungo almeno nove caratteri.

**_wstrdate_s** è una versione a caratteri wide di **_strdate_s**; l'argomento e il valore restituito di **_wstrdate_s** sono stringhe di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Quando *buffer* è un puntatore **NULL** o *size* è inferiore a nove caratteri, viene richiamato il gestore di parametri non validi. È descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1.If execution is allowed to continue, these functions return -1. Impostano **errno** su **EINVAL** se il buffer è **NULL** o se *size* è minore o uguale a 0. In alternativa, impostano **errno** su **ERANGE** se *size* è minore di 9.

L'uso di queste funzioni è semplificato dagli overload del modello. Gli overload possono dedurre automaticamente la lunghezza del buffer, eliminando la necessità di specificare un argomento *size.* Inoltre, possono sostituire automaticamente le funzioni non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mapping"></a>Mapping di routine di testo generico:Generic-text routine mapping:

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

[Gestione del tempo](../../c-runtime-library/time-management.md)\
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)\
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)\
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)\
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)\
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)\
[tempo, _time32, _time64](time-time32-time64.md)\
[_tzset](tzset.md)
