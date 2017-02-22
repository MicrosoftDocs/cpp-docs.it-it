---
title: "set_unexpected (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "set_unexpected"
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
apitype: "DLLExport"
f1_keywords: 
  - "set_unexpected"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eccezioni, chiusura"
  - "set_unexpected (funzione)"
  - "funzione non prevista"
ms.assetid: ebcef032-4771-48e5-88aa-2a1ab8750aa6
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# set_unexpected (CRT)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Installa una funzione di terminazione che deve essere chiamata da `unexpected`.  
  
## Sintassi  
  
```  
unexpected_function set_unexpected(  
   unexpected_function unexpFunction   
);  
```  
  
#### Parametri  
 `unexpFunction`  
 Puntatore a una funzione si scrive per sostituire la funzione `unexpected`.  
  
## Valore restituito  
 Restituisce un puntatore alla funzione precedente di terminazione registrata da `_set_unexpected`, in modo che la funzione precedente possa essere ripristinata in un secondo momento.  Se nessuna funzione precedente è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; questo valore può essere NULL.  
  
## Note  
 La funzione `set_unexpected` installa `unexpFunction` come funzione chiamata da `unexpected`.  `unexpected` non è utilizzato nell'implementazione della gestione delle eccezioni C\+\+ corrente.  Il tipo `unexpected_function` è definito in EH.H come puntatore a una funzione unexpected definita dall'utente, `unexpFunction` che restituisce `void`.  La funzione personalizzata di `unexpFunction` non deve restituire al relativo chiamante.  
  
```  
typedef void ( *unexpected_function )( );  
```  
  
 Per impostazione predefinita, `unexpected` chiama `terminate`.  È possibile modificare questo comportamento predefinito scrivendo una funzione di terminazione e chiamando `set_unexpected` con il nome della funzione come suo argomento.  `unexpected` chiama l'ultima funzione fornita come argomento di `set_unexpected`.  
  
 A differenza della funzione personalizzata di chiusura installata da una chiamata a `set_terminate`, è possibile che venga generata un'eccezione da `unexpFunction`.  
  
 In un ambiente multithreading, le funzioni unexpected sono gestite separatamente per ogni thread.  Ogni nuova thread necessita dell'installazione della propria funzione unexpected.  Quindi, ogni thread è responsabile della gestione della propria gestione di unexpected.  
  
 Nell'implementazione Microsoft corrente di gestione delle eccezioni C\+\+, `unexpected` chiama `terminate` per impostazione predefinita e non viene mai chiamato dalla libreria di runtime di gestione delle eccezioni.  Non vi sono vantaggi particolari a chiamare `unexpected` anziché `terminate`.  
  
 Esiste un singolo gestore `set_unexpected` per tutti i file DLL o EXE collegati in modo dinamico; anche se si chiama `set_unexpected`, è possibile che il proprio gestore venga sostituito da un altro, oppure che sostituisca un gestore impostato da un altro file DLL o EXE.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`set_unexpected`|\<eh.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [\_get\_unexpected](../../c-runtime-library/reference/get-unexpected.md)   
 [set\_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)