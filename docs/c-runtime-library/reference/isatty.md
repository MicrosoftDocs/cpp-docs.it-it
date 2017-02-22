---
title: "isatty | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_isatty"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "isatty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "isatty (funzione)"
ms.assetid: 9f1b2e87-0cd7-4079-b187-f2b7ca15fcbe
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# _isatty
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un descrittore del file è associato con un dispositivo a carattere.  
  
## Sintassi  
  
```  
  
      int _isatty(  
int fd   
);  
```  
  
#### Parametri  
 `fd`  
 Descrittore del file che fa riferimento al dispositivo da testare.  
  
## Valore restituito  
 `_isatty` restituisce un valore diverso da zero se il descrittore è associato a un dispositivo a carattere.  In caso contrario, `_isatty` restituisce 0.  
  
## Note  
 La funzione `_isatty` determina se `fd` è associato a un dispositivo a carattere \(terminale, una console, una stampante, o una porta seriale\).  
  
 Questa funzione convalida il parametro `fd`.  Se `fd` è un puntatore a file non valido, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce 0 e imposta `errno` su `EBADF`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_isatty`|\<io.h\>|  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_isatty.c  
/* This program checks to see whether  
 * stdout has been redirected to a file.  
 */  
  
#include <stdio.h>  
#include <io.h>  
  
int main( void )  
{  
   if( _isatty( _fileno( stdout ) ) )  
      printf( "stdout has not been redirected to a file\n" );  
   else  
      printf( "stdout has been redirected to a file\n");  
}  
```  
  
## Esempio di output  
  
```  
stdout has not been redirected to a file  
```  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)