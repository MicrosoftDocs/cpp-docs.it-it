---
title: "_makepath_s, _wmakepath_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wmakepath_s"
  - "_makepath_s"
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
  - "_wmakepath_s"
  - "makepath_s"
  - "_makepath_s"
  - "wmakepath_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_makepath_s (funzione)"
  - "wmakepath_s (funzione)"
  - "percorsi"
  - "_wmakepath_s (funzione)"
  - "makepath_s (funzione)"
ms.assetid: 4405e43c-3d63-4697-bb80-9b8dcd21d027
caps.latest.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 29
---
# _makepath_s, _wmakepath_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un nome di percorso da componenti.  Queste sono versioni di [\_makepath, \_wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
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
  
#### Parametri  
 \[out\] `path`  
 Buffer del percorso completo.  
  
 \[in\] `sizeInWords`  
 Dimensione del buffer in parole.  
  
 \[in\] `sizeInBytes`  
 Dimensione, in byte, del buffer.  
  
 \[in\] `drive`  
 Contiene una lettera \(A, B e così via\) corrispondente all'unità desiderata ed i due punti finali opzionali.  `_makepath_s` inserisce i due punti automaticamente nel percorso composto se mancante.  Se `drive` è `NULL` o punta ad una stringa vuota, nessuna lettera di unità viene visualizzata nella stringa composta di `path`.  
  
 \[in\] `dir`  
 Contiene il percorso delle directory, escluso il designatore di unità o del nome del file effettivo.  La barra finale è facoltativa e sia una barra \(\/\) o una barra rovesciata \(\\\) o entrambe possono essere utilizzate in un unico argomento `dir`.  Se nessuna barra finale \(\/o \\\) viene specificata, viene inserita automaticamente.  Se `dir` è `NULL` o punta a una stringa vuota, nessun percorso di directory viene inserito nella stringa composta di `path`.  
  
 \[in\] `fname`  
 Contiene il nome del file di base senza alcuna estensione di file.  Se `fname` è `NULL` o punta a una stringa vuota, nessun nome file viene inserito nella stringa composta di `path`.  
  
 \[in\] `ext`  
 Contiene in l'estensione attuale del file, con o senza un punto iniziale \(.\).  `_makepath_s` inserisce il periodo automaticamente se non viene visualizzato in `ext`.  Se `ext` è `NULL` o punta a una stringa vuota, nessuna estensione viene inserita nella stringa composta di `path`.  
  
## Valore restituito  
 Zero se ha esito positivo; un codice di errore in caso di errore.  
  
### Condizioni di errore  
  
|`path`|`sizeInWords` \/ `sizeInBytes`|Restituzione|Contenuto di `path`.|  
|------------|------------------------------------|------------------|--------------------------|  
|`NULL`|any|`EINVAL`|non modificato|  
|any|\<\= 0|`EINVAL`|non modificato|  
  
 Se una delle condizioni di errore sopra si verifica, queste funzioni richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può proseguire, `errno` è impostato su `EINVAL` e la funzione restituisce `EINVAL` **.** `NULL` è consentito per i parametri `drive`, `fname` e `ext`.  Per informazioni sul comportamento quando questi parametri sono puntatori null o stringhe vuote, vedere la sezione relativa alle Osservazioni.  
  
## Note  
 La funzione `_makepath_s` crea una stringa di percorso composta da singoli componenti, archivia il risultato in `path`.  `path` potrebbe includere una lettera di unità, un percorso di directory, un nome di file ed un'estensione del nome file.  `_wmakepath_s` è una versione a caratteri "wide" di `_makepath_s`. Gli argomenti per `_wmakepath_s` sono stringhe a caratteri "wide".  `_wmakepath_s` e `_makepath_s` si comportano in modo identico in caso contrario.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tmakepath_s`|`_makepath_s`|`_makepath_s`|`_wmakepath_s`|  
  
 L'argomento `path` deve puntare ad un buffer vuoto abbastanza grande da contenere il percorso completo.  Il `path` composto non deve essere maggiore della costante `_MAX_PATH`, definita in Stdlib.h.  
  
 Se path è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Inoltre, `errno` è impostato su `EINVAL`.  I valori `NULL` sono consentiti per tutti gli altri parametri.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug di queste funzioni per prima cosa riempiono il buffer con il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_makepath_s`|\<stdlib.h\>|  
|`_wmakepath_s`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
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
  
## Output  
  
```  
Path created with _makepath_s: c:\sample\crt\crt_makepath_s.c  
  
Path extracted with _splitpath_s:  
  Drive: c:  
  Dir: \sample\crt\  
  Filename: crt_makepath_s  
  Ext: .c  
```  
  
## Equivalente .NET Framework  
 [System::IO::File::Create](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_fullpath, \_wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [\_splitpath\_s, \_wsplitpath\_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)   
 [\_makepath, \_wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)