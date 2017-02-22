---
title: "Struttura identity | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::identity"
  - "utility/std::identity"
  - "identity"
  - "std.identity"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classe di identità"
  - "struttura di identità"
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Struttura identity
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una struttura che fornisce una definizione di tipo come parametro di modello.  
  
## Sintassi  
  
```  
template<class Type>  
   struct identity {  
      typedef Type type;  
      Type operator()(const Type& _Left) const;  
   };  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Left`|Il valore da individuare.|  
  
## Note  
 La classe contiene la definizione di tipo public `type`, che corrisponde al tipo di parametro di modello.  Viene utilizzata insieme alla funzione [forward](../Topic/forward.md) del modello per garantire che un parametro di funzione con il tipo desiderato.  
  
 Per la compatibilità con il codice precedente, la classe definisce anche la funzione di identità `operator()` che restituisce il relativo argomento `_Left`.  
  
## Requisiti  
 utilità \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<utility\>](../standard-library/utility.md)