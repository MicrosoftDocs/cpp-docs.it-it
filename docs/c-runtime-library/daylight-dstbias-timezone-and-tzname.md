---
title: "_daylight, _dstbias, _timezone, and _tzname | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tzname"
  - "_timezone"
  - "timezone"
  - "_daylight"
  - "_tzname"
  - "daylight"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fusi orari"
  - "regolazioni dell'ora"
  - "timezone (variabili)"
  - "_tzname (funzione)"
  - "_daylight (funzione)"
  - "_timezone (funzione)"
  - "daylight (funzione)"
  - "regolazioni dell'ora locale"
  - "timezone (funzione)"
  - "tzname (funzione)"
  - "time-zone (variabili)"
ms.assetid: d06c7292-6b99-4aba-b284-16a96570c856
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _daylight, _dstbias, _timezone, and _tzname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`_daylight`, `_dstbias`, `_timezone` e `_tzname` vengono utilizzati nelle routine di data e ora per apportare aggiustamenti dell'ora locale.  Queste variabili globali sono deprecate a favore di versioni funzionali più sicure, che devono essere utilizzate al posto delle variabile globali.  
  
|Variabile globale|Equivalente funzionale|  
|-----------------------|----------------------------|  
|`_daylight`|[\_get\_daylight](../c-runtime-library/reference/get-daylight.md)|  
|`_dstbias`|[\_get\_dstbias](../c-runtime-library/reference/get-dstbias.md)|  
|`_timezone`|[\_get\_timezone](../c-runtime-library/reference/get-timezone.md)|  
|`_tzname`|[\_get\_tzname](../c-runtime-library/reference/get-tzname.md)|  
  
 Vengono dichiarate in Time.h come segue.  
  
## Sintassi  
  
```  
extern int _daylight;   
extern int _dstbias;   
extern long _timezone;   
extern char *_tzname[2];  
```  
  
## Note  
 In una chiamata a `_ftime`, `localtime`, o `_tzset`, i valori di `_daylight`, di `_dstbias`, di `_timezone` e di `_tzname` sono determinati dal valore della variabile di ambiente `TZ`.  Se non si imposta in modo esplicito il valore di `TZ`, `_tzname[0]` e `_tzname[1]` contengono rispettivamente le impostazioni predefinite di "PST" e "di PDT".  Le funzioni di modifica temporale \([\_tzset](../c-runtime-library/reference/tzset.md), [\_ftime](../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [localtime](../c-runtime-library/reference/localtime-localtime32-localtime64.md)\) tentano di impostare i valori di `_daylight`, di `_dstbias` e di `_timezone` interrogando il sistema operativo per il valore predefinito di ciascuna variabile.  I valori delle variabili globali del fuso orario sono riportati nella tabella seguente.  
  
|Variabile|Valore|  
|---------------|------------|  
|`_daylight`|Diverso da zero se l'area dell'ora legale \(DST\) viene specificata in `TZ` o è determinata dal sistema operativo; in caso contrario, 0.  Il valore predefinito è 1.|  
|`_dstbias`|L'offset per ora legale.|  
|`_timezone`|Differenza in secondi tra formato UTC e l'ora locale.  Il valore predefinito è 28,800.|  
|`_tzname[0]`|Nome del fuso orario derivato dalla variabile di ambiente `TZ`.  Il valore predefinito è "PST".|  
|`_tzname[1]`|Nome della zona DST derivato dalla variabile di ambiente `TZ`.  Il valore predefinito è "PDT" \(Pacific Daylight Time\).|  
  
## Vedere anche  
 [Variabili globali](../c-runtime-library/global-variables.md)   
 [\_get\_daylight](../c-runtime-library/reference/get-daylight.md)   
 [\_get\_dstbias](../c-runtime-library/reference/get-dstbias.md)   
 [\_get\_timezone](../c-runtime-library/reference/get-timezone.md)   
 [\_get\_tzname](../c-runtime-library/reference/get-tzname.md)