---
title: strftime, wcsftime, _strftime_l, _wcsftime_l
ms.date: 03/22/2018
api_name:
- strftime
- _wcsftime_l
- _strftime_l
- wcsftime
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
- _tcsftime
- strftime
- wcsftime
- _strftime_l
- _wcsftime_l
helpviewer_keywords:
- _strftime_l function
- strftime function
- tcsftime function
- _wcsftime_l function
- wcsftime function
- _tcsftime function
- time strings
ms.assetid: 6330ff20-4729-4c4a-82af-932915d893ea
ms.openlocfilehash: 0c20303973d09f48067dc331dba98a08f8f364f8
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70958136"
---
# <a name="strftime-wcsftime-_strftime_l-_wcsftime_l"></a>strftime, wcsftime, _strftime_l, _wcsftime_l

Formatta una stringa dell'ora.

## <a name="syntax"></a>Sintassi

```C
size_t strftime(
   char *strDest,
   size_t maxsize,
   const char *format,
   const struct tm *timeptr
);
size_t _strftime_l(
   char *strDest,
   size_t maxsize,
   const char *format,
   const struct tm *timeptr,
   _locale_t locale
);
size_t wcsftime(
   wchar_t *strDest,
   size_t maxsize,
   const wchar_t *format,
   const struct tm *timeptr
);
size_t _wcsftime_l(
   wchar_t *strDest,
   size_t maxsize,
   const wchar_t *format,
   const struct tm *timeptr,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*strDest*<br/>
Stringa di output.

*maxsize*<br/>
Dimensione del buffer *strDest* , misurata in caratteri (**char** o **wchar_t**).

*format*<br/>
Stringa di controllo del formato.

*timeptr*<br/>
struttura dei dati **TM** .

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strftime** restituisce il numero di caratteri inseriti in *strDest* e **wcsftime** restituisce il numero di caratteri wide corrispondente.

Se il numero totale di caratteri, incluso il carattere null di terminazione, è maggiore di *MaxSize*, **strftime** e **wcsftime** restituiscono 0 e il contenuto di *strDest* è indeterminato.

Il numero di caratteri in *strDest* è uguale al numero di caratteri letterali nel *formato* e a tutti i caratteri che possono essere aggiunti al *formato* tramite codici di formattazione. La terminazione Null di una stringa non viene conteggiata nel valore restituito.

## <a name="remarks"></a>Note

Le funzioni **strftime** e **wcsftime** formattano il valore di ora **TM** in *timeptr* in base all'argomento di *formato* fornito e archiviano il risultato nel buffer *strDest*. Al massimo, i caratteri *MaxSize* vengono inseriti nella stringa. Per una descrizione dei campi nella struttura *timeptr* , vedere [asctime](asctime-wasctime.md). **wcsftime** è l'equivalente a caratteri wide di **strftime**; il relativo argomento puntatore di stringa punta a una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Questa funzione convalida i relativi parametri. Se *strDest*, *Format*o *timeptr* è un puntatore null o se la struttura dei dati **TM** risolta da *timeptr* non è valida (ad esempio, se contiene valori non compresi nell'intervallo per l'ora o la data) o se la stringa di *formato* contiene un codice di formattazione non valido, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e **errno** viene impostato su **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsftime**|**strftime**|**strftime**|**wcsftime**|

L'argomento *Format* è costituito da uno o più codici; come in **printf**, i codici di formattazione sono preceduti da un segno di **%** percentuale (). I caratteri che non iniziano con **%** vengono copiati senza modifiche in *strDest*. La categoria **LC_TIME** delle impostazioni locali correnti influiscono sulla formattazione dell'output di **strftime**. Per ulteriori informazioni su **LC_TIME**, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni **strftime** e **wcsftime** usano le impostazioni locali attualmente impostate. Le versioni **_strftime_l** e **_wcsftime_l** di queste funzioni sono identiche, ad eccezione del fatto che accettano le impostazioni locali come parametro e lo usano anziché le impostazioni locali attualmente impostate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Le funzioni **strftime** supportano questi codici di formattazione:

|||
|-|-|
|Codice|Stringa di sostituzione|
|**%a**|Nome del giorno della settimana abbreviato nelle impostazioni locali|
|**%A**|Nome del giorno della settimana completo nelle impostazioni locali|
|**%b**|Nome abbreviato del mese nelle impostazioni locali|
|**%B**|Nome completo del mese nelle impostazioni locali|
|**%c**|Rappresentazione di data e ora appropriata per le impostazioni locali|
|**%C**|Anno diviso per 100 e troncato in un numero intero, come numero decimale (00 − 99)|
|**%d**|Giorno del mese come numero decimale (01-31)|
|**%D**|Equivalente a **% m/% d/% y**|
|**% e**|Giorno del mese come numero decimale (1-31), in cui le singole cifre sono precedute da uno spazio|
|**%F**|Equivalente a **% Y-% m-% d**|
|**%g**|Ultime 2 cifre dell'anno ISO 8601 basato su settimana come numero decimale (00-99)|
|**%G**|Anno ISO 8601 basato su settimana come numero decimale|
|**%h**|Nome abbreviato del mese (equivalente a **% b**)|
|**%H**|Ora in formato 24 ore (00-23)|
|**%I**|Ora in formato 12 ore (01-12)|
|**%j**|Giorno dell'anno come numero decimale (001-366)|
|**%m**|Month come numero decimale (01-12)|
|**%M**|Minuto come numero decimale (00-59)|
|**%n**|Carattere di nuova riga ( **\n**)|
|**%p**|/P.M. delle impostazioni locali per il formato 12 ore|
|**%r**|Ora di clock di 12 ore delle impostazioni locali|
|**%R**|Equivalente a **% H:%M**|
|**%S**|Secondo come numero decimale (00-59)|
|**%t**|Carattere di tabulazione orizzontale ( **\t**)|
|**%T**|Equivalente a **% H:%M:% S**, il formato di ora ISO 8601|
|**%u**|ISO 8601 giorno della settimana come numero decimale (1-7; Lunedì è 1)|
|**%U**|Numero di settimana dell'anno come numero decimale (00-53), in cui la prima domenica è il primo giorno della settimana 1|
|**%V**|ISO 8601 numero di settimana come numero decimale (00-53)|
|**%w**|Giorno della settimana come numero decimale (0-6; Domenica è 0)|
|**%W**|Numero di settimana dell'anno come numero decimale (00-53), dove il primo lunedì è il primo giorno della settimana 1|
|**%x**|Rappresentazione della data per le impostazioni locali|
|**%X**|Rappresentazione temporale per le impostazioni locali|
|**% y**|Anno senza secolo, come numero decimale (00-99)|
|**%Y**|Anno con il secolo, come numero decimale|
|**%z**|Offset rispetto all'ora UTC in formato ISO 8601; nessun carattere se il fuso orario è sconosciuto|
|**%Z**|Il nome del fuso orario o l'abbreviazione del fuso orario delle impostazioni locali, a seconda delle impostazioni del registro di sistema; nessun carattere se il fuso orario è sconosciuto|
|**%%**|Segno di percentuale|

Come nella funzione **printf** , il **#** flag può precedere qualsiasi codice di formattazione. In questo caso, il significato del codice di formato viene modificato come segue.

|Codice formato|Significato|
|-----------------|-------------|
|**%#a**, **%#A**, **%#b**, **%#B**, **%#g**, **%#G**, **%#h**, **%#n**, **%#p**, **%#t**, **%#u**, **%#w**, **%#X**, **%#z**, **%#Z**, **%#%**|**#** il flag viene ignorato.|
|**%#c**|Rappresentazione di data e ora estesa, appropriata per le impostazioni locali. Ad esempio:  "Martedì 14 marzo 1995, 12:41:29".|
|**%#x**|Rappresentazione di data estesa, appropriata per le impostazioni locali. Ad esempio: "Martedì 14 marzo 1995".|
|**% #d**, **% #D**, **% #e**, **% #F**, **% #H**, **% #I**, **%** #j, **%** #m,% #M, **%** #r, **% #R**, **%** #S, **% #T**, **% #U**,% **#V**, **%** **#W, % #y**, **% #Y**|Rimuovere gli zeri iniziali o gli spazi (se presenti).|

L'anno ISO 8601 della settimana e della settimana prodotto da **% V**, **% g**e **% g**usa una settimana che inizia il lunedì, dove la settimana 1 è la settimana che contiene il 4 gennaio, ovvero la prima settimana che include almeno quattro giorni dell'anno. Se il primo lunedì dell'anno è il secondo, il terzo o il 4, i giorni precedenti sono parte dell'ultima settimana dell'anno precedente. Per tali giorni, **% V** viene sostituito da 53 e i% **g** e **% g** vengono sostituiti dalle cifre dell'anno precedente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strftime**|\<time.h>|
|**wcsftime**|\<time.h> or \<wchar.h>|
|**_strftime_l**|\<time.h>|
|**_wcsftime_l**|\<time.h> or \<wchar.h>|

Le funzioni **_strftime_l** e **_wcsftime_l** sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [time](time-time32-time64.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni locali](../../c-runtime-library/locale.md) <br/>
[Gestione dell'ora](../../c-runtime-library/time-management.md) <br/>
[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md) <br/>
[localeconv](localeconv.md) <br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md) <br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md) <br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
