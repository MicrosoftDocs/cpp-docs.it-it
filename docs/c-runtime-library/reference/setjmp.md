---
title: "setjmp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "setjmp"
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
  - "setjmp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "programmi [C++], salvataggio degli stati"
  - "stato corrente"
  - "setjmp (funzione)"
ms.assetid: 684a8b27-e8eb-455b-b4a8-733ca1cbd7d2
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# setjmp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Salva lo stato corrente del programma.  
  
## Sintassi  
  
```  
int setjmp(  
   jmp_buf env   
);  
```  
  
#### Parametri  
 `env`  
 Variabile in cui viene archiviato l'ambiente.  
  
## Valore restituito  
 Restituisce 0 dopo aver salvato l'ambiente dello stack.  Se `setjmp` ritorna come risultato di una chiamata di `longjmp`, restituisce l'oggetto `value` di `longjmp`, o se l'argomento `value` di `longjmp` è 0, `setjmp` restituisce 1.  Nessun ritorno di errore.  
  
## Note  
 La funzione `setjmp` salva un ambiente dello stack, che successivamente è possibile ripristinare, utilizzando `longjmp`.  Quando `setjmp` e `longjmp` vengono utilizzate insieme, offrono un metodo per eseguire `goto` non in locale.  In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni normali di chiamata o restituzione.  
  
 Una chiamata a `setjmp` salva l'ambiente corrente dello stack in `env`.  Una chiamata successiva a `longjmp` ripristina l'ambiente salvato e ritorna il controllo al punto immediatamente successivo alla corrispondente chiamata `setjmp`.  Tutti i valori di tutte le variabili \(eccetto le variabili del registro\), accessibili al controllo di ricevimento di routine, contengono i valori che avevano quando `longjmp` è stato chiamato.  
  
 Non è possibile utilizzare `setjmp` per passare dal codice nativo al codice gestito.  
  
 **Nota** `setjmp` e `longjmp` non supportano la semantica di oggetti C\+\+.  In programmi C\+\+, utilizzare il meccanismo di gestione delle eccezioni C\+\+.  
  
 Per ulteriori informazioni, vedere [Utilizzo di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`setjmp`|\<setjmp.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere un esempio per [\_fpreset](../../c-runtime-library/reference/fpreset.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [longjmp](../../c-runtime-library/reference/longjmp.md)   
 [\_setjmp3](../../c-runtime-library/setjmp3.md)