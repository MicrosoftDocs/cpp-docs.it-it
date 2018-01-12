---
title: strftime, wcsftime, _strftime_l, _wcsftime_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs: C++
helpviewer_keywords:
- _strftime_l function
- strftime function
- tcsftime function
- _wcsftime_l function
- wcsftime function
- _tcsftime function
- time strings
ms.assetid: 6330ff20-4729-4c4a-82af-932915d893ea
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 785ad16e8f86f74252c4391044d2def96091fe61
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="strftime-wcsftime-strftimel-wcsftimel"></a>strftime, wcsftime, _strftime_l, _wcsftime_l
Formatta una stringa dell'ora.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `strDest`  
 Stringa di output.  
  
 `maxsize`  
 Dimensioni del buffer `strDest`, in caratteri (`char` o `wchart_t`).  
  
 `format`  
 Stringa di controllo del formato.  
  
 `timeptr`  
 Struttura di dati `tm`.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `strftime` restituisce il numero di caratteri in `strDest` e `wcsftime` restituisce il numero di caratteri wide corrispondente.  
  
 Se il numero totale di caratteri, incluso il carattere di terminazione Null, è maggiore di `maxsize`, sia `strftime` che `wcsftime` restituiscono 0 e il contenuto di `strDest` è indeterminato.  
  
 Il numero di caratteri in `strDest` è uguale al numero di caratteri letterali in `format` oltre agli eventuali caratteri aggiunti a `format` tramite codici di formattazione. La terminazione Null di una stringa non viene conteggiata nel valore restituito.  
  
## <a name="remarks"></a>Note  
 Il `strftime` e `wcsftime` formato funzioni il `tm` ora valore `timeptr` in base alle fornito `format` argomento e il risultato nel buffer di archivio `strDest`. Nella stringa vengono inseriti al massimo `maxsize`. Per una descrizione dei campi nella struttura `timeptr`, vedere [asctime](../../c-runtime-library/reference/asctime-wasctime.md). `wcsftime` è l'equivalente di caratteri wide di `strftime`. L'argomento puntatore di stringa corrispondente punta a una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.  
  
> [!NOTE]
>  Nelle versioni precedenti a Visual C++ 2005, la documentazione indica che il parametro `format` di `wcsftime` ha il tipo di dati `const wchar_t *`, ma l'implementazione effettiva tipo di dati `format` è `const char *`. L'implementazione del `format` tipo di dati è stato aggiornato per riflettere la documentazione precedente e corrente, vale a dire `const wchar_t *`.  
  
 Questa funzione convalida i relativi parametri. Se `strDest`, `format`, o `timeptr` è un puntatore null, o se il `tm` struttura di dati interessato da `timeptr` non è valido (ad esempio, se contiene valori fuori intervallo per l'ora o data), o se il `format` stringa contiene un codice di formattazione non valido, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce 0 e imposta `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsftime`|`strftime`|`strftime`|`wcsftime`|  
  
 L'argomento `format` è costituito da uno o più codici. Come in `printf`, i codici di formattazione sono preceduti da un segno di percentuale (`%`). Caratteri che non iniziano con `%` verranno copiate così a `strDest`. La categoria `LC_TIME` delle impostazioni locali correnti influisce sulla formattazione dell'output di `strftime`. Per altre informazioni su `LC_TIME`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le funzioni senza il suffisso `_l` usano le impostazioni locali correnti. Le versioni di queste funzioni con il suffisso `_l` sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 I codici di formattazione per `strftime` sono elencati di seguito:  
  
 `%a`  
 Nome del giorno della settimana abbreviato  
  
 `%A`  
 Nome del giorno della settimana intero  
  
 `%b`  
 Nome del mese abbreviato  
  
 `%B`  
 Nome del mese intero  
  
 `%c`  
 Rappresentazione di data e ora appropriata per le impostazioni locali  
  
 `%d`  
 Giorno del mese come numero decimale (01-31)  
  
 `%H`  
 Ora in formato 24 ore (00 - 23)  
  
 `%I`  
 Ora in formato 12 ore (da 01 a 12)  
  
 `%j`  
 Giorno dell'anno come numero decimale (001-366)  
  
 `%m`  
 Mese come numero decimale (da 01 a 12)  
  
 `%M`  
 Minuti come numero decimale (00 - 59)  
  
 `%p`  
 Indicatore AM/PM delle impostazioni locali correnti per il formato 12 ore  
  
 `%S`  
 Secondo come numero decimale (00 - 59)  
  
 `%U`  
 Settimana dell'anno come numero decimale, con domenica come primo giorno della settimana (00 - 53)  
  
 `%w`  
 Giorno della settimana come numero decimale (0 - 6. Domenica è 0)  
  
 `%W`  
 Settimana dell'anno come numero decimale, con lunedì come primo giorno della settimana (00 - 53)  
  
 `%x`  
 Rappresentazione della data per le impostazioni locali correnti  
  
 `%X`  
 Rappresentazione dell'ora per le impostazioni locali correnti  
  
 `%y`  
 Anno senza il secolo, come numero decimale (00 - 99)  
  
 `%Y`  
 Anno con il secolo, come numero decimale  
  
 `%z, %Z`  
 Nome del fuso orario o abbreviazione del fuso orario, a seconda delle impostazioni del Registro di sistema; nessun carattere se il fuso orario è sconosciuto  
  
 `%%`  
 Segno di percentuale  
  
 Come nella funzione `printf`, il flag `#` può essere usato come prefisso per qualsiasi codice di formattazione. In questo caso, il significato del codice di formato viene modificato come segue.  
  
|Codice formato|Significato|  
|-----------------|-------------|  
|`%#a, %#A, %#b, %#B, %#p, %#X, %#z, %#Z, %#%`|Il flag `#` viene ignorato.|  
|`%#c`|Rappresentazione di data e ora estesa, appropriata per le impostazioni locali correnti. Ad esempio: "martedì 14 marzo 1995 12.41.29".|  
|`%#x`|Rappresentazione di data estesa, appropriata per le impostazioni locali correnti. Ad esempio: "martedì 14 marzo 1995".|  
|`%#d, %#H, %#I, %#j, %#m, %#M, %#S, %#U, %#w, %#W, %#y, %#Y`|Vengono rimossi gli eventuali zeri iniziali.|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strftime`|\<time.h>|  
|`wcsftime`|\<time.h> o \<wchar.h>|  
|`_strftime_l`|\<time.h>|  
|`_wcsftime_l`|\<time.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [time](../../c-runtime-library/reference/time-time32-time64.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Time Management](../../c-runtime-library/time-management.md)  (Gestione del tempo)  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)