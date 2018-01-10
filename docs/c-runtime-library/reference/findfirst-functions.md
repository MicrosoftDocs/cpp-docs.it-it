---
title: _findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _findfirst
- _wfindfirst
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- findfirst32i64
- wfindfirst32i64
- tfindfirst64
- _findfirst64i32
- _wfindfirst32i64
- _wfindfirsti64
- wfindfirst
- _tfindfirsti64
- findfirst32
- _tfindfirst32
- _findfirsti64
- findfirst
- wfindfirst64
- wfindfirst32
- tfindfirst32
- _wfindfirst64i32
- findfirst64i32
- tfindfirst64i32
- _wfindfirst
- findfirsti64
- _findfirst32i64
- wfindfirst64i32
- _wfindfirst32
- _findfirst32
- _tfindfirst32i64
- tfindfirst
- _tfindfirst64i32
- findfirst64
- _tfindfirst
- _findfirst64
- _tfindfirst64
- tfindfirst32i64
- _findfirst
- _wfindfirst64
dev_langs: C++
helpviewer_keywords:
- _tfindfirst64 function
- _wfindfirst64i32 function
- _wfindfirst32i64 function
- wfindfirst32 function
- _findfirst function
- wfindfirst64 function
- _wfindfirst function
- _findfirst64i32 function
- wfindfirst function
- _findfirst64 function
- tfindfirst32 function
- _tfindfirst64i32 function
- findfirst function
- findfirst32i64 function
- tfindfirst64 function
- _tfindfirst32 function
- tfindfirst32i64 function
- tfindfirst64i32 function
- _wfindfirsti64 function
- _findfirst32i64 function
- findfirst32 function
- findfirsti64 function
- findfirst64i32 function
- tfindfirsti64 function
- tfindfirst function
- _wfindfirst32 function
- wfindfirsti64 function
- _tfindfirsti64 function
- _tfindfirst function
- _tfindfirst32i64 function
- findfirst64 function
- _findfirst32 function
- _findfirsti64 function
- wfindfirst32i64 function
- wfindfirst64i32 function
- _wfindfirst64 function
ms.assetid: 9bb46d1a-b946-47de-845a-a0b109a33ead
caps.latest.revision: "25"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9f95b4097f2e0ddd399df9b65ed178c1423edaaa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="findfirst-findfirst32-findfirst32i64-findfirst64-findfirst64i32-findfirsti64-wfindfirst-wfindfirst32-wfindfirst32i64-wfindfirst64-wfindfirst64i32-wfindfirsti64"></a>_findfirst, _findfirst32, _findfirst32i64, _findfirst64, _findfirst64i32, _findfirsti64, _wfindfirst, _wfindfirst32, _wfindfirst32i64, _wfindfirst64, _wfindfirst64i32, _wfindfirsti64
Informazioni sulla prima istanza di un nome file che corrisponde al file specificato nell'argomento `filespec`.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `filespec`  
 Specifica del file di destinazione. Può includere caratteri jolly.  
  
 `fileinfo`  
 Buffer delle informazioni del file.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, `_findfirst` restituisce un handle di ricerca univoco che identifica il file o il gruppo di file che corrispondono alla specifica `filespec`. L'handle può essere usato in una chiamata successiva a [_findnext](../../c-runtime-library/reference/findnext-functions.md) o a `_findclose`. In caso contrario, `_findfirst` restituisce -1 e imposta `errno` a uno dei valori seguenti.  
  
 `EINVAL`  
 Parametro non valido: `filespec` o `fileinfo` era `NULL` oppure il sistema operativo ha restituito un errore imprevisto.  
  
 `ENOENT`  
 Specifica del file per la quale non sono state trovate corrispondenze.  
  
 `ENOMEM`  
 Memoria insufficiente.  
  
 `EINVAL`  
 Specifica del nome file non valida o nome file specificato maggiore di `MAX_PATH`.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Se viene passato un parametro non valido, queste funzioni chiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).  
  
## <a name="remarks"></a>Note  
 È necessario chiamare [_findclose](../../c-runtime-library/reference/findclose.md) dopo aver completato l'esecuzione della funzione `_findfirst` o `_findnext` (o di eventuali varianti). Ciò consente di liberare le risorse usate da queste funzioni nell'applicazione.  
  
 Le varianti di queste funzioni con il prefisso `w` sono versioni a caratteri wide. Senza questo prefisso sono identiche alle funzioni corrispondenti a un byte.  
  
 Le varianti di queste funzioni supportano tipi time a 32 o 64 bit e dimensioni di file a 32 o a 64 bit. Il primo suffisso numerico (`32` o `64`) indica le dimensioni del tipo time usato. Il secondo suffisso, che può essere `i32` o `i64`, indica se le dimensioni del file sono rappresentate come intero a 32 bit o 64 bit. Per informazioni su quali versioni supportano tipi time e dimensioni dei file a 32 bit e 64 bit, vedere la tabella seguente. Il suffisso `i32` o `i64` viene omesso se coincide con la dimensione del tipo time. Pertanto `_findfirst64` supporta anche le lunghezze di file a 64 bit e `_findfirst32` supporta solo lunghezze di file a 32 bit.  
  
 Queste funzioni usano diverse forme della struttura `_finddata_t` per il parametro `fileinfo`. Per altre informazioni sulla struttura, vedere [Filename Search Functions](../../c-runtime-library/filename-search-functions.md) (Funzioni di ricerca dei nomi file).  
  
 Le varianti che usano un tipo time a 64 bit consentono di esprimere le date di creazione di file fino alle 23.59.59 del 31 dicembre 3000 UTC. Quelle che usano tipi time a 32 bit possono rappresentare date solo fino alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per tutte queste funzioni.  
  
 A meno che non ci sia un motivo preciso per usare le versioni che specificano la dimensione time in modo esplicito, usare `_findfirst` o `_wfindfirst` oppure, se è necessario supportare dimensioni superiori a 3 GB, usare `_findfirsti64` o `_wfindfirsti64`. Tutte queste funzioni usano il tipo time a 64 bit. Nelle versioni precedenti queste funzioni usavano un tipo time a 32 bit. Se si tratta di una modifica con conseguenze pesanti per l'applicazione, è possibile definire `_USE_32BIT_TIME_T` per ripristinare il comportamento precedente. Se è definito `_USE_32BIT_TIME_T`, `_findfirst`, `_finfirsti64` e le corrispondenti versioni Unicode usano un tipo time a 32 bit.  
  
### <a name="time-type-and-file-length-type-variations-of-findfirst"></a>Varianti di _findfirst per il tipo time e di lunghezza dei file  
  
|Funzioni|`_USE_32BIT_TIME_T` definito?|Tipo time|Tipo lunghezza file|  
|---------------|----------------------------------|---------------|----------------------|  
|`_findfirst`, `_wfindfirst`|Non definito|64 bit|32 bit|  
|`_findfirst`, `_wfindfirst`|Definito|32 bit|32 bit|  
|`_findfirst32`, `_wfindfirst32`|Non interessato dalla definizione macro|32 bit|32 bit|  
|`_findfirst64`, `_wfindfirst64`|Non interessato dalla definizione macro|64 bit|64 bit|  
|`_findfirsti64`, `_wfindfirsti64`|Non definito|64 bit|64 bit|  
|`_findfirsti64`, `_wfindfirsti64`|Definito|32 bit|64 bit|  
|`_findfirst32i64`, `_wfindfirst32i64`|Non interessato dalla definizione macro|32 bit|64 bit|  
|`_findfirst64i32`, `_wfindfirst64i32`|Non interessato dalla definizione macro|64 bit|32 bit|  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tfindfirst`|`_findfirst`|`_findfirst`|`_wfindfirst`|  
|`_tfindfirst32`|`_findfirst32`|`_findfirst32`|`_wfindfirst32`|  
|`_tfindfirst64`|`_findfirst64`|`_findfirst64`|`_wfindfirst64`|  
|`_tfindfirsti64`|`_findfirsti64`|`_findfirsti64`|`_wfindfirsti64`|  
|`_tfindfirst32i64`|`_findfirst32i64`|`_findfirst32i64`|`_wfindfirst32i64`|  
|`_tfindfirst64i32`|`_findfirst64i32`|`_findfirst64i32`|`_wfindfirst64i32`|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_findfirst`|\<io.h>|  
|`_findfirst32`|\<io.h>|  
|`_findfirst64`|\<io.h>|  
|`_findfirsti64`|\<io.h>|  
|`_findfirst32i64`|\<io.h>|  
|`_findfirst64i32`|\<io.h>|  
|`_wfindfirst`|\<io.h> o \<wchar.h>|  
|`_wfindfirst32`|\<io.h> o \<wchar.h>|  
|`_wfindfirst64`|\<io.h> o \<wchar.h>|  
|`_wfindfirsti64`|\<io.h> o \<wchar.h>|  
|`_wfindfirst32i64`|\<io.h> o \<wchar.h>|  
|`_wfindfirst64i32`|\<io.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [System Calls](../../c-runtime-library/system-calls.md)  (Chiamate di sistema)  
 [Filename Search Functions](../../c-runtime-library/filename-search-functions.md) (Funzioni di ricerca dei nomi file)