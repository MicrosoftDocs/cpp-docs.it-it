---
title: "_chmod, _wchmod | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_chmod"
  - "_wchmod"
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
  - "_chmod"
  - "_wchmod"
  - "wchmod"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_chmod (funzione)"
  - "_wchmod (funzione)"
  - "chmod (funzione)"
  - "autorizzazioni di file [C++]"
  - "file [C++], modifica autorizzazioni"
  - "wchmod (funzione)"
ms.assetid: 92f7cb86-b3b0-4232-a599-b8c04a2f2c19
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# _chmod, _wchmod
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modificare le impostazioni dei permessi.  
  
## Sintassi  
  
```  
  
      int _chmod(   
   const char *filename,  
   int pmode   
);  
int _wchmod(   
   const wchar_t *filename,  
   int pmode   
);  
```  
  
#### Parametri  
 `filename`  
 Il nome del file esistente.  
  
 `pmode`  
 Impostazione di autorizzazione per il file.  
  
## Valore restituito  
 Queste funzioni restituiscono 0 se l'impostazione di autorizzazione viene modificata correttamente.  Un valore pari a \-1 indica un errore.  Se il file specificato non è stato trovato, `errno` è impostato su `ENOENT`; se un parametro non è valido, `errno` è impostato su `EINVAL`.  
  
## Note  
 Le modifiche alle funzioni di `_chmod` modificano l'impostazione di autorizzazione del file specificato da `filename`*.* L'impostazione di autorizzazione di lettura e scrittura al file.  L'espressione Integer `pmode` contiene una o entrambe le seguenti costanti del manifest, definite in SYS\\Stat.h.  
  
 `_S_IWRITE`  
 Scrittura consentita.  
  
 `_S_IREAD`  
 Lettura consentita.  
  
 `_S_IREAD | _S_IWRITE`  
 Lettura e scrittura consentite.  
  
 Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore `OR` `|` \).  Se non viene concessa l'autorizzazione in scrittura, il file è di sola lettura.  Si noti che i file sono sempre leggibili; non è possibile fornire l'autorizzazione di sola scrittura.  Di conseguenza, le modalità `_S_IWRITE` e `_S_IREAD | _S_IWRITE` sono equivalenti.  
  
 `_wchmod` è una versione a caratteri estesi di `_chmod`; l'argomento `filename` in `_wchmod` è una stringa di caratteri estesi.  `_wchmod` e `_chmod` si comportano in modo identico in caso contrario.  
  
 Questa funzione convalida i parametri.  Se `pmode` non è una combinazione di una delle costanti del manifest o non include un set alternativo di costanti, la funzione semplicemente li ignorerà.  Se `filename` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce \-1.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tchmod`|`_chmod`|`_chmod`|`_wchmod`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_chmod`|\<io.h\>|\<sys\/types.h\>, \<sys\/stat.h\>, \<errno.h\>|  
|`_wchmod`|\<io.h\> o \<wchar.h\>|\<sys\/types.h\>, \<sys\/stat.h\>, \<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_chmod.c  
// This program uses _chmod to  
// change the mode of a file to read-only.  
// It then attempts to modify the file.  
//  
  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <io.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
// Change the mode and report error or success   
void set_mode_and_report(char * filename, int mask)  
{  
   // Check for failure   
   if( _chmod( filename, mask ) == -1 )  
   {  
      // Determine cause of failure and report.   
      switch (errno)  
      {  
         case EINVAL:  
            fprintf( stderr, "Invalid parameter to chmod.\n");  
            break;  
         case ENOENT:  
            fprintf( stderr, "File %s not found\n", filename );  
            break;  
         default:  
            // Should never be reached   
            fprintf( stderr, "Unexpected error in chmod.\n" );  
       }  
   }  
   else  
   {  
      if (mask == _S_IREAD)  
        printf( "Mode set to read-only\n" );  
      else if (mask & _S_IWRITE)  
        printf( "Mode set to read/write\n" );  
   }  
   fflush(stderr);  
}  
  
int main( void )  
{   
  
   // Create or append to a file.   
   system( "echo /* End of file */ >> crt_chmod.c_input" );  
  
   // Set file mode to read-only:   
   set_mode_and_report("crt_chmod.c_input ", _S_IREAD );  
  
   system( "echo /* End of file */ >> crt_chmod.c_input " );  
  
   // Change back to read/write:   
   set_mode_and_report("crt_chmod.c_input ", _S_IWRITE );  
  
   system( "echo /* End of file */ >> crt_chmod.c_input " );   
}   
```  
  
  **`Una riga di testo.`  `Una riga di testo.` Modalità impostata su read\-only**  
**Accesso negato.**  
**Modalità impostata su lettura\/scrittura**   
## Equivalente .NET Framework  
  
-   [System::IO::File::SetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.setattributes.aspx)  
  
-   [System::Security::Permissions::FileIOPermission](https://msdn.microsoft.com/en-us/library/system.security.permissions.fileiopermission.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_access, \_waccess](../../c-runtime-library/reference/access-waccess.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [Funzioni \_stat, \_wstat](../../c-runtime-library/reference/stat-functions.md)