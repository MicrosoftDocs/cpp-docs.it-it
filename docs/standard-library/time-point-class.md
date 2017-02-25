---
title: "Classe time_point | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::chrono::time_point"
dev_langs: 
  - "C++"
ms.assetid: 18be1e52-57b9-489a-8a9b-f58894f0aaad
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe time_point
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un `time_point` descrive un tipo che rappresenta un determinato momento.  Utilizza un oggetto di tipo [durata](../standard-library/duration-class.md) che memorizza il tempo trascorso dall'epoca che è rappresentata dall'argomento di template `Clock`.  
  
## Sintassi  
  
```  
template<  
   class Clock,  
   class Duration = typename Clock::duration  
>  
class time_point;  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`time_point::clock`|Sinonimo del parametro di template `Clock`.|  
|`time_point::duration`|Sinonimo del parametro di template `Duration`.|  
|`time_point::period`|Sinonimo del nome del tipo annidato `duration::period`.|  
|`time_point::rep`|Sinonimo del nome del tipo annidato `duration::rep`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore time\_point::time\_point](../Topic/time_point::time_point%20Constructor.md)|Costruisce un oggetto `time_point`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo time\_point::max](../Topic/time_point::max%20Method.md)|Specifica il limite superiore per `time_point::ref`.|  
|[Metodo time\_point::min](../Topic/time_point::min%20Method.md)|Specifica il limite inferiore per `time_point::ref`.|  
|[Metodo time\_point::time\_since\_epoch](../Topic/time_point::time_since_epoch%20Method.md)|Restituisce il valore archiviato `duration`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore time\_point::operator\+\=](../Topic/time_point::operator+=%20Operator.md)|Aggiunge un valore specificato alla durata archiviata.|  
|[Operatore time\_point::operator\-\=](../Topic/time_point::operator-=%20Operator.md)|Sottrae un valore specificato dalla durata archiviata.|  
  
## Requisiti  
 **Intestazione:** chrono  
  
 **Spazio dei nomi:** std::chrono  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono\>](../standard-library/chrono.md)