---
title: "_cexit, _c_exit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_c_exit"
  - "_cexit"
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
  - "_cexit"
  - "c_exit"
  - "_c_exit"
  - "cexit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_c_exit (funzione)"
  - "_cexit (funzione)"
  - "c_exit (funzione)"
  - "cexit (funzione)"
  - "operazioni di pulizia durante i processi"
ms.assetid: f3072045-9924-4b1a-9fef-b0dcd6d12663
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _cexit, _c_exit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue le operazioni di pulizia e restituisce senza terminare il processo.  
  
## Sintassi  
  
```  
void _cexit( void );  
void _c_exit( void );  
```  
  
## Note  
 Le chiamate di funzione `_cexit`, nell'ordine last in first, first out \(LIFO\), delle funzioni registrate da `atexit` e `_onexit`.  Quindi `_cexit` elimina tutti i buffer di I\/O e chiude tutti i flussi aperti prima di restituire.  `_c_exit` è uguale a `_exit` ma restituisce al processo chiamante senza eseguire l'elaborazione di `atexit` o di `_onexit` o senza svuotare il buffer del flusso.  Il comportamento di `exit`,`_exit`, `_cexit`, e `_c_exit` è illustrato nella tabella seguente.  
  
|Funzione|Comportamento|  
|--------------|-------------------|  
|`exit`|Esegue le procedure complete di terminazione della libreria di C, termina il processo e terminata con il codice di stato fornito.|  
|`_exit`|Esegue le procedure veloci di terminazione della libreria di C, termina il processo e terminata con il codice di stato fornito.|  
|`_cexit`|Esegue le procedure complete di terminazione della libreria di C e ritorna al chiamante, ma non termina il processo.|  
|`_c_exit`|Esegue le procedure veloci di terminazione della libreria di C e ritorna al chiamante, ma non termina il processo.|  
  
 Quando si chiamano le funzioni `_c_exit` o `_cexit`, i distruttori per gli oggetti temporanei o automatici presenti al momento della chiamata non vengono chiamati.  Un oggetto automatico è un oggetto che è definito in una funzione in cui l'oggetto non è dichiarato come statico.  Un oggetto temporaneo è un oggetto creato dal compilatore.  Per eliminare un oggetto automatico prima di chiamare `_cexit` o `_c_exit`, chiamare in modo esplicito il distruttore dell'oggetto, come segue:  
  
```  
myObject.myClass::~myClass( );  
```  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_cexit`|\<process.h\>|  
|`_c_exit`|\<process.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 [System::Diagnostics::Process::CloseMainWindow](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.closemainwindow.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_onexit, \_onexit\_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, \_wsystem](../../c-runtime-library/reference/system-wsystem.md)