---
title: _makepath, _wmakepath | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _makepath
- _wmakepath
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
- _wmakepath
- _tmakepath
- makepath
- tmakepath
- wmakepath
- _makepath
dev_langs: C++
helpviewer_keywords:
- _makepath function
- wmakepath function
- makepath function
- _tmakepath function
- paths
- _wmakepath function
- tmakepath function
ms.assetid: 5930b197-a7b8-46eb-8519-2841a58cd026
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b811d4c851ae3c4949378512f5117d0809e8f1e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="makepath-wmakepath"></a>_makepath, _wmakepath
Crea un nome di percorso da componenti. Sono disponibili versioni più sicure di queste funzioni. Vedere [_makepath_s, _wmakepath_s](../../c-runtime-library/reference/makepath-s-wmakepath-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _makepath(  
   char *path,  
   const char *drive,  
   const char *dir,  
   const char *fname,  
   const char *ext   
);  
void _wmakepath(  
   wchar_t *path,  
   const wchar_t *drive,  
   const wchar_t *dir,  
   const wchar_t *fname,  
   const wchar_t *ext   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `path`  
 Buffer del percorso completo.  
  
 `drive`  
 Contiene una lettera (A, B e così via) corrispondente all'unità desiderata e i due punti finali opzionali. `_makepath` inserisce i due punti automaticamente nel percorso composto se mancanti. Se `drive` è `NULL` o punta a una stringa vuota, nessuna lettera di unità viene visualizzata nella stringa `path` composita.  
  
 `dir`  
 Contiene il percorso delle directory, escluso il designatore di unità o il nome del file effettivo. La barra finale è facoltativa e una barra (/) o una barra rovesciata (\\) o entrambe possono essere usate in un singolo argomento `dir`. Se non viene specificata una barra finale (/o \\), viene inserita automaticamente. Se `dir` è `NULL` o punta a una stringa vuota, nessun percorso di directory viene inserito nella stringa `path` composita.  
  
 `fname`  
 Contiene il nome del file di base senza alcuna estensione di nome file. Se `fname` è `NULL` o punta a una stringa vuota, nessun nome file viene inserito nella stringa `path` composita.  
  
 `ext`  
 Contiene l'estensione di nome file effettiva, con o senza un punto iniziale (.). `_makepath` inserisce il punto automaticamente se non viene visualizzato in `ext`. Se `ext` è `NULL` o punta a una stringa vuota, nessuna estensione viene inserita nella stringa `path` composita.  
  
## <a name="remarks"></a>Note  
 La funzione `_makepath` crea una stringa di percorso composita da singoli componenti, archiviando il risultato in `path`. `path` potrebbe includere una lettera di unità, un percorso di directory, un nome di file e un'estensione del nome di file. `_wmakepath` è una versione a caratteri "wide" di `_makepath`. Gli argomenti per `_wmakepath` sono stringhe a caratteri "wide". In caso contrario, `_wmakepath` e `_makepath` si comportano in modo identico.  
  
 **Nota sulla sicurezza** Usare una stringa con terminazione Null. Per evitare un sovraccarico del buffer, le dimensioni della stringa con terminazione Null non devono essere superiori a quelle del buffer di `path`. `_makepath` non assicura che la lunghezza del percorso composto non sia maggiore di `_MAX_PATH`. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tmakepath`|`_makepath`|`_makepath`|`_wmakepath`|  
  
 L'argomento `path` deve puntare a un buffer vuoto sufficientemente grande da contenere il percorso completo. Il `path` composito non deve essere maggiore della costante `_MAX_PATH`, definita in Stdlib.h.  
  
 Se il percorso è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Inoltre, `errno` è impostato su `EINVAL`. I valori `NULL` sono consentiti per tutti gli altri parametri.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_makepath`|\<stdlib.h>|  
|`_wmakepath`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_makepath.c  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char path_buffer[_MAX_PATH];  
   char drive[_MAX_DRIVE];  
   char dir[_MAX_DIR];  
   char fname[_MAX_FNAME];  
   char ext[_MAX_EXT];  
  
   _makepath( path_buffer, "c", "\\sample\\crt\\", "makepath", "c" ); // C4996  
   // Note: _makepath is deprecated; consider using _makepath_s instead  
   printf( "Path created with _makepath: %s\n\n", path_buffer );  
   _splitpath( path_buffer, drive, dir, fname, ext ); // C4996  
   // Note: _splitpath is deprecated; consider using _splitpath_s instead  
   printf( "Path extracted with _splitpath:\n" );  
   printf( "  Drive: %s\n", drive );  
   printf( "  Dir: %s\n", dir );  
   printf( "  Filename: %s\n", fname );  
   printf( "  Ext: %s\n", ext );  
}  
```  
  
```Output  
Path created with _makepath: c:\sample\crt\makepath.c  
  
Path extracted with _splitpath:  
  Drive: c:  
  Dir: \sample\crt\  
  Filename: makepath  
  Ext: .c  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_fullpath, _wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [_splitpath, _wsplitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)   
 [_makepath_s, _wmakepath_s](../../c-runtime-library/reference/makepath-s-wmakepath-s.md)