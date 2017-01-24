---
title: "_fullpath, _wfullpath | Microsoft Docs"
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
  - "_fullpath"
  - "_wfullpath"
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
  - "wfullpath"
  - "fullpath"
  - "_wfullpath"
  - "_fullpath"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fullpath (funzione)"
  - "_wfullpath (funzione)"
  - "percorsi assoluti"
  - "fullpath (funzione)"
  - "percorsi di file relativi"
  - "wfullpath (funzione)"
ms.assetid: 4161ec17-0d22-45dd-b07d-0222553afae9
caps.latest.revision: 18
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fullpath, _wfullpath
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un nome di percorso assoluto o completo per il percorso relativo specificato.  
  
## Sintassi  
  
```  
char *_fullpath(   
   char *absPath,  
   const char *relPath,  
   size_t maxLength   
);  
wchar_t *_wfullpath(   
   wchar_t *absPath,  
   const wchar_t *relPath,  
   size_t maxLength   
);  
```  
  
#### Parametri  
 `absPath`  
 Puntatore ad un buffer contenente il nome del percorso assoluto o completo, o NULL.  
  
 `relPath`  
 Nome del percorso relativo.  
  
 `maxLength`  
 Lunghezza massima del buffer del nome del percorso assoluto \(`absPath`\).  Tale lunghezza è espressa in byte per `_fullpath` ma in caratteri wide \(`wchar_t`\) per `_wfullpath`.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a un buffer che contiene il nome del percorso assoluto \(`absPath`\).  Se è presente un errore \(ad esempio, se il valore passato in `relPath` include una lettera di unità non valida o che non può essere trovata, oppure se la lunghezza del nome del percorso assoluto creato \(`absPath`\) è maggiore di `maxLength`\), la funzione restituisce `NULL`.  
  
## Note  
 La funzione `_fullpath` espande il nome del percorso relativo in `relPath` al relativo percorso completo o assoluto e archivia il nome in `absPath`*.* Se `absPath` è NULL, `malloc` viene utilizzato per allocare un buffer di lunghezza sufficiente per mantenere il nome del percorso.  È responsabilità del chiamante liberare questo buffer.  Un percorso relativo specifica un percorso a un altra posizione dalla posizione corrente \(ad esempio la cartella di lavoro corrente: "."\).  Un nome di percorso assoluto è l'espansione di un percorso relativo che indica l'intero percorso necessario per raggiungere la posizione desiderata dalla radice del file system.  A differenza di `_makepath`, `_fullpath` può essere utilizzato per ottenere il nome del percorso assoluto per i percorsi relativi \(`relPath`\) che includono ". \/" o "..\/" nei rispettivi nomi.  
  
 Ad esempio, per utilizzare le routine di runtime del linguaggio C, l'applicazione deve includere i file di intestazione contenenti le dichiarazioni per le routine.  Ogni file istruzione di inclusione dei file di intestazione fa riferimento alla posizione del file in modo relativo \(dalla directory di lavoro dell'applicazione\):  
  
```  
#include <stdlib.h>  
```  
  
 mentre il percorso assoluto \(posizione effettiva nel file system\) del file potrebbe essere:  
  
```  
\\machine\shareName\msvcSrc\crt\headerFiles\stdlib.h  
```  
  
 La funzione `_fullpath` gestisce automaticamente gli handle della stringa con caratteri multibyte in base alle proprie esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso.  `_wfullpath` è una versione a caratteri wide di `_fullpath`; gli argomenti stringa per `_wfullpath` sono stringhe a caratteri wide.  `_wfullpath` e `_fullpath` si comportano in modo identico tranne per il fatto che `_wfullpath` non gestisce le stringhe di caratteri multibyte.  
  
 Se `_DEBUG` e `_CRTDBG_MAP_ALLOC` sono entrambi definiti, le chiamate di `_fullpath` e `_wfullpath` vengono sostituite con le chiamate di `_fullpath_dbg` e `_wfullpath_dbg` per consentire il debug delle allocazioni di memoria.  Per ulteriori informazioni, vedere [\_fullpath\_dbg, \_wfullpath\_dbg](../../c-runtime-library/reference/fullpath-dbg-wfullpath-dbg.md).  
  
 Questa funzione invoca un handler per parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md), se `maxlen` è minore o uguale a 0,.  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `NULL`.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tfullpath`|`_fullpath`|`_fullpath`|`_wfullpath`|  
  
 Se il buffer `absPath` è `NULL`, `_fullpath` chiama [malloc](../../c-runtime-library/reference/malloc.md) per allocare un buffer e ignora l'argomento `maxLength`.  È responsabilità del chiamante rilasciare questo buffer \(utilizzando [free](../../c-runtime-library/reference/free.md)\) in modo appropriato.  Se l'argomento di `relPath` specifica un'unità disco, la directory corrente di questa unità viene combinata al percorso.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fullpath`|\<stdlib.h\>|  
|`_wfullpath`|\<stdlib.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_fullpath.c  
// This program demonstrates how _fullpath  
// creates a full path from a partial path.  
  
#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>  
#include <direct.h>  
  
void PrintFullPath( char * partialPath )  
{  
   char full[_MAX_PATH];  
   if( _fullpath( full, partialPath, _MAX_PATH ) != NULL )  
      printf( "Full path is: %s\n", full );  
   else  
      printf( "Invalid path\n" );  
}  
  
int main( void )  
{  
   PrintFullPath( "test" );  
   PrintFullPath( "\\test" );  
   PrintFullPath( "..\\test" );  
}  
```  
  
  **Full path is: C:\\Documents and Settings\\user\\My Documents\\test**  
**Full path is: C:\\test**  
**Full path is: C:\\Documents and Settings\\user\\test**   
## Equivalente .NET Framework  
 [System::IO::File::Create](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_getcwd, \_wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [\_getdcwd, \_wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md)   
 [\_makepath, \_wmakepath](../../c-runtime-library/reference/makepath-wmakepath.md)   
 [\_splitpath, \_wsplitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)