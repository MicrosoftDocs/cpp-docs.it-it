---
title: _futime, _futime32, _futime64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _futime64
- _futime32
- _futime
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- futime
- _futime
- futime64
- _futime64
dev_langs: C++
helpviewer_keywords:
- _futime function
- futime32 function
- futime64 function
- file modification time [C++]
- _futime64 function
- futime function
- _futime32 function
ms.assetid: b942ce8f-5cc7-4fa8-ab47-de5965eded53
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 03eda993cbc087d5dc39f2c9d0f985ac5db48099
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="futime-futime32-futime64"></a>_futime, _futime32, _futime64
Imposta la data di modifica in un file aperto.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `fd`  
 Descrittore di file del file aperto.  
  
 `filetime`  
 Puntatore alla struttura contenente la nuova data di modifica.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 in caso di esito positivo. Quando si verifica un errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e `errno` è impostato su `EBADF`, che indica un descrittore di file non valido, o `EINVAL`, che indica un parametro non valido.  
  
## <a name="remarks"></a>Note  
 Il `_futime` routine imposta la data di modifica e l'ora di accesso sul file aperto associato `fd`. `_futime` è identico a [_utime](../../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md), ad eccezione del fatto che l'argomento è il descrittore del file di un file aperto, anziché il nome di un file o un percorso di un file. La struttura `_utimbuf` contiene i campi per la nuova data di modifica e l'ora di accesso. Entrambi i campi devono contenere valori validi. `_utimbuf32` e `_utimbuf64` sono identici a `_utimbuf` tranne per l'uso dei tipi di ora a 32 bit e 64 bit, rispettivamente. `_futime` e `_utimbuf` usano un tipo di tempo a 64 bit e `_futime` ha un comportamento identico a `_futime64`. Se è necessario forzare il comportamento precedente, definire `_USE_32BIT_TIME_T`. In questo modo, il comportamento di `_futime` sarà identico a `_futime32` e fa sì che la struttura `_utimbuf` usi il tipo di tempo a 32 bit, rendendolo equivalente a `__utimbuf32`.  
  
 `_futime64`, che usa la struttura `__utimbuf64`, può leggere e modificare le date di file fino alle 23.59.59 del 31 dicembre 3000 UTC, mentre una chiamata a `_futime32` ha esito negativo se la data del file è successiva alle 23.59.59 del 18 gennaio 2038 UTC. La mezzanotte del 1 gennaio 1970 è il limite inferiore dell'intervallo di date per queste funzioni.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|---------------------|---------------------|  
|`_futime`|\<sys/utime.h>|\<errno.h>|  
|`_futime32`|\<sys/utime.h>|\<errno.h>|  
|`_futime64`|\<sys/utime.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="input-crtfutimecinput"></a>Input: crt_futime.c_input  
  
```  
Arbitrary file contents.  
```  
  
### <a name="sample-output"></a>Esempio di output  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dell'ora](../../c-runtime-library/time-management.md)