---
title: CrBTree (classe)
ms.date: 11/04/2016
f1_keywords:
- CRBTree
- ATLCOLL/ATL::CRBTree
- ATLCOLL/ATL::CRBTree::KINARGTYPE
- ATLCOLL/ATL::CRBTree::KOUTARGTYPE
- ATLCOLL/ATL::CRBTree::VINARGTYPE
- ATLCOLL/ATL::CRBTree::VOUTARGTYPE
- ATLCOLL/ATL::CRBTree::FindFirstKeyAfter
- ATLCOLL/ATL::CRBTree::GetAt
- ATLCOLL/ATL::CRBTree::GetCount
- ATLCOLL/ATL::CRBTree::GetHeadPosition
- ATLCOLL/ATL::CRBTree::GetKeyAt
- ATLCOLL/ATL::CRBTree::GetNext
- ATLCOLL/ATL::CRBTree::GetNextAssoc
- ATLCOLL/ATL::CRBTree::GetNextKey
- ATLCOLL/ATL::CRBTree::GetNextValue
- ATLCOLL/ATL::CRBTree::GetPrev
- ATLCOLL/ATL::CRBTree::GetTailPosition
- ATLCOLL/ATL::CRBTree::GetValueAt
- ATLCOLL/ATL::CRBTree::IsEmpty
- ATLCOLL/ATL::CRBTree::RemoveAll
- ATLCOLL/ATL::CRBTree::RemoveAt
- ATLCOLL/ATL::CRBTree::SetValueAt
helpviewer_keywords:
- CRBTree class
ms.assetid: a1b1cb63-38e4-4fc2-bb28-f774d1721760
ms.openlocfilehash: 58c001ccef35d4265ef5b7fe200654781f130872
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81746584"
---
# <a name="crbtree-class"></a>CrBTree (classe)

Questa classe fornisce metodi per la creazione e l'utilizzo di un albero rosso-nero.

## <a name="syntax"></a>Sintassi

```
template <typename K,
          typename V,
          class KTraits = CElementTraits<K>,
          class VTraits = CElementTraits<V>>
class CRBTree
```

#### <a name="parameters"></a>Parametri

*K*<br/>
Tipo di elemento chiave.

*Presso*<br/>
Tipo di elemento valore.

*Caratteristiche KTraits*<br/>
Codice utilizzato per copiare o spostare gli elementi chiave. Vedere [CElementTraits classe](../../atl/reference/celementtraits-class.md) per ulteriori dettagli.

*Tratti V*<br/>
Codice utilizzato per copiare o spostare gli elementi valore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree::KINARGTYPE (TIPO INCR)](#kinargtype)|Tipo utilizzato quando un tasto viene passato come argomento di input.|
|[CRBTree::KOUTARGTYPE (Informazioni in stati critici per la creazione di UN'espressione in stato di vita](#koutargtype)|Tipo utilizzato quando viene restituita una chiave come argomento di output.|
|[CRBTree::VINARGTYPE (CRBTree::VINARGTYPE)](#vinargtype)|Tipo utilizzato quando un valore viene passato come argomento di input.|
|[CRBTree::VOUTARGTYPE (CRBTree::VOUTARGTYPE)](#voutargtype)|Tipo utilizzato quando un valore viene passato come argomento di output.|

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree::CPair (classe)](#cpair_class)|Classe contenente gli elementi key e value.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree: : CRBTree](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree::FindFirstKeyAfter](#findfirstkeyafter)|Chiamare questo metodo per trovare la posizione dell'elemento che utilizza la chiave disponibile successiva.|
|[CRBTree::GetAt](#getat)|Chiamare questo metodo per ottenere l'elemento in una determinata posizione nella struttura ad albero.|
|[CRBTree::GetCount](#getcount)|Chiamare questo metodo per ottenere il numero di elementi nella struttura ad albero.|
|[CRBTree::GetHeadPosition](#getheadposition)|Chiamare questo metodo per ottenere il valore della posizione per l'elemento all'intestazione della struttura ad albero.|
|[CRBTree::GetKeyAt](#getkeyat)|Chiamare questo metodo per ottenere la chiave da una posizione specificata nella struttura ad albero.|
|[CRBTree::GetNext](#getnext)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell'oggetto `CRBTree` e spostare la posizione all'elemento successivo.|
|[CRBTree::GetNextAssoc](#getnextassoc)|Chiamare questo metodo per ottenere la chiave e il valore di un elemento archiviato nella mappa e spostare la posizione all'elemento successivo.|
|[CRBTree::GetNextKey](#getnextkey)|Chiamare questo metodo per ottenere la chiave di un elemento archiviato nella struttura ad albero e spostare la posizione all'elemento successivo.|
|[CRBTree::GetNextValue](#getnextvalue)|Chiamare questo metodo per ottenere il valore di un elemento archiviato nella struttura ad albero e spostare la posizione all'elemento successivo.|
|[CRBTree::GetPrev](#getprev)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell'oggetto `CRBTree` e quindi aggiornare la posizione all'elemento precedente.|
|[CRBTree::GetTailPosition](#gettailposition)|Chiamare questo metodo per ottenere il valore della posizione per l'elemento nella parte finale della struttura ad albero.|
|[CRBTree::GetValueAt](#getvalueat)|Chiamare questo metodo per recuperare il valore `CRBTree` archiviato in una posizione specificata nell'oggetto.|
|[CRBTree::IsEmpty](#isempty)|Chiamare questo metodo per verificare la perselezione di un oggetto struttura ad albero vuoto.|
|[CRBTree::RemoveAll](#removeall)|Chiamare questo metodo per rimuovere `CRBTree` tutti gli elementi dall'oggetto.|
|[CRBTree::RemoveAt](#removeat)|Chiamare questo metodo per rimuovere l'elemento `CRBTree` nella posizione specificata nell'oggetto.|
|[CRBTree::SetValueAt](#setvalueat)|Chiamare questo metodo per modificare il valore `CRBTree` archiviato in una determinata posizione nell'oggetto.|

## <a name="remarks"></a>Osservazioni

Un albero rosso-nero è un albero di ricerca binario che utilizza un bit aggiuntivo di informazioni per nodo per garantire che rimanga "equilibrato", vale a dire, l'altezza dell'albero non aumenta in modo sproporzionato grande e influisce sulle prestazioni.

Questa classe modello è progettata per essere utilizzata da [CRBMap](../../atl/reference/crbmap-class.md) e [CRBMultiMap](../../atl/reference/crbmultimap-class.md). La maggior parte dei metodi che costituiscono `CRBTree`queste classi derivate viene fornita da .

Per una descrizione più completa delle varie classi di raccolte e delle relative caratteristiche e caratteristiche delle prestazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="crbtreecpair-class"></a><a name="cpair_class"></a>CRBTree::CPair (classe)

Classe contenente gli elementi key e value.

```
class CPair : public __POSITION
```

### <a name="remarks"></a>Osservazioni

Questa classe viene utilizzata dai metodi [CRBTree::GetAt](#getat), [CRBTree::GetNext](#getnext)e [CRBTree::GetPrev](#getprev) per accedere agli elementi chiave e valore archiviati nella struttura ad albero.

I membri sono i seguenti:

|||
|-|-|
|`m_key`|Membro dati che archivia l'elemento chiave.|
|`m_value`|Membro dati che archivia l'elemento value.|

## <a name="crbtreecrbtree"></a><a name="dtor"></a>CRBTree: : CRBTree

Distruttore.

```
~CRBTree() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate. Chiama [CRBTree::RemoveAll](#removeall) per eliminare tutti gli elementi.

## <a name="crbtreefindfirstkeyafter"></a><a name="findfirstkeyafter"></a>CRBTree::FindFirstKeyAfter

Chiamare questo metodo per trovare la posizione dell'elemento che utilizza la chiave disponibile successiva.

```
POSITION FindFirstKeyAfter(KINARGTYPE key) const throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore di chiave.

### <a name="return-value"></a>Valore restituito

Restituisce il valore della posizione dell'elemento che utilizza la chiave disponibile successiva. Se non sono presenti altri elementi, viene restituito NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo semplifica l'attraversamento dell'albero senza dover calcolare in anticipo i valori di posizione.

## <a name="crbtreegetat"></a><a name="getat"></a>CRBTree::GetAt

Chiamare questo metodo per ottenere l'elemento in una determinata posizione nella struttura ad albero.

```
CPair* GetAt(POSITION pos) throw();
const CPair* GetAt(POSITION pos) const throw();
void GetAt(POSITION pos, KOUTARGTYPE key, VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Valore di posizione.

*key*<br/>
Variabile che riceve la chiave.

*value*<br/>
Variabile che riceve il valore.

### <a name="return-value"></a>Valore restituito

Le prime due forme restituiscono un puntatore a un [oggetto CPair](#cpair_class). Il terzo modulo ottiene una chiave e un valore per la posizione specificata.

### <a name="remarks"></a>Osservazioni

Il valore di posizione può essere determinato in precedenza con una chiamata a un metodo come [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::GetTailPosition](#gettailposition).

Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a NULL.

## <a name="crbtreegetcount"></a><a name="getcount"></a>CRBTree::GetCount

Chiamare questo metodo per ottenere il numero di elementi nella struttura ad albero.

```
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi (ogni coppia chiave/valore è un elemento) archiviati nella struttura ad albero.

## <a name="crbtreegetheadposition"></a><a name="getheadposition"></a>CRBTree::GetHeadPosition

Chiamare questo metodo per ottenere il valore della posizione per l'elemento all'intestazione della struttura ad albero.

```
POSITION GetHeadPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della posizione per l'elemento all'capo della struttura ad albero.

### <a name="remarks"></a>Osservazioni

Il valore restituito `GetHeadPosition` da può essere utilizzato con metodi quali [CRBTree::GetKeyAt](#getkeyat) o [CRBTree::GetNext](#getnext) per attraversare la struttura ad albero e recuperare i valori.

## <a name="crbtreegetkeyat"></a><a name="getkeyat"></a>CRBTree::GetKeyAt

Chiamare questo metodo per ottenere la chiave da una posizione specificata nella struttura ad albero.

```
const K& GetKeyAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Valore di posizione.

### <a name="return-value"></a>Valore restituito

Restituisce la chiave memorizzata nella posizione *pos* nella struttura ad albero.

### <a name="remarks"></a>Osservazioni

Se *pos* non è un valore di posizione valido, i risultati sono imprevedibili. Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a NULL.

## <a name="crbtreegetnext"></a><a name="getnext"></a>CRBTree::GetNext

Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell'oggetto `CRBTree` e spostare la posizione all'elemento successivo.

```
const CPair* GetNext(POSITION& pos) const throw();
CPair* GetNext(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al valore [CPair](#cpair_class) successivo nella struttura ad albero.

### <a name="remarks"></a>Osservazioni

Il contatore di posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nell'albero, *pos* è impostato su NULL.

## <a name="crbtreegetnextassoc"></a><a name="getnextassoc"></a>CRBTree::GetNextAssoc

Chiamare questo metodo per ottenere la chiave e il valore di un elemento archiviato nella mappa e spostare la posizione all'elemento successivo.

```cpp
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

*key*<br/>
Parametro di modello che specifica il tipo della chiave dell'albero.

*value*<br/>
Parametro di modello che specifica il tipo del valore della struttura ad albero.

### <a name="remarks"></a>Osservazioni

Il contatore di posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nell'albero, *pos* è impostato su NULL.

## <a name="crbtreegetnextkey"></a><a name="getnextkey"></a>CRBTree::GetNextKey

Chiamare questo metodo per ottenere la chiave di un elemento archiviato nella struttura ad albero e spostare la posizione all'elemento successivo.

```
const K& GetNextKey(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave successiva nella struttura ad albero.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore di posizione corrente, *pos*. Se non sono presenti altre voci nella struttura ad albero, il contatore di posizione è impostato su NULL.

## <a name="crbtreegetnextvalue"></a><a name="getnextvalue"></a>CRBTree::GetNextValue

Chiamare questo metodo per ottenere il valore di un elemento archiviato nella struttura ad albero e spostare la posizione all'elemento successivo.

```
const V& GetNextValue(POSITION& pos) const throw();
V& GetNextValue(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore successivo nella struttura ad albero.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore di posizione corrente, *pos*. Se non sono presenti altre voci nella struttura ad albero, il contatore di posizione è impostato su NULL.

## <a name="crbtreegetprev"></a><a name="getprev"></a>CRBTree::GetPrev

Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell'oggetto `CRBTree` e quindi aggiornare la posizione all'elemento precedente.

```
const CPair* GetPrev(POSITION& pos) const throw();
CPair* GetPrev(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al valore [CPair](#cpair_class) precedente archiviato nella struttura ad albero.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore di posizione corrente, *pos*. Se non sono presenti altre voci nella struttura ad albero, il contatore di posizione è impostato su NULL.

## <a name="crbtreegettailposition"></a><a name="gettailposition"></a>CRBTree::GetTailPosition

Chiamare questo metodo per ottenere il valore della posizione per l'elemento nella parte finale della struttura ad albero.

```
POSITION GetTailPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della posizione per l'elemento nella parte finale della struttura ad albero.

### <a name="remarks"></a>Osservazioni

Il valore restituito `GetTailPosition` da può essere utilizzato con metodi quali [CRBTree::GetKeyAt](#getkeyat) o [CRBTree::GetPrev](#getprev) per attraversare l'albero e recuperare i valori.

## <a name="crbtreegetvalueat"></a><a name="getvalueat"></a>CRBTree::GetValueAt

Chiamare questo metodo per recuperare il valore `CRBTree` archiviato in una posizione specificata nell'oggetto.

```
const V& GetValueAt(POSITION pos) const throw();
V& GetValueAt(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore archiviato `CRBTree` nella posizione specificata nell'oggetto.

## <a name="crbtreeisempty"></a><a name="isempty"></a>CRBTree::IsEmpty

Chiamare questo metodo per verificare la perselezione di un oggetto struttura ad albero vuoto.

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la struttura ad albero è vuota, FALSE in caso contrario.

## <a name="crbtreekinargtype"></a><a name="kinargtype"></a>CRBTree::KINARGTYPE (TIPO INCR)

Tipo utilizzato quando un tasto viene passato come argomento di input.

```
typedef KTraits::INARGTYPE KINARGTYPE;
```

## <a name="crbtreekoutargtype"></a><a name="koutargtype"></a>CRBTree::KOUTARGTYPE (Informazioni in stati critici per la creazione di UN'espressione in stato di vita

Tipo utilizzato quando viene restituita una chiave come argomento di output.

```
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

## <a name="crbtreeremoveall"></a><a name="removeall"></a>CRBTree::RemoveAll

Chiamare questo metodo per rimuovere `CRBTree` tutti gli elementi dall'oggetto.

```cpp
void RemoveAll() throw();
```

### <a name="remarks"></a>Osservazioni

Cancella l'oggetto, `CRBTree` liberando la memoria utilizzata per memorizzare gli elementi.

## <a name="crbtreeremoveat"></a><a name="removeat"></a>CRBTree::RemoveAt

Chiamare questo metodo per rimuovere l'elemento `CRBTree` nella posizione specificata nell'oggetto.

```cpp
void RemoveAt(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### <a name="remarks"></a>Osservazioni

Rimuove la coppia chiave/valore archiviata nella posizione specificata. La memoria utilizzata per archiviare l'elemento viene liberata. La POSITION a cui fa riferimento *pos* diventa non valida e, mentre la POSITION di qualsiasi altro elemento nell'albero rimane valida, non mantengono necessariamente lo stesso ordine.

## <a name="crbtreesetvalueat"></a><a name="setvalueat"></a>CRBTree::SetValueAt

Chiamare questo metodo per modificare il valore `CRBTree` archiviato in una determinata posizione nell'oggetto.

```cpp
void SetValueAt(POSITION pos, VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Contatore di posizione, restituito da una precedente chiamata a metodi quali [CRBTree::GetHeadPosition](#getheadposition) o [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

*value*<br/>
Valore da aggiungere `CRBTree` all'oggetto.

### <a name="remarks"></a>Osservazioni

Modifica l'elemento valore memorizzato `CRBTree` nella posizione specificata nell'oggetto.

## <a name="crbtreevinargtype"></a><a name="vinargtype"></a>CRBTree::VINARGTYPE (CRBTree::VINARGTYPE)

Tipo utilizzato quando un valore viene passato come argomento di input.

```
typedef VTraits::INARGTYPE VINARGTYPE;
```

## <a name="crbtreevoutargtype"></a><a name="voutargtype"></a>CRBTree::VOUTARGTYPE (CRBTree::VOUTARGTYPE)

Tipo utilizzato quando un valore viene passato come argomento di output.

```
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
