---
title: "system, _wsystem | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "system"
  - "_wsystem"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tsystem"
  - "_wsystem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tsystem (funzione)"
  - "_wsystem (funzione)"
  - "interprete di comandi"
  - "comandi, esecuzione"
  - "system (funzione)"
  - "tsystem (funzione)"
  - "wsystem (funzione)"
ms.assetid: 7d3df2b6-f742-49ce-bf52-012b0aee3df5
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# system, _wsystem
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue un comando.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int system(  
   const char *command   
);  
int _wsystem(  
   const wchar_t *command   
);  
```  
  
#### Parametri  
 `command`  
 Comando da eseguire.  
  
## Valore restituito  
 Se `command` è `NULL` e viene trovato l'interprete dei comandi, restituisce un valore diverso da zero.  Se l'interprete dei comandi non viene trovato, restituisce 0 e imposta `errno` su `ENOENT`.  Se `command` non è `NULL`, `system` restituisce il valore restituito dall'interprete dei comandi.  Restituisce il valore 0 solo se l'interprete dei comandi restituisce il valore 0.  Il valore restituito di \-1 indica un errore e `errno` viene impostato su uno dei seguenti valori:  
  
 `E2BIG`  
 L'elenco degli argomenti \(che è dipendente dal sistema\) è troppo grande.  
  
 `ENOENT`  
 L'interprete dei comandi non viene trovato.  
  
 `ENOEXEC`  
 Il file dell'interprete dei comandi non può essere eseguito perché il formato non è valido.  
  
 `ENOMEM`  
 Memoria insufficiente per eseguire il comando; la memoria disponibile è stata danneggiata; esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.  
  
 Per ulteriori informazioni su questi codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `system` passa `command` all'interprete dei comandi che esegue la stringa come un comando del sistema operativo.  `system` usa le variabili di ambiente `COMSPEC` e `PATH` per individuare il file CMD.exe dell'interprete dei comandi.  Se `command` è `NULL`, la funzione verifica solo se l'interprete dei comandi esiste.  
  
 È necessario chiudere o svuotare in modo esplicito qualsiasi flusso, usando `fflush` o `_flushall`, prima di chiamare `system`.  
  
 `_wsystem` è una versione a caratteri wide di `system`; l'argomento `command` in `_wsystem` è una stringa di caratteri wide.  A parte ciò, queste funzioni si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tsystem`|`system`|`system`|`_wsystem`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`system`|\<process.h\> o \<stdlib.h\>|  
|`_wsystem`|\<process.h\>, \<stdlib.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 In questo esempio si usa `system` per digitare un file di testo.  
  
```  
// crt_system.c  
  
#include <process.h>  
  
int main( void )  
{  
   system( "type crt_system.txt" );  
}  
```  
  
## Input: crt\_system.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Line one.  
Line two.  
```  
  
## Equivalente .NET Framework  
  
-   [Classe System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)  
  
-   [Classe System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_flushall](../../c-runtime-library/reference/flushall.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)