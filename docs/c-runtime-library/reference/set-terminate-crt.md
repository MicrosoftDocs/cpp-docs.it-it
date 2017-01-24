---
title: "set_terminate (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "set_terminate"
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
  - "set_terminate"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "gestione eccezioni, chiusura"
  - "set_terminate (funzione)"
  - "terminate (funzione)"
ms.assetid: 3ff1456a-7898-44bc-9266-a328a80b6006
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# set_terminate (CRT)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Installa la propria routine di terminazione che deve essere chiamata da `terminate`.  
  
## Sintassi  
  
```  
terminate_function set_terminate(  
   terminate_function termFunction  
);  
```  
  
#### Parametri  
 `termFunction`  
 Puntatore a una funzione di terminazione scritta dall'utente.  
  
## Valore restituito  
 Restituisce un puntatore alla funzione precedente registrata da `set_terminate`, in modo che la funzione precedente possa essere ripristinata in un secondo momento.  Se nessuna funzione precedente è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; questo valore può essere NULL.  
  
## Note  
 La funzione `set_terminate` installa `termFunction` come funzione chiamata da `terminate`.  `set_terminate` viene utilizzato con la gestione delle eccezioni di C\+\+ e può essere chiamato in un punto qualsiasi nel programma prima che l'eccezione venga generata.  `terminate` chiama `abort` per impostazione predefinita.  È possibile modificare questa impostazione predefinita scrivendo una funzione di terminazione e chiamando `set_terminate` con il nome della funzione come argomento.  `terminate` chiama l'ultima funzione fornita come argomento di `set_terminate`.  Dopo aver eseguito le attività si di pulizia desiderate, è consigliabile che `termFunction` esca dal programma.  Se non esce \(se restituisce al relativo chiamante\), viene chiamato `abort`.  
  
 In un ambiente multithreading, le funzioni di terminazione sono gestite separatamente per ogni thread.  Ogni nuova thread necessita l'installazione della propria funzione di terminazione.  Quindi, ogni thread è responsabile della gestione della propria terminazione.  
  
 Il tipo `terminate_function` è definito in EH.H come puntatore a una funzione di terminazione definita dall'utente, `termFunction` che restituisce `void`.  La funzione personalizzata `termFunction` non può accettare argomenti e non deve restituire al chiamante.  Se restituisce, viene chiamato `abort`.  Un'eccezione non può essere generata all'interno di `termFunction`.  
  
```  
typedef void ( *terminate_function )( );  
```  
  
> [!NOTE]
>  La funzione `set_terminate` funziona solo all'esterno del debugger.  
  
 Esiste un unico gestore `set_terminate` per tutti i file DLL o EXE collegati in modo dinamico; anche se si chiama `set_terminate`, è possibile che il proprio gestore venga sostituito da un altro, oppure che sostituisca un gestore impostato da un altro file DLL o EXE.  
  
 Questa funzione non è supportata con **\/clr:pure**.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`set_terminate`|\<eh.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio per [terminate](../../c-runtime-library/reference/terminate-crt.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [\_get\_terminate](../../c-runtime-library/reference/get-terminate.md)   
 [set\_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)