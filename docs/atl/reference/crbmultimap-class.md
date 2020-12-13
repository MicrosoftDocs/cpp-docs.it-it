---
description: 'Altre informazioni su: classe CRBMultiMap'
title: Classe CRBMultiMap
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
ms.openlocfilehash: 8dfe644521cb7ec4135c5c1f71d36371ac1706ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141024"
---
# <a name="crbmultimap-class"></a>Classe CRBMultiMap

Questa classe rappresenta una struttura di mapping che consente a ogni chiave di essere associata a più di un valore, utilizzando un Red-Black albero binario.

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

*KTraits*<br/>
Codice utilizzato per copiare o spostare elementi chiave. Per ulteriori informazioni, vedere la [classe CElementTraits](../../atl/reference/celementtraits-class.md) .

*VTraits*<br/>
Codice utilizzato per copiare o spostare elementi di valore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CRBMultiMap:: CRBMultiMap](#crbmultimap)|Costruttore.|
|[CRBMultiMap:: ~ CRBMultiMap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRBMultiMap:: FindFirstWithKey](#findfirstwithkey)|Chiamare questo metodo per trovare la posizione del primo elemento con una chiave specificata.|
|[CRBMultiMap:: GetNextValueWithKey](#getnextvaluewithkey)|Chiamare questo metodo per ottenere il valore associato a una chiave specificata e aggiornare il valore della posizione.|
|[CRBMultiMap:: GetNextWithKey](#getnextwithkey)|Chiamare questo metodo per ottenere l'elemento associato a una chiave specificata e aggiornare il valore della posizione.|
|[CRBMultiMap:: Insert](#insert)|Chiamare questo metodo per inserire una coppia di elementi nella mappa.|
|[CRBMultiMap:: RemoveKey](#removekey)|Chiamare questo metodo per rimuovere tutti gli elementi chiave/valore per una chiave specificata.|

## <a name="remarks"></a>Commenti

`CRBMultiMap` fornisce supporto per una matrice di mapping di qualsiasi tipo specificato, gestendo una matrice ordinata di elementi e valori chiave. A differenza della classe [CRBMap](../../atl/reference/crbmap-class.md) , ogni chiave può essere associata a più di un valore.

Gli elementi (costituiti da una chiave e un valore) vengono archiviati in una struttura ad albero binaria usando il metodo [CRBMultiMap:: Insert](#insert) . Gli elementi possono essere rimossi usando il metodo [CRBMultiMap:: RemoveKey](#removekey) , che elimina tutti gli elementi che corrispondono alla chiave specificata.

L'attraversamento dell'albero è reso possibile con metodi quali [CRBTree:: GetHeadPosition](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree:: GetNext](../../atl/reference/crbtree-class.md#getnext)e [CRBTree:: GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue). L'accesso a valori potenzialmente multipli per ogni chiave è possibile mediante i metodi [CRBMultiMap:: FindFirstWithKey](#findfirstwithkey), [CRBMultiMap:: GetNextValueWithKey](#getnextvaluewithkey)e [CRBMultiMap:: GetNextWithKey](#getnextwithkey) . Vedere l'esempio per [CRBMultiMap:: CRBMultiMap](#crbmultimap) per un'illustrazione di questa procedura.

I parametri *KTraits* e *VTraits* sono classi di tratti che contengono qualsiasi codice supplementare necessario per copiare o spostare elementi.

`CRBMultiMap` viene derivato da [CRBTree](../../atl/reference/crbtree-class.md), che implementa un albero binario usando l'algoritmo Red-Black. Un'alternativa a `CRBMultiMap` e `CRBMap` viene offerta dalla classe [CAtlMap](../../atl/reference/catlmap-class.md) . Quando è necessario archiviare solo un numero ridotto di elementi, provare a usare la classe [CSimpleMap](../../atl/reference/csimplemap-class.md) .

Per una descrizione più completa delle varie classi di raccolta e delle relative caratteristiche e caratteristiche di prestazioni, vedere [classi di raccolta ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CRBTree](../../atl/reference/crbtree-class.md)

`CRBMultiMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="crbmultimapcrbmultimap"></a><a name="crbmultimap"></a> CRBMultiMap:: CRBMultiMap

Costruttore.

```
explicit CRBMultiMap(size_t nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Commenti

Il parametro *nBlockSize* è una misura della quantità di memoria allocata quando è richiesto un nuovo elemento. Dimensioni maggiori dei blocchi riducono le chiamate alle routine di allocazione di memoria, ma utilizzano più risorse. Per impostazione predefinita, lo spazio viene allocato per 10 elementi alla volta.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#85](../../atl/codesnippet/cpp/crbmultimap-class_1.cpp)]

## <a name="crbmultimapcrbmultimap"></a><a name="dtor"></a> CRBMultiMap:: ~ CRBMultiMap

Distruttore.

```
~CRBMultiMap() throw();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

## <a name="crbmultimapfindfirstwithkey"></a><a name="findfirstwithkey"></a> CRBMultiMap:: FindFirstWithKey

Chiamare questo metodo per trovare la posizione del primo elemento con una chiave specificata.

```
POSITION FindFirstWithKey(KINARGTYPE key) const throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave che identifica l'elemento da trovare.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione del primo elemento chiave/valore se la chiave viene trovata; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Una chiave in `CRBMultiMap` può avere uno o più valori associati. Questo metodo fornirà il valore di posizione del primo valore, che può, di fatto, essere l'unico valore associato a quella particolare chiave. Il valore di posizione restituito può quindi essere usato con [CRBMultiMap:: GetNextValueWithKey](#getnextvaluewithkey) o [CRBMultiMap:: GetNextWithKey](#getnextwithkey) per ottenere il valore e aggiornare la posizione.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap:: CRBMultiMap](#crbmultimap).

## <a name="crbmultimapgetnextvaluewithkey"></a><a name="getnextvaluewithkey"></a> CRBMultiMap:: GetNextValueWithKey

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

*pos*<br/>
Il valore di posizione, ottenuto con una chiamata a [CRBMultiMap:: FindFirstWithKey](#findfirstwithkey) o [CRBMultiMap:: GetNextWithKey](#getnextwithkey)o una chiamata precedente a `GetNextValueWithKey` .

*key*<br/>
Specifica la chiave che identifica l'elemento da trovare.

### <a name="return-value"></a>Valore restituito

Restituisce la coppia di elementi associata alla chiave specificata.

### <a name="remarks"></a>Commenti

Il valore di posizione viene aggiornato in modo che punti al valore successivo associato alla chiave. Se non esistono altri valori, il valore della posizione viene impostato su NULL.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap:: CRBMultiMap](#crbmultimap).

## <a name="crbmultimapgetnextwithkey"></a><a name="getnextwithkey"></a> CRBMultiMap:: GetNextWithKey

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

*pos*<br/>
Il valore di posizione, ottenuto con una chiamata a [CRBMultiMap:: FindFirstWithKey](#findfirstwithkey) o [CRBMultiMap:: GetNextValueWithKey](#getnextvaluewithkey)o una chiamata precedente a `GetNextWithKey` .

*key*<br/>
Specifica la chiave che identifica l'elemento da trovare.

### <a name="return-value"></a>Valore restituito

Restituisce il successivo elemento della [classe CRBTree:: CPair](crbtree-class.md#cpair_class) associato alla chiave specificata.

### <a name="remarks"></a>Commenti

Il valore di posizione viene aggiornato in modo che punti al valore successivo associato alla chiave. Se non esistono altri valori, il valore della posizione viene impostato su NULL.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

## <a name="crbmultimapinsert"></a><a name="insert"></a> CRBMultiMap:: Insert

Chiamare questo metodo per inserire una coppia di elementi nella mappa.

```
POSITION Insert(KINARGTYPE key, VINARGTYPE value) throw(...);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da aggiungere all' `CRBMultiMap` oggetto.

*value*<br/>
Valore da aggiungere all' `CRBMultiMap` oggetto associato a *Key*.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione della coppia di elementi chiave/valore nell' `CRBMultiMap` oggetto.

### <a name="remarks"></a>Commenti

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap:: CRBMultiMap](#crbmultimap).

## <a name="crbmultimapremovekey"></a><a name="removekey"></a> CRBMultiMap:: RemoveKey

Chiamare questo metodo per rimuovere tutti gli elementi chiave/valore per una chiave specificata.

```
size_t RemoveKey(KINARGTYPE key) throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Specifica la chiave che identifica gli elementi da eliminare.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di valori associati alla chiave specificata.

### <a name="remarks"></a>Commenti

`RemoveKey` Elimina tutti gli elementi chiave/valore con una chiave che corrisponde alla *chiave*.

Per informazioni sugli altri metodi disponibili, vedere la documentazione relativa alla classe di base [CRBTree](../../atl/reference/crbtree-class.md) .

### <a name="example"></a>Esempio

Vedere l'esempio per [CRBMultiMap:: CRBMultiMap](#crbmultimap).

## <a name="see-also"></a>Vedi anche

[Classe CRBTree](../../atl/reference/crbtree-class.md)<br/>
[Classe CAtlMap](../../atl/reference/catlmap-class.md)<br/>
[Classe CRBMap](../../atl/reference/crbmap-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
