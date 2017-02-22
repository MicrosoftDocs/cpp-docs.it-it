---
title: "_CrtSetAllocHook | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetAllocHook"
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
  - "_CrtSetAllocHook"
  - "CrtSetAllocHook"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtSetAllocHook (funzione)"
  - "CrtSetAllocHook (funzione)"
ms.assetid: 405df37b-2fd1-42c8-83bc-90887f17f29d
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _CrtSetAllocHook
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Installa una funzione di allocazione definita dal client agganciandola al processo di allocazione della memoria di debug della fase di runtime del linguaggio C \(solo versione di debug\).  
  
## Sintassi  
  
```  
_CRT_ALLOC_HOOK _CrtSetAllocHook(  
   _CRT_ALLOC_HOOK allocHook   
);  
```  
  
#### Parametri  
 `allocHook`  
 Nuova funzione di allocazione definita dal client da associare nel processo del dump dell'allocazione della memoria di debug CRT.  
  
## Valore restituito  
 Restituisce la funzione hook di allocazione definita in precedenza, o `NULL` se `allocHook` è `NULL`.  
  
## Note  
 `_CrtSetAllocHook` consente ad un'applicazione di associare la propria funzione di allocazione nel processo di allocazione della memoria della libreria di debug CRT.  Di conseguenza, ogni chiamata a una funzione di allocazione di debug per allocare, riallocare, o liberare un blocco di memoria attiva una chiamata alla funzione hook dell'applicazione.  `_CrtSetAllocHook` fornisce un'applicazione con un metodo semplice per testare come l'applicazione gestisce situazioni di memoria insufficiente, la possibilità di esaminare schemi di allocazione e la possibilità di registrare le informazioni di allocazione di analisi successive.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetAllocHook` vengono rimosse durante la pre\-elaborazione.  
  
 La funzione `_CrtSetAllocHook` configura la nuova funzione di dump definita dal client specificata in `allocHook` e restituisce la funzione hook già definita.  Nell'esempio seguente viene illustrato come dovrebbe essere il prototipo di un'allocazione di hook definito dal client:  
  
```  
int YourAllocHook( int allocType, void *userData, size_t size, int   
blockType, long requestNumber, const unsigned char *filename, int   
lineNumber);  
```  
  
 L'argomento `allocType` specifica il tipo di operazione di allocazione `(_HOOK_ALLOC`, `_HOOK_REALLOC` e `_HOOK_FREE`\) che ha generato la chiamata alla funzione hook di allocazione.  Quando il tipo di allocazione di attivazione è `_HOOK_FREE`, `userData` è un puntatore alla sezione di dati utente del blocco di memoria che verrà liberato.  Tuttavia, quando il tipo di allocazione di attivazione è `_HOOK_ALLOC` o `_HOOK_REALLOC`, `userData` è `NULL` perché il blocco di memoria non è ancora stato allocato.  
  
 `size` specifica le dimensioni del blocco di memoria in byte, `blockType` indica il tipo di blocco di memoria, `requestNumber` è il numero di ordini dell'oggetto del blocco di memoria e, se disponibile, `filename` e `lineNumber` specificano il nome del file di origine e il numero di riga in cui l'operazione di allocazione di attivazione è stata avviata.  
  
 Dopo che la funzione hook ha terminato l'elaborazione, deve restituire un valore booleano, che indica al processo di allocazione principale di runtime del linguaggio C come procedere.  Quando la funzione hook intende il processo di allocazione principale per continuare come se la funzione hook non fosse mai chiamata, quest'ultima dovrà restituire `TRUE`.  In questo modo deve essere eseguita l'operazione originale di allocazione di attivazione.  Mediante questa implementazione, la funzione hook può raggruppare e salvare le informazioni di allocazione di analisi successive, senza interferire con l'operazione di allocazione o lo stato corrente dell'heap di debug.  
  
 Quando la funzione hook vuole che il processo di allocazione principale continui come se l'operazione di allocazione di attivazione venga chiamato e non riuscisse, la funzione hook dovrà restituire `FALSE`.  Mediante questa implementazione, la funzione hook può simulare un insieme di stati della memoria e degli stati dell'heap di debug per verificare come l'applicazione gestisce diverse situazioni.  
  
 Per annullare la funzione hook, passare `NULL` a `_CrtSetAllocHook`.  
  
 Per ulteriori informazioni su come `_CrtSetAllocHook` possa essere utilizzato da altre funzioni di gestione della memoria o sulla scrittura delle funzioni hook definite dal client, consultare [Scrittura di funzioni hook di debug](../Topic/Debug%20Hook%20Function%20Writing.md).  
  
> [!NOTE]
>  `_CrtSetAllocHook` non è supportato sotto `/clr:pure`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtSetAllocHook`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Per un esempio su come utilizzare `_CrtSetAllocHook`, consultare [crt\_dbg2](http://msdn.microsoft.com/it-it/21e1346a-6a17-4f57-b275-c76813089167).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_CrtGetAllocHook](../../c-runtime-library/reference/crtgetallochook.md)