---
title: "Classe time_put | Microsoft Docs"
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
  - "std::time_put"
  - "time_put"
  - "xloctime/std::time_put"
  - "std.time_put"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time_put (classe)"
ms.assetid: df79493e-3331-48d2-97c3-ac3a745f0791
caps.latest.revision: 22
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe time_put
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori temporali in sequenze di tipo `CharType`.  
  
## Sintassi  
  
```  
template <  
   class CharType,  
   class OutputIterator = ostreambuf_iterator<CharType>  
> class time_put : public locale::facet;  
```  
  
#### Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
 `OutputIterator`  
 Tipo di iteratore in cui le funzioni temporali put scrivono il proprio output.  
  
## Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero.  Il primo tentativo di accedere al relativo valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
### Costruttori  
  
|||  
|-|-|  
|[time\_put](../Topic/time_put::time_put.md)|Costruttore per oggetti di tipo `time_put`.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/time_put::char_type.md)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter\_type](../Topic/time_put::iter_type.md)|Tipo che descrive un iteratore di output.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[do\_put](../Topic/time_put::do_put.md)|Funzione virtuale che restituisce informazioni sulla data e l'ora come sequenza di `CharType`.|  
|[put](../Topic/time_put::put.md)|Restituisce informazioni sulla data e l'ora come sequenza di `CharType`.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<locale\>](../standard-library/locale.md)   
 [Classe time\_base](../standard-library/time-base-class.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)