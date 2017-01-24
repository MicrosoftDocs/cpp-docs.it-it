---
title: "_umask_s | Microsoft Docs"
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
  - "_umask_s"
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
  - "unmask_s"
  - "_umask_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_umask_s (funzione)"
  - "autorizzazioni di file [C++]"
  - "file [C++], impostazioni delle autorizzazioni"
  - "maschere"
  - "maschere, impostazioni delle autorizzazioni di file"
  - "umask_s (funzione)"
ms.assetid: 70898f61-bf2b-4d8d-8291-0ccaa6d33145
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _umask_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta la maschera di autorizzazione file predefinita.  Una versione di [\_umask](../../c-runtime-library/reference/umask.md) con miglioramenti di sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _umask_s(  
   int mode,  
   int * pOldMode  
);  
```  
  
#### Parametri  
 \[in\] `mode`  
 Impostazione di autorizzazione predefinita.  
  
 \[out\] `oldMode`  
 Il valore precedente dell'impostazione di autorizzazione.  
  
## Valore restituito  
 Restituisce un codice di errore se `Mode` non specifica una modalità valida o il puntatore di `pOldMode` è `NULL`.  
  
### Condizioni di errore  
  
|`mode`|`pOldMode`|**Valore restituito**|**Contenuti di**  `oldMode`|  
|------------|----------------|---------------------------|---------------------------------|  
|any|`NULL`|`EINVAL`|non modificato|  
|modalità non valida|any|`EINVAL`|non modificato|  
  
 Se si verifica una delle condizioni riportate sopra, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `_umask_s` ritorna `EINVAL` e imposta `errno` a `EINVAL`.  
  
## Note  
 La funzione `_umask_s` imposta la maschera di autorizzazione file del processo corrente a quella specificata da `mode`*.* La maschera di autorizzazione file modifica l'impostazione di autorizzazione dei nuovi file creati da `_creat`, `_open`, o `_sopen`.  Se un bit nella maschera è impostato a 1, il bit corrispondente nel valore di richiesta autorizzazione del file è impostato a 0 \(permesso negato\).  Se un bit nella maschera è 0, il bit corrispondente viene lasciato invariato.  L'impostazione di autorizzazione per un nuovo file non viene impostata fino a quando il file non viene chiuso per la prima volta.  
  
 L'espressione Integer `pmode` contiene una o entrambe le seguenti costanti manifesto, definite in SYS\\STAT.H:  
  
 `_S_IWRITE`  
 Scrittura consentita.  
  
 `_S_IREAD`  
 Lettura consentita.  
  
 `_S_IREAD | _S_IWRITE`  
 Lettura e scrittura consentite.  
  
 Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit.          `|`  \).  Se l'argomento `mode` è `_S_IREAD`, la lettura non è consentita \(il file è di sola scrittura\).  Se l'argomento `mode` è `_S_IWRITE`, la scrittura non è consentita \(il file è di sola lettura\).  Ad esempio, se il bit di scrittura è impostato nella maschera, tutti i nuovi file saranno di sola lettura.  Si noti che con MS\-DOS e i sistemi operativi Windows, tutti i file sono leggibili; non è possibile fornire l'autorizzazione di sola scrittura.  Pertanto, l'impostazione del bit lettura con `_umask_s` non ha effetto sulle modalità del file.  
  
 Se `pmode` non è una combinazione di una delle costanti manifesto o non include un set alternativo di costanti, la funzione semplicemente li ignorerà.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_umask_s`|\<io.h\> e \<sys\/stat.h\> e \<sys\/types.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_umask_s.c  
/* This program uses _umask_s to set  
 * the file-permission mask so that all future  
 * files will be created as read-only files.  
 * It also displays the old mask.  
 */  
  
#include <sys/stat.h>  
#include <sys/types.h>  
#include <io.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int oldmask, err;  
  
   /* Create read-only files: */  
   err = _umask_s( _S_IWRITE, &oldmask );  
   if (err)  
   {  
      printf("Error setting the umask.\n");  
      exit(1);  
   }  
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
 [\_umask](../../c-runtime-library/reference/umask.md)