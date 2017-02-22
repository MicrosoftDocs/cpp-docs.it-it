---
title: "rename, _wrename | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "rename"
  - "_wrename"
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
  - "_wrename"
  - "_trename"
  - "Rename"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_trename (funzione)"
  - "_wrename (funzione)"
  - "directory [C++], ridenominazione"
  - "file [C++], ridenominazione"
  - "nomi [C++], modifica directory"
  - "nomi [C++], modifica file"
  - "rename (funzione)"
  - "ridenominazione di directory"
  - "ridenominazione di file"
  - "trename (funzione)"
  - "wrename (funzione)"
ms.assetid: 9f0a6103-26a2-4dda-b14b-79a48946266a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# rename, _wrename
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rinomina un file o una directory.  
  
## Sintassi  
  
```  
  
      int rename(  
   const char *oldname,  
   const char *newname   
);  
int _wrename(  
   const wchar_t *oldname,  
   const wchar_t *newname   
);  
```  
  
#### Parametri  
 *oldname*  
 Puntatore al nome precedente.  
  
 *newname*  
 Puntatore al nuovo nome.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce 0 se ha esito positivo.  Su un errore, la funzione restituisce un valore diverso da zero e imposta `errno` su uno dei seguenti valori:  
  
 `EACCES`  
 Il file o la directory specificata da *newname* già esiste o non è stata creata \(percorso non valido\); *oldname* è una directory e *newname* specifica un percorso diverso.  
  
 `ENOENT`  
 File o il percorso specificato da *oldname* non trovato.  
  
 `EINVAL`  
 Il nome contiene caratteri non validi.  
  
 Per altri possibili valori restituiti, consultare [\_doserrno, \_errno, syserrlist e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione **rename** rinomina il file o la directory specificata da *oldname* al nome specificato in *newname*.  Il nome precedente deve essere il percorso di un file o di una directory.  Il nuovo nome non deve essere il nome di un file o di una directory.  È possibile utilizzare **rename** per spostare un file da una directory o da un dispositivo a un altro fornendo un percorso diverso nell'argomento di *newname*.  Tuttavia, non è possibile utilizzare **rename** per spostare una directory.  È possibile rinominare directory, ma non spostarle.  
  
 `_wrename` è una versione a caratteri estesi di **\_rename**; gli argomenti a `_wrename` sono stringhe a caratteri estesi.  `_wrename` e **\_rename** si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_trename`|**ridenominazione**|**ridenominazione**|`_wrename`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**ridenominazione**|\<io.h\> or \<stdio.h\>|  
|`_wrename`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_renamer.c  
/* This program attempts to rename a file named  
 * CRT_RENAMER.OBJ to CRT_RENAMER.JBO. For this operation  
 * to succeed, a file named CRT_RENAMER.OBJ must exist and  
 * a file named CRT_RENAMER.JBO must not exist.  
 */  
  
#include <stdio.h>  
  
int main( void )  
{  
   int  result;  
   char old[] = "CRT_RENAMER.OBJ", new[] = "CRT_RENAMER.JBO";  
  
   /* Attempt to rename file: */  
   result = rename( old, new );  
   if( result != 0 )  
      printf( "Could not rename '%s'\n", old );  
   else  
      printf( "File '%s' renamed to '%s'\n", old, new );  
}  
```  
  
## Output  
  
```  
File 'CRT_RENAMER.OBJ' renamed to 'CRT_RENAMER.JBO'  
```  
  
## Equivalente .NET Framework  
 [System::IO::File::Move](https://msdn.microsoft.com/en-us/library/system.io.file.move.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)