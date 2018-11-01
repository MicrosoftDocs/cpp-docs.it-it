---
title: strftime, wcsftime, _strftime_l, _wcsftime_l
ms.date: 03/22/2018
apiname:
- strftime
- _wcsftime_l
- _strftime_l
- wcsftime
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
ms.openlocfilehash: 932a7827ef61a5e111f86f8bc44291827843b76e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50505664"
---
# <a name="strftime-wcsftime-strftimel-wcsftimel"></a>strftime, wcsftime, _strftime_l, _wcsftime_l

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
Dimensioni dei *strDest* buffer, misurata in caratteri (**char** oppure **wchar_t**).

*format*<br/>
Stringa di controllo del formato.

*timeptr*<br/>
**TM** struttura dei dati.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strftime** restituisce il numero di caratteri in *strDest* e **wcsftime** restituisce il numero di caratteri wide corrispondente.

Se il numero totale di caratteri, incluso il carattere null di terminazione, è più *maxsize*, entrambi **strftime** e **wcsftime** restituiscono 0 e il contenuto di  *strDest* sono indeterminati.

Il numero di caratteri in *strDest* è uguale al numero di caratteri letterali nella *formato* nonché gli eventuali caratteri che possono essere aggiunti a *formato* tramite codici di formattazione. La terminazione Null di una stringa non viene conteggiata nel valore restituito.

## <a name="remarks"></a>Note

Il **strftime** e **wcsftime** formato funzioni il **tm** nel valore di ora *timeptr* in base a fornito  *formato* argomento e archiviano il risultato nel buffer *strDest*. Al massimo *maxsize* vengono inseriti nella stringa. Per una descrizione dei campi nella *timeptr* struttura, vedere [asctime](asctime-wasctime.md). **wcsftime** equivale a caratteri wide **strftime**; il relativo argomento puntatore stringa punta a una stringa di caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

Questa funzione convalida i relativi parametri. Se *strDest*, *formato*, o *timeptr* è un puntatore null, o se il **tm** struttura di dati indirizzata da *timeptr* non è valido (ad esempio, se contiene valori fuori intervallo per l'ora o data), oppure se il *formato* stringa contiene un codice di formattazione non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e imposta **errno** al **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcsftime**|**strftime**|**strftime**|**wcsftime**|

Il *formato* argomento è costituito da uno o più codici di; come in **printf**, i codici di formattazione sono preceduti da un segno di percentuale (**%**). Caratteri che non iniziano con **%** vengono copiati invariati in *strDest*. Il **LC_TIME** categoria delle impostazioni locali correnti influisce sulla formattazione dell'output di **strftime**. (Per ulteriori informazioni sul **LC_TIME**, vedere [setlocale](setlocale-wsetlocale.md).) Il **strftime** e **wcsftime** funzioni utilizzano correnti delle impostazioni locali. Il **strftime_l** e **wcsftime_l** versioni di queste funzioni sono identiche ad eccezione del fatto che accettano le impostazioni locali come parametro e usarlo invece correnti delle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il **strftime** funzioni supportano questi codici di formattazione:

|||
|-|-|
|Codice|Stringa di sostituzione|
|**%a**|Nome del giorno della settimana abbreviato nelle impostazioni locali|
|**%A**|Nome completo del giorno della settimana nelle impostazioni locali|
|**%b**|Nome del mese abbreviato nelle impostazioni locali|
|**%B**|Nome completo del mese nelle impostazioni locali|
|**%c**|Rappresentazione di data e ora appropriata per le impostazioni locali|
|**%C**|L'anno diviso per 100 e troncato a un numero intero, come numero decimale (00−99)|
|**%d**|Giorno del mese come numero decimale (01-31)|
|**%D**|Equivalente a **%m/%d/%y**|
|**%e**|Giorno del mese come numero decimale (1-31), in cui le cifre singole sono precedute da uno spazio|
|**%F**|Equivalente a **Y %-%m-%d**|
|**%g**|Le ultime 2 cifre dell'anno in base al settimana ISO 8601 come numero decimale (00 - 99)|
|**%G**|L'anno ISO 8601 basato su settimana come numero decimale|
|**%h**|Nome del mese abbreviato (equivalente a **%b**)|
|**%H**|Ora in formato 24 ore (00 - 23)|
|**%I**|Ora in formato 12 ore (01-12)|
|**%j**|Giorno dell'anno come numero decimale (001-366)|
|**%m**|Mese come numero decimale (01-12)|
|**%M**|Al minuto come numero decimale (00 - 59)|
|**%n**|Un carattere di nuova riga (**\n**)|
|**%p**|A.M. delle impostazioni locali. per il formato 12 ore|
|**%r**|Ora in formato 12 ore di impostazioni locali|
|**%R**|Equivalente a **% h:%m %M**|
|**%S**|Secondo come numero decimale (00 - 59)|
|**%t**|Un carattere di tabulazione orizzontale (**\t**)|
|**%T**|Equivalente a **% h:%m: %S**, il formato di ora ISO 8601|
|**%u**|Giorno della settimana ISO 8601 come numero decimale (1-7; Lunedì è 1)|
|**%U**|Numero della settimana dell'anno come numero decimale (00 - 53), dove la prima domenica è il primo giorno della settimana 1|
|**%V**|Numero della settimana ISO 8601 come numero decimale (00 - 53)|
|**%w**|Giorno della settimana come numero decimale (0 - 6; Domenica è 0)|
|**%W**|Numero della settimana dell'anno come numero decimale (00 - 53), dove il primo lunedì è il primo giorno della settimana 1|
|**%x**|Rappresentazione della data per le impostazioni locali|
|**%X**|Rappresentazione dell'ora per le impostazioni locali|
|**%y**|Anno senza secolo, espresso come numero decimale (00 - 99)|
|**%Y**|Anno con il secolo, come numero decimale|
|**%z**|L'offset dall'ora UTC nel formato ISO 8601. Nessun carattere se il fuso orario è sconosciuto|
|**%Z**|Delle impostazioni locali nome del fuso orario o abbreviazione del fuso orario, a seconda delle impostazioni del Registro di sistema; Nessun carattere se il fuso orario è sconosciuto|
|**%%**|Segno di percentuale|

Come nel **printf** funzione, il **#** flag potrebbe prefisso qualsiasi codice di formattazione. In questo caso, il significato del codice di formato viene modificato come segue.

|Codice formato|Significato|
|-----------------|-------------|
|**% #a**, **%#A**, **%#b**, **%#B**, **%#g**, **%#G**, **%#h**, **%#n**, **%#p**, **%#t**, **%#u**, **%#w**, **%#x10** , **%#z**, **%#Z**, **%#%**|**#** flag viene ignorato.|
|**%#c**|Lunga data e ora di rappresentazione, appropriato per le impostazioni locali. Ad esempio: "martedì 14 marzo 1995 12.41.29".|
|**%#x10**|Rappresentazione di data estesa, appropriata per le impostazioni locali. Ad esempio: "martedì 14 marzo 1995".|
|**%#d**, **%#D**, **%#e**, **%#F**, **%#H**, **% #I**, **%#j**, **%#m**, **%#M**, **%#r**, **%#R**, **%#S**, **%#T** , **%#U**, **%#V**, **%#W**, **%#y**, **%#Y**|Rimuovere zeri o spazi (se presente).|

La settimana ISO 8601 e l'anno settimana in base al prodotto da **%V**, **%g**, e **%G**, viene utilizzato una settimana in cui inizia il lunedì, in cui settimana 1 settimana che contiene 4 gennaio, ovvero il primo settimana che include almeno quattro giorni dell'anno. Se il primo lunedì dell'anno è il 2 °, 3 o 4, i giorni precedenti fanno parte dell'ultima settimana dell'anno precedente. Per questi giorni **%V** viene sostituita da entrambi e 53 **%g** e **%G** vengono sostituite da cifre dell'anno precedente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strftime**|\<time.h>|
|**wcsftime**|\<time.h> or \<wchar.h>|
|**_strftime_l**|\<time.h>|
|**_wcsftime_l**|\<time.h> or \<wchar.h>|

Il **strftime_l** e **wcsftime_l** funzioni sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
