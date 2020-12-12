---
description: 'Altre informazioni su: classe CSimpleArray'
title: Classe CSimpleArray
ms.date: 11/04/2016
f1_keywords:
- CSimpleArray
- ATLSIMPCOLL/ATL::CSimpleArray
- ATLSIMPCOLL/ATL::CSimpleArray::CSimpleArray
- ATLSIMPCOLL/ATL::CSimpleArray::Add
- ATLSIMPCOLL/ATL::CSimpleArray::Find
- ATLSIMPCOLL/ATL::CSimpleArray::GetData
- ATLSIMPCOLL/ATL::CSimpleArray::GetSize
- ATLSIMPCOLL/ATL::CSimpleArray::Remove
- ATLSIMPCOLL/ATL::CSimpleArray::RemoveAll
- ATLSIMPCOLL/ATL::CSimpleArray::RemoveAt
- ATLSIMPCOLL/ATL::CSimpleArray::SetAtIndex
helpviewer_keywords:
- CSimpleArray class
ms.assetid: ee0c9f39-b61c-4c18-bc43-4eada21dca3a
ms.openlocfilehash: 95750662587c7ab47500a338c3ecd7e74a92eb34
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140790"
---
# <a name="csimplearray-class"></a>Classe CSimpleArray

Questa classe fornisce metodi per la gestione di una matrice semplice.

## <a name="syntax"></a>Sintassi

```
template <class T, class TEqual = CSimpleArrayEqualHelper<T>>
class CSimpleArray
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella matrice.

*TEqual*<br/>
Oggetto tratto, che definisce il test di uguaglianza per gli elementi di tipo *T*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleArray:: CSimpleArray](#csimplearray)|Costruttore per la matrice semplice.|
|[CSimpleArray:: ~ CSimpleArray](#dtor)|Distruttore per la matrice semplice.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleArray:: Add](#add)|Aggiunge un nuovo elemento alla matrice.|
|[CSimpleArray:: Find](#find)|Trova un elemento nella matrice.|
|[CSimpleArray:: GetData](#getdata)|Restituisce un puntatore ai dati archiviati nella matrice.|
|[CSimpleArray:: GetSize](#getsize)|Restituisce il numero di elementi archiviati nella matrice.|
|[CSimpleArray:: Remove](#remove)|Rimuove un dato elemento dalla matrice.|
|[CSimpleArray:: RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CSimpleArray:: RemoveAt](#removeat)|Rimuove l'elemento specificato dalla matrice.|
|[CSimpleArray:: SetAtIndex (](#setatindex)|Imposta l'elemento specificato nella matrice.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleArray::operator\[\]](#operator_at)|Recupera un elemento da una matrice.|
|[CSimpleArray:: operator =](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Commenti

`CSimpleArray` fornisce metodi per la creazione e la gestione di una matrice semplice, di qualsiasi tipo specificato `T` .

Il parametro `TEqual` fornisce un mezzo per definire una funzione di uguaglianza per due elementi di tipo `T` . Creando una classe simile a [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md), è possibile modificare il comportamento del test di uguaglianza per qualsiasi matrice specificata. Se, ad esempio, si utilizza una matrice di puntatori, può essere utile definire l'uguaglianza in base ai valori a cui fanno riferimento i puntatori. L'implementazione predefinita Usa **operator = ()**.

`CSimpleArray`E [CSimpleMap](../../atl/reference/csimplemap-class.md) sono progettati per un numero ridotto di elementi. [CAtlArray](../../atl/reference/catlarray-class.md) e [CAtlMap](../../atl/reference/catlmap-class.md) devono essere usati quando la matrice contiene un numero elevato di elementi.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#86](../../atl/codesnippet/cpp/csimplearray-class_1.cpp)]

## <a name="csimplearrayadd"></a><a name="add"></a> CSimpleArray:: Add

Aggiunge un nuovo elemento alla matrice.

```
BOOL Add(const T& t);
```

### <a name="parameters"></a>Parametri

*t*<br/>
Elemento da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento viene aggiunto correttamente alla matrice; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#87](../../atl/codesnippet/cpp/csimplearray-class_2.cpp)]

## <a name="csimplearraycsimplearray"></a><a name="csimplearray"></a> CSimpleArray:: CSimpleArray

Costruttore per l'oggetto matrice.

```
CSimpleArray(const CSimpleArray<T, TEqual>& src);
CSimpleArray();
```

### <a name="parameters"></a>Parametri

*src*<br/>
Oggetto `CSimpleArray` esistente.

### <a name="remarks"></a>Commenti

Inizializza i membri dati, creando un nuovo `CSimpleArray` oggetto vuoto o una copia di un oggetto esistente `CSimpleArray` .

## <a name="csimplearraycsimplearray"></a><a name="dtor"></a> CSimpleArray:: ~ CSimpleArray

Distruttore.

```
~CSimpleArray();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

## <a name="csimplearrayfind"></a><a name="find"></a> CSimpleArray:: Find

Trova un elemento nella matrice.

```
int Find(const T& t) const;
```

### <a name="parameters"></a>Parametri

*t*<br/>
Elemento per il quale eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice dell'elemento trovato oppure-1 se l'elemento non viene trovato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#88](../../atl/codesnippet/cpp/csimplearray-class_3.cpp)]

## <a name="csimplearraygetdata"></a><a name="getdata"></a> CSimpleArray:: GetData

Restituisce un puntatore ai dati archiviati nella matrice.

```
T* GetData() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore ai dati nella matrice.

## <a name="csimplearraygetsize"></a><a name="getsize"></a> CSimpleArray:: GetSize

Restituisce il numero di elementi archiviati nella matrice.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi archiviati nella matrice.

## <a name="csimplearrayoperator-"></a><a name="operator_at"></a> Operatore CSimpleArray:: \[\]

Recupera un elemento da una matrice.

```
T& operator[](int nindex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento.

### <a name="return-value"></a>Valore restituito

Restituisce l'elemento della matrice a cui fa riferimento *nIndex*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#89](../../atl/codesnippet/cpp/csimplearray-class_4.cpp)]

## <a name="csimplearrayoperator-"></a><a name="operator_eq"></a> CSimpleArray:: operator =

Operatore di assegnazione.

```
CSimpleArray<T, TEqual>
& operator=(
    const CSimpleArray<T, TEqual>& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Matrice da copiare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto aggiornato `CSimpleArray` .

### <a name="remarks"></a>Commenti

Copia tutti gli elementi dall' `CSimpleArray` oggetto a cui fa riferimento *src* nell'oggetto matrice corrente, sostituendo tutti i dati esistenti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#90](../../atl/codesnippet/cpp/csimplearray-class_5.cpp)]

## <a name="csimplearrayremove"></a><a name="remove"></a> CSimpleArray:: Remove

Rimuove un dato elemento dalla matrice.

```
BOOL Remove(const T& t);
```

### <a name="parameters"></a>Parametri

*t*<br/>
Elemento da rimuovere dalla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento viene trovato e rimosso; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Quando viene rimosso un elemento, gli elementi rimanenti della matrice vengono rinumerati per riempire lo spazio vuoto.

## <a name="csimplearrayremoveall"></a><a name="removeall"></a> CSimpleArray:: RemoveAll

Rimuove tutti gli elementi dalla matrice.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Commenti

Rimuove tutti gli elementi attualmente archiviati nella matrice.

## <a name="csimplearrayremoveat"></a><a name="removeat"></a> CSimpleArray:: RemoveAt

Rimuove l'elemento specificato dalla matrice.

```
BOOL RemoveAtint nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice che punta all'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento è stato rimosso, FALSE se l'indice non è valido.

### <a name="remarks"></a>Commenti

Quando viene rimosso un elemento, gli elementi rimanenti della matrice vengono rinumerati per riempire lo spazio vuoto.

## <a name="csimplearraysetatindex"></a><a name="setatindex"></a> CSimpleArray:: SetAtIndex (

Imposta l'elemento specificato nella matrice.

```
BOOL SetAtIndex(
    int nIndex,
    const T& t);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento da modificare.

*t*<br/>
Valore da assegnare all'elemento specificato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo, FALSE se l'indice non è valido.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
