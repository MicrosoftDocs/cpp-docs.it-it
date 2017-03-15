---
title: "srand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "srand"
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
  - "srand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numeri, pseudocasuali"
  - "numeri, casuali"
  - "numeri pseudocasuali"
  - "numeri casuali, generazione"
  - "punto iniziale casuale"
  - "punto iniziale casuale, impostazione"
  - "srand (funzione)"
  - "punti iniziali"
  - "punti iniziali, impostazione causale"
ms.assetid: 7bf56dc5-5692-4182-a3c1-18af98d2dd1a
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# srand
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta il valore iniziale per generare numero pseudocasuale.  
  
## Sintassi  
  
```  
void srand(  
   unsigned int seed   
);  
```  
  
#### Parametri  
 `seed`  
 Valore iniziale per la generazione di numero pseudocasuale  
  
## Note  
 La funzione `srand` imposta il punto di partenza per la generazione di una serie di integer pseudocasuali nella thread corrente.  Reinizializzare il generatore per creare la stessa sequenza di risultati, chiamare la funzione `srand` e utilizzare ancora lo stesso argomento `seed`.  Qualsiasi altro valore per `seed` imposta il generatore su un punto di partenza diverso nella sequenza pseudocasuale.  `rand` recupera i numeri pseudocasuali generati.  Chiamare `rand` prima di qualsiasi chiamata a `srand` genera la stessa sequenza di chiamate come `srand` con `seed` passato come 1.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`srand`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [rand](../../c-runtime-library/reference/rand.md).  
  
## Equivalente .NET Framework  
 [System::Random Classe](https://msdn.microsoft.com/en-us/library/system.random.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [rand](../../c-runtime-library/reference/rand.md)