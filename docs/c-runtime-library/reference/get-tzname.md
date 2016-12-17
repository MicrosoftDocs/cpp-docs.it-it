---
title: "_get_tzname | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_tzname"
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
  - "_get_tzname"
  - "get_tzname"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_get_tzname (funzione)"
  - "get_tzname (funzione)"
  - "fusi orari"
ms.assetid: df0065ff-095f-4237-832c-2fe9ab913875
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_tzname
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la rappresentazione di stringa di caratteri del nome del fuso orario o il nome dell'ora solare legale \(DST\).  
  
## Sintassi  
  
```  
errno_t _get_tzname(  
    size_t* pReturnValue,  
    char* timeZoneName,  
    size_t sizeInBytes,  
    int index      
);  
```  
  
#### Parametri  
 \[out\] `pReturnValue`  
 La lunghezza della stringa di `timeZoneName` includendo un carattere di terminazione null.  
  
 \[out\] `timeZoneName`  
 L'indirizzo di una stringa di caratteri per la rappresentazione del nome del fuso orario o il nome dell'ora solare di legale \(DST\), dipendente da `index`.  
  
 \[in\] `sizeInBytes`  
 Dimensione della stringa di caratteri `timeZoneName` in byte.  
  
 \[in\] `index`  
 L'indice di uno dei due nomi del fuso orario da recuperare.  
  
## Valore restituito  
 Zero se l'operazione viene completata correttamente, altrimenti un valore di tipo `errno`.  
  
 Se o `timeZoneName` è `NULL`, o `sizeInBytes` è zero o minore di zero \(ma non entrambi\), un gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `EINVAL`.  
  
### Condizioni di errore  
  
|`pReturnValue`|`timeZoneName`|`sizeInBytes`|`index`|Valore restituito|Contenuto di `timeZoneName`.|  
|--------------------|--------------------|-------------------|-------------|-----------------------|----------------------------------|  
|dimensione del nome di TZ|`NULL`|0|0 o 1|0|non modificato|  
|dimensione del nome di TZ|any|\> 0|0 o 1|0|nome di TZ|  
|non modificato|`NULL`|\> 0|any|`EINVAL`|non modificato|  
|non modificato|any|zero|any|`EINVAL`|non modificato|  
|non modificato|any|\> 0|\> 1|`EINVAL`|non modificato|  
  
## Note  
 La funzione `_get_tzname` recupera la rappresentazione di stringa di caratteri del nome del fuso orario o il nome dell'ora solare legale \(DST\) nell'indirizzo di `timeZoneName` a seconda del valore di indice, con la dimensione della stringa in `pReturnValue`.  Se `timeZoneName` è `NULL` e `sizeInBytes` è zero, solo la dimensione di una stringa di qualsiasi fuso orario in byte viene restituita in `pReturnValue`.  I valori di indice devono essere 0 per l'area dell'ora solare o 1 per l'area dell'ora solare legale; tutti gli altri valori di indice hanno risultati imprevisti.  
  
### Valori di indice  
  
|`index`|Contenuto di `timeZoneName`.|Valore predefinito `timeZoneName`.|  
|-------------|----------------------------------|----------------------------------------|  
|0|Nome del fuso orario|"PST"|  
|1|Nome del fuso orario standard.|"PDT"|  
|\> 1 o \< 0.|`errno` impostato su `EINVAL`.|non modificato|  
  
 A meno che i valori non siano esplicitamente modificati in fase di esecuzione, i valori predefiniti sono rispettivamente "PST" e "PDT".  Le dimensioni delle matrici di caratteri dipendono dal valore di `TZNAME_MAX`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_tzname`|\<time.h\>|  
  
 Per ulteriori informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)   
 [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)   
 [\_get\_daylight](../../c-runtime-library/reference/get-daylight.md)   
 [\_get\_dstbias](../../c-runtime-library/reference/get-dstbias.md)   
 [\_get\_timezone](../../c-runtime-library/reference/get-timezone.md)   
 [TZNAME\_MAX](../../c-runtime-library/tzname-max.md)