---
title: "_splitpath_s, _wsplitpath_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wsplitpath_s"
  - "_splitpath_s"
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
  - "_wsplitpath_s"
  - "splitpath_s"
  - "_splitpath_s"
  - "wsplitpath_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_splitpath_s (funzione)"
  - "_wsplitpath_s (funzione)"
  - "nomi di percorso"
  - "nomi di percorso"
  - "splitpath_s (funzione)"
  - "wsplitpath_s (funzione)"
ms.assetid: 30fff3e2-cd00-4eb6-b5a2-65db79cb688b
caps.latest.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 29
---
# _splitpath_s, _wsplitpath_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Suddivide un nome di percorso nei propri componenti.  Queste sono versioni di [\_splitpath, \_wsplitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _splitpath_s(  
   const char * path,  
   char * drive,  
   size_t driveNumberOfElements,  
   char * dir,  
   size_t dirNumberOfElements,  
   char * fname,  
   size_t nameNumberOfElements,  
   char * ext,   
   size_t extNumberOfElements  
);  
errno_t _wsplitpath_s(  
   const wchar_t * path,  
   wchar_t * drive,  
   size_t driveNumberOfElements,  
   wchar_t *dir,  
   size_t dirNumberOfElements,  
   wchar_t * fname,  
   size_t nameNumberOfElements,  
   wchar_t * ext,  
   size_t extNumberOfElements  
);  
template <size_t drivesize, size_t dirsize, size_t fnamesize, size_t extsize>  
errno_t _splitpath_s(  
   const char *path,  
   char (&drive)[drivesize],  
   char (&dir)[dirsize],  
   char (&fname)[fnamesize],  
   char (&ext)[extsize]  
); // C++ only  
template <size_t drivesize, size_t dirsize, size_t fnamesize, size_t extsize>  
errno_t _wsplitpath_s(  
   const wchar_t *path,  
   wchar_t (&drive)[drivesize],  
   wchar_t (&dir)[dirsize],  
   wchar_t (&fname)[fnamesize],  
   wchar_t (&ext)[extsize]  
); // C++ only  
```  
  
#### Parametri  
 \[in\] `path`  
 Percorso completo  
  
 \[out\] `drive`  
 Lettera di unità, seguita da un segno di due punti \(`:`\).  È possibile passare `NULL` per tale parametro se non è necessaria la lettera di unità.  
  
 \[in\] `driveNumberOfElements`  
 La dimensione del buffer `drive` in caratteri a byte singolo o di tipo wide.  Se `drive` è `NULL`, questo valore deve essere 0.  
  
 \[out\] `dir`  
 Percorso di directory, inclusa la barra finale.  Possono essere utilizzate le barre \( `/` \), le barre rovesciate \( `\` \), oppure entrambe.  È possibile passare `NULL` per tale parametro se non è necessario il percorso della directory.  
  
 \[in\] `dirNumberOfElements`  
 La dimensione del buffer `dir` in caratteri a byte singolo o di tipo wide.  Se `dir` è `NULL`, questo valore deve essere 0.  
  
 \[out\] `fname`  
 Nome di file di base \(senza estensione\).  È possibile passare `NULL` per tale parametro se non è necessario il nome del file.  
  
 \[in\] `nameNumberOfElements`  
 La dimensione del buffer `fname` in caratteri a byte singolo o di tipo wide.  Se `fname` è `NULL`, questo valore deve essere 0.  
  
 \[out\] `ext`  
 Estensione del nome del file, incluso il punto iniziale \(**.**\). È possibile passare `NULL` per tale parametro se non è necessario disporre dell'estensione del nome di file.  
  
 \[in\] `extNumberOfElements`  
 La dimensione del buffer `ext` in caratteri a byte singolo o di tipo wide.  Se `ext` è `NULL`, questo valore deve essere 0.  
  
## Valore restituito  
 Zero se ha esito positivo; un codice di errore in caso di errore.  
  
### Condizioni di errore  
  
|Condizione|Valore restituito|  
|----------------|-----------------------|  
|`path` è `NULL`|`EINVAL`|  
|`drive` è `NULL`, `driveNumberOfElements` è diverso da zero|`EINVAL`|  
|`drive` non è `NULL`, `driveNumberOfElements` è zero|`EINVAL`|  
|`dir` è `NULL`, `dirNumberOfElements` è diverso da zero|`EINVAL`|  
|`dir` non è `NULL`, `dirNumberOfElements` è zero|`EINVAL`|  
|`fname` è `NULL`, `nameNumberOfElements` è diverso da zero|`EINVAL`|  
|`fname` non è `NULL`, `nameNumberOfElements` è zero|`EINVAL`|  
|`ext` è `NULL`, `extNumberOfElements` è diverso da zero|`EINVAL`|  
|`ext` non è `NULL`, `extNumberOfElements` è zero|`EINVAL`|  
  
 Se si verifica una qualsiasi delle condizioni riportate sopra, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono `EINVAL`.  
  
 Se uno dei buffer è troppo breve per mantenere il risultato, queste funzioni cancellano il contenuto di tutti i buffer e vi inseriscono stringhe vuote, impostano `errno` a `ERANGE` e restituiscono `ERANGE`.  
  
## Note  
 La funzione `_splitpath_s` suddivide un percorso nelle quattro componenti.  La funzione `_splitpath_s` gestisce automaticamente gli handle della stringa con caratteri multibyte in base alle proprie esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso.  `_wsplitpath_s` è una versione a caratteri wide di `_splitpath_s`; gli argomenti di `_``wsplitpath_s` `` sono stringhe a caratteri wide.  Altrimenti queste funzioni si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tsplitpath_s`|`_splitpath_s`|`_splitpath_s`|`_wsplitpath_s`|  
  
 Ogni componente del percorso completo viene archiviata in un buffer distinto; le costanti di manifesto `_MAX_DRIVE`, `_MAX_DIR`, `_MAX_FNAME` e `_MAX_EXT` \(definite in STDLIB.H\) specificano la dimensione massima consentita per ogni componente del file.  Componenti di file più grandi delle costanti di manifesto corrispondenti causano danni all'heap.  
  
 Nella tabella seguente sono elencati i valori delle costanti di manifesto.  
  
|Nome|Valore|  
|----------|------------|  
|\_MAX\_DRIVE|3|  
|\_MAX\_DIR|256|  
|\_MAX\_FNAME|256|  
|\_MAX\_EXT|256|  
  
 Se il percorso completo non contiene un componente \(ad esempio, un nome di file\), `_splitpath_s` assegna una stringa vuota al buffer corrispondente.  
  
 In C\+\+, l'utilizzo di queste funzioni viene semplificato da overload del modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug di queste funzioni per prima cosa riempiono il buffer con il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_splitpath_s`|\<stdlib.h\>|  
|`_wsplitpath_s`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio per [\_makepath\_s, \_wmakepath\_s](../../c-runtime-library/reference/makepath-s-wmakepath-s.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_splitpath, \_wsplitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)   
 [\_fullpath, \_wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [\_makepath, \_wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)