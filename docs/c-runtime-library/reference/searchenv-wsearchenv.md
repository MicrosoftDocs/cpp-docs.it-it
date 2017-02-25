---
title: "_searchenv, _wsearchenv | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_searchenv"
  - "_wsearchenv"
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
apitype: "DLLExport"
f1_keywords: 
  - "_wsearchenv"
  - "_tsearchenv"
  - "wsearchenv"
  - "_searchenv"
  - "searchenv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_searchenv (funzione)"
  - "_tsearchenv (funzione)"
  - "_wsearchenv (funzione)"
  - "percorsi di ambiente"
  - "percorsi di ambiente, ricerca di file"
  - "file [C++], ricerca"
  - "searchenv (funzione)"
  - "tsearchenv (funzione)"
  - "wsearchenv (funzione)"
ms.assetid: 9c944a27-d326-409b-aee6-410e8762d9d3
caps.latest.revision: 33
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 33
---
# _searchenv, _wsearchenv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Usa i percorsi di ambiente per cercare un file.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_searchenv\_s, \_wsearchenv\_s](../../c-runtime-library/reference/searchenv-s-wsearchenv-s.md).  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
void _searchenv(  
   const char *filename,  
   const char *varname,  
   char *pathname   
);  
void _wsearchenv(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t *pathname   
);  
template <size_t size>  
void _searchenv(  
   const char *filename,  
   const char *varname,  
   char (&pathname)[size]  
); // C++ only  
template <size_t size>  
void _wsearchenv(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t (&pathname)[size]  
); // C++ only  
```  
  
#### Parametri  
 `filename`  
 Nome del file di cui eseguire la ricerca.  
  
 `varname`  
 Ambiente per la ricerca.  
  
 `pathname`  
 Buffer per l'archiviazione del percorso completo.  
  
## Note  
 La routine `_searchenv` cerca il file di destinazione nel dominio specifico.  La variabile `varname` può essere qualsiasi ambiente o variabile definita dall'utente, ad esempio, `PATH`, `LIB` o `INCLUDE`, che specifica un elenco dei percorsi di directory.  Poiché `_searchenv` fa distinzione tra maiuscole e minuscole, `varname` deve corrispondere alle maiuscole e minuscole della variabile d'ambiente.  
  
 La routine cerca innanzitutto il file nella directory di lavoro corrente.  Se non trova il file, cerca nelle directory specificate dalla variabile d'ambiente.  Se il file di destinazione si trova in una di queste directory, il percorso appena creato viene copiato in `pathname`.  Se il file `filename` non viene trovato, `pathname` contiene una stringa vuota con terminazione Null.  
  
 Il buffer `pathname` deve contenere almeno `_MAX_PATH` caratteri per consentire tutta la lunghezza del nome percorso completo.  In alternativa, `_searchenv` potrebbe causare un sovraccarico del buffer `pathname` e causare un comportamento imprevisto.  
  
 `_wsearchenv` è una versione a caratteri wide di `_searchenv` e argomenti per `_wsearchenv` sono stringhe a caratteri wide.  In caso contrario, `_wsearchenv` e `_searchenv` si comportano in modo identico.  
  
 Se `filename` è una stringa vuota, queste funzioni restituiscono `ENOENT`.  
  
 Se `filename` o `pathname` è un puntatore `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono \-1 e impostano `errno` su `EINVAL`.  
  
 Per altre informazioni su `errno` e codici di errore, vedere [Costanti errno](../../c-runtime-library/errno-constants.md).  
  
 In C\+\+, queste funzioni presentano overload di modello che richiamano le relative controparti più sicure e più recenti.  Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tsearchenv`|`_searchenv`|`_searchenv`|`_wsearchenv`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_searchenv`|\<stdlib.h\>|  
|`_wsearchenv`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_searchenv.c  
// compile with: /W3  
// This program searches for a file in  
// a directory that's specified by an environment variable.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char pathbuffer[_MAX_PATH];  
   char searchfile[] = "CL.EXE";  
   char envvar[] = "PATH";  
  
   // Search for file in PATH environment variable:  
   _searchenv( searchfile, envvar, pathbuffer ); // C4996  
   // Note: _searchenv is deprecated; consider using _searchenv_s  
   if( *pathbuffer != '\0' )  
      printf( "Path for %s:\n%s\n", searchfile, pathbuffer );  
   else  
      printf( "%s not found\n", searchfile );  
}  
```  
  
  **Path for CL.EXE:**  
**C:\\Program Files\\Microsoft Visual Studio 8\\VC\\BIN\\CL.EXE**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [getenv, \_wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [\_putenv, \_wputenv](../../c-runtime-library/reference/putenv-wputenv.md)   
 [\_searchenv\_s, \_wsearchenv\_s](../../c-runtime-library/reference/searchenv-s-wsearchenv-s.md)