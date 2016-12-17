---
title: "Struct steady_clock | Microsoft Docs"
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
  - "chrono/std::chrono::steady_clock"
dev_langs: 
  - "C++"
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
caps.latest.revision: 14
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct steady_clock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un clock `steady`.  
  
## Sintassi  
  
```  
struct steady_clock;  
```  
  
## Note  
 In Windows, steady\_clock esegue il wrapping della funzione QueryPerformanceCounter.  
  
 Un clock è *monotonico* se il valore restituito da una prima chiamata a `now()` è sempre minore di o uguale al valore restituito da una chiamata successiva a `now()`.  
  
 Un clock è *costante* se è *monotonico* e se il tempo tra i cicli macchina è costante.  
  
 High\_resolution\_clock è un typedef per steady\_clock.  
  
## Funzioni pubbliche  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|now|Restituisce l'ora corrente come valore time\_point.|  
  
## Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`system_clock::is_steady`|Contiene `true`.  Un oggetto `steady_clock` è *costante*.|  
  
## Requisiti  
 **Intestazione:** chrono  
  
 **Spazio dei nomi:** std::chrono  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono\>](../standard-library/chrono.md)   
 [Struttura system\_clock](../standard-library/system-clock-structure.md)