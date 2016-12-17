---
title: "_lsearch_s | Microsoft Docs"
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
  - "_lsearch_s"
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
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_lsearch_s"
  - "lsearch_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_lsearch_s (funzione)"
  - "matrici [CRT], ricerca"
  - "chiavi, ricerca in matrici"
  - "ricerca lineare"
  - "lsearch_s (funzione)"
  - "ricerca, lineari"
  - "valori, ricerca"
ms.assetid: d2db0635-be7a-4799-8660-255f14450882
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _lsearch_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue una ricerca lineare di un valore.  Una versione di [\_lsearch](../../c-runtime-library/reference/lsearch.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
void *_lsearch_s(  
   const void *key,  
   void *base,  
   unsigned int *num,  
   size_t size,  
   int (__cdecl *compare)(void *, const void *, const void *),  
   void * context  
);  
```  
  
#### Parametri  
 `key`  
 Oggetto da ricercare.  
  
 `base`  
 Puntatore alla base dell'array da cercare.  
  
 `num`  
 Numero di elementi  
  
 `size`  
 Dimensione di ciascun elemento della matrice in byte.  
  
 `compare`  
 Puntatore alla routine di confronto.  Il secondo parametro è un puntatore alla chiave per la ricerca.  Il terzo parametro è un puntatore ad un elemento dell'array da confrontare con la chiave.  
  
 `context`  
 Un puntatore a un oggetto che dev'essere accessibile nella funzione di confronto.  
  
## Valore restituito  
 Se `key` viene trovata, `_lsearch_s` restituisce un puntatore all'elemento dell'array a `base` che corrisponde a `key`.  Se `key` non viene trovata, `_lsearch_s` restituisce un puntatore all'elemento appena aggiunto alla fine dell'array.  
  
 Se alla funzione vengono passati parametri invalidi, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, allora `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### Condizioni di errore  
  
|`key`|`base`|`compare`|`num`|`size`|`errno`|  
|-----------|------------|---------------|-----------|------------|-------------|  
|`NULL`|any|any|any|any|`EINVAL`|  
|any|`NULL`|any|\!\= 0|any|`EINVAL`|  
|any|any|any|any|zero|`EINVAL`|  
|any|any|`NULL`|un|any|`EINVAL`|  
  
## Note  
 La funzione `_lsearch_s` esegue una ricerca lineare del valore `key` in un array di `num` elementi, ognuno di `width` byte.  A differenza di `bsearch_s`, `_lsearch_s` non richiede che l'array sia ordinato.  Se `key` non viene trovato, allora `_lsearch_s` lo aggiunge alla fine dell'array e incrementa `num`.  
  
 La funzione `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di un array e restituisce un valore che specifica la loro relazione.  La funzione `compare` accetta anche il puntatore al contesto come primo argomento.  `_lsearch_s` chiama `compare` una o più volte durante la ricerca, passando i puntatori a due elementi di array ad ogni chiamata.  `compare` deve confrontare gli elementi e quindi restituire un valore diverso da zero \(che indica che gli elementi sono differenti\) o 0 \(che indica che gli elementi sono identici\).  
  
 Il puntatore `context` può essere utile se la struttura dei dati trovata fa parte di un oggetto e la funzione `compare` deve accedere ai relativi membri.  Ad esempio, il codice della funzione `compare` può eseguire il cast del puntatore void al tipo di oggetto appropriato e ai membri di accesso dell'oggetto.  L'aggiunta del puntatore `context` viene rende `_lsearch_s` più sicuro perché il contesto aggiuntivo può essere utilizzato per evitare il rientro dei bug associati utilizzando variabili statiche per rendere disponibili i dati della funzione `compare`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_lsearch_s`|\<search.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch\_s](../../c-runtime-library/reference/bsearch-s.md)   
 [\_lfind\_s](../../c-runtime-library/reference/lfind-s.md)   
 [\_lsearch](../../c-runtime-library/reference/lsearch.md)