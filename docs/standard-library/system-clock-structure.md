---
title: "Struttura system_clock | Microsoft Docs"
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
  - "chrono/std::chrono::system_clock"
dev_langs: 
  - "C++"
ms.assetid: a97bd46e-267a-4836-9f7d-af1f664e99ae
caps.latest.revision: 14
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struttura system_clock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un *tipo di clock* basato sull'orologio in tempo reale del sistema.  
  
## Sintassi  
  
```  
struct system_clock;  
```  
  
## Note  
 Un *tipo di clock* viene usato per ottenere l'ora corrente come ora UTC.  Il tipo incorpora la creazione di un'istanza di [duration](../standard-library/duration-class.md) e il modello di classe [time\_point](../standard-library/time-point-class.md) e definisce una funzione membro statica `now()` che restituisce l'ora.  
  
 Un clock è *monotonico* se il valore restituito da una prima chiamata a `now()` è sempre minore di o uguale al valore restituito da una chiamata successiva a `now()`.  
  
 Un clock è *costante* se è *monotonico* e se il tempo tra i cicli macchina è costante.  
  
 In questa implementazione, un `system_clock` è sinonimo di un `high_resolution_clock`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`system_clock::duration`|Sinonimo di `duration<rep, period>`.|  
|`system_clock::period`|Un sinonimo del tipo che viene usato per rappresentare il periodo dei cicli macchina nella creazione di un'istanza contenuta di `duration`.|  
|`system_clock::rep`|Un sinonimo del tipo che viene usato per rappresentare il numero di cicli macchina nella creazione di un'istanza contenuta di `duration`.|  
|`system_clock::time_point`|Un sinonimo per `time_point<Clock, duration>`, dove `Clock` è un sinonimo per il tipo di clock stesso o un altro tipo di clock che si basa su epoch stesso e ha lo stesso tipo `duration` nidificato.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo system\_clock::from\_time\_t](../Topic/system_clock::from_time_t%20Method.md)|Statico.  Restituisce un oggetto `time_point` che più si avvicina un'ora specificata.|  
|[Metodo system\_clock::now](../Topic/system_clock::now%20Method.md)|Statico.  Restituisce l'ora corrente.|  
|[Metodo system\_clock::to\_time\_t](../Topic/system_clock::to_time_t%20Method.md)|Statico.  Restituisce un oggetto `time_t` che più si avvicina un oggetto `time_point` specificato.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante system\_clock::is\_monotonic](../Topic/system_clock::is_monotonic%20Constant.md)|Specifica se il tipo di clock è monotonico.|  
|[Costante system\_clock::is\_steady](../Topic/system_clock::is_steady%20Constant.md)|Specifica se il tipo di clock è costante.|  
  
## Requisiti  
 **Intestazione:** chrono  
  
 **Spazio dei nomi:** std::chrono  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono\>](../standard-library/chrono.md)   
 [Struct steady\_clock](../standard-library/steady-clock-struct.md)