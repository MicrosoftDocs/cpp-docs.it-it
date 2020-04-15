---
title: CrBMap (classe)
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
ms.openlocfilehash: 9e367ccc875eedf63e4f47018598662af2dfcf7d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331399"
---
# <a name="crbmap-class"></a>CrBMap (classe)

Questa classe rappresenta una struttura di mapping, utilizzando un albero binario rosso-nero.

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

*Caratteristiche KTraits*<br/>
Codice utilizzato per copiare o spostare gli elementi chiave. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per ulteriori dettagli.

*Tratti V*<br/>
Codice utilizzato per copiare o spostare gli elementi valore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBMappa::CRBMappa](#crbmap)|Costruttore.|
|[CRBMappa: : CRBMappa](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBMappa::Ricerca](#lookup)|Chiamare questo metodo per cercare chiavi `CRBMap` o valori nell'oggetto.|
|[CRBMappa::RemoveKey](#removekey)|Chiamare questo metodo per rimuovere `CRBMap` un elemento dall'oggetto, data la chiave.|
|[CRBMappa::SetAt](#setat)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|

## <a name="remarks"></a>Osservazioni

`CRBMap`fornisce il supporto per una matrice di mapping di qualsiasi tipo specificato, la gestione di una matrice ordinata di elementi chiave e dei relativi valori associati. A ogni chiave può essere associato un solo valore. Gli elementi (costituiti da una chiave e da un valore) vengono archiviati in una struttura ad albero binaria, utilizzando il metodo [CRBMap::SetAt](#setat) . Gli elementi possono essere rimossi utilizzando il metodo [CRBMap::RemoveKey,](#removekey) che elimina l'elemento con il valore di chiave specificato.

L'attraversamento della struttura ad albero è reso possibile con metodi quali [CRBTree::GetHeadPosition](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree::GetNext](../../atl/reference/crbtree-class.md#getnext)e [CRBTree::GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue).

I parametri *KTraits* e *VTraits* sono classi di tratti che contengono codice supplementare necessario per copiare o spostare gli elementi.

`CRBMap`è derivato da [CRBTree](../../atl/reference/crbtree-class.md), che implementa un albero binario utilizzando l'algoritmo Red-Black. [CRBMultiMap](../../atl/reference/crbmultimap-class.md) è una variante che consente più valori per ogni chiave. Anche questo deriva `CRBTree`da , e quindi `CRBMap`condivide molte funzionalità con .

Un'alternativa `CRBMap` a `CRBMultiMap` entrambi e viene offerta dalla classe [CAtlMap.](../../atl/reference/catlmap-class.md) Quando è necessario archiviare solo un numero ridotto di elementi, è consigliabile usare la classe [CSimpleMap.When](../../atl/reference/csimplemap-class.md) only a small number of elements needs to be stored, consider using the CSimpleMap class instead.

Per una descrizione più completa delle varie classi di raccolte e delle relative caratteristiche e caratteristiche delle prestazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CRBTree (Albero CRB)](../../atl/reference/crbtree-class.md)

`CRBMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="crbmapcrbmap"></a><a name="crbmap"></a>CRBMappa::CRBMappa

Costruttore.

```
explicit CRBMap(size_t nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Osservazioni

Il *nBlockSize* parametro è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse. L'impostazione predefinita allocherà spazio per 10 elementi alla volta.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#81](../../atl/codesnippet/cpp/crbmap-class_1.cpp)]

## <a name="crbmapcrbmap"></a><a name="dtor"></a>CRBMappa: : CRBMappa

Distruttore.

```
~CRBMap() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

## <a name="crbmaplookup"></a><a name="lookup"></a>CRBMappa::Ricerca

Chiamare questo metodo per cercare chiavi `CRBMap` o valori nell'oggetto.

```
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const throw(...);
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Specifica la chiave che identifica l'elemento da cercare.

*Valore*<br/>
Variabile che riceve il valore cercato.

### <a name="return-value"></a>Valore restituito

La prima forma del metodo restituisce true se la chiave viene trovata, in caso contrario false. La seconda e la terza forme restituiscono un puntatore a un [oggetto CPair](crbtree-class.md#cpair_class).

### <a name="remarks"></a>Osservazioni

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#82](../../atl/codesnippet/cpp/crbmap-class_2.cpp)]

## <a name="crbmapremovekey"></a><a name="removekey"></a>CRBMappa::RemoveKey

Chiamare questo metodo per rimuovere `CRBMap` un elemento dall'oggetto, data la chiave.

```
bool RemoveKey(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave corrispondente alla coppia di elementi che si desidera rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la chiave viene trovata e rimossa, false in caso di errore.

### <a name="remarks"></a>Osservazioni

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#83](../../atl/codesnippet/cpp/crbmap-class_3.cpp)]

## <a name="crbmapsetat"></a><a name="setat"></a>CRBMappa::SetAt

Chiamare questo metodo per inserire una coppia di elementi nella mappa.

```
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value) throw(...);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da `CRBMap` aggiungere all'oggetto.

*Valore*<br/>
Valore da aggiungere `CRBMap` all'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione della coppia di `CRBMap` elementi chiave/valore nell'oggetto.

### <a name="remarks"></a>Osservazioni

`SetAt`sostituisce un elemento esistente se viene trovata una chiave corrispondente. Se la chiave non viene trovata, viene creata una nuova coppia chiave/valore.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#84](../../atl/codesnippet/cpp/crbmap-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[CrBTree (classe)](../../atl/reference/crbtree-class.md)<br/>
[Classe CAtlMap](../../atl/reference/catlmap-class.md)<br/>
[CRBMultiMap (classe)](../../atl/reference/crbmultimap-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
