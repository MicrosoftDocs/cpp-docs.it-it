---
title: "_getcwd, _wgetcwd | Microsoft Docs"
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
  - "_wgetcwd"
  - "_getcwd"
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
  - "api-ms-win-crt-environment-l1-1-0.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_getcwd"
  - "wgetcwd"
  - "_wgetcwd"
  - "tgetcwd"
  - "_tgetcwd"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "getcwd (funzione)"
  - "directory di lavoro"
  - "_wgetcwd (funzione)"
  - "_getcwd (funzione)"
  - "directory di lavoro corrente"
  - "wgetcwd (funzione)"
  - "utilizzo di directory [C++], corrente"
ms.assetid: 888dc8c6-5595-4071-be55-816b38e3e739
caps.latest.revision: 24
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getcwd, _wgetcwd
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la directory di lavoro corrente.  
  
## Sintassi  
  
```  
char *_getcwd(   
   char *buffer,  
   int maxlen   
);  
wchar_t *_wgetcwd(   
   wchar_t *buffer,  
   int maxlen   
);  
```  
  
#### Parametri  
 `buffer`  
 Posizione di archiviazione per il percorso.  
  
 `maxlen`  
 Lunghezza massima del percorso in caratteri: `char` per `_getcwd` e `wchar_t` per `_wgetcwd`.  
  
## Valore restituito  
 Restituisce un puntatore a `buffer`. Un valore `NULL` restituito indica un errore e `errno` viene impostato su `ENOMEM`, indicando che non vi è memoria sufficiente per allocare `maxlen` byte \(quando un argomento `NULL` viene fornito come `buffer`\) oppure in `ERANGE`, indicando che il percorso è più lungo di `maxlen` caratteri. Se `maxlen` è minore o uguale a zero, questa funzione richiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_getcwd` ottiene il percorso completo della directory di lavoro corrente per l'unità predefinita e la archivia in `buffer`. L'argomento Integer `maxlen` specifica la lunghezza massima per il percorso. Se la lunghezza del percorso, incluso il carattere null di terminazione, supera `maxlen`, si verifica un errore*.* L'argomento `buffer` può essere `NULL`; un buffer con dimensione di almeno `maxlen` \(più grande solo se necessario\) viene allocato automaticamente, usando `malloc`, per archiviare il percorso. Questo buffer può essere successivamente liberato chiamando `free` e passandogli il valore restituito `_getcwd` \(un puntatore al buffer allocato\).  
  
 `_getcwd` restituisce una stringa che rappresenta il percorso della directory di lavoro corrente. Se la directory di lavoro corrente è quella radice, la stringa termina con una barra rovesciata \( `\` \). Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.  
  
 `_wgetcwd` è una versione a caratteri wide di `_getcwd`. L'argomento `buffer` e il valore restituito da `_wgetcwd` è dato da stringhe a caratteri wide. In caso contrario, `_wgetcwd` e `_getcwd` si comportano in modo identico.  
  
 Quando `_DEBUG` e `_CRTDBG_MAP_ALLOC` sono definiti, le chiamate a `_getcwd` e `_wgetcwd` vengono sostituite dalle quelle a `_getcwd_dbg` e `_wgetcwd_dbg` per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [\_getcwd\_dbg, \_wgetcwd\_dbg](../../c-runtime-library/reference/getcwd-dbg-wgetcwd-dbg.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tgetcwd`|`_getcwd`|`_getcwd`|`_wgetcwd`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getcwd`|\<direct.h\>|  
|`_wgetcwd`|\<direct.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_getcwd.c  
// This program places the name of the current directory in the   
// buffer array, then displays the name of the current directory   
// on the screen. Passing NULL as the buffer forces getcwd to allocate  
// memory for the path, which allows the code to support file paths  
// longer than _MAX_PATH, which are supported by NTFS.  
  
#include <direct.h>  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char* buffer;  
  
   // Get the current working directory:   
   if( (buffer = _getcwd( NULL, 0 )) == NULL )  
      perror( "_getcwd error" );  
   else  
   {  
      printf( "%s \nLength: %d\n", buffer, strnlen(buffer) );  
      free(buffer);  
   }  
}  
```  
  
```Output  
C:\Code  
```  
  
## Equivalente .NET Framework  
 [System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [\_chdir, \_wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [\_mkdir, \_wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [\_rmdir, \_wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)