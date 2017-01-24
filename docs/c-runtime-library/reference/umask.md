---
title: "_umask | Microsoft Docs"
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
  - "_umask"
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
  - "_umask"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_umask (funzione)"
  - "autorizzazioni di file [C++]"
  - "file [C++], impostazioni delle autorizzazioni"
  - "maschere"
  - "maschere, impostazioni delle autorizzazioni di file"
  - "umask (funzione)"
ms.assetid: 5e9a13ba-5321-4536-8721-6afb6f4c8483
caps.latest.revision: 21
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _umask
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta la maschera di autorizzazione file predefinita.  È disponibile una versione più sicura di questa funzione; vedere [\_umask\_s](../../c-runtime-library/reference/umask-s.md).  
  
## Sintassi  
  
```  
int _umask(  
   int pmode   
);  
```  
  
#### Parametri  
 `pmode`  
 Impostazione di autorizzazione predefinita.  
  
## Valore restituito  
 `_umask` restituisce il valore precedente di `pmode`.  Nessun ritorno di errore.  
  
## Note  
 La funzione `_umask` imposta la maschera di autorizzazione file del processo corrente a quella specificata da `pmode`*.* La maschera di autorizzazione file modifica l'impostazione di autorizzazione dei nuovi file creati da `_creat`, `_open`, o `_sopen`.  Se un bit nella maschera è impostato a 1, il bit corrispondente nel valore di richiesta autorizzazione del file è impostato a 0 \(permesso negato\).  Se un bit nella maschera è 0, il bit corrispondente viene lasciato invariato.  L'impostazione di autorizzazione per un nuovo file non viene impostata fino a quando il file non viene chiuso per la prima volta.  
  
 L'espressione Integer `pmode` contiene una o entrambe le seguenti costanti manifesto, definite in SYS\\STAT.H:  
  
 `_S_IWRITE`  
 Scrittura consentita.  
  
 `_S_IREAD`  
 Lettura consentita.  
  
 `_S_IREAD | _S_IWRITE`  
 Lettura e scrittura consentite.  
  
 Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit.          `|`  \).  Se l'argomento `pmode` è `_S_IREAD`, la lettura non è consentita \(il file è di sola scrittura\).  Se l'argomento `pmode` è `_S_IWRITE`, la scrittura non è consentita \(il file è di sola lettura\).  Ad esempio, se il bit di scrittura è impostato nella maschera, tutti i nuovi file saranno di sola lettura.  Si noti che con MS\-DOS e i sistemi operativi Windows, tutti i file sono leggibili; non è possibile fornire l'autorizzazione di sola scrittura.  Pertanto, l'impostazione del bit lettura con `_umask` non ha effetto sulle modalità del file.  
  
 Se `pmode` non è una combinazione di una delle costanti manifesto o non include un set alternativo di costanti, la funzione semplicemente li ignorerà.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_umask`|\<io.h\>, \<sys\/stat.h\>, \<sys\/types.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_umask.c  
// compile with: /W3  
// This program uses _umask to set  
// the file-permission mask so that all future  
// files will be created as read-only files.  
// It also displays the old mask.  
#include <sys/stat.h>  
#include <sys/types.h>  
#include <io.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int oldmask;  
  
   /* Create read-only files: */  
   oldmask = _umask( _S_IWRITE ); // C4996  
   // Note: _umask is deprecated; consider using _umask_s instead  
   printf( "Oldmask = 0x%.4x\n", oldmask );  
}  
```  
  
  **Oldmask \= 0x0000**   
## Equivalente .NET Framework  
 [System::IO::File::SetAttributes](https://msdn.microsoft.com/en-us/library/system.io.file.setattributes.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [\_chmod, \_wchmod](../../c-runtime-library/reference/chmod-wchmod.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_mkdir, \_wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)