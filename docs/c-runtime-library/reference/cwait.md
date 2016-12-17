---
title: "_cwait | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_cwait"
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
  - "api-ms-win-crt-process-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_cwait"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_cwait (funzione)"
  - "cwait (funzione)"
ms.assetid: d9b596b5-45f4-4e03-9896-3f383cb922b8
caps.latest.revision: 23
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _cwait
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Attende la conclusione di un altro processo.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
intptr_t _cwait(     int *termstat,    intptr_t procHandle,    int action  );  
```  
  
#### Parametri  
 `termstat`  
 Puntatore a un buffer in cui verrà archiviato il codice di risultato del processo specificato oppure NULL.  
  
 `procHandle`  
 Handle del processo da attendere, ovvero il processo che deve terminare prima che `_cwait` possa restituire un risultato.  
  
 `action`  
 NULL: ignorato dalle applicazioni del sistema operativo Windows; per altre applicazioni: codice dell'azione da eseguire su `procHandle`.  
  
## Valore restituito  
 Al termine del processo specificato, restituisce l'handle di quest'ultimo e imposta `termstat` sul codice risultato che viene restituito dal processo specificato.  In caso contrario, restituisce –1 e imposta `errno` nel modo seguente.  
  
|Valore|Descrizione|  
|------------|-----------------|  
|`ECHILD`|Non esiste alcun processo specificato, `procHandle` non è valido oppure la chiamata all'API [GetExitCodeProcess](http://msdn.microsoft.com/library/windows/desktop/ms683189.aspx) o [WaitForSingleObject](http://msdn.microsoft.com/library/windows/desktop/ms687032.aspx) ha avuto esito negativo.|  
|`EINVAL`|`action` non è valido.|  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_cwait` attende il termine dell'ID processo del processo specificato fornito da `procHandle`.  Il valore di `procHandle` passato a `_cwait` dovrebbe essere il valore restituito dalla chiamata alla funzione [\_spawn](../../c-runtime-library/spawn-wspawn-functions.md) che ha creato il processo specificato.  Se l'ID processo termina prima della chiamata a `_cwait`, viene restituito immediatamente il risultato di `_cwait`.  `_cwait` può essere usato da qualsiasi processo per l'attesa di qualsiasi altro processo noto per cui esiste un handle valido \(`procHandle`\).  
  
 `termstat` punta a un buffer in cui verrà archiviato il codice restituito del processo specificato.  Il valore di `termstat` indica se il processo specificato è terminato normalmente chiamando l'API [ExitProcess](http://msdn.microsoft.com/library/windows/desktop/ms682658.aspx) di Windows.  `ExitProcess` viene chiamato internamente se il processo specificato chiama `exit` oppure `_exit`, restituisce un risultato da `main` o raggiunge la fine di `main`.  Per altre informazioni sul valore passato tramite `termstat`, vedere [GetExitCodeProcess](http://msdn.microsoft.com/library/windows/desktop/ms683189.aspx).  Se la funzione `_cwait` viene chiamata usando un valore NULL per `termstat`, il codice restituito del processo specificato non viene archiviato.  
  
 Il parametro `action` viene ignorato dal sistema operativo Windows perché le relazioni padre\-figlio non sono implementate in questi ambienti.  
  
 A meno che `procHandle` non sia \-1 o \-2 \(handle al processo o thread corrente\), l'handle verrà chiuso.  In questo caso, quindi, evitare di usare l'handle restituito.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_cwait`|\<process.h\>|\<errno.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_cwait.c  
// compile with: /c  
// This program launches several processes and waits  
// for a specified process to finish.  
//  
#define _CRT_RAND_S  
  
#include <windows.h>  
#include <process.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <time.h>  
  
// Macro to get a random integer within a specified range  
#define getrandom( min, max ) (( (rand_s (&number), number) % (int)((( max ) + 1 ) - ( min ))) + ( min ))  
  
struct PROCESS  
{  
   int     nPid;  
   char    name[40];  
} process[4] = { { 0, "Ann" }, { 0, "Beth" }, { 0, "Carl" }, { 0, "Dave" } };  
  
int main( int argc, char *argv[] )  
{  
   int termstat, c;  
   unsigned int number;  
  
   srand( (unsigned)time( NULL ) );    // Seed randomizer  
  
   // If no arguments, this is the calling process  
   if( argc == 1 )  
   {  
      // Spawn processes in numeric order  
      for( c = 0; c < 4; c++ ){  
         _flushall();  
         process[c].nPid = _spawnl( _P_NOWAIT, argv[0], argv[0],   
                             process[c].name, NULL );  
      }  
  
      // Wait for randomly specified process, and respond when done   
      c = getrandom( 0, 3 );  
      printf( "Come here, %s.\n", process[c].name );  
      _cwait( &termstat, process[c].nPid, _WAIT_CHILD );  
      printf( "Thank you, %s.\n", process[c].name );  
  
   }  
   // If there are arguments, this must be a spawned process   
   else  
   {  
      // Delay for a period that's determined by process number  
      Sleep( (argv[1][0] - 'A' + 1) * 1000L );  
      printf( "Hi, Dad. It's %s.\n", argv[1] );  
   }  
}  
```  
  
  **Hi, Dad.  It's Ann.  Come here, Ann.  Thank you, Ann.  Hi, Dad.  It's Beth.  Hi, Dad.  It's Carl.  Hi, Dad.  It's Dave.**    
## Equivalente .NET Framework  
 [System::Diagnostics::Process::WaitForExit](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.waitforexit.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)