---
title: "_findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_findfirst"
  - "_wfindfirst"
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
  - "findfirst32i64"
  - "wfindfirst32i64"
  - "tfindfirst64"
  - "_findfirst64i32"
  - "_wfindfirst32i64"
  - "_wfindfirsti64"
  - "wfindfirst"
  - "_tfindfirsti64"
  - "findfirst32"
  - "_tfindfirst32"
  - "_findfirsti64"
  - "findfirst"
  - "wfindfirst64"
  - "wfindfirst32"
  - "tfindfirst32"
  - "_wfindfirst64i32"
  - "findfirst64i32"
  - "tfindfirst64i32"
  - "_wfindfirst"
  - "findfirsti64"
  - "_findfirst32i64"
  - "wfindfirst64i32"
  - "_wfindfirst32"
  - "_findfirst32"
  - "_tfindfirst32i64"
  - "tfindfirst"
  - "_tfindfirst64i32"
  - "findfirst64"
  - "_tfindfirst"
  - "_findfirst64"
  - "_tfindfirst64"
  - "tfindfirst32i64"
  - "_findfirst"
  - "_wfindfirst64"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tfindfirst64 (funzione)"
  - "_wfindfirst64i32 (funzione)"
  - "_wfindfirst32i64 (funzione)"
  - "wfindfirst32 (funzione)"
  - "_findfirst (funzione)"
  - "wfindfirst64 (funzione)"
  - "_wfindfirst (funzione)"
  - "_findfirst64i32 (funzione)"
  - "wfindfirst (funzione)"
  - "_findfirst64 (funzione)"
  - "tfindfirst32 (funzione)"
  - "_tfindfirst64i32 (funzione)"
  - "findfirst (funzione)"
  - "findfirst32i64 (funzione)"
  - "tfindfirst64 (funzione)"
  - "_tfindfirst32 (funzione)"
  - "tfindfirst32i64 (funzione)"
  - "tfindfirst64i32 (funzione)"
  - "_wfindfirsti64 (funzione)"
  - "_findfirst32i64 (funzione)"
  - "findfirst32 (funzione)"
  - "findfirsti64 (funzione)"
  - "findfirst64i32 (funzione)"
  - "tfindfirsti64 (funzione)"
  - "tfindfirst (funzione)"
  - "_wfindfirst32 (funzione)"
  - "wfindfirsti64 (funzione)"
  - "_tfindfirsti64 (funzione)"
  - "_tfindfirst (funzione)"
  - "_tfindfirst32i64 (funzione)"
  - "findfirst64 (funzione)"
  - "_findfirst32 (funzione)"
  - "_findfirsti64 (funzione)"
  - "wfindfirst32i64 (funzione)"
  - "wfindfirst64i32 (funzione)"
  - "_wfindfirst64 (funzione)"
ms.assetid: 9bb46d1a-b946-47de-845a-a0b109a33ead
caps.latest.revision: 25
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce informazioni sulla prima istanza di un nome file che corrisponde al file specificato nell'argomento di `filespec`.  
  
## Sintassi  
  
```  
intptr_t _findfirst(  
   const char *filespec,  
   struct _finddata_t *fileinfo   
);  
intptr_t _findfirst32(  
   const char *filespec,  
   struct _finddata32_t *fileinfo   
);  
intptr_t _findfirst64(  
   const char *filespec,  
   struct _finddata64_t *fileinfo   
);  
intptr_t _findfirsti64(  
   const char *filespec,  
   struct _finddatai64_t *fileinfo   
);  
intptr_t _findfirst32i64(  
   const char *filespec,  
   struct _finddata32i64_t *fileinfo   
);  
intptr_t _findfirst64i32(  
   const char *filespec,  
   struct _finddata64i32_t *fileinfo   
);  
intptr_t _wfindfirst(  
   const wchar_t *filespec,  
   struct _wfinddata_t *fileinfo   
);  
intptr_t _wfindfirst32(  
   const wchar_t *filespec,  
   struct _wfinddata32_t *fileinfo   
);  
intptr_t _wfindfirst64(  
   const wchar_t *filespec,  
   struct _wfinddata64_t *fileinfo   
);  
intptr_t _wfindfirsti64(  
   const wchar_t *filespec,  
   struct _wfinddatai64_t *fileinfo   
);  
intptr_t _wfindfirst32i64(  
   const wchar_t *filespec,  
   struct _wfinddata32i64_t *fileinfo   
);  
intptr_t _wfindfirst64i32(  
   const wchar_t *filespec,  
   struct _wfinddata64i32_t *fileinfo   
);  
```  
  
#### Parametri  
 `filespec`  
 Specifica di file di destinazione \(potrebbe includere caratteri jolly\).  
  
 `fileinfo`  
 Buffer di informazioni sui file.  
  
## Valore restituito  
 Se l'operazione riesce, `_findfirst` restituisce un unico handle di ricerca che identifica il file o il gruppo di file corrispondenti alla specifica di `filespec`, che può essere utilizzata in una chiamata successiva a [\_findnext](../../c-runtime-library/reference/findnext-functions.md) o a `_findclose`.  In caso contrario, `_findfirst` restituisce \- 1 e imposta `errno` su uno dei valori seguenti.  
  
 `EINVAL`  
 Parametro non valido: `filespec` o `fileinfo` era `NULL`.  Oppure, il sistema operativo ha restituito un errore imprevisto.  
  
 `ENOENT`  
 Specifica di file che non è stato possibile confrontare.  
  
 `ENOMEM`  
 Memoria insufficiente.  
  
 `EINVAL`  
 La specifica di nome di file non valido o il nome del file fornito è maggiore di `MAX_PATH`.  
  
 Per ulteriori informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Se viene passato un parametro non valido, queste funzioni invocano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
## Note  
 È necessario chiamare [\_findclose](../../c-runtime-library/reference/findclose.md) dopo che si è finito di utilizzare la funzione `_findfirst` o `_findnext` \(o una loro variante qualsiasi\).  Ciò libera le risorse utilizzate da queste funzioni nell'applicazione.  
  
 Le variazioni di queste funzioni con il prefisso `w` sono versioni a caratteri wide; altrimenti, sono identiche alle funzioni a byte singolo corrispondenti.  
  
 Le variazioni di queste funzioni supportano i tipi di data e ora e dimensioni di file a 32 o 64 bit.  Il primo suffisso numerico \(`32` o `64`\) indica la dimensione del tipo time utilizzato; il secondo suffisso è `i32` o `i64`, che indica se le dimensioni del file sono rappresentate con un Integer a 32 o a 64bit.  Per informazioni su quali versioni supportano i tipi di data e ora e dimensioni di file a 32 e 64 bit, vedere la tabella seguente.  Il suffisso di `i64` o di `i32` viene omesso se è uguale alla dimensione del tempo, pertanto `_findfirst64` inoltre supporta le lunghezze del file a 64 bit e `_findfirst32` supporta solo le lunghezze del file a 32 bit.  
  
 Queste forme usano funzioni diverse della struttura di `_finddata_t` per il parametro di `fileinfo`.  Per ulteriori informazioni sulla struttura, consultare [Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md).  
  
 Le variazioni che utilizzano un tipo di tempo a 64 bit consentono alle date la creazione di un file che può essere espresso fino alle 23:59: 59, 31 dicembre, 3000, UTC.  Quelli che utilizzano i tipi di tempo a 32 bit rappresentano le date solo fino alle 19:14:07, 18 gennaio 2038, UTC.  Per tutte queste funzioni, la mezzanotte, del 1° gennaio 1970, è il limite inferiore dell'intervallo di date.  
  
 A meno che non si disponga di un motivo specifico per utilizzare le versioni che specificano le dimensioni di tempo in modo esplicito, utilizzare `_findfirst` o `_wfindfirst` o, se è necessario supportare file di dimensioni maggiori di 3 GB, utilizzare `_findfirsti64` o `_wfindfirsti64`.  Tutte queste funzioni utilizzano il tipo di data e ora a 64 bit.  Nelle versioni precedenti, queste funzioni hanno utilizzato un tipo di tempo a 32 bit.  Se si tratta di una modifica sostanziale per un'applicazione, è possibile definire `_USE_32BIT_TIME_T` per ottenere il comportamento precedente.  Se `_USE_32BIT_TIME_T` è definito, `_findfirst`, `_finfirsti64` e le versioni corrispondenti Unicode utilizzano una rappresentazione di data e ora a 32 bit.  
  
### Le variazioni del tipo di data ed ora ed il tipo di lunghezza del file di \_findfirst  
  
|Funzioni|`_USE_32BIT_TIME_T` è definito?|Tipo time|Tipo di lunghezza del file|  
|--------------|-------------------------------------|---------------|--------------------------------|  
|`_findfirst`, `_wfindfirst`|Non definito|64 bit|32 bit|  
|`_findfirst`, `_wfindfirst`|definito|32 bit|32 bit|  
|`_findfirst32`, `_wfindfirst32`|Non dipende dalla definizione macro|32 bit|32 bit|  
|`_findfirst64`, `_wfindfirst64`|Non dipende dalla definizione macro|64 bit|64 bit|  
|`_findfirsti64`, `_wfindfirsti64`|Non definito|64 bit|64 bit|  
|`_findfirsti64`, `_wfindfirsti64`|definito|32 bit|64 bit|  
|`_findfirst32i64`, `_wfindfirst32i64`|Non dipende dalla definizione macro|32 bit|64 bit|  
|`_findfirst64i32`, `_wfindfirst64i32`|Non dipende dalla definizione macro|64 bit|32 bit|  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tfindfirst`|`_findfirst`|`_findfirst`|`_wfindfirst`|  
|`_tfindfirst32`|`_findfirst32`|`_findfirst32`|`_wfindfirst32`|  
|`_tfindfirst64`|`_findfirst64`|`_findfirst64`|`_wfindfirst64`|  
|`_tfindfirsti64`|`_findfirsti64`|`_findfirsti64`|`_wfindfirsti64`|  
|`_tfindfirst32i64`|`_findfirst32i64`|`_findfirst32i64`|`_wfindfirst32i64`|  
|`_tfindfirst64i32`|`_findfirst64i32`|`_findfirst64i32`|`_wfindfirst64i32`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_findfirst`|\<io.h\>|  
|`_findfirst32`|\<io.h\>|  
|`_findfirst64`|\<io.h\>|  
|`_findfirsti64`|\<io.h\>|  
|`_findfirst32i64`|\<io.h\>|  
|`_findfirst64i32`|\<io.h\>|  
|`_wfindfirst`|\<io.h\> o \<wchar.h\>|  
|`_wfindfirst32`|\<io.h\> o \<wchar.h\>|  
|`_wfindfirst64`|\<io.h\> o \<wchar.h\>|  
|`_wfindfirsti64`|\<io.h\> o \<wchar.h\>|  
|`_wfindfirst32i64`|\<io.h\> o \<wchar.h\>|  
|`_wfindfirst64i32`|\<io.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 [System::IO::DirectoryInfo::GetFiles](https://msdn.microsoft.com/en-us/library/system.io.directoryinfo.getfiles.aspx)  
  
## Vedere anche  
 [Chiamate di sistema](../../c-runtime-library/system-calls.md)   
 [Funzioni di ricerca dei nomi file](../../c-runtime-library/filename-search-functions.md)