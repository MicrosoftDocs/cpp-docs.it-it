---
title: strftime, wcsftime, _strftime_l, _wcsftime_l | Microsoft Docs
ms.custom: ''
ms.date: 03/22/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- _strftime_l function
- strftime function
- tcsftime function
- _wcsftime_l function
- wcsftime function
- _tcsftime function
- time strings
ms.assetid: 6330ff20-4729-4c4a-82af-932915d893ea
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5009f2a7ff5f5a0afc2949498c17d7063523c18d
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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
Dimensioni del *strDest* buffer, misurata in caratteri (**char** oppure **wchar_t**).

*format*<br/>
Stringa di controllo del formato.

*timeptr*<br/>
**TM** struttura dei dati.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strftime** restituisce il numero di caratteri inseriti nella *strDest* e **wcsftime** restituisce il corrispondente numero di caratteri "wide".

Se il numero totale di caratteri, incluso il carattere di terminazione null, è più *maxsize*, entrambi **strftime** e **wcsftime** restituiscono 0 e il contenuto di  *strDest* sono indeterminati.

Il numero di caratteri *strDest* è uguale al numero di caratteri letterali *formato* , nonché i caratteri che possono essere aggiunti al *formato* tramite codici di formattazione. La terminazione Null di una stringa non viene conteggiata nel valore restituito.

## <a name="remarks"></a>Note

Il **strftime** e **wcsftime** formato funzioni il **tm** tempo valore in *timeptr* in base a fornito  *formato* argomento e l'archivio risultati nel buffer *strDest*. Al massimo *maxsize* vengono inseriti nella stringa di caratteri. Per una descrizione dei campi di *timeptr* struttura, vedere [asctime](asctime-wasctime.md). **wcsftime** equivale a caratteri wide **strftime**; relativo argomento puntatore stringa punta alla stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Questa funzione convalida i relativi parametri. Se *strDest*, *formato*, o *timeptr* è un puntatore null, o se il **tm** struttura di dati punta *timeptr* non è valido (ad esempio, se contiene compreso nell'intervallo valori per il tempo o data), oppure se il *formato* stringa contiene un codice di formattazione non valido, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e imposta **errno** alla **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcsftime**|**strftime**|**strftime**|**wcsftime**|

Il *formato* argomento consiste di uno o più codici; perché in **printf**, i codici di formattazione sono preceduti da un segno di percentuale (**%**). Caratteri che non iniziano con **%** vengono copiati invariato per *strDest*. Il **LC_TIME** categoria di impostazioni locali correnti influenza la formattazione di output dei **strftime**. (Per ulteriori informazioni sul **LC_TIME**, vedere [setlocale](setlocale-wsetlocale.md).) Il **strftime** e **wcsftime** funzioni utilizzano attualmente impostati dalle impostazioni locali. Il **strftime_l** e **wcsftime_l** versioni di queste funzioni sono identiche ad eccezione del fatto che si accettano le impostazioni locali come parametro e usare tale anziché attualmente impostati dalle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il **strftime** funzioni supportano questi codici di formattazione:

|||
|-|-|
|Codice|Stringa di sostituzione|
|**%a**|Nome del giorno della settimana abbreviato nelle impostazioni locali|
|**%A**|Nome completo del giorno della settimana nelle impostazioni locali|
|**%b**|Nome abbreviato del mese nelle impostazioni locali|
|**%B**|Nome completo del mese nelle impostazioni locali|
|**%c**|Rappresentazione di data e ora appropriata per le impostazioni locali|
|**%C**|L'anno diviso per 100 e troncato a un numero intero, come un numero decimale (00−99)|
|**%d**|Giorno del mese come numero decimale (da 01 a 31)|
|**%D**|Equivalente a **%m/%d/%y**|
|**%e**|Giorno del mese come numero decimale (1-31), in singole cifre sono precedute da uno spazio|
|**%F**|Equivalente a **%Y-%m-%d**|
|**%g**|Le ultime 2 cifre dell'anno ISO 8601 basate su settimana come numero decimale (00 - 99)|
|**%G**|L'anno ISO 8601 basate su settimana come numero decimale|
|**%h**|Nome abbreviato del mese (equivalente a **%b**)|
|**%H**|Ora in formato 24 ore (00 - 23)|
|**%I**|Ora in formato 12 ore (da 01 a 12)|
|**%j**|Giorno dell'anno come numero decimale (da 001-366)|
|**%m**|Mese come numero decimale (da 01 a 12)|
|**%M**|Minuti come numero decimale (00 - 59)|
|**%n**|Un carattere di nuova riga (**\n**)|
|**%p**|AM/PM le impostazioni internazionali. per il formato 12 ore|
|**%r**|Ora dell'orologio di 12 ore le impostazioni internazionali|
|**%R**|Equivalente a **% h:%m:%s5D %M**|
|**%S**|Secondo sotto forma di numero decimale (00 - 59)|
|**%t**|Un carattere di tabulazione orizzontale (**\t**)|
|**%T**|Equivalente a **% h:%m:%s5D %S**, il formato di ora ISO 8601|
|**%u**|Giorno della settimana ISO 8601 come numero decimale (da 1 a 7; Lunedì è 1)|
|**%U**|Numero della settimana dell'anno sotto forma di numero decimale (00 - 53), dove la prima domenica è il primo giorno della settimana 1|
|**%V**|Numero di settimana ISO 8601 come numero decimale (00 - 53)|
|**%w**|Giorno della settimana come numero decimale (0 - 6. Domenica è 0)|
|**%W**|Numero della settimana dell'anno sotto forma di numero decimale (00 - 53), dove il primo lunedì è il primo giorno della settimana 1|
|**%x**|Rappresentazione di data per le impostazioni locali|
|**%X**|Rappresentazione di tempo per le impostazioni locali|
|**%y**|Anno senza il secolo, come numero decimale (00 - 99)|
|**%Y**|Anno con il secolo, come numero decimale|
|**%z**|L'offset dall'ora UTC nel formato ISO 8601. Nessun carattere se il fuso orario è sconosciuto|
|**%Z**|Le impostazioni locali nome del fuso orario o abbreviazione del fuso orario, a seconda delle impostazioni del Registro di sistema; Nessun carattere se il fuso orario è sconosciuto|
|**%%**|Segno di percentuale|

Come nel **printf** funzione, il **#** flag potrebbe prefisso qualsiasi codice di formattazione. In questo caso, il significato del codice di formato viene modificato come segue.

|Codice formato|Significato|
|-----------------|-------------|
|**% #a**, **%#A**, **%#b**, **%#B**, **%#g**, **%#G**, **%#h**, **%#n**, **%#p**, **%#t**, **%#u**, **%#w**, **%#x10** , **%#z**, **%#Z**, **%#%**|**#** viene ignorato.|
|**%#c**|Lunga data e ora di rappresentazione, appropriato per le impostazioni locali. Ad esempio: "martedì 14 marzo 1995 12.41.29".|
|**%#x10**|Rappresentazione di data estesa, appropriato per le impostazioni locali. Ad esempio: "martedì 14 marzo 1995".|
|**%#d**, **%#D**, **%#e**, **%#F**, **%#H**, **% #I**, **%#j**, **%#m**, **%#M**, **%#r**, **%#R**, **%#S**, **%#T** , **%#U**, **%#V**, **%#W**, **%#y**, **%#Y**|Rimuovere zeri o spazi (se presente).|

La settimana ISO 8601 e l'anno settimana-based prodotti dalla **%V**, **%g**, e **%G**, viene usata una settimana in cui inizia il lunedì, in cui settimana 1 settimana contenente gennaio 4 °, ovvero il primo settimana che include almeno quattro giorni dell'anno. Se il primo lunedì dell'anno è il 2 °, 3 o 4, i giorni precedenti fanno parte dell'ultima settimana dell'anno precedente. Per questi giorni **%V** viene sostituito da entrambi e 53 **%g** e **%G** vengono sostituiti da cifre dell'anno precedente.

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
