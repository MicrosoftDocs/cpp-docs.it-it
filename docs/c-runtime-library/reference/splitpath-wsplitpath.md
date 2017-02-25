---
title: "_splitpath, _wsplitpath | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wsplitpath"
  - "_splitpath"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wsplitpath"
  - "_splitpath"
  - "splitpath"
  - "_wsplitpath"
  - "_tsplitpath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_splitpath (funzione)"
  - "_tsplitpath (funzione)"
  - "_wsplitpath (funzione)"
  - "nomi di percorso"
  - "nomi di percorso"
  - "splitpath (funzione)"
  - "tsplitpath (funzione)"
  - "wsplitpath (funzione)"
ms.assetid: 32bd76b5-1385-4ee8-a64c-abcb541cd2e4
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# _splitpath, _wsplitpath
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Suddividere un nome del percorso nei suoi componenti.  Sono disponibili versioni più sicure di queste funzioni., vedere [\_splitpath\_s, \_wsplitpath\_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md).  
  
## Sintassi  
  
```  
void _splitpath(  
   const char *path,  
   char *drive,  
   char *dir,  
   char *fname,  
   char *ext   
);  
void _wsplitpath(  
   const wchar_t *path,  
   wchar_t *drive,  
   wchar_t *dir,  
   wchar_t *fname,  
   wchar_t *ext   
);  
```  
  
#### Parametri  
 `path`  
 Percorso completo  
  
 `drive`  
 Lettera di unità, seguita da un segno di due punti \(`:`\).  È possibile passare `NULL` per tale parametro se non è necessaria la lettera di unità.  
  
 `dir`  
 Percorso di directory, inclusa la barra finale.  Possono essere utilizzate le barre \( `/` \), le barre rovesciate \( `\` \), oppure entrambe.  È possibile passare `NULL` per tale parametro se non è necessario il percorso della directory.  
  
 `fname`  
 Nome del file di base \(nessuna estensione\).  È possibile passare `NULL` per tale parametro se non è necessario il nome del file.  
  
 `ext`  
 Estensione del nome del file, incluso il punto iniziale \(`.`\).  È possibile passare `NULL` per tale parametro se non è necessaria l'estensione del nome del file.  
  
## Note  
 La funzione `_splitpath` suddivide un percorso nelle quattro componenti.  La funzione `_splitpath` gestisce automaticamente gli handle della stringa con caratteri multibyte in base alle proprie esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso.  `_wsplitpath` è una versione a caratteri "wide" di `_splitpath`. Gli argomenti per `_wsplitpath` sono stringhe a caratteri "wide".  Altrimenti queste funzioni si comportano in modo identico.  
  
 **Nota sulla sicurezza** Queste funzioni possono incorrere in un potenziale rischio di sovraccarico del buffer.  Problemi di sovraccarico del buffer sono un metodo frequente di attacco al sistema, con conseguente elevazione dei privilegi non autorizzata.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  Versioni più sicure di queste funzioni sono disponibili; vedere [\_splitpath\_s, \_wsplitpath\_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tsplitpath`|`_splitpath`|`_splitpath`|`_wsplitpath`|  
  
 Ogni componente del percorso completo viene archiviata in un buffer distinto; le costanti di manifesto `_MAX_DRIVE`, `_MAX_DIR`, `_MAX_FNAME` e `_MAX_EXT` \(definite in STDLIB.H\) specificano la dimensione massima per ogni componente del file.  Componenti di file più grandi delle costanti di manifesto corrispondenti causano danni all'heap.  
  
 È necessario che ogni buffer abbia la stessa dimensione della costante di manifesto corrispondente per evitare un potenziale sovraccarico del buffer.  
  
 Nella tabella seguente sono elencati i valori delle costanti di manifesto.  
  
|Nome|Valore|  
|----------|------------|  
|\_MAX\_DRIVE|3|  
|\_MAX\_DIR|256|  
|\_MAX\_FNAME|256|  
|\_MAX\_EXT|256|  
  
 Se il percorso completo non contiene un componente \(ad esempio, un nome di file\), `_splitpath` assegna stringhe vuote ai buffer corrispondenti.  
  
 È possibile passare `NULL` a `_splitpath` per qualsiasi parametro non necessario diverso da `path` .  
  
 Se `path` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_splitpath`|\<stdlib.h\>|  
|`_wsplitpath`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio di [\_makepath](../../c-runtime-library/reference/makepath-wmakepath.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_fullpath, \_wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [\_makepath, \_wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [\_splitpath\_s, \_wsplitpath\_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)