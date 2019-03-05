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
ms.openlocfilehash: 59416000eecf4be25746d9dedd86ea2af116087a
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57281340"
---
# <a name="crbtree-class"></a>Classe CRBTree

Questa classe fornisce metodi per la creazione e utilizzo di una struttura ad albero rosso-bianco.

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
Il tipo di elemento key.

*V*<br/>
Il tipo di elemento di valore.

*KTraits*<br/>
Il codice usato per copiare o spostare gli elementi chiave. Visualizzare [classe CElementTraits](../../atl/reference/celementtraits-class.md) per altri dettagli.

*VTraits*<br/>
Il codice usato per copiare o spostare gli elementi di valore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree::KINARGTYPE](#kinargtype)|Tipo utilizzato quando una chiave viene passata come argomento di input.|
|[CRBTree::KOUTARGTYPE](#koutargtype)|Tipo utilizzato quando una chiave viene restituita come argomento di output.|
|[CRBTree::VINARGTYPE](#vinargtype)|Tipo utilizzato quando un valore viene passato come argomento di input.|
|[CRBTree::VOUTARGTYPE](#voutargtype)|Tipo utilizzato quando un valore viene passato come argomento di output.|

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe CRBTree::CPair](#cpair_class)|Una classe che contiene gli elementi chiave / valore.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree:: ~ CRBTree](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRBTree::FindFirstKeyAfter](#findfirstkeyafter)|Chiamare questo metodo per individuare la posizione dell'elemento che utilizza la chiave disponibile successiva.|
|[CRBTree::GetAt](#getat)|Chiamare questo metodo per ottenere l'elemento in una determinata posizione nell'albero.|
|[CRBTree::GetCount](#getcount)|Chiamare questo metodo per ottenere il numero di elementi nell'albero.|
|[CRBTree::GetHeadPosition](#getheadposition)|Chiamare questo metodo per ottenere il valore di posizione per l'elemento in corrispondenza dell'inizio dell'albero.|
|[CRBTree::GetKeyAt](#getkeyat)|Chiamare questo metodo per ottenere la chiave da una determinata posizione nell'albero.|
|[CRBTree::GetNext](#getnext)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nel `CRBTree` dell'oggetto e incrementa la posizione all'elemento successivo.|
|[CRBTree::GetNextAssoc](#getnextassoc)|Chiamare questo metodo per ottenere la chiave e il valore di un elemento archiviato nella mappa e incrementa la posizione all'elemento successivo.|
|[CRBTree::GetNextKey](#getnextkey)|Chiamare questo metodo per ottenere la chiave di un elemento archiviato nell'albero e incrementa la posizione all'elemento successivo.|
|[CRBTree::GetNextValue](#getnextvalue)|Chiamare questo metodo per ottenere il valore di un elemento archiviato nell'albero e incrementa la posizione all'elemento successivo.|
|[CRBTree::GetPrev](#getprev)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nel `CRBTree` dell'oggetto e quindi aggiornare la posizione per l'elemento precedente.|
|[CRBTree::GetTailPosition](#gettailposition)|Chiamare questo metodo per ottenere il valore di posizione dell'elemento in corrispondenza della parte finale dell'albero.|
|[CRBTree::GetValueAt](#getvalueat)|Chiamare questo metodo per recuperare il valore archiviato nella posizione specificata nel `CRBTree` oggetto.|
|[CRBTree::IsEmpty](#isempty)|Chiamare questo metodo per verificare se un oggetto di struttura ad albero vuoto.|
|[CRBTree::RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dal `CRBTree` oggetto.|
|[CRBTree::RemoveAt](#removeat)|Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nel `CRBTree` oggetto.|
|[CRBTree::SetValueAt](#setvalueat)|Chiamare questo metodo per modificare il valore archiviato nella posizione specificata nel `CRBTree` oggetto.|

## <a name="remarks"></a>Note

Un albero di rosso a nero è una struttura di ricerca binario che usa un ulteriore alcune informazioni per ogni nodo per garantire che rimane "bilanciato","che è, l'altezza della struttura ad albero non aumentare eccessivamente elevato e influire sulle prestazioni.

Questa classe modello è progettata per essere utilizzato da [CRBMap](../../atl/reference/crbmap-class.md) e [CRBMultiMap](../../atl/reference/crbmultimap-class.md). La maggior parte dei metodi che costituiscono queste classi derivate vengono forniti da `CRBTree`.

Per una descrizione più completa di varie classi di raccolta e le funzionalità e caratteristiche di prestazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="cpair_class"></a>  Classe CRBTree::CPair

Una classe che contiene gli elementi chiave / valore.

```
class CPair : public __POSITION
```

### <a name="remarks"></a>Note

Questa classe viene utilizzata dai metodi [CRBTree::GetAt](#getat), [CRBTree::GetNext](#getnext), e [CRBTree::GetPrev](#getprev) accedere agli elementi chiave e il valore archiviati nella struttura ad albero.

I membri sono i seguenti:

|||
|-|-|
|`m_key`|Membro dati archiviare l'elemento principale.|
|`m_value`|Membro dati archiviare l'elemento valore.|

##  <a name="dtor"></a>  CRBTree:: ~ CRBTree

Distruttore.

```
~CRBTree() throw();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate. Le chiamate [CRBTree::RemoveAll](#removeall) per eliminare tutti gli elementi.

##  <a name="findfirstkeyafter"></a>  CRBTree::FindFirstKeyAfter

Chiamare questo metodo per individuare la posizione dell'elemento che utilizza la chiave disponibile successiva.

```
POSITION FindFirstKeyAfter(KINARGTYPE key) const throw();
```

### <a name="parameters"></a>Parametri

*key*<br/>
Un valore di chiave.

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione dell'elemento che utilizza la chiave disponibile successiva. Se non sono presenti più elementi, viene restituito NULL.

### <a name="remarks"></a>Note

Questo metodo semplifica attraversare la struttura ad albero senza la necessità di calcolare i valori di posizione in anticipo.

##  <a name="getat"></a>  CRBTree::GetAt

Chiamare questo metodo per ottenere l'elemento in una determinata posizione nell'albero.

```
CPair* GetAt(POSITION pos) throw();
const CPair* GetAt(POSITION pos) const throw();
void GetAt(POSITION pos, KOUTARGTYPE key, VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il valore di posizione.

*key*<br/>
La variabile che riceve la chiave.

*value*<br/>
La variabile che riceve il valore.

### <a name="return-value"></a>Valore restituito

Le prime due forme di restituiscono un puntatore a un [CPair](#cpair_class). Il terzo form consente di ottenere una chiave e un valore per la posizione specificata.

### <a name="remarks"></a>Note

Il valore di posizione può essere stabilito in precedenza con una chiamata a un metodo, ad esempio [CRBTree](#getheadposition) oppure [CRBTree::GetTailPosition](#gettailposition).

Nelle build di debug, un errore di asserzione si verificherà se *pos* è uguale a NULL.

##  <a name="getcount"></a>  CRBTree::GetCount

Chiamare questo metodo per ottenere il numero di elementi nell'albero.

```
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi (ogni coppia chiave/valore è un elemento) archiviato nell'albero.

##  <a name="getheadposition"></a>  CRBTree::GetHeadPosition

Chiamare questo metodo per ottenere il valore di posizione per l'elemento in corrispondenza dell'inizio dell'albero.

```
POSITION GetHeadPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione per l'elemento in corrispondenza dell'inizio dell'albero.

### <a name="remarks"></a>Note

Il valore restituito da `GetHeadPosition` può essere usato con metodi, ad esempio [CRBTree::GetKeyAt](#getkeyat) oppure [CRBTree::GetNext](#getnext) per attraversare l'albero e recuperare i valori.

##  <a name="getkeyat"></a>  CRBTree::GetKeyAt

Chiamare questo metodo per ottenere la chiave da una determinata posizione nell'albero.

```
const K& GetKeyAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il valore di posizione.

### <a name="return-value"></a>Valore restituito

Restituisce la chiave archiviata nella posizione *pos* nell'albero.

### <a name="remarks"></a>Note

Se *pos* non è un valore di posizione valido, i risultati sono imprevedibili. Nelle build di debug, un errore di asserzione si verificherà se *pos* è uguale a NULL.

##  <a name="getnext"></a>  CRBTree::GetNext

Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nel `CRBTree` dell'oggetto e incrementa la posizione all'elemento successivo.

```
const CPair* GetNext(POSITION& pos) const throw();
CPair* GetNext(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al successivo [CPair](#cpair_class) valore nell'albero.

### <a name="remarks"></a>Note

Il *pos* posizione contatore viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nell'albero della *pos* è impostato su NULL.

##  <a name="getnextassoc"></a>  CRBTree::GetNextAssoc

Chiamare questo metodo per ottenere la chiave e il valore di un elemento archiviato nella mappa e incrementa la posizione all'elemento successivo.

```
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

*key*<br/>
Parametro di modello che specifica il tipo della chiave dell'albero.

*value*<br/>
Parametro di modello che specifica il tipo del valore dell'albero.

### <a name="remarks"></a>Note

Il *pos* posizione contatore viene aggiornato dopo ogni chiamata. Se l'elemento recuperato è l'ultimo nell'albero della *pos* è impostato su NULL.

##  <a name="getnextkey"></a>  CRBTree::GetNextKey

Chiamare questo metodo per ottenere la chiave di un elemento archiviato nell'albero e incrementa la posizione all'elemento successivo.

```
const K& GetNextKey(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento alla chiave successivo nell'albero.

### <a name="remarks"></a>Note

Aggiornamento del contatore di posizione corrente, *pos*. Se non sono presenti più voci nell'albero, il contatore di posizione è impostato su NULL.

##  <a name="getnextvalue"></a>  CRBTree::GetNextValue

Chiamare questo metodo per ottenere il valore di un elemento archiviato nell'albero e incrementa la posizione all'elemento successivo.

```
const V& GetNextValue(POSITION& pos) const throw();
V& GetNextValue(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore successivo nell'albero.

### <a name="remarks"></a>Note

Aggiornamento del contatore di posizione corrente, *pos*. Se non sono presenti più voci nell'albero, il contatore di posizione è impostato su NULL.

##  <a name="getprev"></a>  CRBTree::GetPrev

Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nel `CRBTree` dell'oggetto e quindi aggiornare la posizione per l'elemento precedente.

```
const CPair* GetPrev(POSITION& pos) const throw();
CPair* GetPrev(POSITION& pos) throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore a quelli [CPair](#cpair_class) valore archiviato nell'albero.

### <a name="remarks"></a>Note

Aggiornamento del contatore di posizione corrente, *pos*. Se non sono presenti più voci nell'albero, il contatore di posizione è impostato su NULL.

##  <a name="gettailposition"></a>  CRBTree::GetTailPosition

Chiamare questo metodo per ottenere il valore di posizione dell'elemento in corrispondenza della parte finale dell'albero.

```
POSITION GetTailPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione dell'elemento in corrispondenza della parte finale dell'albero.

### <a name="remarks"></a>Note

Il valore restituito da `GetTailPosition` può essere usato con metodi, ad esempio [CRBTree::GetKeyAt](#getkeyat) oppure [CRBTree::GetPrev](#getprev) per attraversare l'albero e recuperare i valori.

##  <a name="getvalueat"></a>  CRBTree::GetValueAt

Chiamare questo metodo per recuperare il valore archiviato nella posizione specificata nel `CRBTree` oggetto.

```
const V& GetValueAt(POSITION pos) const throw();
V& GetValueAt(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al valore archiviato nella posizione specificata nel `CRBTree` oggetto.

##  <a name="isempty"></a>  CRBTree::IsEmpty

Chiamare questo metodo per verificare se un oggetto di struttura ad albero vuoto.

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la struttura ad albero è vuota, FALSE in caso contrario.

##  <a name="kinargtype"></a>  CRBTree::KINARGTYPE

Tipo utilizzato quando una chiave viene passata come argomento di input.

```
typedef KTraits::INARGTYPE KINARGTYPE;
```

##  <a name="koutargtype"></a>  CRBTree::KOUTARGTYPE

Tipo utilizzato quando una chiave viene restituita come argomento di output.

```
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

##  <a name="removeall"></a>  CRBTree::RemoveAll

Chiamare questo metodo per rimuovere tutti gli elementi dal `CRBTree` oggetto.

```
void RemoveAll() throw();
```

### <a name="remarks"></a>Note

Cancella il `CRBTree` oggetto, liberando la memoria utilizzata per archiviare gli elementi.

##  <a name="removeat"></a>  CRBTree::RemoveAt

Chiamare questo metodo per rimuovere l'elemento in corrispondenza della posizione specificata nel `CRBTree` oggetto.

```
void RemoveAt(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

### <a name="remarks"></a>Note

Rimuove la coppia chiave/valore archiviata nella posizione specificata. Viene liberata la memoria utilizzata per archiviare l'elemento. Fa riferimento alla posizione *pos* diventa non valido e mentre la posizione di tutti gli altri elementi dell'albero rimane valida, lo fanno non necessariamente mantenere lo stesso ordine.

##  <a name="setvalueat"></a>  CRBTree::SetValueAt

Chiamare questo metodo per modificare il valore archiviato nella posizione specificata nel `CRBTree` oggetto.

```
void SetValueAt(POSITION pos, VINARGTYPE value);
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Il contatore di posizione, restituito da una precedente chiamata a metodi, ad esempio [CRBTree](#getheadposition) oppure [CRBTree:: FindFirstKeyAfter](#findfirstkeyafter).

*value*<br/>
Il valore da aggiungere al `CRBTree` oggetto.

### <a name="remarks"></a>Note

Modifica l'elemento di valore archiviato nella posizione specificata nel `CRBTree` oggetto.

##  <a name="vinargtype"></a>  CRBTree::VINARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di input.

```
typedef VTraits::INARGTYPE VINARGTYPE;
```

##  <a name="voutargtype"></a>  CRBTree::VOUTARGTYPE

Tipo utilizzato quando un valore viene passato come argomento di output.

```
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
