---
title: "_searchenv_s, _wsearchenv_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wsearchenv_s"
  - "_searchenv_s"
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
  - "_searchenv_s"
  - "_wsearchenv_s"
  - "wsearchenv_s"
  - "searchenv_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_searchenv_s (funzione)"
  - "_tsearchenv_s (funzione)"
  - "_wsearchenv_s (funzione)"
  - "sovraccarichi del buffer"
  - "buffer [C++], evitare i sovraccarichi"
  - "buffer [C++], sovraccarichi del buffer"
  - "percorsi di ambiente"
  - "percorsi di ambiente, ricerca di file"
  - "file [C++], ricerca"
  - "searchenv_s (funzione)"
  - "tsearchenv_s (funzione)"
  - "wsearchenv_s (funzione)"
ms.assetid: 47f9fc29-250e-4c09-b52e-9e9f0ef395ca
caps.latest.revision: 32
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _searchenv_s, _wsearchenv_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cerca un file tramite percorsi d'ambiente.  Queste versioni di [\_searchenv, \_wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md) hanno miglioramenti nel campo della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
errno_t _searchenv_s(  
   const char *filename,  
   const char *varname,  
   char *pathname,  
   size_t numberOfElements  
);  
errno_t _wsearchenv_s(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t *pathname,  
   size_t numberOfElements  
);  
template <size_t size>  
errno_t _searchenv_s(  
   const char *filename,  
   const char *varname,  
   char (&pathname)[size]  
); // C++ only  
template <size_t size>  
errno_t _wsearchenv_s(  
   const wchar_t *filename,  
   const wchar_t *varname,  
   wchar_t (&pathname)[size]  
); // C++ only  
```  
  
#### Parametri  
 \[in\] `filename`  
 Nome del file da ricercare.  
  
 \[in\] `varname`  
 Ambiente da cercare.  
  
 \[out\] `pathname`  
 Buffer per archiviare il percorso completo.  
  
 \[in\] `numberOfElements`  
 Dimensione del buffer `pathname`.  
  
## Valore restituito  
 Zero se ha esito positivo; un codice di errore in caso di errore.  
  
 Se `filename` è una stringa vuota, il valore di ritorno è `ENOENT`.  
  
### Condizioni di errore  
  
|`filename`|`varname`|`pathname`|`numberOfElements`|Valore restituito|Contenuto di `pathname`.|  
|----------------|---------------|----------------|------------------------|-----------------------|------------------------------|  
|any|any|`NULL`|any|`EINVAL`|n\/d|  
|`NULL`|any|any|any|`EINVAL`|non modificato|  
|any|any|any|\<\= 0|`EINVAL`|non modificato|  
  
 Se tutte queste condizioni di errore si verificano, il gestore di parametri non valido viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono `EINVAL`.  
  
## Note  
 La routine `_searchenv_s` cerca il file di destinazione nel dominio specificato.  La variabile `varname` può essere qualsiasi ambiente o variabile definita dall'utente che specifica un elenco di percorsi di directory, come `PATH`, `LIB` e `INCLUDE`.  Poiché `_searchenv_s` fa distinzione tra maiuscole e minuscole, `varname` deve corrispondere alla variabile d'ambiente.  Se `varname` non corrisponde al nome di una variabile d'ambiente definita nell'ambiente del processo, la funzione restituisce zero e la variabile `pathname` resterà invariata.  
  
 La routine cerca innanzitutto il file nella cartella di lavoro corrente.  Se non trova il file, cerca quindi nelle directory specificate dalla variabile d'ambiente.  Se il file di destinazione è in una di quelle directory, il percorso appena creato viene copiato in `pathname`.  Se il file `filename` non viene trovato, `pathname` contiene una stringa vuota con terminazione null.  
  
 Il buffer `pathname` deve essere lungo almeno `_MAX_PATH` caratteri per contenere l'intera lunghezza del nome del percorso costruito.  In caso contrario, `_searchenv_s` potrebbe sovraccaricare il buffer `pathname` determinando un comportamento imprevisto.  
  
 `_wsearchenv_s` è una versione a caratteri estesi di `_searchenv_s`; gli argomenti per `_wsearchenv_s` sono stringhe a caratteri estesi.  `_wsearchenv_s` e `_searchenv_s` si comportano in modo identico in caso contrario.  
  
 In C\+\+, l'utilizzo di queste funzioni è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente \(che elimina la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti, quelle non sicure alle più recenti e le controparti sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tsearchenv_s`|`_searchenv_s`|`_searchenv_s`|`_wsearchenv_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_searchenv_s`|\<stdlib.h\>|  
|`_wsearchenv_s`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_searchenv_s.c  
/* This program searches for a file in  
 * a directory specified by an environment variable.  
 */  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char pathbuffer[_MAX_PATH];  
   char searchfile[] = "CL.EXE";  
   char envvar[] = "PATH";  
   errno_t err;  
  
   /* Search for file in PATH environment variable: */  
   err = _searchenv_s( searchfile, envvar, pathbuffer, _MAX_PATH );  
   if (err != 0)  
   {  
      printf("Error searching the path. Error code: %d\n", err);  
   }  
   if( *pathbuffer != '\0' )  
      printf( "Path for %s:\n%s\n", searchfile, pathbuffer );  
   else  
      printf( "%s not found\n", searchfile );  
}  
```  
  
  **Percorso per CL.EXE:**  
**C:\\Program Files\\Microsoft Visual Studio 2010\\VC\\BIN\\CL.EXE**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [\_searchenv, \_wsearchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)   
 [getenv, \_wgetenv](../../c-runtime-library/reference/getenv-wgetenv.md)   
 [\_putenv, \_wputenv](../../c-runtime-library/reference/putenv-wputenv.md)