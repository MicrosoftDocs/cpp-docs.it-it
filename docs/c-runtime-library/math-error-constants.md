---
title: "Costanti di errori matematici | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_PLOSS"
  - "_UNDERFLOW"
  - "_TLOSS"
  - "_SING"
  - "_DOMAIN"
  - "_OVERFLOW"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_DOMAIN (costante)"
  - "_OVERFLOW (costante)"
  - "_PLOSS (costante)"
  - "_SING (costante)"
  - "_TLOSS (costante)"
  - "_UNDERFLOW (costante)"
  - "DOMAIN (costante)"
  - "costanti di errori matematici"
  - "OVERFLOW (costante)"
  - "PLOSS (costante)"
  - "SING (costante)"
  - "TLOSS (costante)"
  - "UNDERFLOW (costante)"
ms.assetid: 4be933a6-674e-45a5-8ac9-090023542f5b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti di errori matematici
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <math.h>  
  
```  
  
## Note  
 Le routine matematiche della libreria di runtime possono generare costanti matematiche di errore.  
  
 Questi errori, descritti di seguito, corrispondono a tipi di eccezione definiti in MATH.H e vengono restituiti dalla funzione `_matherr` quando si verifica un errore matematico.  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_DOMAIN`|L'argomento della funzione è nel dominio esterno della funzione.|  
|`_OVERFLOW`|Il risultato è troppo grande per essere rappresentato nel tipo restituito della funzione.|  
|`_PLOSS`|Si è verificata una perdita parziale di significato.|  
|`_SING`|Singolarità dell'argomento: l'argomento a funzione contiene un valore non valido. \(Ad esempio, viene passato il valore 0 alla funzione che richiede un valore diverso da zero.\)|  
|`_TLOSS`|Si è verificata una perdita totale di significato.|  
|`_UNDERFLOW`|Il risultato è troppo piccolo per essere rappresentato.|  
  
## Vedere anche  
 [\_matherr](../c-runtime-library/reference/matherr.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)