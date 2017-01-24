---
title: "Classe tiled_index | Microsoft Docs"
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
  - "amp/Concurrency::tiled_index"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tiled_index (classe)"
ms.assetid: 0ce2ae26-f1bb-4436-b473-a9e1b619bb38
caps.latest.revision: 19
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe tiled_index
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Fornisce un indice in un oggetto [tiled\_extent](../../../parallel/amp/reference/tiled-extent-class.md).  Tale classe dispone di proprietà per accedere agli elementi relativi all'origine locale della sezione e relativi all'origine globale.  Per ulteriori informazioni sugli elementi affiancati, vedere [Utilizzo di sezioni](../../../parallel/amp/using-tiles.md).  
  
## Sintassi  
  
```  
template <  
   int _Dim0,  
   int _Dim1 = 0,  
   int _Dim2 = 0  
>  
class tiled_index : public _Tiled_index_base<3>;  
  
template <  
   int _Dim0,  
   int _Dim1  
>  
class tiled_index<_Dim0, _Dim1, 0> : public _Tiled_index_base<2>;  
  
template <  
   int _Dim0  
>  
class tiled_index<_Dim0, 0, 0> : public _Tiled_index_base<1>;  
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
|[Costruttore tiled\_index::tiled\_index](../Topic/tiled_index::tiled_index%20Constructor.md)|Inizializza una nuova istanza della classe `tile_index`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo tiled\_index::get\_tile\_extent](../Topic/tiled_index::get_tile_extent%20Method.md)|Restituisce un oggetto [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) con i valori degli argomenti `_Dim0`, `_Dim1` e `_Dim2` del modello [tiled\_index](../../../parallel/amp/reference/tiled-index-class.md).|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante tiled\_index::barrier](../Topic/tiled_index::barrier%20Constant.md)|Archivia un oggetto [tile\_barrier](../../../parallel/amp/reference/tile-barrier-class.md) che rappresenta una barriera nella sezione corrente dei thread.|  
|||  
|[Costante tiled\_index::global](../Topic/tiled_index::global%20Constant.md)|Archivia un oggetto [index](../../../parallel/amp/reference/index-class.md) di rango 1, 2 o 3, che rappresenta l'indice globale in un oggetto [grid](http://msdn.microsoft.com/it-it/f7d1b6a6-586c-4345-b09a-bfc26c492cb0).|  
|[Costante tiled\_index::local](../Topic/tiled_index::local%20Constant.md)|Archivia un oggetto `index` di rango 1, 2 e 3, che rappresenta l'indice relativo nella sezione corrente di un oggetto [tiled\_extent](../../../parallel/amp/reference/tiled-extent-class.md).|  
|[Costante tiled\_index::rank](../Topic/tiled_index::rank%20Constant.md)|Archivia il rango dell'oggetto [tiled\_index](../../../parallel/amp/reference/tiled-index-class.md).|  
|[Costante tiled\_index::tile](../Topic/tiled_index::tile%20Constant.md)|Archivia un oggetto `index` di rango 1, 2, o 3 che rappresenta le coordinate della sezione corrente di un oggetto `tiled_extent`.|  
|[Costante tiled\_index::tile\_dim0](../Topic/tiled_index::tile_dim0%20Constant.md)|Archivia la lunghezza della dimensione più significativa.|  
|[Costante tiled\_index::tile\_dim1](../Topic/tiled_index::tile_dim1%20Constant.md)|Archivia la lunghezza della dimensione più vicina alla dimensione significativa.|  
|[Costante tiled\_index::tile\_dim2](../Topic/tiled_index::tile_dim2%20Constant.md)|Archivia la lunghezza della dimensione meno significativa.|  
|[Costante tiled\_index::tile\_origin](../Topic/tiled_index::tile_origin%20Constant.md)|Archivia un oggetto `index` di rango 1, 2 o 3, che rappresenta le coordinate complessive dell'origine della sezione corrente in un oggetto `tiled_extent`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati tiled\_index::tile\_extent](../Topic/tiled_index::tile_extent%20Data%20Member.md)|Ottiene un oggetto [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) con i valori degli argomenti `_Dim0`, `_Dim1` e `_Dim2` del modello [tiled\_index](../../../parallel/amp/reference/tiled-index-class.md) e [tiled\_index](../../../parallel/amp/reference/tiled-index-class.md).|  
  
## Gerarchia di ereditarietà  
 `_Tiled_index_base`  
  
 `tiled_index`  
  
## Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)