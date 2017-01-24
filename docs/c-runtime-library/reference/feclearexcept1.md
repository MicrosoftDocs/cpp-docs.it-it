---
title: "feclearexcept | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "feclearexcept"
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
  - "feclearexcept"
  - "fenv/feclearexcept"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione feclearexcept"
ms.assetid: ef419da3-c248-4432-b53c-8e7a475d9533
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# feclearexcept
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tenta di cancellare i flag di eccezione a virgola mobile specificati dall'argomento.  
  
## Sintassi  
  
```  
int feclearexcept(  
   int excepts  
);  
```  
  
#### Parametri  
 `excepts`  
 I flag di stato di eccezione per cancellare.  
  
## Valore restituito  
 Restituisce zero se `excepts` è zero, oppure se sono state cancellate tutte le eccezioni specificate. In caso contrario, restituisce un valore diverso da zero.  
  
## Note  
 Il `feclearexcept` funzione tenta di cancellare mobile punto specificato dal flag di stato di eccezione `excepts`. La funzione supporta queste macro delle eccezioni, definite in fenv. h:  
  
|Macro \(eccezione\)|Descrizione|  
|-------------------------|-----------------|  
|FE\_DIVBYZERO|Si è verificato un errore singolarità o polo in un'operazione a virgola mobile in precedenza. è stato creato un valore infinito.|  
|FE\_INEXACT|La funzione è stata forzata per arrotondare il risultato archiviato di un'operazione a virgola mobile in precedenza.|  
|FE\_INVALID|Si è verificato un errore di dominio in un'operazione a virgola mobile in precedenza.|  
|FE\_OVERFLOW|Si è verificato un errore di intervallo; un risultato dell'operazione a virgola mobile precedente è troppo grande per essere rappresentato.|  
|FE\_UNDERFLOW|Un risultato dell'operazione a virgola mobile precedente era troppo piccolo per essere rappresentare con la massima precisione; un valore denormal è stato creato.|  
|FE\_ALLEXCEPT|L'operatore OR bit per bit di tutte supportate eccezioni a virgola mobile.|  
  
 Il `excepts` argomento può essere zero o l'operatore OR bit per bit di uno o più delle macro eccezione supportati. Il risultato di qualsiasi altro valore di argomento non è definito.  
  
## Requisiti  
  
|Funzione|Intestazione C|Intestazione C\+\+|  
|--------------|--------------------|------------------------|  
|`feclearexcept`|\<fenv.h\>|\<cfenv\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fetestexcept](../../c-runtime-library/reference/fetestexcept1.md)