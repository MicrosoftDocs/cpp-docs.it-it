---
title: "Classe shared_future | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::shared_future"
dev_langs: 
  - "C++"
ms.assetid: 454ebedd-f42b-405f-99a5-a25cc9ad7c90
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Classe shared_future
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto *un oggetto return asincrono*.  A differenza di un oggetto di [futuro](../standard-library/future-class.md), *un provider asincrono* può essere associato a un numero qualsiasi di oggetti di `shared_future`.  
  
## Sintassi  
  
```  
template<class Ty>  
class shared_future;  
```  
  
## Note  
 Non chiamare alcuni metodi diverso da `valid`, di `operator=` e il distruttore su un oggetto di `shared_future` che è *vuoto*.  
  
 gli oggetti di`shared_future` non sono sincronizzati.  Chiamare metodi nello stesso oggetto da più thread introduce una race di dati che produce risultati imprevisti.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore shared\_future::shared\_future](../Topic/shared_future::shared_future%20Constructor.md)|Costruisce un oggetto `shared_future`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo shared\_future::get](../Topic/shared_future::get%20Method.md)|Recupera il risultato archiviato *nello stato asincrono collegato*.|  
|[Metodo shared\_future::valid](../Topic/shared_future::valid%20Method.md)|Specifica se l'oggetto non è vuoto.|  
|[Metodo shared\_future::wait](../Topic/shared_future::wait%20Method.md)|Blocca il thread corrente fino a quando lo stato asincrono connesso non sia impostato su pronto.|  
|[Metodo shared\_future::wait\_for](../Topic/shared_future::wait_for%20Method.md)|I blocchi fino a quando lo stato asincrono collegato è pronti o finché tempo specificato è trascorso.|  
|[Metodo shared\_future::wait\_until](../Topic/shared_future::wait_until%20Method.md)|I blocchi fino a quando lo stato asincrono collegato è pronti o fino a un determinato momento.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore shared\_future::operator\=](../Topic/shared_future::operator=%20Operator.md)|Assegna un nuovo stato asincrono collegato.|  
  
## Requisiti  
 **Intestazione:** future  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<future\>](../standard-library/future.md)