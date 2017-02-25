---
title: "Classe promise | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::promise"
dev_langs: 
  - "C++"
ms.assetid: 2931558c-d94a-4ba1-ac4f-20bf7b6e23f9
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Classe promise
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un *provider asincrono*.  
  
## Sintassi  
  
```  
template<class Ty>  
class promise;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore promise::promise](../Topic/promise::promise%20Constructor.md)|Costruisce un oggetto `promise`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo promise::get\_future](../Topic/promise::get_future%20Method.md)|Restituisce un [futuro](../standard-library/future-class.md) associato a tale suggerimento al promise.|  
|[Metodo promise::set\_exception](../Topic/promise::set_exception%20Method.md)|Atomicamente viene impostato il risultato del promise per indicare un'eccezione.|  
|[Metodo promise::set\_exception\_at\_thread\_exit](../Topic/promise::set_exception_at_thread_exit%20Method.md)|Imposta atomicamente il risultato del promise per indicare un'eccezione e recapitare la notifica solo dopo che tutti gli oggetti di thread locali nel thread corrente sono stati eliminati \(in genere all'uscita del thread\).|  
|[Metodo promise::set\_value](../Topic/promise::set_value%20Method.md)|Atomicamente imposta il risultato del promise per indicare un valore.|  
|[Metodo promise::set\_value\_at\_thread\_exit](../Topic/promise::set_value_at_thread_exit%20Method.md)|Imposta atomicamente il risultato del promise per indicare un valore e recapitare la notifica solo dopo che tutti gli oggetti di thread locali nel thread corrente sono stati eliminati \(in genere all'uscita del thread\).|  
|[Metodo promise::swap](../Topic/promise::swap%20Method.md)|Scambia lo *stato asincrono associato* del promise con quello di un oggetto promise specificato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore promise::operator\=](../Topic/promise::operator=%20Operator.md)|Assegnazione dello stato condiviso dell'oggetto promise.|  
  
## Gerarchia di ereditarietà  
 `promise`  
  
## Requisiti  
 **Intestazione:** future  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)