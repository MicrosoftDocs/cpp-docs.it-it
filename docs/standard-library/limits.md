---
title: "&lt;limits&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.<limits>"
  - "std::<limits>"
  - "limits/std::<limits>"
  - "<limits>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "limits (intestazione)"
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
caps.latest.revision: 18
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;limits&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la classe modello `numeric_limits` e due enumerazioni relative all'arrotondamento e alle rappresentazioni a virgola mobile.  
  
## Sintassi  
  
```  
  
#include <limits>  
  
```  
  
## Note  
 Le specializzazioni esplicite della classe `numeric_limits` descrivono molte proprietà dei tipi fondamentali, inclusi i tipi di carattere, integer e a virgola mobile e `bool`, che sono definite dall'implementazione anziché dalle regole del linguaggio C\+\+.  Le proprietà descritte in \<limits\> includono accuratezza, rappresentazioni con dimensioni minime e massime, arrotondamento e segnalazione degli errori di tipo.  
  
### Enumerazioni  
  
|||  
|-|-|  
|[float\_denorm\_style](../Topic/float_denorm_style.md)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.|  
|[float\_round\_style](../Topic/float_round_style.md)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe numeric\_limits](../standard-library/numeric-limits-class.md)|La classe modello descrive le proprietà aritmetiche dei tipi numerici predefiniti.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)