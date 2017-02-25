---
title: "Variabili globali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.variables"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "variabili globali"
  - "variabili globali, libreria di runtime di Microsoft"
  - "variabili, globali"
ms.assetid: 01d1551c-2f0c-4f72-935c-6442caccf84f
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Variabili globali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria di runtime Microsoft C fornisce le macro o le variabili globali seguenti.  Molte di queste variabili globali o macro sono deprecate a favore di versioni funzionali più sicure ed è consigliabile usare queste ultime invece delle variabili globali.  
  
|Variabile|Descrizione|  
|---------------|-----------------|  
|[\_\_argc, \_\_argv, \_\_wargv](../c-runtime-library/argc-argv-wargv.md)|Contiene gli argomenti della riga di comando.|  
|[\_daylight, \_dstbias, \_timezone, and \_tzname](../c-runtime-library/daylight-dstbias-timezone-and-tzname.md)|Deprecata.  Usare invece `_get_daylight`, `_get_dstbias`, `_get_timezone` e `_get_tzname`.<br /><br /> Rettifica l'ora locale. È usata in alcune funzioni di data e ora.|  
|[errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)|Deprecata.  Usare invece `_get_errno`, `_set_errno`, `_get_doserrno`, `_set_doserrno`, `perror` e `strerror`.<br /><br /> Archivia i codici di errore e le informazioni correlate.|  
|[\_environ, \_wenviron](../c-runtime-library/environ-wenviron.md)|Deprecata.  Usare invece `getenv_s`, `_wgetenv_s`, `_dupenv_s`, `_wdupenv_s`, `_putenv_s` e `_wputenv_s`.<br /><br /> Puntatori a matrici di puntatori alle stringhe dell'ambiente di elaborazione. Inizializzata all'avvio.|  
|[\_fmode](../c-runtime-library/fmode.md)|Deprecata.  Usare invece `_get_fmode` o `_set_fmode`.<br /><br /> Imposta la modalità di conversione di file predefinita.|  
|[\_iob](../c-runtime-library/iob.md)|Matrice di strutture di controllo di I\/O per console, file e dispositivi.|  
|[\_pctype, \_pwctype, \_wctype, \_mbctype, \_mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md)|Contiene informazioni usate dalle funzioni di classificazione dei caratteri.|  
|[\_pgmptr, \_wpgmptr](../c-runtime-library/pgmptr-wpgmptr.md)|Deprecata.  Usare invece `_get_pgmptr` o `_get_wpgmptr`.<br /><br /> Inizializzata all'avvio del programma sul percorso completo o relativo del programma, il nome del programma completo o il nome del programma senza l'estensione del nome file, a seconda del modo in cui è stato richiamato il programma.|  
  
## Vedere anche  
 [Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)   
 [\_\_argc, \_\_argv, \_\_wargv](../c-runtime-library/argc-argv-wargv.md)   
 [\_get\_daylight](../c-runtime-library/reference/get-daylight.md)   
 [\_get\_dstbias](../c-runtime-library/reference/get-dstbias.md)   
 [\_get\_timezone](../c-runtime-library/reference/get-timezone.md)   
 [\_get\_tzname](../c-runtime-library/reference/get-tzname.md)   
 [perror](../c-runtime-library/reference/perror-wperror.md)   
 [strerror](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)   
 [\_get\_doserrno](../c-runtime-library/reference/get-doserrno.md)   
 [\_set\_doserrno](../c-runtime-library/reference/set-doserrno.md)   
 [\_get\_errno](../c-runtime-library/reference/get-errno.md)   
 [\_set\_errno](../c-runtime-library/reference/set-errno.md)   
 [\_dupenv\_s, \_wdupenv\_s](../c-runtime-library/reference/dupenv-s-wdupenv-s.md)   
 [getenv, \_wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)   
 [getenv\_s, \_wgetenv\_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [\_putenv, \_wputenv](../c-runtime-library/reference/putenv-wputenv.md)   
 [\_putenv\_s, \_wputenv\_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)   
 [\_get\_fmode](../c-runtime-library/reference/get-fmode.md)   
 [\_set\_fmode](../c-runtime-library/reference/set-fmode.md)