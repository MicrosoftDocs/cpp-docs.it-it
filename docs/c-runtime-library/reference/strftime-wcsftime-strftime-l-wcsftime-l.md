---
title: "strftime, wcsftime, _strftime_l, _wcsftime_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "strftime"
  - "_wcsftime_l"
  - "_strftime_l"
  - "wcsftime"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-time-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tcsftime"
  - "strftime"
  - "wcsftime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strftime_l (funzione)"
  - "strftime (funzione)"
  - "tcsftime (funzione)"
  - "_wcsftime_l (funzione)"
  - "wcsftime (funzione)"
  - "_tcsftime (funzione)"
  - "stringhe di ora"
ms.assetid: 6330ff20-4729-4c4a-82af-932915d893ea
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# strftime, wcsftime, _strftime_l, _wcsftime_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Formattare una stringa di data e ora.  
  
## Sintassi  
  
```  
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
  
#### Parametri  
 `strDest`  
 Stringa di output.  
  
 `maxsize`  
 Dimensione del buffer `strDest`, misurata in caratteri \(`char` o `wchart_t`\).  
  
 `format`  
 Stringa di controllo del formato.  
  
 `timeptr`  
 `tm` struttura dei dati.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `strftime` restituisce il numero di caratteri posizionato in `strDest` e `wcsftime` restituisce il numero corrispondente di caratteri wide.  
  
 Se il numero totale di caratteri, inclusi il carattere di terminazione null, è più di `maxsize`, sia `strftime` che `wcsftime` restituisce 0 e il contenuto di `strDest` è indeterminato.  
  
 Il numero di caratteri in `strDest` è uguale al numero di caratteri letterali in `format` nonché di tutti i caratteri che possono essere aggiunti a `format` tramite i codici di formattazione.  Il carattere di terminazione Null di una stringa non è incluso nel valore restituito.  
  
## Note  
 Le funzioni `wcsftime` e `strftime` consentono di formattare il valore temporale `tm` in `timeptr` come l'argomento `format` fornito ed archiviano il risultato nel buffer `strDest`*.* Al massimo, i caratteri di `maxsize` vengono inseriti nella stringa.  Per una descrizione dei campi della struttura `timeptr`, vedere [asctime](../../c-runtime-library/reference/asctime-wasctime.md).  `wcsftime` è l'equivalente a caratteri estesi di `strftime`; il suo puntatore di stringa passato come argomento punta ad una stringa di caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
> [!NOTE]
>  Nelle versioni precedenti a Visual C\+\+ 2005, la documentazione descriveva il parametro `format` di `wcsftime` come dotata del tipo di dati `const wchar_t *`, ma in realtà l'implementazione attuale del tipo di dati `format` è `const char *`.  L'implementazione del tipo di dati `format`è stata aggiornata per riflettere la documentazione precedente e corrente, ovvero, `const wchar_t *`.  
  
 Questa funzione convalida i parametri.  Se `strDest`, `format`, o`timeptr` è un puntatore null, o se la struttura dei dati `tm` di destinazione di `timeptr` non è valida \(ad esempio, se contiene valori esterni all'intervallo per l'ora o la data\), oppure se la stringa `format` contiene un codice di formattazione non valido, il gestore del parametro non valido viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce 0 e imposta `errno` su `EINVAL`.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsftime`|`strftime`|`strftime`|`wcsftime`|  
  
 L'argomento `format` è costituito da uno o più codici; come in `printf`, i codici di formattazione sono preceduti da un segno di percentuale \(`%`\).  I caratteri che non iniziano con `%` vengono copiati senza modifiche in `strDest`*.* La categoria `LC_TIME` delle impostazioni locali correnti influisce sulla formattazione di `strftime`. \(Per ulteriori informazioni su `LC_TIME`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).\) Le funzioni senza il suffisso `_l` utilizzano le impostazioni locali attualmente impostate.  Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che prendono il parametro delle impostazioni locali e lo usano al posto di quello corrente.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 I codici di formattazione per `strftime` vengono elencati di seguito:  
  
 `%a`  
 Nome abbreviato del giorno della settimana  
  
 `%A`  
 Nome completo del giorno della settimana  
  
 `%b`  
 Nome abbreviato del mese  
  
 `%B`  
 Nome completo del mese  
  
 `%c`  
 Rappresentazione di data e ora adatta alle impostazioni locali  
  
 `%d`  
 Giorno del mese come numero decimale \(01 \- 31\)  
  
 `%H`  
 Ora nel formato a 24 ore \(00 \- 23\)  
  
 `%I`  
 Ora nel formato a 12 ore \(01 \- 12\)  
  
 `%j`  
 Giorno dell'anno come numero decimale \(001 \- 366\)  
  
 `%m`  
 Mese come numero decimale \(01 \- 12\)  
  
 `%M`  
 Minuti come numero decimale \(00 \- 59\)  
  
 `%p`  
 Indicatore di A.M. \/P.M. per le impostazioni locali correnti dell'orario nel formato a 12 ore  
  
 `%S`  
 In secondo luogo come numero decimale \(00 \- 59\)  
  
 `%U`  
 Settimana dell'anno come numero decimale, con Domenica come primo giorno della settimana \(00 \- 53\)  
  
 `%w`  
 Giorno della settimana come numero decimale \(0 \- 6; Domenica corrisponde allo 0\)  
  
 `%W`  
 Settimana dell'anno come numero decimale, con Lunedì come primo giorno della settimana \(00 \- 53\)  
  
 `%x`  
 Rappresentazione della data per le impostazioni locali correnti  
  
 `%X`  
 Rappresentazione dell'ora per le impostazioni locali correnti  
  
 `%y`  
 Anno senza secolo, come numero decimale \(00 \- 99\)  
  
 `%Y`  
 Anno con secolo, come numero decimale  
  
 `%z, %Z`  
 Qualsiasi nome del fuso orario o abbreviazione del fuso orario, a seconda delle impostazioni del Registro di sistema; nessun carattere se il fuso orario è sconosciuto  
  
 `%%`  
 Segno di percentuale  
  
 Come nella funzione `printf`, il flag `#` può essere preceduto da qualsiasi codice di formattazione.  In tal caso, il significato del codice di formattazione viene modificato come segue.  
  
|Codice formato|Significato|  
|--------------------|-----------------|  
|`%#a, %#A, %#b, %#B, %#p, %#X, %#z, %#Z, %#%`|Il flag `#` viene ignorato.|  
|`%#c`|Rappresentazione estesa di data ed ora, appropriata per le impostazioni locali correnti.  Ad esempio: "Martedì 14 marzo 1995, 12:41:29".|  
|`%#x`|Rappresentazione estesa della data, appropriata per le impostazioni locali correnti.  Ad esempio: "Martedì 14 marzo 1995".|  
|`%#d, %#H, %#I, %#j, %#m, %#M, %#S, %#U, %#w, %#W, %#y, %#Y`|Rimuovere gli zeri iniziali se presenti.|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strftime`|\<time.h\>|  
|`wcsftime`|\<time.h\> o \<wchar.h\>|  
|`_strftime_l`|\<time.h\>|  
|`_wcsftime_l`|\<time.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [time](../../c-runtime-library/reference/time-time32-time64.md).  
  
## Equivalente .NET Framework  
  
-   [System::DateTime::ToLongDateString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongdatestring.aspx)  
  
-   [System::DateTime::ToLongTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.tolongtimestring.aspx)  
  
-   [System::DateTime::ToShortDateString](https://msdn.microsoft.com/en-us/library/system.datetime.toshortdatestring.aspx)  
  
-   [System::DateTime::ToShortTimeString](https://msdn.microsoft.com/en-us/library/system.datetime.toshorttimestring.aspx)  
  
-   [System::DateTime::ToString](https://msdn.microsoft.com/en-us/library/system.datetime.tostring.aspx)  
  
## Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strxfrm, wcsxfrm, \_strxfrm\_l, \_wcsxfrm\_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)