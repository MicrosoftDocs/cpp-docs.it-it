---
title: "Classe index | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::index"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "struttura dell'indice"
ms.assetid: cbe79b08-0ba7-474c-9828-f1a71da39eb3
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe index
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Definisce un punto di indice a *N*\-dimensioni.  
  
## Sintassi  
  
```  
template <  
   int _Rank  
>  
class index;  
```  
  
#### Parametri  
 `_Rank`  
 Ordine di priorità o numero di dimensioni.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore index::index](../Topic/index::index%20Constructor.md)|Inizializza una nuova istanza della classe `index`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore index::operator\-\-](../Topic/index::operator--%20Operator.md)|Decrementa ogni elemento dell'oggetto `index`.|  
|[Operatore index::operator\(mod\)\=](../Topic/index::operator\(mod\)=%20Operator.md)|Calcola il modulo \(resto\) di ogni elemento dell'oggetto `index` quando quell'elemento viene diviso da un numero.|  
|[Operatore index::operator\*\=](../Topic/index::operator*=%20Operator.md)|Moltiplica ogni elemento dell'oggetto `index` per un numero.|  
|[Operatore index::operator\/\=](../Topic/index::operator-=%20Operator2.md)|Divide ogni elemento dell'oggetto `index` per un numero.|  
|[index::operatorOperator](../Topic/index::operatorOperator.md)|Restituisce l'elemento che corrisponde all'indice specificato.|  
|[Operatore index::operator\+\+](../Topic/index::operator++%20Operator.md)|Incrementa ogni elemento dell'oggetto `index`.|  
|[Operatore index::operator\+\=](../Topic/index::operator+=%20Operator.md)|Aggiunge il numero specificato ad ogni elemento dell'oggetto `index`.|  
|[Operatore index::operator\=](../Topic/index::operator=%20Operator.md)|Copia il contenuto dell'oggetto `index` specificato in questo oggetto.|  
|[Operatore index::operator\-\=](../Topic/index::operator-=%20Operator1.md)|Sottrae il numero specificato da ogni elemento dell'oggetto `index`.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante index::rank](../Topic/index::rank%20Constant.md)|Memorizza il numero di dimensioni dell'oggetto `index`.|  
  
## Gerarchia di ereditarietà  
 `index`  
  
## Note  
 La struttura di `index` rappresenta un vettore di coordinate di *N* interi che specifica una posizione univoca in uno spazio *N*\-dimensionale.  I valori del vettore vengono ordinati dal più significativo al meno significativo.  È possibile recuperare i valori dei componenti utilizzando [Operatore index::operator\=](../Topic/index::operator=%20Operator.md).  
  
## Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)