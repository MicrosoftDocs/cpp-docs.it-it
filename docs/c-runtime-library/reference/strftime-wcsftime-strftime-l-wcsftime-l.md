---
title: strftime, wcsftime, _strftime_l, _wcsftime_l
ms.date: 4/2/2020
api_name:
- strftime
- _wcsftime_l
- _strftime_l
- wcsftime
- _o__strftime_l
- _o__wcsftime_l
- _o_strftime
- _o_wcsftime
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
ms.openlocfilehash: 5da2c128c54fd88bb874b360f5a966f17b14a935
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81350012"
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

*Maxsize*<br/>
Dimensione del buffer *strDest,* misurata in caratteri (**char** o **wchar_t**).

*Formato*<br/>
Stringa di controllo del formato.

*timeptr*<br/>
struttura dei dati **tm.**

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strftime** restituisce il numero di caratteri inseriti in *strDest* e **wcsftime** restituisce il numero corrispondente di caratteri wide.

Se il numero totale di caratteri, incluso il carattere di terminazione null, è maggiore di *maxsize*, sia **strftime** che **wcsftime** restituiscono 0 e il contenuto di *strDest* sono indeterminati.

Il numero di caratteri in *strDest* è uguale al numero di caratteri letterali in *formato,* nonché a tutti i caratteri che possono essere aggiunti al *formato* tramite codici di formattazione. La terminazione Null di una stringa non viene conteggiata nel valore restituito.

## <a name="remarks"></a>Osservazioni

Le funzioni **strftime** e **wcsftime** formattano il valore di ora **tm** in *timeptr* in base all'argomento *di formato* fornito e archiviano il risultato nel buffer *strDest*. Al massimo, i caratteri *maxsize* vengono inseriti nella stringa. Per una descrizione dei campi nella struttura *timeptr,* vedere [asctime](asctime-wasctime.md). **wcsftime** è l'equivalente a caratteri wide di **strftime**; il relativo argomento string-pointer punta a una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Questa funzione convalida i relativi parametri. Se *strDest*, *format*, o *timeptr* è un puntatore null o se la struttura di dati **tm** indirizzata da *timeptr* non è valida (ad esempio, se contiene valori non compresi nell'intervallo per l'ora o la data) o se la stringa di *formato* contiene un codice di formattazione non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida parametro](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e imposta **errno** su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsftime**|**strftime**|**strftime**|**wcsftime**|

L'argomento *format* è costituito da uno o più codici; come in **printf**, i codici di formattazione sono preceduti da un segno di percentuale (**%**). I caratteri che **%** non iniziano con vengono copiati invariati in *strDest*. La **categoria LC_TIME** delle impostazioni locali correnti influisce sulla formattazione di output di **strftime**. Per ulteriori informazioni su **LC_TIME**, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni **strftime** e **wcsftime** utilizzano le impostazioni locali attualmente impostate. Le **versioni _strftime_l** e **_wcsftime_l** di queste funzioni sono identiche, ad eccezione del fatto che accettano le impostazioni locali come parametro e lo utilizzano al posto delle impostazioni locali attualmente impostate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Le funzioni strftime supportano questi codici di formattazione:The **strftime** functions support these formatting codes:

|||
|-|-|
|Codice|Stringa di sostituzione|
|**%a**|Nome abbreviato del giorno della settimana nelle impostazioni locali|
|**%A**|Nome completo del giorno della settimana nelle impostazioni locali|
|**%b**|Nome del mese abbreviato nelle impostazioni locali|
|**%B**|Nome del mese completo nelle impostazioni locali|
|**%c**|Rappresentazione di data e ora appropriata per le impostazioni locali|
|**%C**|L'anno diviso per 100 e troncato a un numero intero, come numero decimale (00-99)|
|**%d**|Giorno del mese come numero decimale (01 - 31)|
|**%D (informazioni in due)**|Equivalente a **%m/%d/%y**|
|**%e**|Giorno del mese come numero decimale (1 - 31), dove le cifre singole sono precedute da uno spazio|
|**%F**|Equivalente a **%Y-%m-%d**|
|**%g**|Le ultime 2 cifre dell'anno basato sulla settimana ISO 8601 come numero decimale (00 - 99)|
|**%G**|L'anno basato sulla settimana ISO 8601 come numero decimale|
|**%h**|Nome del mese abbreviato (equivalente a **%b)**|
|**%H**|Ora in formato 24 ore (00 - 23)|
|**%I**|Ora in formato 12 ore (01 - 12)|
|**%j**|Giorno dell'anno come numero decimale (001 - 366)|
|**%m**|Mese come numero decimale (01 - 12)|
|**%M**|Minuto come numero decimale (00 - 59)|
|**%n**|Un carattere di nuova riga (**n**)|
|**%p**|Il locale a.M./P.M. per il formato 12 ore|
|**%r**|L'ora a 12 ore delle impostazioni locali|
|**%R**|Equivalente a **%H:%M**|
|**%S**|Secondo come numero decimale (00 - 59)|
|**%t**|Un carattere di tabulazione orizzontale (**)**|
|**%T**|Equivalente a **%H:%M:%S**, il formato ora ISO 8601|
|**%u**|ISO 8601 giorno della settimana come numero decimale (1 - 7; Lunedì è 1)|
|**%U**|Numero della settimana dell'anno come numero decimale (00 - 53), dove la prima domenica è il primo giorno della settimana 1|
|**%V**|Numero di settimana ISO 8601 come numero decimale (00 - 53)|
|**%w**|Giorno della settimana come numero decimale (0 - 6; Domenica è 0)|
|**%W**|Numero della settimana dell'anno come numero decimale (00 - 53), dove il primo lunedì è il primo giorno della settimana 1|
|**%x**|Rappresentazione della data per le impostazioni locali|
|**%X (informazioni in o in data**|Rappresentazione temporale per le impostazioni locali|
|**%y**|Anno senza secolo, come numero decimale (00 - 99)|
|**%Y**|Anno con il secolo, come numero decimale|
|**%z**|L'offset dall'ora UTC in formato ISO 8601; nessun carattere se il fuso orario è sconosciuto|
|**Proprietà %1.**|il nome del fuso orario delle impostazioni locali o l'abbreviazione del fuso orario, a seconda delle impostazioni del Registro di sistema; nessun carattere se il fuso orario è sconosciuto|
|**%%**|Segno di percentuale|

Come nella funzione **printf,** il **#** flag può anteporre qualsiasi codice di formattazione. In questo caso, il significato del codice di formato viene modificato come segue.

|Codice formato|Significato|
|-----------------|-------------|
|**%#a**, **%#A**, **%#b**, **%#B**, **%#g**, **%#G**, **%#h**, **%#n**, **%#p**, **%#t**, **%#u** **, %#w** **, %#X** **, %#z**, **%#Z****%#%**|**#** viene ignorato.|
|**%#c**|Rappresentazione di data e ora lunga, appropriata per le impostazioni locali. Ad esempio: "martedì 14 marzo 1995 12.41.29".|
|**%#x**|Rappresentazione di data lunga, appropriata alle impostazioni locali. Ad esempio: "martedì 14 marzo 1995".|
|**%#d**, **%#D**, **%#D**, **%#e , %#F**, **%#H**, **%#I**, **%#j**, **%#m**, **%#M**, **%#r**, **%#R**, **%#S**, **%#T** **, %#U** **% #V**, **%#W**, **%#y**, **%#Y**|Rimuovere gli zeri iniziali o gli spazi (se presenti).|

La settimana ISO 8601 e l'anno basato sulla settimana prodotti da **%V**, **%g**e **%G**, utilizza una settimana che inizia il lunedì, dove settimana 1 è la settimana che contiene il 4 gennaio, ovvero la prima settimana che include almeno quattro giorni dell'anno. Se il primo lunedì dell'anno è il secondo, il terzo o il quarto, i giorni precedenti fanno parte dell'ultima settimana dell'anno precedente. Per tali giorni, **%V** viene sostituito da 53 e entrambi **%g** e **%G** vengono sostituiti dalle cifre dell'anno precedente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strftime**|\<time.h>|
|**wcsftime**|\<time.h> or \<wchar.h>|
|**_strftime_l**|\<time.h>|
|**_wcsftime_l**|\<time.h> or \<wchar.h>|

Le **funzioni _strftime_l** e **_wcsftime_l** sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [time](time-time32-time64.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni internazionali](../../c-runtime-library/locale.md) <br/>
[Gestione del tempo](../../c-runtime-library/time-management.md) <br/>
[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md) <br/>
[localeconv](localeconv.md) <br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md) <br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md) <br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
