---
title: "_findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64 | Microsoft Docs"
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
  - "_wfindnext"
  - "_findnext"
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
  - "findnext"
  - "_wfindnext32i64"
  - "_tfindnext64i32"
  - "findnext32"
  - "findnext32i64"
  - "wfindnext64i32"
  - "_wfindnext"
  - "tfindnext64"
  - "findnexti64"
  - "_findnexti64"
  - "_tfindnexti64"
  - "_findnext64i32"
  - "tfindnexti64"
  - "tfindnext32"
  - "_wfindnext64i32"
  - "findnext64i32"
  - "_findnext"
  - "_tfindnext32i64"
  - "_wfindnext64"
  - "wfindnext"
  - "wfindnext32"
  - "tfindnext32i64"
  - "_findnext64"
  - "_tfindnext64"
  - "_wfindnext32"
  - "findnext64"
  - "_findnext32i64"
  - "tfindnext"
  - "wfindnexti64"
  - "tfindnext64i32"
  - "_tfindnext32"
  - "wfindnext32i64"
  - "wfindnext64"
  - "_wfindnexti64"
  - "_tfindnext"
  - "_findnext32"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wfindnexti64 (funzione)"
  - "_tfindnext32 (funzione)"
  - "wfindnexti64 (funzione)"
  - "_wfindnext32i64 (funzione)"
  - "findnext32i64 (funzione)"
  - "tfindnext64i32 (funzione)"
  - "_tfindnext64i32 (funzione)"
  - "_findnext (funzione)"
  - "findnext64i32 (funzione)"
  - "_tfindnext (funzione)"
  - "findnext32 (funzione)"
  - "tfindnext32 (funzione)"
  - "_findnext32 (funzione)"
  - "_tfindnext32i64 (funzione)"
  - "_wfindnext (funzione)"
  - "tfindnext (funzione)"
  - "_findnext64 (funzione)"
  - "findnext64 (funzione)"
  - "_findnext64i32 (funzione)"
  - "wfindnext32i64 (funzione)"
  - "findnext (funzione)"
  - "wfindnext32 (funzione)"
  - "_wfindnext64i32 (funzione)"
  - "findnexti64 (funzione)"
  - "_wfindnext64 (funzione)"
  - "_findnext32i64 (funzione)"
  - "_findnexti64 (funzione)"
  - "_tfindnext64 (funzione)"
  - "wfindnext64i32 (funzione)"
  - "tfindnexti64 (funzione)"
  - "wfindnext64 (funzione)"
  - "wfindnext (funzione)"
  - "tfindnext64 (funzione)"
  - "_wfindnext32 (funzione)"
  - "tfindnext32i64 (funzione)"
  - "_tfindnexti64 (funzione)"
ms.assetid: 75d97188-5add-4698-a46c-4c492378f0f8
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cercare il nome seguente, se presente, che corrispondono all'argomento di `filespec` in una chiamata precedente a [\_findfirst](../../c-runtime-library/reference/findfirst-functions.md), quindi modificare di conseguenza il contenuto della struttura `fileinfo`.  
  
## Sintassi  
  
```  
int _findnext(  
   intptr_t handle,  
   struct _finddata_t *fileinfo   
);  
int _findnext32(  
   intptr_t handle,  
   struct _finddata32_t *fileinfo   
);  
int _findnext64(  
   intptr_t handle,  
   struct __finddata64_t *fileinfo   
);  
int _findnexti64(  
   intptr_t handle,  
   struct __finddatai64_t *fileinfo   
);  
int _findnext32i64(  
   intptr_t handle,  
   struct _finddata32i64_t *fileinfo   
);  
int _findnext64i32(  
   intptr_t handle,  
   struct _finddata64i32_t *fileinfo   
);  
int _wfindnext(  
   intptr_t handle,  
   struct _wfinddata_t *fileinfo   
);  
int _wfindnext32(  
   intptr_t handle,  
   struct _wfinddata32_t *fileinfo   
);  
int _wfindnext64(  
   intptr_t handle,  
   struct _wfinddata64_t *fileinfo   
);  
int _wfindnexti64(  
   intptr_t handle,  
   struct _wfinddatai64_t *fileinfo   
);  
int _wfindnext32i64(  
   intptr_t handle,  
   struct _wfinddatai64_t *fileinfo   
);  
int _wfindnext64i32(  
   intptr_t handle,  
   struct _wfinddata64i32_t *fileinfo   
);  
```  
  
#### Parametri  
 `handle`  
 Individuare il punto di controllo restituito da una chiamata precedente a `_findfirst`.  
  
 `fileinfo`  
 Buffer di informazioni sui file.  
  
## Valore restituito  
 Restituisce 0 in caso di esito positivo.  In caso contrario, restituisce –1 ed imposta `errno` ad un valore che indica la natura dell'errore.  I codici di errore possibili sono riportati nella tabella seguente.  
  
 `EINVAL`  
 Parametro non valido: `fileinfo` era `NULL`.  Oppure, il sistema operativo ha restituito un errore imprevisto.  
  
 `ENOENT`  
 Non è stato trovato alcun file corrispondente.  
  
 `ENOMEM`  
 Memoria insufficiente oppure è stata superata la lunghezza del nome del file `MAX_PATH`.  
  
 Se viene passato un parametro non valido, queste funzioni invocano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
## Note  
 È necessario chiamare [\_findclose](../../c-runtime-library/reference/findclose.md) dopo che si è finito di utilizzare la funzione `_findfirst` o `_findnext` \(o una loro variante qualsiasi\).  Ciò libera le risorse utilizzate da queste funzioni nell'applicazione.  
  
 Le variazioni di queste funzioni con il prefisso `w` sono versioni a caratteri wide; altrimenti, sono identiche alle funzioni a byte singolo corrispondenti.  
  
 Le variazioni di queste funzioni supportano i tipi di data e ora e dimensioni di file a 32 o 64 bit.  Il primo suffisso numerico \(`32` o `64`\) indica la dimensione del tipo time utilizzato; il secondo suffisso è `i32` o `i64`, che indica se le dimensioni del file sono rappresentate con un Integer a 32 o a 64bit.  Per informazioni su quali versioni supportano i tipi di data e ora e dimensioni di file a 32 e 64 bit, vedere la tabella seguente.  Le variazioni che utilizzano un tipo di data e ora a 64 bit, permettono la creazione di file di data che possono rappresentare fino alle 23:59:59 del 31 Dicembre 3000, UTC; mentre quelli che utilizzano tipi di data e ora a 32 bit possono rappresentano solo le date fino alle 19:14:07 del 18 Gennaio 2038, UTC.  Per tutte queste funzioni, la mezzanotte, del 1° gennaio 1970, è il limite inferiore dell'intervallo di date.  
  
 A meno che non si disponga di un motivo specifico per utilizzare le versioni che specificano le dimensioni di tempo in modo esplicito, utilizzare `_findnext` o `_wfindnext` o, se è necessario supportare file di dimensioni maggiori di 3 GB, utilizzare `_findnexti64` o `_wfindnexti64`.  Tutte queste funzioni utilizzano il tipo di data e ora a 64 bit.  Nelle versioni precedenti, queste funzioni utilizzavano un tipo di data e ora a 32 bit.  Se si tratta di una modifica sostanziale per un'applicazione, è possibile definire `_USE_32BIT_TIME_T` per ottenere il comportamento precedente.  Se `_USE_32BIT_TIME_T` è definito, `_findnext`, `_finnexti64` e le versioni corrispondenti Unicode utilizzano una rappresentazione di data e ora a 32 bit.  
  
### Le variazioni del tipo di data ed ora ed il tipo di lunghezza del file di \_findnext  
  
|Funzioni|`_USE_32BIT_TIME_T` è definito?|Tipo time|Tipo di lunghezza del file|  
|--------------|-------------------------------------|---------------|--------------------------------|  
|`_findnext`, `_wfindnext`|Non definito|64 bit|32 bit|  
|`_findnext`, `_wfindnext`|definito|32 bit|32 bit|  
|`_findnext32`, `_wfindnext32`|Non dipende dalla definizione macro|32 bit|32 bit|  
|`_findnext64`, `_wfindnext64`|Non dipende dalla definizione macro|64 bit|64 bit|  
|`_findnexti64`, `_wfindnexti64`|Non definito|64 bit|64 bit|  
|`_findnexti64`, `_wfindnexti64`|definito|32 bit|64 bit|  
|`_findnext32i64`, `_wfindnext32i64`|Non dipende dalla definizione macro|32 bit|64 bit|  
|`_findnext64i32`, `_wfindnext64i32`|Non dipende dalla definizione macro|64 bit|32 bit|  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tfindnext`|`_findnext`|`_findnext`|`_wfindnext`|  
|`_tfindnext32`|`_findnext32`|`_findnext32`|`_wfindnext32`|  
|`_tfindnext64`|`_findnext64`|`_findnext64`|`_wfindnext64`|  
|`_tfindnexti64`|`_findnexti64`|`_findnexti64`|`_wfindnexti64`|  
|`_tfindnext32i64`|`_findnext32i64`|`_findnext32i64`|`_wfindnext32i64`|  
|`_tfindnext64i32`|`_findnext64i32`|`_findnext64i32`|`_wfindnext64i32`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_findnext`|\<io.h\>|  
|`_findnext32`|\<io.h\>|  
|`_findnext64`|\<io.h\>|  
|`_findnexti64`|\<io.h\>|  
|`_findnext32i64`|\<io.h\>|  
|`_findnext64i32`|\<io.h\>|  
|`_wfindnext`|\<io.h\> o \<wchar.h\>|  
|`_wfindnext32`|\<io.h\> o \<wchar.h\>|  
|`_wfindnext64`|\<io.h\> o \<wchar.h\>|  
|`_wfindnexti64`|\<io.h\> o \<wchar.h\>|  
|`_wfindnext32i64`|\<io.h\> o \<wchar.h\>|  
|`_wfindnext64i32`|\<io.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Chiamate di sistema](../../c-runtime-library/system-calls.md)   
 [Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)