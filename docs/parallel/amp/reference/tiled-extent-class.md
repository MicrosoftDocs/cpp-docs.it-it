---
title: Classe tiled_extent | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp/Concurrency::tiled_extent
dev_langs:
- C++
ms.assetid: 671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: c2f7ebdb9c82ae24cf74064e710ddfb177670359
ms.lasthandoff: 02/24/2017

---
# <a name="tiledextent-class"></a>Classe tiled_extent
Oggetto `tiled_extent` oggetto è un `extent` oggetto di uno a tre dimensioni che suddivide lo spazio di extent in una, due o riquadri tridimensionale.  
  
### <a name="syntax"></a>Sintassi  
  
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
  
### <a name="parameters"></a>Parametri  
 `_Dim0`  
 La lunghezza della dimensione più significativa.  
  
 `_Dim1`  
 La lunghezza della dimensione successivo al più significativo.  
  
 `_Dim2`  
 La lunghezza della dimensione meno significativa.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore tiled_extent](#ctor)|Inizializza una nuova istanza della classe `tiled_extent`.|  

  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_tile_extent (metodo)](#tiled_extent__get_tile_extent)|Restituisce un `extent` oggetto che acquisisce i valori di `tiled_extent` argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.|  
|[riempimento (metodo)](#tiled_extent__pad)|Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati backup in divisibile esattamente per le dimensioni del riquadro.|  
|[truncate (metodo)](#tiled_extent__truncate)|Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati verso il basso in divisibile esattamente per le dimensioni del riquadro.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore = (operatore)](#operator_eq)|Copia il contenuto dell'oggetto specificato `tiled_index` specificato in questo oggetto.|  

  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[tile_dim0 (costante)](#tiled_extent__tile_dim0)|Archivia la lunghezza della dimensione più significativa.|  
|[tile_dim1 (costante)](#tiled_extent__tile_dim1)|Archivia la lunghezza della dimensione successivo al più significativo.|  
|[tile_dim2 (costante)](#tiled_extent__tile_dim2)|Archivia la lunghezza della dimensione meno significativa.|  

  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[tile_extent (membro dati)](#tiled_extent__tile_extent)|Ottiene un `extent` oggetto che acquisisce i valori di `tiled_extent` argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `extent`  
  
 `tiled_extent`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="tiled_extent__ctor"></a> costruttore tiled_extent  
Inizializza una nuova istanza della classe `tiled_extent`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
tiled_extent();  
  
tiled_extent(  
    const Concurrency::extent<rank>& _Other );  
  
tiled_extent(  
    const tiled_extent& _Other );  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `extent` o `tiled_extent` oggetto da copiare.  
  

  

## <a name="tiled_extent__get_tile_extent"></a> get_tile_extent   
Restituisce un `extent` oggetto che acquisisce i valori di `tiled_extent` argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `extent` che acquisisce le dimensioni di questo oggetto `tiled_extent` istanza.  
  

## <a name="tiled_extent__pad"></a>  pad   
Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati backup in divisibile esattamente per le dimensioni del riquadro.  
  
### <a name="syntax"></a>Sintassi  
  
```  
tiled_extent pad() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nuovo `tiled_extent` oggetto per valore. 
## <a name="tiled_extent__truncate"></a> truncate   
Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati verso il basso in divisibile esattamente per le dimensioni del riquadro.  
  
### <a name="syntax"></a>Sintassi  
  
```  
tiled_extent truncate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un nuovo `tiled_extent` oggetto con gli extent modificati verso il basso in divisibile esattamente per le dimensioni del riquadro.  

## <a name="tiled_extent__operator_eq"></a> operatore =   
Copia il contenuto dell'oggetto specificato `tiled_index` specificato in questo oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
tiled_extent&  operator= (  
    const tiled_extent& _Other ) restrict (amp, cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `tiled_index` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `tiled_index` istanza.  

## <a name="tiled_extent__tile_dim0"></a> tile_dim0   
Archivia la lunghezza della dimensione più significativa.  
  
### <a name="syntax"></a>Sintassi  
  
```  
static const int tile_dim0 = _Dim0;  
```  
  
## <a name="tiled_extent__tile_dim1"></a> tile_dim1   
Archivia la lunghezza della dimensione successivo al più significativo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
static const int tile_dim1 = _Dim1;  
```  
## <a name="tiled_extent__tile_dim2"></a> tile_dim2   
Archivia la lunghezza della dimensione meno significativa.  
  
### <a name="syntax"></a>Sintassi  
  
```  
static const int tile_dim2 = _Dim2;  
```  
## <a name="tiled_extent__tile_extent"></a> tile_extent   
  Ottiene un `extent` oggetto che acquisisce i valori di `tiled_extent` argomenti di modello `_Dim0`, `_Dim1`, e `_Dim2`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;  
```  
  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

