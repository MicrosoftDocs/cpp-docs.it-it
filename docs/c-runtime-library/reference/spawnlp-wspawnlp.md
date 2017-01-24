---
title: "_spawnlp, _wspawnlp | Microsoft Docs"
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
  - "_wspawnlp"
  - "_spawnlp"
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
  - "_wspawnlp"
  - "wspawnlp"
  - "_spawnlp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wspawnlp (funzione)"
  - "_spawnlp (funzione)"
  - "processi, creazione"
  - "processi, esecuzione di nuovi"
  - "_wspawnlp (funzione)"
  - "creazione di processi"
  - "spawnlp (funzione)"
ms.assetid: 74fc6e7a-4f24-4103-9387-7177875875e6
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _spawnlp, _wspawnlp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea ed esegue un nuovo processo.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
intptr_t _spawnlp(  
   int mode,  
   const char *cmdname,  
   const char *arg0,  
   const char *arg1,  
   ... const char *argn,  
   NULL   
);  
intptr_t _wspawnlp(  
   int mode,  
   const wchar_t *cmdname,  
   const wchar_t *arg0,  
   const wchar_t *arg1,  
   ... const wchar_t *argn,  
   NULL   
);  
```  
  
#### Parametri  
 `mode`  
 Modalità di esecuzione del processo chiamante.  
  
 `cmdname`  
 Percorso del file da eseguire.  
  
 `arg0, arg1, ... argn`  
 Elenco dei puntatori agli argomenti. L'argomento `arg0` è solitamente un puntatore a `cmdname`. Gli argomenti da `arg1` a `argn` sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. Dopo `argn`, ci deve essere un puntatore `NULL` per contrassegnare la fine dell'elenco di argomenti.  
  
## Valore restituito  
 Il valore restituito da un oggetto sincrono `_spawnlp`  o `_wspawnlp`  \(`_P_WAIT`  specificato per `mode`\) è lo stato di uscita del nuovo processo. Il valore restituito da un `_spawnlp` asincrono o `_wspawnlp` \(`_P_NOWAIT` o `_P_NOWAITO` specificato per `mode`\) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato chiama specificatamente la routine `exit` con un argomento diverso da zero. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Il valore restituito \-1 indica un errore \(il nuovo processo non è avviato\). In questo caso, `errno` è impostato su uno dei valori indicati di seguito.  
  
 `E2BIG`  
 L'elenco di argomenti supera i 1024 byte.  
  
 `EINVAL`  
 L'argomento `mode` non è valido.  
  
 `ENOENT`  
 Il file o il percorso non è stato trovato.  
  
 `ENOEXEC`  
 Il file specificato non è eseguibile o il formato del file eseguibile non è valido.  
  
 `ENOMEM`  
 Memoria insufficiente per eseguire il nuovo processo.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Ognuna di queste funzioni crea ed esegue un nuovo processo, passando ogni argomento della riga di comando come parametro separato e usando la variabile di ambiente `PATH` per trovare il file da eseguire.  
  
 Queste funzioni convalidano i relativi parametri. Se `cmdname` o `arg0` è una stringa vuota o un puntatore Null, queste funzioni generano un'eccezione di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono \-1. Nessun nuovo processo viene generato.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_spawnlp`|\<process.h\>|  
|`_wspawnlp`|\<stdio.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio in [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md).  
  
## Equivalente .NET Framework  
  
-   [System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)  
  
-   [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_flushall](../../c-runtime-library/reference/flushall.md)   
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [\_onexit, \_onexit\_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [system, \_wsystem](../../c-runtime-library/reference/system-wsystem.md)