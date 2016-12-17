---
title: "memcpy, wmemcpy | Microsoft Docs"
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
  - "memcpy"
  - "wmemcpy"
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
  - "wmemcpy"
  - "memcpy"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "memcpy (funzione)"
  - "wmemcpy (funzione)"
ms.assetid: 34abb90b-bffb-46dc-a2f3-a5e9940839d6
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# memcpy, wmemcpy
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia i byte tra i buffer.  Sono disponibili versioni più sicure di queste funzioni. Vedere [memcpy\_s, wmemcpy\_s](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md).  
  
## Sintassi  
  
```  
void *memcpy(  
   void *dest,  
   const void *src,  
   size_t count   
);  
wchar_t *wmemcpy(  
   wchar_t *dest,  
   const wchar_t *src,  
   size_t count  
);  
```  
  
#### Parametri  
 `dest`  
 Nuovo buffer.  
  
 `src`  
 Buffer da cui copiare.  
  
 `count`  
 Numero di caratteri da copiare.  
  
## Valore restituito  
 Valore di `dest`.  
  
## Note  
 `memcpy` copia `count` byte da `src` a `dest`; `wmemcpy` copia `count` caratteri wide \(due byte\).  Se l'origine e la destinazione si sovrappongono, il comportamento di `memcpy` non è definito.  Usare `memmove` per gestire le aree di sovrapposizione.  
  
> [!IMPORTANT]
>  Verificare che il buffer di destinazione abbia una dimensione maggiore o uguale al buffer di origine.  Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
> [!IMPORTANT]
>  Poiché sono stati rilevati molti sovraccarichi del buffer e, di conseguenza, potenziali attacchi alla sicurezza dovuti a un utilizzo non corretto di `memcpy`, questa funzione viene elencata tra le funzioni "bloccate" da Security Development Lifecycle \(SDL\).  Alcune classi di libreria VC\+\+ potrebbero continuare a usare `memcpy`.  Inoltre, l'utilità di ottimizzazione del compilatore VC\+\+ a volte emette chiamate a `memcpy`.  Il prodotto Visual C\+\+ viene sviluppato in conformità con il processo SDL, quindi l'utilizzo di questa funzione bloccata è stato esaminato attentamente.  In caso di utilizzo della funzione da parte di una libreria, le chiamate sono state analizzate attentamente per assicurare il blocco dei sovraccarichi del buffer attraverso tali chiamate.  Nel caso del compilatore, a volte alcuni modelli di codice vengono riconosciuti come identici rispetto al modello di `memcpy` e vengono quindi sostituiti con una chiamata alla funzione.  In questi casi, l'utilizzo di `memcpy` non è più rischioso di quanto lo sarebbero state le istruzioni originali; è stata semplicemente eseguita l'ottimizzazione a una chiamata per la funzione con prestazioni ottimizzate `memcpy`.  Il semplice utilizzo delle funzioni CRT "sicure" non garantisce la protezione \(rendono solo il sistema un po' meno insicuro\), così come l'utilizzo delle funzioni "bloccate" non espone maggiormente a rischi \(richiedono solo un controllo maggiore che ne garantisca la sicurezza\).  
>   
>  Poiché l'utilizzo di `memcpy` da parte del compilatore e delle librerie VC\+\+ è stato analizzato molto in dettaglio, queste chiamate sono permesse all'interno del codice conforme a SDL.  Le chiamate a `memcpy` introdotte nel codice sorgente dell'applicazione sono conformi a SDL solo quando il loro utilizzo è stato esaminato da esperti di sicurezza.  
  
 Le funzioni `memcpy` e `wmemcpy` verranno deprecate solo se la costante `_CRT_SECURE_DEPRECATE_MEMORY` è definita prima dell'istruzione di inclusione in modo che funzioni vengano deprecate, come nell'esempio seguente:  
  
```  
#define _CRT_SECURE_DEPRECATE_MEMORY  
#include <memory.h>  
```  
  
 oppure  
  
```  
#define _CRT_SECURE_DEPRECATE_MEMORY  
#include <wchar.h>  
```  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`memcpy`|\<memory.h\> o \<string.h\>|  
|`wmemcpy`|\<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere [memmove](../../c-runtime-library/reference/memmove-wmemmove.md) per un esempio sull'utilizzo di `memcpy`.  
  
## Vedere anche  
 [Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)   
 [\_memccpy](../../c-runtime-library/reference/memccpy.md)   
 [memchr, wmemchr](../../c-runtime-library/reference/memchr-wmemchr.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [memmove, wmemmove](../../c-runtime-library/reference/memmove-wmemmove.md)   
 [memset, wmemset](../../c-runtime-library/reference/memset-wmemset.md)   
 [strcpy\_s, wcscpy\_s, \_mbscpy\_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md)   
 [strncpy\_s, \_strncpy\_s\_l, wcsncpy\_s, \_wcsncpy\_s\_l, \_mbsncpy\_s, \_mbsncpy\_s\_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)