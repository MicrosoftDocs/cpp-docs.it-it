---
title: "_stat, _stat32, _stat64, _stati64, _stat32i64, _stat64i32, _wstat, _wstat32, _wstat64, _wstati64, _wstat32i64, _wstat64i32 | Microsoft Docs"
ms.custom: ""
ms.date: "12/09/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wstat64"
  - "_stati64"
  - "_stat32"
  - "_stat32i64"
  - "_stat"
  - "_wstati64"
  - "_wstat32"
  - "_wstat64i32"
  - "_wstat"
  - "_stat64"
  - "_stat64i32"
  - "_wstat32i64"
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
  - "tstat32"
  - "tstat"
  - "_tstat64i32"
  - "tstati64"
  - "_wstat64"
  - "_wstat32"
  - "wstati64"
  - "tstat64"
  - "_stati64"
  - "_wstat"
  - "wstat64i32"
  - "stat32i64"
  - "tstat32i64"
  - "_tstat"
  - "_wstati64"
  - "_tstati64"
  - "_wstat32i64"
  - "wstat32"
  - "_wstat64i32"
  - "_stat"
  - "_tstat32"
  - "stat64i32"
  - "wstat64"
  - "stat"
  - "_stat32i64"
  - "_stat32"
  - "stati64"
  - "wstat"
  - "_stat64i32"
  - "stat32"
  - "_tstat32i64"
  - "tstat64i32"
  - "_tstat64"
  - "_stat64"
  - "stat/_stat"
  - "stat/_stat32"
  - "stat/_stat64"
  - "stat/_stati64"
  - "stat/_stat32i64"
  - "stat/_stat64i32"
  - "stat/_wstat"
  - "stat/_wstat32"
  - "stat/_wstat64"
  - "stat/_wstati64"
  - "stat/_wstat32i64"
  - "stat/_wstat64i32"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "file [C++], informazioni sullo stato"
  - "_stat (funzione)"
  - "_wstat (funzione)"
  - "_stat64i32 (funzione)"
  - "tstat (funzione)"
  - "_tstat64i32 (funzione)"
  - "_stati64 (funzione)"
  - "_stat64 (funzione)"
  - "tstati64 (funzione)"
  - "wstati64 (funzione)"
  - "wstat64 (funzione)"
  - "_wstat64i32 (funzione)"
  - "_tstat32i64 (funzione)"
  - "_stat32i64 (funzione)"
  - "stat (funzione)"
  - "stato dei file"
  - "_tstat32 (funzione)"
  - "tstat64 (funzione)"
  - "_wstat64 (funzione)"
  - "_tstat (funzione)"
  - "_stat32 (funzione)"
  - "wstat (funzione)"
  - "_wstat32i64 (funzione)"
  - "_tstati64 (funzione)"
  - "_wstat32 (funzione)"
  - "stat64 (funzione)"
  - "stati64 (funzione)"
  - "_wstati64 (funzione)"
  - "_tstat64 (funzione)"
  - "file [C++], recupero delle informazioni sullo stato"
ms.assetid: 99a75ae6-ff26-47ad-af70-5ea7e17226a5
caps.latest.revision: 26
caps.handback.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _stat, _stat32, _stat64, _stati64, _stat32i64, _stat64i32, _wstat, _wstat32, _wstat64, _wstati64, _wstat32i64, _wstat64i32
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottenere informazioni sullo stato di un file.  
  
## Sintassi  
  
```  
int _stat(  
   const char *path,  
   struct _stat *buffer   
);  
int _stat32(  
   const char *path,  
   struct __stat32 *buffer   
);  
int _stat64(  
   const char *path,  
   struct __stat64 *buffer   
);  
int _stati64(  
   const char *path,  
   struct _stati64 *buffer   
);  
int _stat32i64(  
   const char *path,  
   struct _stat32i64 *buffer   
);  
int _stat64i32(  
   const char *path,  
   struct _stat64i32 *buffer   
);  
int _wstat(  
   const wchar_t *path,  
   struct _stat *buffer   
);  
int _wstat32(  
   const wchar_t *path,  
   struct __stat32 *buffer   
);  
int _wstat64(  
   const wchar_t *path,  
   struct __stat64 *buffer   
);  
int _wstati64(  
   const wchar_t *path,  
   struct _stati64 *buffer   
);  
int _wstat32i64(  
   const wchar_t *path,  
   struct _stat32i64 *buffer   
);  
int _wstat64i32(  
   const wchar_t *path,  
   struct _stat64i32 *buffer   
);  
```  
  
#### Parametri  
 `path`  
 Puntatore a una stringa contenente il percorso del file o directory esistente.  
  
 `buffer`  
 Puntatore alla struttura che archivia i risultati.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce 0 se si ottengono le informazioni sullo stato dei file. Un valore restituito pari a – 1 indica un errore, nel qual caso `errno` è impostato su `ENOENT`, che indica che il nome file o percorso non è stato trovato. Un valore restituito pari a `EINVAL` indica un parametro non valido; anche `errno` è impostato su `EINVAL` in questo caso.  
  
 Per altre informazioni su questo e su altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 L'indicatore di data in un file può essere rappresentato se più recente rispetto a mezzanotte dell'1 gennaio 1970 e prima di 23:59:59, 31 dicembre 3000 UTC, a meno che non si utilizza `_stat32` o `_wstat32`, o non è definita `_USE_32BIT_TIME_T`, nel qual caso la data può essere rappresentata solo fino a 23:59:59 18 gennaio 2038 UTC.  
  
## Note  
 La funzione `_stat` ottiene informazioni sul file o sulla directory specificati da `path` e le archivia nella struttura a cui punta `buffer`.`_stat` gestisce automaticamente gli argomenti stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso.  
  
 `_wstat` è una versione a caratteri wide di `_stat`; l'argomento `path` in `_wstat` è una stringa di caratteri wide.`_wstat` e `_stat` si comportano in modo identico, ma `_wstat` non gestisce le stringhe di caratteri multibyte.  
  
 Le variazioni di queste funzioni supportano tipi time a 32 o 64 bit e lunghezze di file a 32 o a 64 bit. Il primo suffisso numerico \(`32` o `64`\) indica le dimensioni del tipo time usato; il secondo suffisso è `i32` o `i64`, che indica se le dimensioni del file sono rappresentate come intero a 32 bit o 64 bit.  
  
 `_stat` equivale a `_stat64i32`, e `struct``_stat` contiene l'ora a 64 bit. Ciò è vero, a meno che `_USE_32BIT_TIME_T` è definito, nel qual caso è attivo, il comportamento precedente `_stat` utilizza un tempo a 32 bit, e `struct``_stat` contiene l'ora a 32 bit. Lo stesso vale per `_stati64`.  
  
> [!NOTE]
>  `_wstat` non funziona con i collegamenti simbolici di [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. In questi casi, `_wstat` visualizzerà sempre un file di dimensioni pari a 0.`_stat` funziona correttamente con i collegamenti simbolici.  
  
 Questa funzione convalida i relativi parametri. Se `path` o `buffer` è `NULL`, verrà richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
### Variazioni tipo time e tipo lunghezza file di \_stat  
  
|Funzioni|\_USE\_32BIT\_TIME\_T definito?|Tipo time|Tipo lunghezza file|  
|--------------|-------------------------------------|---------------|-------------------------|  
|`_stat`, `_wstat`|Non definito|64 bit|32 bit|  
|`_stat`, `_wstat`|Definito|32 bit|32 bit|  
|`_stat32`, `_wstat32`|Non interessato dalla definizione macro|32 bit|32 bit|  
|`_stat64`, `_wstat64`|Non interessato dalla definizione macro|64 bit|64 bit|  
|`_stati64`, `_wstati64`|Non definito|64 bit|64 bit|  
|`_stati64`, `_wstati64`|Definito|32 bit|64 bit|  
|`_stat32i64`, `_wstat32i64`|Non interessato dalla definizione macro|32 bit|64 bit|  
|`_stat64i32`, `_wstat64i32`|Non interessato dalla definizione macro|64 bit|32 bit|  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tstat`|`_stat`|`_stat`|`_wstat`|  
|`_tstat64`|`_stat64`|`_stat64`|`_wstat64`|  
|`_tstati64`|`_stati64`|`_stati64`|`_wstati64`|  
|`_tstat32i64`|`_stat32i64`|`_stat32i64`|`_wstat32i64`|  
|`_tstat64i32`|`_stat64i32`|`_stat64i32`|`_wstat64i32`|  
  
 La struttura `_stat`, definita in SYS\\STAT.H, include i campi seguenti.  
  
 `st_gid`  
 Identificatore numerico del gruppo cui appartiene il file \(specifico di UNIX\). Questo campo sarà sempre zero nei sistemi Windows. Un file reindirizzato viene classificato come file di Windows.  
  
 `st_atime`  
 Ora dell'ultimo accesso del file. Valido su NTFS, ma non nelle unità disco formattate come FAT.  
  
 `st_ctime`  
 Ora di creazione del file. Valido su NTFS, ma non nelle unità disco formattate come FAT.  
  
 `st_dev`  
 Numero unità del disco contenente il file \(uguale a `st_rdev`\).  
  
 `st_ino`  
 Numero del nodo informazioni \(il `inode`\) per il file \(specifico di UNIX\). Nei file system UNIX, il `inode` descrive la data del file e i timbri data, le autorizzazioni e il contenuto. Quando il collegamento tra i file è reale, essi condividono lo stesso `inode`. Il `inode`, e quindi `st_ino`, non ha alcun significato nei file system FAT, HPFS o NTFS.  
  
 `st_mode`  
 Maschera di bit per informazioni sulla modalità di file. Viene impostato il bit `_S_IFDIR` se `path` specifica una directory; viene impostato il bit `_S_IFREG` se `path` specifica un file o un dispositivo normale. I bit di lettura\/scrittura dell'utente sono impostati in base alla modalità di autorizzazione del file; i bit di esecuzione utente sono impostati secondo l'estensione.  
  
 `st_mtime`  
 Ora dell'ultima modifica del file.  
  
 `st_nlink`  
 Sempre 1 nel file system non NTFS.  
  
 `st_rdev`  
 Numero unità del disco contenente il file \(uguale a `st_dev`\).  
  
 `st_size`  
 Dimensioni del file in byte; un intero a 64 bit per le varianti con il suffisso **`i64`**.  
  
 `st_uid`  
 Identificatore numerico dell'utente proprietario del file \(specifico di UNIX\). Questo campo sarà sempre zero nei sistemi Windows. Un file reindirizzato viene classificato come file di Windows.  
  
 Se `path` fa riferimento a un dispositivo, i campi `st_size`, i vari campi ora, `st_dev` e `st_rdev` nella struttura `_stat` non hanno alcun significato. Dal momento che STAT. H usa il tipo [dev\_t](../../c-runtime-library/standard-types.md) definito in TYPES.H, è necessario includere TYPES.H prima di STAT.H nel codice.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`_stat`, `_stat32`, `_stat64`, `_stati64`, `_stat32i64`, `_stat64i32`|\<sys\/types.h\> seguito da \<sys\/stat.h\>|\<errno.h\>|  
|`_wstat`, `_wstat32`, `_wstat64`, `_wstati64`, `_wstat32i64`, `_wstat64i32`|\<sys\/types.h\> seguito da \<sys\/stat.h\> o \<wchar.h\>|\<errno.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_stat.c  
// This program uses the _stat function to  
// report information about the file named crt_stat.c.  
  
#include <time.h>  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
   struct _stat buf;  
   int result;  
   char timebuf[26];  
   char* filename = "crt_stat.c";  
   errno_t err;  
  
   // Get data associated with "crt_stat.c":   
   result = _stat( filename, &buf );  
  
   // Check if statistics are valid:   
   if( result != 0 )  
   {  
      perror( "Problem getting information" );  
      switch (errno)  
      {  
         case ENOENT:  
           printf("File %s not found.\n", filename);  
           break;  
         case EINVAL:  
           printf("Invalid parameter to _stat.\n");  
           break;  
         default:  
           /* Should never be reached. */  
           printf("Unexpected error in _stat.\n");  
      }  
   }  
   else  
   {  
      // Output some of the statistics:   
      printf( "File size     : %ld\n", buf.st_size );  
      printf( "Drive         : %c:\n", buf.st_dev + 'A' );  
      err = ctime_s(timebuf, 26, &buf.st_mtime);  
      if (err)  
      {  
         printf("Invalid arguments to ctime_s.");  
         exit(1);  
      }  
      printf( "Time modified : %s", timebuf );  
   }  
}  
```  
  
```Output  
File size     : 732 Drive         : C: Time modified : Thu Feb 07 14:39:36 2002  
```  
  
## Equivalente .NET Framework  
  
-   [System::IO::File::GetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.getattributes.aspx)  
  
-   [System::IO::File::GetCreationTime](https://msdn.microsoft.com/en-us/library/system.io.file.getcreationtime.aspx)  
  
-   [System::IO::File::GetLastAccessTime](https://msdn.microsoft.com/en-us/library/system.io.file.getlastaccesstime.aspx)  
  
-   [System::IO::File::GetLastWriteTime](https://msdn.microsoft.com/en-us/library/system.io.file.getlastwritetime.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_access, \_waccess](../../c-runtime-library/reference/access-waccess.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)