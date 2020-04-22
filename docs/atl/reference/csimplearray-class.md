---
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
ms.openlocfilehash: d3386687757412d09e4df29e84f691f1615c472a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81746480"
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

*Uguale a*<br/>
Oggetto tratto, che definisce il test di uguaglianza per gli elementi di tipo *T*.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleArray::CSimpleArray](#csimplearray)|Costruttore per la matrice semplice.|
|[CSimpleArray:: : CSimpleArray](#dtor)|Distruttore per l'array semplice.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleArray::Aggiungi](#add)|Aggiunge un nuovo elemento alla matrice.|
|[CSimpleArray::Find](#find)|Trova un elemento nella matrice.|
|[CSimpleArray::GetData](#getdata)|Restituisce un puntatore ai dati archiviati nella matrice.|
|[CSimpleArray::GetSize](#getsize)|Restituisce il numero di elementi archiviati nella matrice.|
|[CSimpleArray::Rimuovi](#remove)|Rimuove un elemento specificato dalla matrice.|
|[CSimpleArray::RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CSimpleArray::RemoveAt](#removeat)|Rimuove l'elemento specificato dalla matrice.|
|[CSimpleArray::SetAtIndex](#setatindex)|Imposta l'elemento specificato nella matrice.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleArray::operator\[\]](#operator_at)|Recupera un elemento da una matrice.|
|[CSimpleArray::operatore](#operator_eq)|Operatore di assegnazione.|

## <a name="remarks"></a>Osservazioni

`CSimpleArray`fornisce metodi per la creazione e la `T`gestione di una matrice semplice, di qualsiasi tipo specificato.

Il `TEqual` parametro consente di definire una funzione `T`di uguaglianza per due elementi di tipo . Creando una classe simile a [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md), è possibile modificare il comportamento del test di uguaglianza per qualsiasi matrice specificata. Ad esempio, quando si gestisce una matrice di puntatori, può essere utile definire l'uguaglianza in base ai valori a cui fanno riferimento i puntatori. L'implementazione predefinita utilizza **operator .**

Entrambi `CSimpleArray` e [CSimpleMap](../../atl/reference/csimplemap-class.md) sono progettati per un numero ridotto di elementi. [CAtlArray](../../atl/reference/catlarray-class.md) e [CAtlMap](../../atl/reference/catlmap-class.md) deve essere utilizzato quando la matrice contiene un numero elevato di elementi.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll.h

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#86](../../atl/codesnippet/cpp/csimplearray-class_1.cpp)]

## <a name="csimplearrayadd"></a><a name="add"></a>CSimpleArray::Aggiungi

Aggiunge un nuovo elemento alla matrice.

```
BOOL Add(const T& t);
```

### <a name="parameters"></a>Parametri

*t*<br/>
Elemento da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento viene aggiunto correttamente alla matrice, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#87](../../atl/codesnippet/cpp/csimplearray-class_2.cpp)]

## <a name="csimplearraycsimplearray"></a><a name="csimplearray"></a>CSimpleArray::CSimpleArray

Costruttore per l'oggetto matrice.

```
CSimpleArray(const CSimpleArray<T, TEqual>& src);
CSimpleArray();
```

### <a name="parameters"></a>Parametri

*src*<br/>
Oggetto `CSimpleArray` esistente.

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati, creando `CSimpleArray` un nuovo oggetto vuoto `CSimpleArray` o una copia di un oggetto esistente.

## <a name="csimplearraycsimplearray"></a><a name="dtor"></a>CSimpleArray:: : CSimpleArray

Distruttore.

```
~CSimpleArray();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="csimplearrayfind"></a><a name="find"></a>CSimpleArray::Find

Trova un elemento nella matrice.

```
int Find(const T& t) const;
```

### <a name="parameters"></a>Parametri

*t*<br/>
Elemento per il quale eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice dell'elemento trovato oppure -1 se l'elemento non viene trovato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#88](../../atl/codesnippet/cpp/csimplearray-class_3.cpp)]

## <a name="csimplearraygetdata"></a><a name="getdata"></a>CSimpleArray::GetData

Restituisce un puntatore ai dati archiviati nella matrice.

```
T* GetData() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore ai dati nella matrice.

## <a name="csimplearraygetsize"></a><a name="getsize"></a>CSimpleArray::GetSize

Restituisce il numero di elementi archiviati nella matrice.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi archiviati nella matrice.

## <a name="csimplearrayoperator-"></a><a name="operator_at"></a>CSimpleArray::operatore\[\]

Recupera un elemento da una matrice.

```
T& operator[](int nindex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento.

### <a name="return-value"></a>Valore restituito

Restituisce l'elemento della matrice a cui fa riferimento *nIndex.*

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#89](../../atl/codesnippet/cpp/csimplearray-class_4.cpp)]

## <a name="csimplearrayoperator-"></a><a name="operator_eq"></a>CSimpleArray::operatore

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

Restituisce un puntatore all'oggetto aggiornato. `CSimpleArray`

### <a name="remarks"></a>Osservazioni

Copia tutti gli `CSimpleArray` elementi dall'oggetto a cui fa riferimento *src* nell'oggetto array corrente, sostituendo tutti i dati esistenti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#90](../../atl/codesnippet/cpp/csimplearray-class_5.cpp)]

## <a name="csimplearrayremove"></a><a name="remove"></a>CSimpleArray::Rimuovi

Rimuove un elemento specificato dalla matrice.

```
BOOL Remove(const T& t);
```

### <a name="parameters"></a>Parametri

*t*<br/>
Elemento da rimuovere dalla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento viene trovato e rimosso, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Quando un elemento viene rimosso, gli elementi rimanenti nella matrice vengono rinumerati per riempire lo spazio vuoto.

## <a name="csimplearrayremoveall"></a><a name="removeall"></a>CSimpleArray::RemoveAll

Rimuove tutti gli elementi dalla matrice.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Rimuove tutti gli elementi attualmente memorizzati nella matrice.

## <a name="csimplearrayremoveat"></a><a name="removeat"></a>CSimpleArray::RemoveAt

Rimuove l'elemento specificato dalla matrice.

```
BOOL RemoveAtint nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice che punta all'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento è stato rimosso, FALSE se l'indice non è valido.

### <a name="remarks"></a>Osservazioni

Quando un elemento viene rimosso, gli elementi rimanenti nella matrice vengono rinumerati per riempire lo spazio vuoto.

## <a name="csimplearraysetatindex"></a><a name="setatindex"></a>CSimpleArray::SetAtIndex

Impostare l'elemento specificato nella matrice.

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

Restituisce TRUE se ha esito positivo, FALSE se l'indice non è valido.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
