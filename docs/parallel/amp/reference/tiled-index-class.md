---
title: Classe tiled_index | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- tiled_index
- AMP/tiled_index
- AMP/Concurrency::tiled_index::tiled_index
- AMP/Concurrency::tiled_index::get_tile_extent
- AMP/Concurrency::tiled_index::barrier
- AMP/Concurrency::tiled_index::global
- AMP/Concurrency::tiled_index::local
- AMP/Concurrency::tiled_index::rank
- AMP/Concurrency::tiled_index::tile
- AMP/Concurrency::tiled_index::tile_dim0
- AMP/Concurrency::tiled_index::tile_dim1
- AMP/Concurrency::tiled_index::tile_dim2
- AMP/Concurrency::tiled_index::tile_origin
- AMP/Concurrency::tiled_index::tile_extent
dev_langs: C++
helpviewer_keywords: tiled_index class
ms.assetid: 0ce2ae26-f1bb-4436-b473-a9e1b619bb38
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 46467930b1d8bfaffe6bac4f862986d445315f87
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tiledindex-class"></a>Classe tiled_index
Fornisce un indice in un [tiled_extent](tiled-extent-class.md) oggetto. Questa classe dispone di proprietà per accedere agli elementi di origine riquadro locale e di origine globale. Per ulteriori informazioni sugli spazi affiancati, vedere [utilizzando riquadri](../../../parallel/amp/using-tiles.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `_Dim0`  
 La lunghezza della dimensione più significativa.  
  
 `_Dim1`  
 La lunghezza della dimensione successivo per più significativa.  
  
 `_Dim2`  
 La lunghezza della dimensione meno significativa.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore tiled_index](#ctor)|Inizializza una nuova istanza della classe `tile_index`.|  

  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_tile_extent](#tiled_index__get_tile_extent)|Restituisce un [extent](extent-class.md) oggetto che presenta i valori di `tiled_index` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.|  


  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Barrier (costante)](#tiled_index__barrier)|Archivia un [tile_barrier](tile-barrier-class.md) oggetto che rappresenta una barriera nel tile corrente del thread.|  
|||  
|[Global (costante)](#tiled_index__global)|Archivia un [indice](index-class.md) oggetto dell'indice di priorità 1, 2 o 3 che rappresenta l'oggetto globale in un [griglia](http://msdn.microsoft.com/en-us/f7d1b6a6-586c-4345-b09a-bfc26c492cb0) oggetto.|  
|[Local (costante)](#tiled_index__local)|Archivia un `index` oggetto dell'indice di priorità 1, 2 o 3 che rappresenta l'oggetto relativo alla sezione corrente di un [tiled_extent](tiled-extent-class.md) oggetto.|  
|[Rank (costante)](#tiled_index__rank)|Archivia il rango di `tiled_index` oggetto.|  
|[Tile (costante)](#tiled_index__tile)|Archivia un `index` oggetto di dimensioni pari a 1, 2 o 3 che rappresenta le coordinate del riquadro corrente di un `tiled_extent` oggetto.|  
|[tile_dim0 (costante)](#tiled_index__tile_dim0)|Archivia la lunghezza della dimensione più significativa.|  
|[tile_dim1 (costante)](#tiled_index__tile_dim1)|Archivia la lunghezza della dimensione avanti-a-la maggior parte significativa.|  
|[tile_dim2 (costante)](#tiled_index__tile_dim2)|Archivia la lunghezza della dimensione meno significativa.|  
|[tile_origin (costante)](#tiled_index__tile_origin)|Archivia un `index` oggetto di coordinate di priorità 1, 2 o 3 che rappresenta l'oggetto globale dell'origine del riquadro corrente in un `tiled_extent` oggetto.|  

  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[tile_extent](#tile_extent)|Ottiene un [extent](extent-class.md) oggetto contenente i valori del `tiled_index` gli argomenti di modello `tiled_index` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.|  

  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_Tiled_index_base`  
  
 `tiled_index`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  


## <a name="tiled_index__ctor"></a>Costruttore tiled_index  
Inizializza una nuova istanza della classe `tiled_index`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
tiled_index(  
    const index<rank>& _Global,  
    const index<rank>& _Local,  
    const index<rank>& _Tile,  
    const index<rank>& _Tile_origin,  
    const tile_barrier& _Barrier ) restrict(amp,cpu);  
  
tiled_index(  
    const tiled_index& _Other ) restrict(amp,cpu);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_Global`  
 Globale [indice](index-class.md) di costruito `tiled_index`.  
  
 `_Local`  
 Locale [indice](index-class.md) di costruito`tiled_index`  
  
 `_Tile`  
 Il riquadro [indice](index-class.md) di costruito`tiled_index`  
  
 `_Tile_origin`  
 Riquadro origine [indice](index-class.md) di costruito`tiled_index`  
  
 `_Barrier`  
 Il [tile_barrier](tile-barrier-class.md) oggetto costruito `tiled_index`.  
  
 `_Other`  
 Il `tile_index` oggetto da copiare per l'oggetto costruito `tiled_index`.  
  
## <a name="overloads"></a>Overloads  
  
|||  
|-|-|  
|nome|Descrizione|  
|`tiled_index(const index<rank>& _Global, const index<rank>& _Local, const index<rank>& _Tile, const index<rank>& _Tile_origin, const tile_barrier& _Barrier restrict(amp,cpu);`|Inizializza una nuova istanza di `tile_index` classe dall'indice della sezione coordinate globali e la posizione relativa nella porzione nelle coordinate locali. Il `_Global` e `_Tile_origin` vengono calcolati i parametri.|  
|`tiled_index(    const tiled_index& _Other) restrict(amp,cpu);`|Inizializza una nuova istanza di `tile_index` classe copiando specificato `tiled_index` oggetto.|  


## <a name="tiled_index__get_tile_extent"></a>get_tile_extent
Restituisce un [extent](extent-class.md) oggetto che presenta i valori di `tiled_index` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
extent<rank> get_tile_extent()restrict(amp,cpu);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un `extent` oggetto che presenta i valori di `tiled_index` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.  

## <a name="tiled_index__barrier"></a>barriera   
Archivia un [tile_barrier](tile-barrier-class.md) oggetto che rappresenta una barriera nel tile corrente del thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
const tile_barrier barrier;  
```  

## <a name="tiled_index__global"></a>globale   
Archivia un [indice](index-class.md) oggetto di rango 1, 2 o 3 che rappresenta l'indice di un oggetto globale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
const index<rank> global;  
```  
  
## <a name="tiled_index__local"></a>locale   
Archivia un [indice](index-class.md) oggetto dell'indice di priorità 1, 2 o 3 che rappresenta l'oggetto relativo alla sezione corrente di un [tiled_extent](tiled-extent-class.md) oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
const index<rank> local;  
```  
  
## <a name="tiled_index__rank"></a>numero di dimensioni   
Archivia il rango di `tiled_index` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static const int rank = _Rank;  
```  

## <a name="tiled_index__tile"></a>riquadro   
Archivia un [indice](index-class.md) oggetto di dimensioni pari a 1, 2 o 3 che rappresenta le coordinate del riquadro corrente di un [tiled_extent](tiled-extent-class.md) oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
const index<rank> tile;  
```  
  
## <a name="tiled_index__tile_dim0"></a>tile_dim0  
Archivia la lunghezza della dimensione più significativa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static const int tile_dim0 = _Dim0;  
```  
   
## <a name="tiled_index__tile_dim1"></a>tile_dim1   
Archivia la lunghezza della dimensione avanti-a-la maggior parte significativa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static const int tile_dim1 = _Dim1;  
```  
## <a name="tiled_index__tile_dim2"></a>tile_dim2   
Archivia la lunghezza della dimensione meno significativa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static const int tile_dim2 = _Dim2;  
```  
## <a name="tiled_index__tile_origin"></a>tile_origin   
Archivia un [indice](index-class.md) oggetto coordinate rango 1, 2 o 3 che rappresenta l'oggetto globale dell'origine del riquadro corrente all'interno di un [tiled_extent](tiled-extent-class.md) oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
const index<rank> tile_origin  
```  
## <a name="tile_extent"></a>tile_extent
  Ottiene un [extent](extent-class.md) oggetto contenente i valori del `tiled_index` gli argomenti di modello `tiled_index` gli argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec(property(get= get_tile_extent)) extent<rank> tile_extent;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
