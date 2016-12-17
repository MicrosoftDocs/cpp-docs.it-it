---
title: "Classe extent (C++ AMP) | Microsoft Docs"
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
  - "amp/Concurrency::extent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extent (struttura)"
ms.assetid: edb5de3d-3935-4dbb-8365-4cc6c4fb0269
caps.latest.revision: 19
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe extent (C++ AMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un vettore di *N* integer che specificano i limiti di uno spazio di dimensione *N* avente origine in 0.  I valori del vettore vengono ordinati dal più significativo al meno significativo.  
  
## Sintassi  
  
```  
template <  
   int _Rank>  
class extent;  
```  
  
#### Parametri  
 `_Rank`  
 Numero di dimensioni dell'oggetto `extent`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore extent::extent](../Topic/extent::extent%20Constructor.md)|Inizializza una nuova istanza della classe `extent`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo extent::contains](../Topic/extent::contains%20Method.md)|Verifica che l'oggetto `extent` specificato abbia il numero di dimensioni specificato.|  
|[Metodo extent::size](../Topic/extent::size%20Method.md)|Restituisce la dimensione lineare totale dell'extent \(in unità degli elementi\).|  
|[Metodo extent::tile](../Topic/extent::tile%20Method.md)|Produce un oggetto `tiled_extent` con i tile extents forniti dalle dimensioni specificate.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore extent::operator\-](../Topic/extent::operator-%20Operator.md)|Restituisce un nuovo oggetto `extent` creato sottraendo gli elementi `index` dagli elementi corrispondenti `extent`.|  
|[Operatore extent::operator\-\-](../Topic/extent::operator--%20Operator.md)|Decrementa ogni elemento dell'oggetto `extent`.|  
|[Operatore extent::operator\(mod\)\=](../Topic/extent::operator\(mod\)=%20Operator.md)|Calcola il modulo \(resto\) di ogni elemento dell'oggetto `extent` quando quell'elemento viene diviso da un numero.|  
|[Operatore extent::operator\*\=](../Topic/extent::operator*=%20Operator.md)|Moltiplica ogni elemento dell'oggetto `extent` per un numero.|  
|[Operatore extent::operator\/\=](../Topic/extent::operator-=%20Operator1.md)|Divide ogni elemento dell'oggetto `extent` per un numero.|  
|[extent::operatorOperator](../Topic/extent::operatorOperator.md)|Restituisce l'elemento che corrisponde all'indice specificato.|  
|[Operatore extent::operator\+](../Topic/extent::operator+%20Operator.md)|Restituisce un nuovo oggetto `extent` creato sommando gli elementi di `index` con i corrispondenti elementi di `extent`.|  
|[Operatore extent::operator\+\+](../Topic/extent::operator++%20Operator.md)|Incrementa ogni elemento dell'oggetto `extent`.|  
|[Operatore extent::operator\+\=](../Topic/extent::operator+=%20Operator.md)|Aggiunge il numero specificato ad ogni elemento dell'oggetto `extent`.|  
|[Operatore extent::operator\=](../Topic/extent::operator=%20Operator.md)|Copia il contenuto di un altro oggetto `extent` in questo.|  
|[Operatore extent::operator\-\=](../Topic/extent::operator-=%20Operator2.md)|Sottrae il numero specificato da ogni elemento dell'oggetto `extent`.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante extent::rank](../Topic/extent::rank%20Constant.md)|Ottiene il rango dell'oggetto `extent`.|  
  
## Gerarchia di ereditarietà  
 `extent`  
  
## Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)