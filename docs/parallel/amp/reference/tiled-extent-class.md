---
title: "Classe tiled_extent | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::tiled_extent"
dev_langs: 
  - "C++"
ms.assetid: 671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe tiled_extent
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un oggetto `tiled_extent` è un oggetto `extent` con dimensioni da 1 a 3 che suddivide lo spazio dell'extent in sezioni a una, due o tre dimensioni.  
  
## Sintassi  
  
```  
template <  
   int _Dim0,  
   int _Dim1,  
   int _Dim2  
>  
class tiled_extent : public Concurrency::extent<3>;  
  
template <  
   int _Dim0,  
   int _Dim1  
>  
class tiled_extent<_Dim0, _Dim1, 0> : public Concurrency::extent<2>;  
  
template <  
   int _Dim0  
>  
class tiled_extent<_Dim0, 0, 0> : public Concurrency::extent<1>;  
```  
  
#### Parametri  
 `_Dim0`  
 La lunghezza della dimensione più significativa.  
  
 `_Dim1`  
 Lunghezza della dimensione più vicina alla dimensione più significativa.  
  
 `_Dim2`  
 Lunghezza della dimensione meno significativa.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore tiled\_extent::tiled\_extent](../Topic/tiled_extent::tiled_extent%20Constructor.md)|Inizializza una nuova istanza della classe `tiled_extent`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo tiled\_extent::get\_tile\_extent](../Topic/tiled_extent::get_tile_extent%20Method.md)|Restituisce un oggetto `extent` che acquisisce i valori degli argomenti del modello del `tiled_extent`: `_Dim0`, `_Dim1` e `_Dim2`.|  
|[Metodo tiled\_extent::pad](../Topic/tiled_extent::pad%20Method.md)|Restituisce un nuovo oggetto `tiled_extent` con gli extent regolati per essere agevolmente divisibili per le dimensioni della sezione.|  
|[Metodo tiled\_extent::truncate](../Topic/tiled_extent::truncate%20Method.md)|Restituisce un nuovo oggetto `tiled_extent` con gli extent troncati per essere agevolmente divisibili per le dimensioni della sezione.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore tiled\_extent::operator\=](../Topic/tiled_extent::operator=%20Operator.md)|Copia il contenuto dell'oggetto `tiled_index` specificato in questo oggetto.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante tiled\_extent::tile\_dim0](../Topic/tiled_extent::tile_dim0%20Constant.md)|Archivia la lunghezza della dimensione più significativa.|  
|[Costante tiled\_extent::tile\_dim1](../Topic/tiled_extent::tile_dim1%20Constant.md)|Archivia la lunghezza della dimensione più vicina alla dimensione significativa.|  
|[Costante tiled\_extent::tile\_dim2](../Topic/tiled_extent::tile_dim2%20Constant.md)|Archivia la lunghezza della dimensione meno significativa.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati tiled\_extent::tile\_extent](../Topic/tiled_extent::tile_extent%20Data%20Member.md)|Ottiene un oggetto `extent` che acquisisce i valori degli argomenti del modello `tiled_extent` `_Dim0`, `_Dim1`, e `_Dim2`.|  
  
## Gerarchia di ereditarietà  
 `extent`  
  
 `tiled_extent`  
  
## Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)