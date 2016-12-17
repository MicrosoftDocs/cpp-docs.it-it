---
title: "_futime, _futime32, _futime64 | Microsoft Docs"
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
  - "_futime64"
  - "_futime32"
  - "_futime"
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
  - "api-ms-win-crt-time-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "futime"
  - "_futime"
  - "futime64"
  - "_futime64"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_futime (funzione)"
  - "futime32 (funzione)"
  - "futime64 (funzione)"
  - "ora modifica file [C++]"
  - "_futime64 (funzione)"
  - "futime (funzione)"
  - "_futime32 (funzione)"
ms.assetid: b942ce8f-5cc7-4fa8-ab47-de5965eded53
caps.latest.revision: 21
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _futime, _futime32, _futime64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta l'ora di modifica su un file aperto.  
  
## Sintassi  
  
```  
int _futime(   
   int fd,  
   struct _utimbuf *filetime   
);  
int _futime32(   
   int fd,  
   struct __utimbuf32 *filetime   
);  
int _futime64(   
   int fd,  
   struct __utimbuf64 *filetime   
);  
```  
  
#### Parametri  
 `fd`  
 Descrittore di file del file aperto.  
  
 `filetime`  
 Puntatore a una struttura contenente la nuova data di modifica.  
  
## Valore restituito  
 Restituisce 0 se completato con successo.  Se si verifica un errore, viene richiamato il gestore del parametro non valido, come descritto su [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e `errno` viene impostato su `EBADF`, a indicare un descrittore di file non valido, o a `EINVAL`, per indicare un parametro non valido.  
  
## Note  
 La routine di `_futime` imposta la data di modifica e l'ora di accesso a un file aperto associato a `fd`*.* `_futime` è identico a [\_utime](../../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md), ma il relativo argomento è il descrittore di un file aperto, anziché il nome di un file o un percorso di un file.  La struttura di `_utimbuf` contiene i campi per il nuovo tempo della data e di accesso di modifica.  Entrambi i campi devono contenere valori validi.  `_utimbuf32` e `_utimbuf64` sono rispettivamente identici a `_utimbuf` fatta eccezione per l'utilizzo di 32 bit e i tipi di tempo a 64 bit.  `_futime` e `_utimbuf` utilizza un tipo di tempo a 64 bit e `_futime` è identico nel comportamento a `_futime64`.  Se è necessario forzare il comportamento precedente, definire `_USE_32BIT_TIME_T`.  Questa operazione comporta `_futime` a essere identico nel comportamento a `_futime32` e provoca la struttura di `_utimbuf` a utilizzare il tipo di tempo a 32 bit, rendendolo equivalente a `__utimbuf32`.  
  
 `_futime64`, che utilizza la struttura di `__utimbuf64`, può leggere e modificare le date del file fino alle 23:59: 59, il 31 dicembre, 3000, UTC; mentre con una chiamata a `_futime32` ha esito negativo se la data nel file è successiva alle 19:14:07, il 18 gennaio 2038, UTC.  Per tutte queste funzioni, la mezzanotte, del 1° gennaio 1970, è il limite inferiore dell'intervallo di date.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`_futime`|\<sys\/utime.h\>|\<errno.h\>|  
|`_futime32`|\<sys\/utime.h\>|\<errno.h\>|  
|`_futime64`|\<sys\/utime.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_futime.c  
// This program uses _futime to set the  
// file-modification time to the current time.  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <fcntl.h>  
#include <io.h>  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <sys/utime.h>  
#include <share.h>  
  
int main( void )  
{  
   int hFile;  
  
   // Show file time before and after.   
   system( "dir crt_futime.c_input" );  
  
   _sopen_s( &hFile, "crt_futime.c_input", _O_RDWR, _SH_DENYNO, 0 );  
  
   if( _futime( hFile, NULL ) == -1 )  
      perror( "_futime failed\n" );  
   else  
      printf( "File time modified\n" );  
  
   _close (hFile);  
  
   system( "dir crt_futime.c_input" );  
}  
```  
  
## Input: crt\_futime.c\_input  
  
```  
Arbitrary file contents.  
```  
  
### Esempio di output  
  
```  
Volume in drive Z has no label.  
 Volume Serial Number is 5C68-57C1  
  
 Directory of Z:\crt  
  
03/25/2004  10:40 AM                24 crt_futime.c_input  
               1 File(s)             24 bytes  
               0 Dir(s)  24,268,476,416 bytes free  
 Volume in drive Z has no label.  
 Volume Serial Number is 5C68-57C1  
  
 Directory of Z:\crt  
  
03/25/2004  10:41 AM                24 crt_futime.c_input  
               1 File(s)             24 bytes  
               0 Dir(s)  24,268,476,416 bytes free  
File time modified  
```  
  
## Equivalente .NET Framework  
  
-   [System::IO::File::SetLastAccessTime](https://msdn.microsoft.com/en-us/library/system.io.file.setlastaccesstime.aspx)  
  
-   [System::IO::File::SetLastWriteTime](https://msdn.microsoft.com/en-us/library/system.io.file.setlastwritetime.aspx)  
  
-   [System::IO::File::SetCreationTime](https://msdn.microsoft.com/en-us/library/system.io.file.setcreationtime.aspx)  
  
## Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)