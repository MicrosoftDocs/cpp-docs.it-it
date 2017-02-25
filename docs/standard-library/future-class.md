---
title: "Classe future | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::future"
dev_langs: 
  - "C++"
ms.assetid: 495e82c3-5341-4e37-87dd-b40107fbdfb6
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Classe future
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto *un oggetto return asincrono*.  
  
## Sintassi  
  
```  
template<class Ty>  
class future;  
```  
  
## Note  
 Ogni *provider asincrono* standard restituisce un oggetto il cui tipo è una creazione di istanze di questo modello.  Un oggetto di `future` fornisce l'unico accesso al provider asincrono che viene associato.  Se sono necessari gli oggetti return asincroni multipli associati allo stesso provider asincrono, copiare l'oggetto di `future` a un oggetto di [shared\_future](../standard-library/shared-future-class.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore future::future](../Topic/future::future%20Constructor.md)|Costruisce un oggetto `future`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo future::get](../Topic/future::get%20Method.md)|Recupera il risultato archiviato nello stato asincrono collegato.|  
|[Metodo future::share](../Topic/future::share%20Method.md)|Converte l'oggetto in `shared_future`.|  
|[Metodo future::valid](../Topic/future::valid%20Method.md)|Specifica se l'oggetto non è vuoto.|  
|[Metodo future::wait](../Topic/future::wait%20Method.md)|Blocca il thread corrente fino a quando lo stato asincrono connesso non sia impostato su pronto.|  
|[Metodo future::wait\_for](../Topic/future::wait_for%20Method.md)|I blocchi fino a quando lo stato asincrono collegato è pronti o finché tempo specificato è trascorso.|  
|[Metodo future::wait\_until](../Topic/future::wait_until%20Method.md)|I blocchi fino a quando lo stato asincrono collegato è pronti o fino a un determinato momento.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore future::operator\=](../Topic/future::operator=%20Operator.md)|Trasferisce lo stato asincrono collegato da un oggetto specificato.|  
  
## Requisiti  
 **Intestazione:** future  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<future\>](../standard-library/future.md)