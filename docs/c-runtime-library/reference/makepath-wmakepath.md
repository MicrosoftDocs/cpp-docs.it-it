---
title: "_makepath, _wmakepath | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_makepath"
  - "_wmakepath"
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
  - "_wmakepath"
  - "_tmakepath"
  - "makepath"
  - "tmakepath"
  - "wmakepath"
  - "_makepath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_makepath (funzione)"
  - "_tmakepath (funzione)"
  - "_wmakepath (funzione)"
  - "makepath (funzione)"
  - "percorsi"
  - "tmakepath (funzione)"
  - "wmakepath (funzione)"
ms.assetid: 5930b197-a7b8-46eb-8519-2841a58cd026
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# _makepath, _wmakepath
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Creare un nome di percorso da componenti.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_makepath\_s, \_wmakepath\_s](../../c-runtime-library/reference/makepath-s-wmakepath-s.md).  
  
## Sintassi  
  
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
  
#### Parametri  
 `path`  
 Buffer del percorso completo.  
  
 `drive`  
 Contiene una lettera \(A, B e così via\) corrispondente all'unità desiderata ed i due punti finali opzionali.  `_makepath` inserisce i due punti automaticamente nel percorso composto se mancante.  Se `drive` è `NULL` o punta ad una stringa vuota, nessuna lettera di unità viene visualizzata nella stringa composta di `path`.  
  
 `dir`  
 Contiene il percorso delle directory, escluso il designatore di unità o del nome del file effettivo.  La barra finale è facoltativa e sia una barra \(\/\) o una barra rovesciata \(\\\) o entrambe possono essere utilizzate in un unico argomento `dir`.  Se nessuna barra finale \(\/o \\\) viene specificata, viene inserita automaticamente.  Se `dir` è `NULL` o punta a una stringa vuota, nessun percorso di directory viene inserito nella stringa composta di `path`.  
  
 `fname`  
 Contiene il nome del file di base senza alcuna estensione di file.  Se `fname` è `NULL` o punta a una stringa vuota, nessun nome file viene inserito nella stringa composta di `path`.  
  
 `ext`  
 Contiene in l'estensione attuale del file, con o senza un punto iniziale \(.\).  `_makepath` inserisce il periodo automaticamente se non viene visualizzato in `ext`.  Se `ext` è `NULL` o punta a una stringa vuota, nessuna estensione viene inserita nella stringa composta di `path`.  
  
## Note  
 La funzione `_makepath` crea una stringa di percorso composta da singoli componenti, archivia il risultato in `path`.  `path` potrebbe includere una lettera di unità, un percorso di directory, un nome di file ed un'estensione del nome file.  `_wmakepath` è una versione a caratteri "wide" di `_makepath`. Gli argomenti per `_wmakepath` sono stringhe a caratteri "wide".  `_wmakepath` e `_makepath` si comportano in modo identico in caso contrario.  
  
 **Nota sulla sicurezza** Utilizza una stringa con terminazione null.  Per evitare il sovraccarico del buffer, la stringa di terminazione null non deve superare la dimensione del buffer di `path`.  `_makepath` non garantisce che la lunghezza della stringa di percorso composta non superi `_MAX_PATH`.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tmakepath`|`_makepath`|`_makepath`|`_wmakepath`|  
  
 L'argomento `path` deve puntare ad un buffer vuoto abbastanza grande da contenere il percorso completo.  Il `path` composto non deve essere maggiore della costante `_MAX_PATH`, definita in Stdlib.h.  
  
 Se path è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Inoltre, `errno` è impostato su `EINVAL`.  I valori `NULL` sono consentiti per tutti gli altri parametri.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_makepath`|\<stdlib.h\>|  
|`_wmakepath`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
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
  
  **Path created with \_makepath: c:\\sample\\crt\\makepath.c**  
**Path extracted with \_splitpath:**  
 **Drive: c:**  
 **Dir: \\sample\\crt\\**  
 **Filename: makepath**  
 **Ext: .c**   
## Equivalente .NET Framework  
 [System::IO::File::Create](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_fullpath, \_wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [\_splitpath, \_wsplitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)   
 [\_makepath\_s, \_wmakepath\_s](../../c-runtime-library/reference/makepath-s-wmakepath-s.md)