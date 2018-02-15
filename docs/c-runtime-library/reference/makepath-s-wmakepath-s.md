---
title: _makepath_s, _wmakepath_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _wmakepath_s
- _makepath_s
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
- _wmakepath_s
- makepath_s
- _makepath_s
- wmakepath_s
dev_langs:
- C++
helpviewer_keywords:
- _makepath_s function
- wmakepath_s function
- paths
- _wmakepath_s function
- makepath_s function
ms.assetid: 4405e43c-3d63-4697-bb80-9b8dcd21d027
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bef7cdbd58ba21396c78a1945e272e0a0e1baa4d
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="makepaths-wmakepaths"></a>_makepath_s, _wmakepath_s
Crea un nome di percorso da componenti. Queste sono versioni di [_makepath, _wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _makepath_s(  
   char *path,  
   size_t sizeInBytes,  
   const char *drive,  
   const char *dir,  
   const char *fname,  
   const char *ext   
);  
errno_t _wmakepath_s(  
   wchar_t *path,  
   size_t sizeInWords,  
   const wchar_t *drive,  
   const wchar_t *dir,  
   const wchar_t *fname,  
   const wchar_t *ext   
);  
template <size_t size>  
errno_t _makepath_s(  
   char (&path)[size],  
   const char *drive,  
   const char *dir,  
   const char *fname,  
   const char *ext   
); // C++ only  
template <size_t size>  
errno_t _wmakepath_s(  
   wchar_t (&path)[size],  
   const wchar_t *drive,  
   const wchar_t *dir,  
   const wchar_t *fname,  
   const wchar_t *ext   
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `path`  
 Buffer del percorso completo.  
  
 [in] `sizeInWords`  
 Dimensione del buffer in forma di testo.  
  
 [in] `sizeInBytes`  
 Dimensione del buffer in byte.  
  
 [in] `drive`  
 Contiene una lettera (A, B e così via) corrispondente all'unità desiderata e i due punti finali opzionali. `_makepath_s` inserisce i due punti automaticamente nel percorso composto se mancanti. Se `drive` è `NULL` o punta a una stringa vuota, nessuna lettera di unità viene visualizzata nella stringa `path` composita.  
  
 [in] `dir`  
 Contiene il percorso delle directory, escluso il designatore di unità o il nome del file effettivo. La barra finale è facoltativa e una barra (/) o una barra rovesciata (\\) o entrambe possono essere usate in un singolo argomento `dir`. Se non viene specificata una barra finale (/o \\), viene inserita automaticamente. Se `dir` è `NULL` o punta a una stringa vuota, nessun percorso di directory viene inserito nella stringa `path` composita.  
  
 [in] `fname`  
 Contiene il nome del file di base senza alcuna estensione di nome file. Se `fname` è `NULL` o punta a una stringa vuota, nessun nome file viene inserito nella stringa `path` composita.  
  
 [in] `ext`  
 Contiene l'estensione di nome file effettiva, con o senza un punto iniziale (.). `_makepath_s` inserisce il punto automaticamente se non viene visualizzato in `ext`. Se `ext` è `NULL` o punta a una stringa vuota, nessuna estensione viene inserita nella stringa `path` composita.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se con esito positivo; un codice di errore in caso di errore.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`path`|`sizeInWords` / `sizeInBytes`|INVIO|Contenuto di `path`|  
|------------|------------------------------------|------------|------------------------|  
|`NULL`|qualsiasi|`EINVAL`|non modificato|  
|qualsiasi|<= 0|`EINVAL`|non modificato|  
  
 Se si verifica una delle condizioni di errore sopra indicate, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e le funzioni restituiscono `EINVAL`. `NULL` è consentito per i parametri `drive`, `fname` e `ext`. Per informazioni sul comportamento di questi parametri quando sono puntatori null o stringhe vuote, vedere la sezione Osservazioni.  
  
## <a name="remarks"></a>Note  
 La funzione `_makepath_s` crea una stringa di percorso composita da singoli componenti, archiviando il risultato in `path`. `path` potrebbe includere una lettera di unità, un percorso di directory, un nome file e un'estensione del nome file. `_wmakepath_s` è una versione a caratteri "wide" di `_makepath_s`. Gli argomenti per `_wmakepath_s` sono stringhe a caratteri "wide". In caso contrario, `_wmakepath_s` e `_makepath_s` si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tmakepath_s`|`_makepath_s`|`_makepath_s`|`_wmakepath_s`|  
  
 L'argomento `path` deve puntare a un buffer vuoto sufficientemente grande da contenere il percorso completo. Il `path` composito non deve essere maggiore della costante `_MAX_PATH`, definita in Stdlib.h.  
  
 Se il percorso è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Inoltre, `errno` è impostato su `EINVAL`. I valori `NULL` sono consentiti per tutti gli altri parametri.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
 Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_makepath_s`|\<stdlib.h>|  
|`_wmakepath_s`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_makepath_s.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char path_buffer[_MAX_PATH];  
   char drive[_MAX_DRIVE];  
   char dir[_MAX_DIR];  
   char fname[_MAX_FNAME];  
   char ext[_MAX_EXT];  
   errno_t err;  
  
   err = _makepath_s( path_buffer, _MAX_PATH, "c", "\\sample\\crt\\",  
                      "crt_makepath_s", "c" );  
   if (err != 0)  
   {  
      printf("Error creating path. Error code %d.\n", err);  
      exit(1);  
   }  
   printf( "Path created with _makepath_s: %s\n\n", path_buffer );  
   err = _splitpath_s( path_buffer, drive, _MAX_DRIVE, dir, _MAX_DIR, fname,  
                       _MAX_FNAME, ext, _MAX_EXT );  
   if (err != 0)  
   {  
      printf("Error splitting the path. Error code %d.\n", err);  
      exit(1);  
   }  
   printf( "Path extracted with _splitpath_s:\n" );  
   printf( "  Drive: %s\n", drive );  
   printf( "  Dir: %s\n", dir );  
   printf( "  Filename: %s\n", fname );  
   printf( "  Ext: %s\n", ext );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
Path created with _makepath_s: c:\sample\crt\crt_makepath_s.c  
  
Path extracted with _splitpath_s:  
  Drive: c:  
  Dir: \sample\crt\  
  Filename: crt_makepath_s  
  Ext: .c  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_fullpath, _wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [_splitpath_s, _wsplitpath_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)   
 [_makepath, _wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)