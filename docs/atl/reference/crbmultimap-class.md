---
title: CRBMultiMap (classe)
ms.date: 11/04/2016
f1_keywords:
- CRBMultiMap
- ATLCOLL/ATL::CRBMultiMap
- ATLCOLL/ATL::CRBMultiMap::CRBMultiMap
- ATLCOLL/ATL::CRBMultiMap::FindFirstWithKey
- ATLCOLL/ATL::CRBMultiMap::GetNextValueWithKey
- ATLCOLL/ATL::CRBMultiMap::GetNextWithKey
- ATLCOLL/ATL::CRBMultiMap::Insert
- ATLCOLL/ATL::CRBMultiMap::RemoveKey
helpviewer_keywords:
- CRBMultiMap class
ms.assetid: 94d3ec0c-3e30-4ab7-a101-d8da4fb8add3
ms.openlocfilehash: 1e36bc267b3a539d2d1d4bf370b9cdc33828c760
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331427"
---
# <a name="crbmultimap-class"></a>CRBMultiMap (classe)

Questa classe rappresenta una struttura di mapping che consente a ogni chiave può essere associata a più di un valore, utilizzando un albero binario rosso-nero.

## <a name="syntax"></a>Sintassi

```
template<typename K,
         typename V,
         class KTraits = CElementTraits<K>,
         class VTraits = CElementTraits<V>>
class CRBMultiMap : public CRBTree<K, V, KTraits, VTraits>
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
|[CRBMultiMap::CRBMultiMap](#crbmultimap)|Costruttore.|
|[CRBMultiMap:: : CRBMultiMap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBMultiMap::FindFirstWithKey](#findfirstwithkey)|Chiamare questo metodo per trovare la posizione del primo elemento con un determinato tasto.|
|[CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey)|Chiamare questo metodo per ottenere il valore associato a una chiave specificata e aggiornare il valore della posizione.|
|[CRBMultiMap::GetNextWithKey](#getnextwithkey)|Chiamare questo metodo per ottenere l'elemento associato a una chiave specificata e aggiornare il valore della posizione.|
|[CRBMultiMap::Inserire](#insert)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|
|[CRBMultiMap::RemoveKey (CrBMultiMappa::RemoveKey)](#removekey)|Chiamare questo metodo per rimuovere tutti gli elementi chiave/valore per una determinata chiave.|

## <a name="remarks"></a>Osservazioni

`CRBMultiMap`fornisce il supporto per una matrice di mapping di qualsiasi tipo specificato, la gestione di una matrice ordinata di elementi chiave e valori. A differenza della classe [CRBMap,](../../atl/reference/crbmap-class.md) ogni chiave può essere associata a più di un valore.

Gli elementi (costituiti da una chiave e da un valore) vengono archiviati in una struttura ad albero binaria, utilizzando il metodo [CRBMultiMap::Insert.](#insert) Gli elementi possono essere rimossi utilizzando il metodo [CRBMultiMap::RemoveKey,](#removekey) che elimina tutti gli elementi che corrispondono alla chiave specificata.

L'attraversamento della struttura ad albero è reso possibile con metodi quali [CRBTree::GetHeadPosition](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree::GetNext](../../atl/reference/crbtree-class.md#getnext)e [CRBTree::GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue). È possibile accedere ai valori potenzialmente multipli per chiave utilizzando i metodi [CRBMultiMap::FindFirstWithKey](#findfirstwithkey), [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey)e [CRBMultiMap::GetNextWithKey](#getnextwithkey) . Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap) per un'illustrazione di questo in pratica.

I parametri *KTraits* e *VTraits* sono classi di tratti che contengono codice supplementare necessario per copiare o spostare gli elementi.

`CRBMultiMap`è derivato da [CRBTree](../../atl/reference/crbtree-class.md), che implementa un albero binario utilizzando l'algoritmo Red-Black. Un'alternativa `CRBMultiMap` `CRBMap` e viene offerta dalla classe [CAtlMap.](../../atl/reference/catlmap-class.md) Quando è necessario archiviare solo un numero ridotto di elementi, è consigliabile usare la classe [CSimpleMap.When](../../atl/reference/csimplemap-class.md) only a small number of elements needs to be stored, consider using the CSimpleMap class instead.

Per una descrizione più completa delle varie classi di raccolte e delle relative caratteristiche e caratteristiche delle prestazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CRBTree (Albero CRB)](../../atl/reference/crbtree-class.md)

`CRBMultiMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="crbmultimapcrbmultimap"></a><a name="crbmultimap"></a>CRBMultiMap::CRBMultiMap

Costruttore.

```
explicit CRBMultiMap(size_t nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Osservazioni

Il *nBlockSize* parametro è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse. L'impostazione predefinita allocherà spazio per 10 elementi alla volta.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#85](../../atl/codesnippet/cpp/crbmultimap-class_1.cpp)]

## <a name="crbmultimapcrbmultimap"></a><a name="dtor"></a>CRBMultiMap:: : CRBMultiMap

Distruttore.

```
~CRBMultiMap() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

## <a name="crbmultimapfindfirstwithkey"></a><a name="findfirstwithkey"></a>CRBMultiMap::FindFirstWithKey

Chiamare questo metodo per trovare la posizione del primo elemento con un determinato tasto.

```
POSITION FindFirstWithKey(KINARGTYPE key) const throw();
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Specifica la chiave che identifica l'elemento da trovare.

### <a name="return-value"></a>Valore restituito

Restituisce la POSITION del primo elemento chiave/valore se la chiave viene trovata, NULL in caso contrario.

### <a name="remarks"></a>Osservazioni

Una chiave `CRBMultiMap` in può avere uno o più valori associati. Questo metodo fornirà il valore di posizione del primo valore (che può, infatti, essere l'unico valore) associato a quella particolare chiave. Il valore di posizione restituito può quindi essere utilizzato con [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey) o [CRBMultiMap::GetNextWithKey](#getnextwithkey) per ottenere il valore e aggiornare la posizione.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).

## <a name="crbmultimapgetnextvaluewithkey"></a><a name="getnextvaluewithkey"></a>CRBMultiMap::GetNextValueWithKey

Chiamare questo metodo per ottenere il valore associato a una chiave specificata e aggiornare il valore della posizione.

```
const V& GetNextValueWithKey(
    POSITION& pos,
    KINARGTYPE key) const throw();
V& GetNextValueWithKey(
    POSITION& pos,
    KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Il valore della posizione, ottenuto con una chiamata a [CRBMultiMap::FindFirstWithKey](#findfirstwithkey) o [CRBMultiMap::GetNextWithKey](#getnextwithkey), o con una chiamata precedente a `GetNextValueWithKey`.

*Chiave*<br/>
Specifica la chiave che identifica l'elemento da trovare.

### <a name="return-value"></a>Valore restituito

Restituisce la coppia di elementi associata alla chiave specificata.

### <a name="remarks"></a>Osservazioni

Il valore della posizione viene aggiornato in modo da puntare al valore successivo associato alla chiave. Se non esistono altri valori, il valore della posizione è impostato su NULL.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).

## <a name="crbmultimapgetnextwithkey"></a><a name="getnextwithkey"></a>CRBMultiMap::GetNextWithKey

Chiamare questo metodo per ottenere l'elemento associato a una chiave specificata e aggiornare il valore della posizione.

```
const CPair* GetNextWithKey(
    POSITION& pos,
    KINARGTYPE key) const throw();
CPair* GetNextWithKey(
    POSITION& pos,
    KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Il valore della posizione, ottenuto con una chiamata a [CRBMultiMap::FindFirstWithKey](#findfirstwithkey) o [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey), o con una chiamata precedente a `GetNextWithKey`.

*Chiave*<br/>
Specifica la chiave che identifica l'elemento da trovare.

### <a name="return-value"></a>Valore restituito

Restituisce il successivo elemento [di classe CRBTree::CPair](crbtree-class.md#cpair_class) associato alla chiave specificata.

### <a name="remarks"></a>Osservazioni

Il valore della posizione viene aggiornato in modo da puntare al valore successivo associato alla chiave. Se non esistono altri valori, il valore della posizione è impostato su NULL.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

## <a name="crbmultimapinsert"></a><a name="insert"></a>CRBMultiMap::Inserire

Chiamare questo metodo per inserire una coppia di elementi nella mappa.

```
POSITION Insert(KINARGTYPE key, VINARGTYPE value) throw(...);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da `CRBMultiMap` aggiungere all'oggetto.

*Valore*<br/>
Valore da aggiungere `CRBMultiMap` all'oggetto, associato alla *chiave*.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione della coppia di `CRBMultiMap` elementi chiave/valore nell'oggetto.

### <a name="remarks"></a>Osservazioni

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).

## <a name="crbmultimapremovekey"></a><a name="removekey"></a>CRBMultiMap::RemoveKey (CrBMultiMappa::RemoveKey)

Chiamare questo metodo per rimuovere tutti gli elementi chiave/valore per una determinata chiave.

```
size_t RemoveKey(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Specifica la chiave che identifica gli elementi da eliminare.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di valori associati alla chiave specificata.

### <a name="remarks"></a>Osservazioni

`RemoveKey`elimina tutti gli elementi chiave/valore che hanno una chiave che corrisponde a *key*.

Vedere la documentazione per la classe di base [CRBTree](../../atl/reference/crbtree-class.md) per informazioni sugli altri metodi disponibili.

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap::CRBMultiMap](#crbmultimap).

## <a name="see-also"></a>Vedere anche

[CrBTree (classe)](../../atl/reference/crbtree-class.md)<br/>
[Classe CAtlMap](../../atl/reference/catlmap-class.md)<br/>
[CrBMap (classe)](../../atl/reference/crbmap-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
