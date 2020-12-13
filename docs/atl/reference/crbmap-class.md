---
description: 'Altre informazioni su: classe CRBMap'
title: Classe CRBMap
ms.date: 11/04/2016
f1_keywords:
- CRBMap
- ATLCOLL/ATL::CRBMap
- ATLCOLL/ATL::CRBMap::CRBMap
- ATLCOLL/ATL::CRBMap::Lookup
- ATLCOLL/ATL::CRBMap::RemoveKey
- ATLCOLL/ATL::CRBMap::SetAt
helpviewer_keywords:
- CRBMap class
ms.assetid: 658e94dc-e835-4356-aed1-1513e1f66969
ms.openlocfilehash: 55d96bfd2c7b043bdbdc4c1ee1f329c9b77b9ca9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141050"
---
# <a name="crbmap-class"></a>Classe CRBMap

Questa classe rappresenta una struttura di mapping, usando un Red-Black albero binario.

## <a name="syntax"></a>Sintassi

```
template <typename K,
          typename V,
          class KTraits = CElementTraits<K>,
          class VTraits = CElementTraits<V>>
class CRBMap : public CRBTree<K, V, KTraits, VTraits>
```

#### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di elemento chiave.

*V*<br/>
Tipo di elemento valore.

*KTraits*<br/>
Codice utilizzato per copiare o spostare elementi chiave. Per ulteriori informazioni, vedere la [classe CElementTraits](../../atl/reference/celementtraits-class.md) .

*VTraits*<br/>
Codice utilizzato per copiare o spostare elementi di valore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CRBMap:: CRBMap](#crbmap)|Costruttore.|
|[CRBMap:: ~ CRBMap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRBMap:: Lookup](#lookup)|Chiamare questo metodo per cercare le chiavi o i valori nell' `CRBMap` oggetto.|
|[CRBMap:: RemoveKey](#removekey)|Chiamare questo metodo per rimuovere un elemento dall' `CRBMap` oggetto, in base alla chiave.|
|[CRBMap:: SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|

## <a name="remarks"></a>Commenti

`CRBMap` fornisce supporto per una matrice di mapping di qualsiasi tipo specificato, gestendo una matrice ordinata di elementi chiave e i relativi valori associati. Ogni chiave può avere un solo valore associato. Gli elementi (costituiti da una chiave e un valore) vengono archiviati in una struttura ad albero binaria usando il metodo [CRBMap:: SetAt](#setat) . È possibile rimuovere gli elementi usando il metodo [CRBMap:: RemoveKey](#removekey) , che elimina l'elemento con il valore di chiave specificato.

L'attraversamento dell'albero è reso possibile con metodi quali [CRBTree:: GetHeadPosition](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree:: GetNext](../../atl/reference/crbtree-class.md#getnext)e [CRBTree:: GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue).

I parametri *KTraits* e *VTraits* sono classi di tratti che contengono qualsiasi codice supplementare necessario per copiare o spostare elementi.

`CRBMap` viene derivato da [CRBTree](../../atl/reference/crbtree-class.md), che implementa un albero binario usando l'algoritmo Red-Black. [CRBMultiMap](../../atl/reference/crbmultimap-class.md) è una variante che consente più valori per ciascuna chiave. Viene anche derivato da `CRBTree` e pertanto condivide molte funzionalità con `CRBMap` .

Un'alternativa a entrambi `CRBMap` i metodi e `CRBMultiMap` viene offerta dalla classe [CAtlMap](../../atl/reference/catlmap-class.md) . Quando è necessario archiviare solo un numero ridotto di elementi, provare a usare la classe [CSimpleMap](../../atl/reference/csimplemap-class.md) .

Per una descrizione più completa delle varie classi di raccolta e delle relative caratteristiche e caratteristiche di prestazioni, vedere [classi di raccolta ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CRBTree](../../atl/reference/crbtree-class.md)

`CRBMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="crbmapcrbmap"></a><a name="crbmap"></a> CRBMap:: CRBMap

Costruttore.

```
explicit CRBMap(size_t nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Commenti

Il parametro *nBlockSize* è una misura della quantità di memoria allocata quando è richiesto un nuovo elemento. Dimensioni maggiori dei blocchi riducono le chiamate alle routine di allocazione di memoria, ma utilizzano più risorse. Per impostazione predefinita, lo spazio viene allocato per 10 elementi alla volta.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#81](../../atl/codesnippet/cpp/crbmap-class_1.cpp)]

## <a name="crbmapcrbmap"></a><a name="dtor"></a> CRBMap:: ~ CRBMap

Distruttore.

```
~CRBMap() throw();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

## <a name="crbmaplookup"></a><a name="lookup"></a> CRBMap:: Lookup

Chiamare questo metodo per cercare le chiavi o i valori nell' `CRBMap` oggetto.

```
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const throw(...);
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave che identifica l'elemento da cercare.

*value*<br/>
Variabile che riceve il valore di ricerca.

### <a name="return-value"></a>Valore restituito

Il primo form del metodo restituisce true se la chiave viene trovata; in caso contrario, false. Il secondo e il terzo modulo restituiscono un puntatore a un [CPair](crbtree-class.md#cpair_class).

### <a name="remarks"></a>Commenti

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#82](../../atl/codesnippet/cpp/crbmap-class_2.cpp)]

## <a name="crbmapremovekey"></a><a name="removekey"></a> CRBMap:: RemoveKey

Chiamare questo metodo per rimuovere un elemento dall' `CRBMap` oggetto, in base alla chiave.

```
bool RemoveKey(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave corrispondente alla coppia di elementi che si desidera rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la chiave viene trovata e rimossa, false in caso di errore.

### <a name="remarks"></a>Commenti

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#83](../../atl/codesnippet/cpp/crbmap-class_3.cpp)]

## <a name="crbmapsetat"></a><a name="setat"></a> CRBMap:: SetAt

Chiamare questo metodo per inserire una coppia di elementi nella mappa.

```
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value) throw(...);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da aggiungere all' `CRBMap` oggetto.

*value*<br/>
Valore da aggiungere all' `CRBMap` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione della coppia di elementi chiave/valore nell' `CRBMap` oggetto.

### <a name="remarks"></a>Commenti

`SetAt` sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#84](../../atl/codesnippet/cpp/crbmap-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CRBTree](../../atl/reference/crbtree-class.md)<br/>
[Classe CAtlMap](../../atl/reference/catlmap-class.md)<br/>
[Classe CRBMultiMap](../../atl/reference/crbmultimap-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
