---
title: Classe CSimpleMap
ms.date: 11/04/2016
f1_keywords:
- CSimpleMap
- ATLSIMPCOLL/ATL::CSimpleMap
- ATLSIMPCOLL/ATL::CSimpleMap::_ArrayElementType
- ATLSIMPCOLL/ATL::CSimpleMap::_ArrayKeyType
- ATLSIMPCOLL/ATL::CSimpleMap::CSimpleMap
- ATLSIMPCOLL/ATL::CSimpleMap::Add
- ATLSIMPCOLL/ATL::CSimpleMap::FindKey
- ATLSIMPCOLL/ATL::CSimpleMap::FindVal
- ATLSIMPCOLL/ATL::CSimpleMap::GetKeyAt
- ATLSIMPCOLL/ATL::CSimpleMap::GetSize
- ATLSIMPCOLL/ATL::CSimpleMap::GetValueAt
- ATLSIMPCOLL/ATL::CSimpleMap::Lookup
- ATLSIMPCOLL/ATL::CSimpleMap::Remove
- ATLSIMPCOLL/ATL::CSimpleMap::RemoveAll
- ATLSIMPCOLL/ATL::CSimpleMap::RemoveAt
- ATLSIMPCOLL/ATL::CSimpleMap::ReverseLookup
- ATLSIMPCOLL/ATL::CSimpleMap::SetAt
- ATLSIMPCOLL/ATL::CSimpleMap::SetAtIndex
helpviewer_keywords:
- CSimpleMap class
ms.assetid: 61b06eb4-ae73-44b0-a305-0afb5a33e8b1
ms.openlocfilehash: eed41c2250728d257b6d303e79c3afd36a543dbb
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747651"
---
# <a name="csimplemap-class"></a>Classe CSimpleMap

Questa classe fornisce il supporto per una matrice di mapping semplice.

## <a name="syntax"></a>Sintassi

```
template <class TKey, class TVal, class TEqual = CSimpleMapEqualHelper<TKey, TVal>>
class CSimpleMap
```

#### <a name="parameters"></a>Parametri

*TKey*<br/>
Tipo di elemento chiave.

*Valore TVal*<br/>
Tipo di elemento valore.

*Uguale a*<br/>
Oggetto tratto, che definisce il test `T`di uguaglianza per gli elementi di tipo .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleMap::_ArrayElementType](#_arrayelementtype)|Typedef per il tipo di valore.|
|[CSimpleMap::_ArrayKeyType](#_arraykeytype)|Typedef per il tipo di chiave.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleMap::CSimpleMap](#csimplemap)|Costruttore.|
|[CSimpleMap:: : CSimpleMap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleMap::Aggiungi](#add)|Aggiunge una chiave e un valore associato alla matrice di mappe.|
|[CSimpleMap::FindKey](#findkey)|Trova una chiave specifica.|
|[CSimpleMap::FindVal](#findval)|Trova un valore specifico.|
|[CSimpleMap::GetKeyAt](#getkeyat)|Recupera la chiave specificata.|
|[CSimpleMap::GetSize](#getsize)|Restituisce il numero di voci nella matrice di mapping.|
|[CSimpleMap::GetValueAt](#getvalueat)|Recupera il valore specificato.|
|[CSimpleMap::Ricerca](#lookup)|Restituisce il valore associato alla chiave specificata.|
|[CSimpleMap::Rimuovi](#remove)|Rimuove una chiave e un valore corrispondente.|
|[CSimpleMap::RemoveAll](#removeall)|Rimuove tutte le chiavi e i valori.|
|[CSimpleMap::RemoveAt](#removeat)|Rimuove una chiave specifica e un valore corrispondente.|
|[CSimpleMap::ReverseLookup](#reverselookup)|Restituisce la chiave associata al valore specificato.|
|[CSimpleMap::SetAt](#setat)|Imposta il valore associato alla chiave specificata.|
|[CSimpleMap::SetAtIndex](#setatindex)|Imposta la chiave e il valore specifici.|

## <a name="remarks"></a>Osservazioni

`CSimpleMap`fornisce il supporto per una matrice `T`di mapping semplice di qualsiasi tipo specificato , la gestione di una matrice non ordinata di elementi chiave e dei relativi valori associati.

Il `TEqual` parametro consente di definire una funzione `T`di uguaglianza per due elementi di tipo . Creando una classe simile a [CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md), è possibile modificare il comportamento del test di uguaglianza per qualsiasi matrice specificata. Ad esempio, quando si gestisce una matrice di puntatori, può essere utile definire l'uguaglianza in base ai valori a cui fanno riferimento i puntatori. L'implementazione predefinita utilizza **operator .**

Sia `CSimpleMap` [a CSimpleArray](../../atl/reference/csimplearray-class.md) vengono fornite per la compatibilità con le versioni precedenti di ATL e implementazioni di raccolta più complete ed efficienti vengono fornite da [CAtlArray](../../atl/reference/catlarray-class.md) e [CAtlMap](../../atl/reference/catlmap-class.md).

A differenza di altri insiemi di mappe in ATL e MFC, questa classe viene implementata con una matrice semplice e le ricerche di ricerca richiedono una ricerca lineare. `CAtlMap`deve essere utilizzato quando la matrice contiene un numero elevato di elementi.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll.h

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#91](../../atl/codesnippet/cpp/csimplemap-class_1.cpp)]

## <a name="csimplemapadd"></a><a name="add"></a>CSimpleMap::Aggiungi

Aggiunge una chiave e un valore associato alla matrice di mappe.

```
BOOL Add(const TKey& key, const TVal& val);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave.

*Val*<br/>
Valore associato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la chiave e il valore sono stati aggiunti correttamente, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Ogni coppia di chiave e valore aggiunta fa sì che la memoria dell'array di mapping venga liberata e riallocata, in modo da garantire che i dati per ciascuno vengano sempre archiviati in modo contiguo. Ovvero, il secondo elemento chiave segue sempre direttamente il primo elemento chiave in memoria e così via.

## <a name="csimplemap_arrayelementtype"></a><a name="_arrayelementtype"></a>CSimpleMap::_ArrayElementType

Un typedef per il tipo di chiave.

```
typedef TVal _ArrayElementType;
```

## <a name="csimplemap_arraykeytype"></a><a name="_arraykeytype"></a>CSimpleMap::_ArrayKeyType

Un typedef per il tipo di valore.

```
typedef TKey _ArrayKeyType;
```

## <a name="csimplemapcsimplemap"></a><a name="csimplemap"></a>CSimpleMap::CSimpleMap

Costruttore.

```
CSimpleMap();
```

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati.

## <a name="csimplemapcsimplemap"></a><a name="dtor"></a>CSimpleMap:: : CSimpleMap

Distruttore.

```
~CSimpleMap();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="csimplemapfindkey"></a><a name="findkey"></a>CSimpleMap::FindKey

Trova una chiave specifica.

```
int FindKey(const TKey& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave da ricercare.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice della chiave se trovato, in caso contrario restituisce -1.

## <a name="csimplemapfindval"></a><a name="findval"></a>CSimpleMap::FindVal

Trova un valore specifico.

```
int FindVal(const TVal& val) const;
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Valore da cercare.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice del valore se viene trovato, in caso contrario restituisce -1.

## <a name="csimplemapgetkeyat"></a><a name="getkeyat"></a>CSimpleMap::GetKeyAt

Recupera la chiave in corrispondenza dell'indice specificato.

```
TKey& GetKeyAt(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della chiave da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce la chiave a cui fa riferimento *nIndex*.

### <a name="remarks"></a>Osservazioni

L'indice passato da *nIndex* deve essere valido affinché il valore restituito sia significativo.

## <a name="csimplemapgetsize"></a><a name="getsize"></a>CSimpleMap::GetSize

Restituisce il numero di voci nella matrice di mapping.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di voci (una chiave e un valore è una voce) nella matrice di mapping.

## <a name="csimplemapgetvalueat"></a><a name="getvalueat"></a>CSimpleMap::GetValueAt

Recupera il valore in corrispondenza dell'indice specifico.

```
TVal& GetValueAt(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del valore da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce il valore a cui fa riferimento *nIndex*.

### <a name="remarks"></a>Osservazioni

L'indice passato da *nIndex* deve essere valido affinché il valore restituito sia significativo.

## <a name="csimplemaplookup"></a><a name="lookup"></a>CSimpleMap::Ricerca

Restituisce il valore associato alla chiave specificata.

```
TVal Lookup(const TKey& key) const;
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave.

### <a name="return-value"></a>Valore restituito

Restituisce il valore associato. Se non viene trovata alcuna chiave corrispondente, viene restituito NULL.

## <a name="csimplemapremove"></a><a name="remove"></a>CSimpleMap::Rimuovi

Rimuove una chiave e un valore corrispondente.

```
BOOL Remove(const TKey& key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la chiave e il valore corrispondente sono stati rimossi correttamente, FALSE in caso contrario.

## <a name="csimplemapremoveall"></a><a name="removeall"></a>CSimpleMap::RemoveAll

Rimuove tutte le chiavi e i valori.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Rimuove tutte le chiavi e i valori dall'oggetto matrice di mapping.

## <a name="csimplemapremoveat"></a><a name="removeat"></a>CSimpleMap::RemoveAt

Rimuove una chiave e il valore associato in corrispondenza dell'indice specificato.

```
BOOL RemoveAt(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice della chiave e del valore associato da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE se l'indice specificato è un indice non valido.

## <a name="csimplemapreverselookup"></a><a name="reverselookup"></a>CSimpleMap::ReverseLookup

Restituisce la chiave associata al valore specificato.

```
TKey ReverseLookup(const TVal& val) const;
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Valore.

### <a name="return-value"></a>Valore restituito

Restituisce la chiave associata. Se non viene trovata alcuna chiave corrispondente, viene restituito NULL.

## <a name="csimplemapsetat"></a><a name="setat"></a>CSimpleMap::SetAt

Imposta il valore associato alla chiave specificata.

```
BOOL SetAt(const TKey& key, const TVal& val);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave.

*Val*<br/>
Nuovo valore da assegnare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la chiave è stata trovata e il valore è stato modificato correttamente, FALSE in caso contrario.

## <a name="csimplemapsetatindex"></a><a name="setatindex"></a>CSimpleMap::SetAtIndex

Imposta la chiave e il valore in corrispondenza dell'indice specificato.

```
BOOL SetAtIndex(
    int nIndex,
    const TKey& key,
    const TVal& val);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice, che fa riferimento all'associazione di chiave e valori da modificare.

*key*<br/>
Nuova chiave.

*Val*<br/>
Nuovo valore.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo, FALSE se l'indice non è valido.

### <a name="remarks"></a>Osservazioni

Aggiorna sia la chiave che il valore a cui punta *nIndex*.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
