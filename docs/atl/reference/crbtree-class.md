---
title: Classe CRBTree
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
ms.openlocfilehash: 7b8e47b5cd0ac278711947abc867956333371be3
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833491"
---
# <a name="crbtree-class"></a>Classe CRBTree

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

*V*<br/>
Tipo di elemento valore.

*KTraits*<br/>
Codice utilizzato per copiare o spostare elementi chiave. Per ulteriori informazioni, vedere la [classe CElementTraits](../../atl/reference/celementtraits-class.md) .

*VTraits*<br/>
Codice utilizzato per copiare o spostare elementi di valore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree:: KINARGTYPE](#kinargtype)|Tipo utilizzato quando un tasto viene passato come argomento di input.|
|[CRBTree:: KOUTARGTYPE](#koutargtype)|Tipo utilizzato quando un tasto viene restituito come argomento di output.|
|[CRBTree:: VINARGTYPE](#vinargtype)|Tipo utilizzato quando un valore viene passato come argomento di input.|
|[CRBTree:: VOUTARGTYPE](#voutargtype)|Tipo utilizzato quando un valore viene passato come argomento di output.|

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe CRBTree:: CPair](#cpair_class)|Classe contenente gli elementi Key e value.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree:: ~ CRBTree](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree:: FindFirstKeyAfter](#findfirstkeyafter)|Chiamare questo metodo per trovare la posizione dell'elemento che usa la chiave disponibile successiva.|
|[CRBTree:: GetA](#getat)|Chiamare questo metodo per ottenere l'elemento in una posizione specificata nell'albero.|
|[CRBTree:: GetCount](#getcount)|Chiamare questo metodo per ottenere il numero di elementi nella struttura ad albero.|
|[CRBTree:: GetHeadPosition](#getheadposition)|Chiamare questo metodo per ottenere il valore di posizione per l'elemento all'inizio dell'albero.|
|[CRBTree:: GetKeyAt](#getkeyat)|Chiamare questo metodo per ottenere la chiave da una posizione specificata nell'albero.|
|[CRBTree:: GetNext](#getnext)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell' `CRBTree` oggetto e far avanzare la posizione all'elemento successivo.|
|[CRBTree:: GetNextAssoc](#getnextassoc)|Chiamare questo metodo per ottenere la chiave e il valore di un elemento archiviato nella mappa e far avanzare la posizione all'elemento successivo.|
|[CRBTree:: GetNextKey](#getnextkey)|Chiamare questo metodo per ottenere la chiave di un elemento archiviato nell'albero e far avanzare la posizione all'elemento successivo.|
|[CRBTree:: GetNextValue](#getnextvalue)|Chiamare questo metodo per ottenere il valore di un elemento archiviato nell'albero e far avanzare la posizione all'elemento successivo.|
|[CRBTree:: GetPrev](#getprev)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell' `CRBTree` oggetto, quindi aggiornare la posizione all'elemento precedente.|
|[CRBTree:: GetTailPosition](#gettailposition)|Chiamare questo metodo per ottenere il valore di posizione per l'elemento in corrispondenza della parte finale dell'albero.|
|[CRBTree:: GetValueAt](#getvalueat)|Chiamare questo metodo per recuperare il valore archiviato in una determinata posizione nell' `CRBTree` oggetto.|
|[CRBTree:: IsEmpty](#isempty)|Chiamare questo metodo per verificare la presenza di un oggetto albero vuoto.|
|[CRBTree:: RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dall' `CRBTree` oggetto.|
|[CRBTree:: RemoveAt](#removeat)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nell' `CRBTree` oggetto.|
|[CRBTree:: SetValueAt](#setvalueat)|Chiamare questo metodo per modificare il valore archiviato in una determinata posizione nell' `CRBTree` oggetto.|

## <a name="remarks"></a>Osservazioni

Un albero rosso-nero è una struttura di ricerca binaria che usa un bit aggiuntivo di informazioni per ogni nodo, per garantire che rimanga "bilanciato", ovvero che l'altezza dell'albero non cresca in modo sproporzionato e influisca sulle prestazioni.

Questa classe modello è progettata per essere usata da [CRBMap](../../atl/reference/crbmap-class.md) e [CRBMultiMap](../../atl/reference/crbmultimap-class.md). La maggior parte dei metodi che compongono queste classi derivate viene fornita da `CRBTree` .

Per una descrizione più completa delle varie classi di raccolta e delle relative caratteristiche e caratteristiche di prestazioni, vedere [classi di raccolta ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="crbtreecpair-class"></a><a name="cpair_class"></a> Classe CRBTree:: CPair

Classe contenente gli elementi Key e value.

```
class CPair : public __POSITION
```

### <a name="remarks"></a>Osservazioni

Questa classe viene usata dai metodi [CRBTree:: Geta](#getat), [CRBTree:: GetNext](#getnext)e [CRBTree:: GetPrev](#getprev) per accedere agli elementi Key e value archiviati nella struttura ad albero.

I membri sono i seguenti:

|Membro dei dati|Descrizione|
|-|-|
|`m_key`|Membro dati che archivia l'elemento chiave.|
|`m_value`|Membro dati che archivia l'elemento value.|

## <a name="crbtreecrbtree"></a><a name="dtor"></a> CRBTree:: ~ CRBTree

Distruttore.

```
~CRBTree() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate. Chiama [CRBTree:: RemoveAll](#removeall) per eliminare tutti gli elementi.

## <a name="crbtreefindfirstkeyafter"></a><a name="findfirstkeyafter"></a> CRBTree:: FindFirstKeyAfter

Chiamare questo metodo per trovare la posizione dell'elemento che usa la chiave disponibile successiva.

```
POSITION FindFirstKeyAfter(KINARGTYPE key) const throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Valore di chiave.

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione dell'elemento che utilizza la chiave disponibile successiva. Se non sono presenti altri elementi, viene restituito NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo semplifica l'attraversamento dell'albero senza dover calcolare prima i valori di posizione.

## <a name="crbtreegetat"></a><a name="getat"></a> CRBTree:: GetA

Chiamare questo metodo per ottenere l'elemento in una posizione specificata nell'albero.

```
CPair* GetAt(POSITION pos) throw();
const CPair* GetAt(POSITION pos) const throw();
void GetAt(POSITION pos, KOUTARGTYPE key, VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione.

*key*<br/>
Variabile che riceve la chiave.

*value*<br/>
Variabile che riceve il valore.

### <a name="return-value"></a>Valore restituito

I primi due moduli restituiscono un puntatore a un [CPair](#cpair_class). Il terzo form ottiene una chiave e un valore per la posizione specificata.

### <a name="remarks"></a>Osservazioni

Il valore di posizione può essere determinato in precedenza con una chiamata a un metodo, ad esempio [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: GetTailPosition](#gettailposition).

Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

## <a name="crbtreegetcount"></a><a name="getcount"></a> CRBTree:: GetCount

Chiamare questo metodo per ottenere il numero di elementi nella struttura ad albero.

```
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi (ogni coppia chiave/valore è un elemento) archiviato nell'albero.

## <a name="crbtreegetheadposition"></a><a name="getheadposition"></a> CRBTree:: GetHeadPosition

Chiamare questo metodo per ottenere il valore di posizione per l'elemento all'inizio dell'albero.

```
POSITION GetHeadPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione per l'elemento all'inizio dell'albero.

### <a name="remarks"></a>Osservazioni

Il valore restituito da `GetHeadPosition` può essere usato con metodi quali [CRBTree:: GetKeyAt](#getkeyat) o [CRBTree:: GetNext](#getnext) per attraversare l'albero e recuperare i valori.

## <a name="crbtreegetkeyat"></a><a name="getkeyat"></a> CRBTree:: GetKeyAt

Chiamare questo metodo per ottenere la chiave da una posizione specificata nell'albero.

```
const K& GetKeyAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione.

### <a name="return-value"></a>Valore restituito

Restituisce la chiave archiviata nella posizione *pos* nell'albero.

### <a name="remarks"></a>Osservazioni

Se *pos* non è un valore di posizione valido, i risultati sono imprevedibili. Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

## <a name="crbtreegetnext"></a><a name="getnext"></a> CRBTree:: GetNext

Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell' `CRBTree` oggetto e far avanzare la posizione all'elemento successivo.

```
const CPair* GetNext(POSITION& pos) const throw();
CPair* GetNext(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al valore [CPair](#cpair_class) successivo nell'albero.

### <a name="remarks"></a>Osservazioni

Il contatore posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nell'albero, *pos* viene impostato su null.

## <a name="crbtreegetnextassoc"></a><a name="getnextassoc"></a> CRBTree:: GetNextAssoc

Chiamare questo metodo per ottenere la chiave e il valore di un elemento archiviato nella mappa e far avanzare la posizione all'elemento successivo.

```cpp
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

*key*<br/>
Parametro di modello che specifica il tipo della chiave della struttura ad albero.

*value*<br/>
Parametro di modello che specifica il tipo del valore della struttura ad albero.

### <a name="remarks"></a>Osservazioni

Il contatore posizione *pos* viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nell'albero, *pos* viene impostato su null.

## <a name="crbtreegetnextkey"></a><a name="getnextkey"></a> CRBTree:: GetNextKey

Chiamare questo metodo per ottenere la chiave di un elemento archiviato nell'albero e far avanzare la posizione all'elemento successivo.

```
const K& GetNextKey(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave successiva nell'albero.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore della posizione corrente, *pos*. Se non sono presenti altre voci nell'albero, il contatore di posizioni è impostato su NULL.

## <a name="crbtreegetnextvalue"></a><a name="getnextvalue"></a> CRBTree:: GetNextValue

Chiamare questo metodo per ottenere il valore di un elemento archiviato nell'albero e far avanzare la posizione all'elemento successivo.

```
const V& GetNextValue(POSITION& pos) const throw();
V& GetNextValue(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore successivo nell'albero.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore della posizione corrente, *pos*. Se non sono presenti altre voci nell'albero, il contatore di posizioni è impostato su NULL.

## <a name="crbtreegetprev"></a><a name="getprev"></a> CRBTree:: GetPrev

Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell' `CRBTree` oggetto, quindi aggiornare la posizione all'elemento precedente.

```
const CPair* GetPrev(POSITION& pos) const throw();
CPair* GetPrev(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al valore [CPair](#cpair_class) precedente archiviato nell'albero.

### <a name="remarks"></a>Osservazioni

Aggiorna il contatore della posizione corrente, *pos*. Se non sono presenti altre voci nell'albero, il contatore di posizioni è impostato su NULL.

## <a name="crbtreegettailposition"></a><a name="gettailposition"></a> CRBTree:: GetTailPosition

Chiamare questo metodo per ottenere il valore di posizione per l'elemento in corrispondenza della parte finale dell'albero.

```
POSITION GetTailPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione per l'elemento in corrispondenza della parte finale dell'albero.

### <a name="remarks"></a>Osservazioni

Il valore restituito da `GetTailPosition` può essere usato con metodi quali [CRBTree:: GetKeyAt](#getkeyat) o [CRBTree:: GetPrev](#getprev) per attraversare l'albero e recuperare i valori.

## <a name="crbtreegetvalueat"></a><a name="getvalueat"></a> CRBTree:: GetValueAt

Chiamare questo metodo per recuperare il valore archiviato in una determinata posizione nell' `CRBTree` oggetto.

```
const V& GetValueAt(POSITION pos) const throw();
V& GetValueAt(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore archiviato in corrispondenza della posizione specificata nell' `CRBTree` oggetto.

## <a name="crbtreeisempty"></a><a name="isempty"></a> CRBTree:: IsEmpty

Chiamare questo metodo per verificare la presenza di un oggetto albero vuoto.

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'albero è vuoto; in caso contrario, FALSE.

## <a name="crbtreekinargtype"></a><a name="kinargtype"></a> CRBTree:: KINARGTYPE

Tipo utilizzato quando un tasto viene passato come argomento di input.

```
typedef KTraits::INARGTYPE KINARGTYPE;
```

## <a name="crbtreekoutargtype"></a><a name="koutargtype"></a> CRBTree:: KOUTARGTYPE

Tipo utilizzato quando un tasto viene restituito come argomento di output.

```
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

## <a name="crbtreeremoveall"></a><a name="removeall"></a> CRBTree:: RemoveAll

Chiamare questo metodo per rimuovere tutti gli elementi dall' `CRBTree` oggetto.

```cpp
void RemoveAll() throw();
```

### <a name="remarks"></a>Osservazioni

Cancella l' `CRBTree` oggetto, liberando la memoria usata per archiviare gli elementi.

## <a name="crbtreeremoveat"></a><a name="removeat"></a> CRBTree:: RemoveAt

Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nell' `CRBTree` oggetto.

```cpp
void RemoveAt(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="remarks"></a>Osservazioni

Rimuove la coppia chiave/valore archiviata nella posizione specificata. La memoria utilizzata per archiviare l'elemento viene liberata. La posizione a cui fa riferimento *pos* diventa non valida e mentre la posizione di tutti gli altri elementi nell'albero resta valida, non mantengono necessariamente lo stesso ordine.

## <a name="crbtreesetvalueat"></a><a name="setvalueat"></a> CRBTree:: SetValueAt

Chiamare questo metodo per modificare il valore archiviato in una determinata posizione nell' `CRBTree` oggetto.

```cpp
void SetValueAt(POSITION pos, VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il contatore della posizione, restituito da una chiamata precedente a metodi quali [CRBTree:: GetHeadPosition](#getheadposition) o [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

*value*<br/>
Valore da aggiungere all' `CRBTree` oggetto.

### <a name="remarks"></a>Osservazioni

Modifica l'elemento del valore archiviato in corrispondenza della posizione specificata nell' `CRBTree` oggetto.

## <a name="crbtreevinargtype"></a><a name="vinargtype"></a> CRBTree:: VINARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di input.

```
typedef VTraits::INARGTYPE VINARGTYPE;
```

## <a name="crbtreevoutargtype"></a><a name="voutargtype"></a> CRBTree:: VOUTARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di output.

```
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
