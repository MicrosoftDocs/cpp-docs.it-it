---
title: "Classe combinable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::combinable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "combinable (classe)"
ms.assetid: fe0bfbf6-6250-47da-b8d0-f75369f0b5be
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe combinable
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

L'oggetto `combinable<T>` ha lo scopo di fornire copie di dati di thread privato, per eseguire calcoli secondari locali per thread senza blocco durante algoritmi paralleli.  Alla fine dell'operazione parallela, è possibile unire i sub\-calcoli del thread privato in un risultato finale.  Questa classe è utilizzabile al posto di una variabile condivisa e può comportare un miglioramento nelle prestazioni qualora vi fosse in caso contrario molto conflitto su tale variabile condivisa.  
  
## Sintassi  
  
```  
template<  
   typename _Ty  
>  
class combinable;  
```  
  
#### Parametri  
 `_Ty`  
 Tipo di dati del risultato finale unito.  Il tipo deve disporre di un costruttore di copia e di un costruttore predefinito.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore combinable::combinable](../Topic/combinable::combinable%20Constructor.md)|Di overload.  Costruisce un nuovo oggetto `combinable`.|  
|[Distruttore combinable::~combinable](../Topic/combinable::~combinable%20Destructor.md)|Elimina un oggetto `combinable`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo combinable::clear](../Topic/combinable::clear%20Method.md)|Cancella ogni risultato computazionali intermedio da un utilizzo precedente.|  
|[Metodo combinable::combine](../Topic/combinable::combine%20Method.md)|Calcola un valore finale dal set di sub\-calcoli del thread locale chiamando il funtore combinato fornito.|  
|[Metodo combinable::combine\_each](../Topic/combinable::combine_each%20Method.md)|Calcola un valore finale dal set di sub\-calcoli del thread locale chiamando una volta il funtore combinato fornito per il sub\-calcolo del thread locale.  Il risultato finale viene accumulato dall'oggetto funzione.|  
|[Metodo combinable::local](../Topic/combinable::local%20Method.md)|Di overload.  Consente di restituire un riferimento al calcolo secondario del thread privato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore combinable::operator\=](../Topic/combinable::operator=%20Operator.md)|Assegna a un oggetto `combinable` da un altro oggetto `combinable` object.|  
  
## Note  
 Per ulteriori informazioni, vedere [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Gerarchia di ereditarietà  
 `combinable`  
  
## Requisiti  
 **Header:** ppl.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)