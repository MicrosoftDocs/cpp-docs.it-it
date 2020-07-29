---
title: Classe CAtlList
ms.date: 11/04/2016
f1_keywords:
- CAtlList
- ATLCOLL/ATL::CAtlList
- ATLCOLL/ATL::CAtlList::INARGTYPE
- ATLCOLL/ATL::CAtlList::CAtlList
- ATLCOLL/ATL::CAtlList::AddHead
- ATLCOLL/ATL::CAtlList::AddHeadList
- ATLCOLL/ATL::CAtlList::AddTail
- ATLCOLL/ATL::CAtlList::AddTailList
- ATLCOLL/ATL::CAtlList::AssertValid
- ATLCOLL/ATL::CAtlList::Find
- ATLCOLL/ATL::CAtlList::FindIndex
- ATLCOLL/ATL::CAtlList::GetAt
- ATLCOLL/ATL::CAtlList::GetCount
- ATLCOLL/ATL::CAtlList::GetHead
- ATLCOLL/ATL::CAtlList::GetHeadPosition
- ATLCOLL/ATL::CAtlList::GetNext
- ATLCOLL/ATL::CAtlList::GetPrev
- ATLCOLL/ATL::CAtlList::GetTail
- ATLCOLL/ATL::CAtlList::GetTailPosition
- ATLCOLL/ATL::CAtlList::InsertAfter
- ATLCOLL/ATL::CAtlList::InsertBefore
- ATLCOLL/ATL::CAtlList::IsEmpty
- ATLCOLL/ATL::CAtlList::MoveToHead
- ATLCOLL/ATL::CAtlList::MoveToTail
- ATLCOLL/ATL::CAtlList::RemoveAll
- ATLCOLL/ATL::CAtlList::RemoveAt
- ATLCOLL/ATL::CAtlList::RemoveHead
- ATLCOLL/ATL::CAtlList::RemoveHeadNoReturn
- ATLCOLL/ATL::CAtlList::RemoveTail
- ATLCOLL/ATL::CAtlList::RemoveTailNoReturn
- ATLCOLL/ATL::CAtlList::SetAt
- ATLCOLL/ATL::CAtlList::SwapElements
helpviewer_keywords:
- CAtlList class
ms.assetid: 09e98053-64b2-4efa-99ab-d0542caaf981
ms.openlocfilehash: 15830a30e8236a13f3911d1b84d3727d3246fc0b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226672"
---
# <a name="catllist-class"></a>Classe CAtlList

Questa classe fornisce metodi per la creazione e la gestione di un oggetto elenco.

## <a name="syntax"></a>Sintassi

```cpp
template<typename E, class ETraits = CElementTraits<E>>
class CAtlList
```

### <a name="parameters"></a>Parametri

*E*<br/>
Tipo dell'elemento.

*ETraits*<br/>
Codice utilizzato per copiare o spostare elementi. Per ulteriori informazioni, vedere la [classe CElementTraits](../../atl/reference/celementtraits-class.md) .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlList:: INARGTYPE](#inargtype)||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlList:: CAtlList](#catllist)|Costruttore.|
|[CAtlList:: ~ CAtlList](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlList:: AddHead](#addhead)|Chiamare questo metodo per aggiungere un elemento all'inizio dell'elenco.|
|[CAtlList:: AddHeadList](#addheadlist)|Chiamare questo metodo per aggiungere un elenco esistente all'inizio dell'elenco.|
|[CAtlList:: AddTail](#addtail)|Chiamare questo metodo per aggiungere un elemento alla parte finale dell'elenco.|
|[CAtlList:: AddTailList](#addtaillist)|Chiamare questo metodo per aggiungere un elenco esistente alla parte finale dell'elenco.|
|[CAtlList:: AssertValid](#assertvalid)|Chiamare questo metodo per verificare che l'elenco sia valido.|
|[CAtlList:: Find](#find)|Chiamare questo metodo per cercare l'elemento specificato nell'elenco.|
|[CAtlList:: FindIndex](#findindex)|Chiamare questo metodo per ottenere la posizione di un elemento, dato un valore di indice.|
|[CAtlList:: GetA](#getat)|Chiamare questo metodo per restituire l'elemento in una posizione specificata nell'elenco.|
|[CAtlList:: GetCount](#getcount)|Chiamare questo metodo per restituire il numero di oggetti nell'elenco.|
|[CAtlList:: GetHead](#gethead)|Chiamare questo metodo per restituire l'elemento all'inizio dell'elenco.|
|[CAtlList:: GetHeadPosition](#getheadposition)|Chiamare questo metodo per ottenere la posizione dell'intestazione dell'elenco.|
|[CAtlList:: GetNext](#getnext)|Chiamare questo metodo per restituire l'elemento successivo nell'elenco.|
|[CAtlList:: GetPrev](#getprev)|Chiamare questo metodo per restituire l'elemento precedente dall'elenco.|
|[CAtlList:: GetTail](#gettail)|Chiamare questo metodo per restituire l'elemento alla parte finale dell'elenco.|
|[CAtlList:: GetTailPosition](#gettailposition)|Chiamare questo metodo per ottenere la posizione della parte finale dell'elenco.|
|[CAtlList:: InsertAfter](#insertafter)|Chiamare questo metodo per inserire un nuovo elemento nell'elenco dopo la posizione specificata.|
|[CAtlList:: InsertBefore](#insertbefore)|Chiamare questo metodo per inserire un nuovo elemento nell'elenco prima della posizione specificata.|
|[CAtlList:: IsEmpty](#isempty)|Chiamare questo metodo per determinare se l'elenco è vuoto.|
|[CAtlList:: MoveToHead](#movetohead)|Chiamare questo metodo per spostare l'elemento specificato all'inizio dell'elenco.|
|[CAtlList:: MoveToTail](#movetotail)|Chiamare questo metodo per spostare l'elemento specificato nella parte finale dell'elenco.|
|[CAtlList:: RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dall'elenco.|
|[CAtlList:: RemoveAt](#removeat)|Chiamare questo metodo per rimuovere un singolo elemento dall'elenco.|
|[CAtlList:: RemoveHead](#removehead)|Chiamare questo metodo per rimuovere l'elemento all'inizio dell'elenco.|
|[CAtlList:: RemoveHeadNoReturn](#removeheadnoreturn)|Chiamare questo metodo per rimuovere l'elemento all'inizio dell'elenco senza restituire un valore.|
|[CAtlList:: RemoveTail](#removetail)|Chiamare questo metodo per rimuovere l'elemento alla parte finale dell'elenco.|
|[CAtlList:: RemoveTailNoReturn](#removetailnoreturn)|Chiamare questo metodo per rimuovere l'elemento alla parte finale dell'elenco senza restituire un valore.|
|[CAtlList:: SetAt](#setat)|Chiamare questo metodo per impostare il valore dell'elemento in una determinata posizione nell'elenco.|
|[CAtlList:: SwapElements](#swapelements)|Chiamare questo metodo per scambiare elementi nell'elenco.|

## <a name="remarks"></a>Osservazioni

La `CAtlList` classe supporta elenchi ordinati di oggetti non univoci accessibili in sequenza o in base al valore. `CAtlList`gli elenchi si comportano come elenchi doppiamente collegati. Ogni elenco include una parte iniziale e una coda, mentre i nuovi elementi (o elenchi in alcuni casi) possono essere aggiunti a entrambe le estremità dell'elenco oppure inseriti prima o dopo elementi specifici.

La maggior parte dei `CAtlList` metodi usa un valore di posizione. Questo valore viene usato dai metodi per fare riferimento alla posizione di memoria effettiva in cui sono archiviati gli elementi e non deve essere calcolato o stimato direttamente. Se è necessario accedere all'elemento *n*nell'elenco, il metodo [CAtlList:: FindIndex](#findindex) restituirà il valore di posizione corrispondente per un indice specificato. I metodi [CAtlList:: GetNext](#getnext) e [CAtlList:: GetPrev](#getprev) possono essere usati per scorrere gli oggetti nell'elenco.

Per ulteriori informazioni sulle classi di raccolta disponibili con ATL, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="catllistaddhead"></a><a name="addhead"></a>CAtlList:: AddHead

Chiamare questo metodo per aggiungere un elemento all'inizio dell'elenco.

```cpp
POSITION AddHead();
POSITION AddHead(INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*elemento*<br/>
Nuovo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione dell'elemento appena aggiunto.

### <a name="remarks"></a>Osservazioni

Se viene utilizzata la prima versione, viene creato un elemento vuoto utilizzando il relativo costruttore predefinito anziché il relativo costruttore di copia.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#13](../../atl/codesnippet/cpp/catllist-class_1.cpp)]

## <a name="catllistaddheadlist"></a><a name="addheadlist"></a>CAtlList:: AddHeadList

Chiamare questo metodo per aggiungere un elenco esistente all'inizio dell'elenco.

```cpp
void AddHeadList(const CAtlList<E, ETraits>* plNew);
```

### <a name="parameters"></a>Parametri

*plNew*<br/>
Elenco da aggiungere.

### <a name="remarks"></a>Osservazioni

L'elenco puntato da *plNew* viene inserito all'inizio dell'elenco esistente. Nelle build di debug, si verificherà un errore di asserzione se *plNew* è uguale a null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#14](../../atl/codesnippet/cpp/catllist-class_2.cpp)]

## <a name="catllistaddtail"></a><a name="addtail"></a>CAtlList:: AddTail

Chiamare questo metodo per aggiungere un elemento alla parte finale dell'elenco.

```cpp
POSITION AddTail();
POSITION AddTail(INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*elemento*<br/>
Elemento da aggiungere.

### <a name="return-value"></a>Valore restituito

Restituisce la posizione dell'elemento appena aggiunto.

### <a name="remarks"></a>Osservazioni

Se viene utilizzata la prima versione, viene creato un elemento vuoto utilizzando il relativo costruttore predefinito anziché il relativo costruttore di copia. L'elemento viene aggiunto alla fine dell'elenco, quindi ora diventa la coda. Questo metodo può essere utilizzato con un elenco vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#15](../../atl/codesnippet/cpp/catllist-class_3.cpp)]

## <a name="catllistaddtaillist"></a><a name="addtaillist"></a>CAtlList:: AddTailList

Chiamare questo metodo per aggiungere un elenco esistente alla parte finale dell'elenco.

```cpp
void AddTailList(const CAtlList<E, ETraits>* plNew);
```

### <a name="parameters"></a>Parametri

*plNew*<br/>
Elenco da aggiungere.

### <a name="remarks"></a>Osservazioni

L'elenco puntato da *plNew* viene inserito dopo l'ultimo elemento (se presente) nell'oggetto List. L'ultimo elemento nell'elenco *plNew* diventa quindi la parte finale. Nelle build di debug, si verificherà un errore di asserzione se *plNew* è uguale a null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#16](../../atl/codesnippet/cpp/catllist-class_4.cpp)]

## <a name="catllistassertvalid"></a><a name="assertvalid"></a>CAtlList:: AssertValid

Chiamare questo metodo per verificare che l'elenco sia valido.

```cpp
void AssertValid() const;
```

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se l'oggetto elenco non è valido. Per essere valido, un elenco vuoto deve avere sia la testa che la coda che puntano a NULL e un elenco che non è vuoto deve avere sia l'intestazione che la coda puntano a indirizzi validi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#17](../../atl/codesnippet/cpp/catllist-class_5.cpp)]

## <a name="catllistcatllist"></a><a name="catllist"></a>CAtlList:: CAtlList

Costruttore.

```cpp
CAtlList(UINT nBlockSize = 10) throw();
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Dimensione del blocco.

### <a name="remarks"></a>Osservazioni

Costruttore per l' `CAtlList` oggetto. Le dimensioni del blocco sono una misura della quantità di memoria allocata quando è richiesto un nuovo elemento. Dimensioni maggiori dei blocchi riducono le chiamate alle routine di allocazione di memoria, ma utilizzano più risorse.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#18](../../atl/codesnippet/cpp/catllist-class_6.cpp)]

## <a name="catllistcatllist"></a><a name="dtor"></a>CAtlList:: ~ CAtlList

Distruttore.

```cpp
~CAtlList() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate, inclusa una chiamata a [CAtlList:: RemoveAll](#removeall) per rimuovere tutti gli elementi dall'elenco.

Nelle build di debug, si verificherà un errore di asserzione se l'elenco contiene ancora alcuni elementi dopo la chiamata a `RemoveAll` .

## <a name="catllistfind"></a><a name="find"></a>CAtlList:: Find

Chiamare questo metodo per cercare l'elemento specificato nell'elenco.

```cpp
POSITION Find(INARGTYPE element, POSITION posStartAfter = NULL) const throw();
```

### <a name="parameters"></a>Parametri

*elemento*<br/>
Elemento da trovare nell'elenco.

*posStartAfter*<br/>
Posizione iniziale per la ricerca. Se non viene specificato alcun valore, la ricerca inizia con l'elemento Head.

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione dell'elemento, se trovato; in caso contrario, restituisce NULL.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se l'oggetto elenco non è valido o se il valore *posStartAfter* non è compreso nell'intervallo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#19](../../atl/codesnippet/cpp/catllist-class_7.cpp)]

## <a name="catllistfindindex"></a><a name="findindex"></a>CAtlList:: FindIndex

Chiamare questo metodo per ottenere la posizione di un elemento, dato un valore di indice.

```cpp
POSITION FindIndex(size_t iElement) const throw();
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Indice in base zero dell'elemento elenco richiesto.

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione corrispondente o NULL se *IElement* non è compreso nell'intervallo.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce la posizione corrispondente a un valore di indice specificato, consentendo l'accesso all'elemento *n*nell'elenco.

Nelle build di debug, si verificherà un errore di asserzione se l'oggetto elenco non è valido.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#20](../../atl/codesnippet/cpp/catllist-class_8.cpp)]

## <a name="catllistgetat"></a><a name="getat"></a>CAtlList:: GetA

Chiamare questo metodo per restituire l'elemento in una posizione specificata nell'elenco.

```cpp
E& GetAt(POSITION pos) throw();
const E& GetAt(POSITION pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore della posizione che specifica un particolare elemento.

### <a name="return-value"></a>Valore restituito

Riferimento a, o copia di, dell'elemento.

### <a name="remarks"></a>Osservazioni

Se l'elenco è **`const`** , `GetAt` restituisce una copia dell'elemento. Ciò consente di utilizzare il metodo solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetAt` restituisce un riferimento all'elemento. In questo modo, il metodo può essere usato su entrambi i lati di un'istruzione di assegnazione e quindi consente la modifica delle voci dell'elenco.

Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: FindIndex](#findindex).

## <a name="catllistgetcount"></a><a name="getcount"></a>CAtlList:: GetCount

Chiamare questo metodo per restituire il numero di oggetti nell'elenco.

```cpp
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nell'elenco.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: find](#find).

## <a name="catllistgethead"></a><a name="gethead"></a>CAtlList:: GetHead

Chiamare questo metodo per restituire l'elemento all'inizio dell'elenco.

```cpp
E& GetHead() throw();
const E& GetHead() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a o una copia di, l'elemento all'inizio dell'elenco.

### <a name="remarks"></a>Osservazioni

Se l'elenco è **`const`** , `GetHead` restituisce una copia dell'elemento all'inizio dell'elenco. Ciò consente di utilizzare il metodo solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetHead` restituisce un riferimento all'elemento all'inizio dell'elenco. In questo modo, il metodo può essere usato su entrambi i lati di un'istruzione di assegnazione e quindi consente la modifica delle voci dell'elenco.

Nelle build di debug, si verificherà un errore di asserzione se l'intestazione dell'elenco punta a NULL.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: AddHead](#addhead).

## <a name="catllistgetheadposition"></a><a name="getheadposition"></a>CAtlList:: GetHeadPosition

Chiamare questo metodo per ottenere la posizione dell'intestazione dell'elenco.

```cpp
POSITION GetHeadPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione corrispondente all'elemento all'inizio dell'elenco.

### <a name="remarks"></a>Osservazioni

Se l'elenco è vuoto, il valore restituito è NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#21](../../atl/codesnippet/cpp/catllist-class_9.cpp)]

## <a name="catllistgetnext"></a><a name="getnext"></a>CAtlList:: GetNext

Chiamare questo metodo per restituire l'elemento successivo nell'elenco.

```cpp
E& GetNext(POSITION& pos) throw();
const E& GetNext(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione, restituito da una chiamata precedente a `GetNext` , [CAtlList:: GetHeadPosition](#getheadposition)o un altro `CAtlList` metodo.

### <a name="return-value"></a>Valore restituito

Se l'elenco è **`const`** , `GetNext` restituisce una copia dell'elemento successivo dell'elenco. Ciò consente di utilizzare il metodo solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetNext` restituisce un riferimento all'elemento successivo dell'elenco. In questo modo, il metodo può essere usato su entrambi i lati di un'istruzione di assegnazione e quindi consente la modifica delle voci dell'elenco.

### <a name="remarks"></a>Osservazioni

Il contatore della posizione, *pos*, viene aggiornato in modo da puntare all'elemento successivo nell'elenco oppure null se non sono presenti altri elementi. Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: GetHeadPosition](#getheadposition).

## <a name="catllistgetprev"></a><a name="getprev"></a>CAtlList:: GetPrev

Chiamare questo metodo per restituire l'elemento precedente dall'elenco.

```cpp
E& GetPrev(POSITION& pos) throw();
const E& GetPrev(POSITION& pos) const throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione, restituito da una chiamata precedente a `GetPrev` , [CAtlList:: GetTailPosition](#gettailposition)o un altro `CAtlList` metodo.

### <a name="return-value"></a>Valore restituito

Se l'elenco è **`const`** , `GetPrev` restituisce una copia di un elemento dell'elenco. Ciò consente di utilizzare il metodo solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetPrev` restituisce un riferimento a un elemento dell'elenco. In questo modo, il metodo può essere usato su entrambi i lati di un'istruzione di assegnazione e quindi consente la modifica delle voci dell'elenco.

### <a name="remarks"></a>Osservazioni

Il contatore della posizione, *pos*, viene aggiornato in modo da puntare all'elemento precedente nell'elenco oppure null se non sono presenti altri elementi. Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: GetTailPosition](#gettailposition).

## <a name="catllistgettail"></a><a name="gettail"></a>CAtlList:: GetTail

Chiamare questo metodo per restituire l'elemento alla parte finale dell'elenco.

```cpp
E& GetTail() throw();
const E& GetTail() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a o una copia di, l'elemento in corrispondenza della parte finale dell'elenco.

### <a name="remarks"></a>Osservazioni

Se l'elenco è **`const`** , `GetTail` restituisce una copia dell'elemento all'inizio dell'elenco. Ciò consente di utilizzare il metodo solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetTail` restituisce un riferimento all'elemento all'inizio dell'elenco. In questo modo, il metodo può essere usato su entrambi i lati di un'istruzione di assegnazione e quindi consente la modifica delle voci dell'elenco.

Nelle build di debug, si verificherà un errore di asserzione se la parte finale dell'elenco punta a NULL.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: AddTail](#addtail).

## <a name="catllistgettailposition"></a><a name="gettailposition"></a>CAtlList:: GetTailPosition

Chiamare questo metodo per ottenere la posizione della parte finale dell'elenco.

```cpp
POSITION GetTailPosition() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione corrispondente all'elemento in corrispondenza della parte finale dell'elenco.

### <a name="remarks"></a>Osservazioni

Se l'elenco è vuoto, il valore restituito è NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#22](../../atl/codesnippet/cpp/catllist-class_10.cpp)]

## <a name="catllistinargtype"></a><a name="inargtype"></a>CAtlList:: INARGTYPE

Tipo utilizzato quando un elemento viene passato come argomento di input.

```cpp
typedef ETraits::INARGTYPE INARGTYPE;
```

## <a name="catllistinsertafter"></a><a name="insertafter"></a>CAtlList:: InsertAfter

Chiamare questo metodo per inserire un nuovo elemento nell'elenco dopo la posizione specificata.

```cpp
POSITION InsertAfter(POSITION pos, INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il valore di posizione dopo il quale verrà inserito il nuovo elemento.

*elemento*<br/>
Elemento da inserire.

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione del nuovo elemento.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se l'elenco non è valido, se l'inserimento ha esito negativo o se viene eseguito un tentativo di inserimento dell'elemento dopo la coda.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#23](../../atl/codesnippet/cpp/catllist-class_11.cpp)]

## <a name="catllistinsertbefore"></a><a name="insertbefore"></a>CAtlList:: InsertBefore

Chiamare questo metodo per inserire un nuovo elemento nell'elenco prima della posizione specificata.

```cpp
POSITION InsertBefore(POSITION pos, INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Il nuovo elemento verrà inserito nell'elenco prima del valore della posizione.

*elemento*<br/>
Elemento da inserire.

### <a name="return-value"></a>Valore restituito

Restituisce il valore di posizione del nuovo elemento.

### <a name="remarks"></a>Osservazioni

Nelle compilazioni di debug, si verificherà un errore di asserzione se l'elenco non è valido, se l'inserimento ha esito negativo o se si tenta di inserire l'elemento prima dell'intestazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#24](../../atl/codesnippet/cpp/catllist-class_12.cpp)]

## <a name="catllistisempty"></a><a name="isempty"></a>CAtlList:: IsEmpty

Chiamare questo metodo per determinare se l'elenco è vuoto.

```cpp
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elenco non contiene oggetti, in caso contrario false.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#25](../../atl/codesnippet/cpp/catllist-class_13.cpp)]

## <a name="catllistmovetohead"></a><a name="movetohead"></a>CAtlList:: MoveToHead

Chiamare questo metodo per spostare l'elemento specificato all'inizio dell'elenco.

```cpp
void MoveToHead(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione dell'elemento da spostare.

### <a name="remarks"></a>Osservazioni

L'elemento specificato viene spostato dalla posizione corrente all'inizio dell'elenco. Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#26](../../atl/codesnippet/cpp/catllist-class_14.cpp)]

## <a name="catllistmovetotail"></a><a name="movetotail"></a>CAtlList:: MoveToTail

Chiamare questo metodo per spostare l'elemento specificato nella parte finale dell'elenco.

```cpp
void MoveToTail(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione dell'elemento da spostare.

### <a name="remarks"></a>Osservazioni

L'elemento specificato viene spostato dalla posizione corrente alla parte finale dell'elenco. Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: MoveToHead](#movetohead).

## <a name="catllistremoveall"></a><a name="removeall"></a>CAtlList:: RemoveAll

Chiamare questo metodo per rimuovere tutti gli elementi dall'elenco.

```cpp
void RemoveAll() throw();
```

### <a name="remarks"></a>Osservazioni

Questo metodo rimuove tutti gli elementi dall'elenco e libera la memoria allocata. Nelle compilazioni di debug, viene generato un ATLASSERT se tutti gli elementi non vengono eliminati o se la struttura dell'elenco è stata danneggiata.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: IsEmpty](#isempty).

## <a name="catllistremoveat"></a><a name="removeat"></a>CAtlList:: RemoveAt

Chiamare questo metodo per rimuovere un singolo elemento dall'elenco.

```cpp
void RemoveAt(POSITION pos) throw();
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione dell'elemento da rimuovere.

### <a name="remarks"></a>Osservazioni

L'elemento a cui viene fatto riferimento da *pos* viene rimosso e la memoria viene liberata. È accettabile usare `RemoveAt` per rimuovere l'intestazione o la parte finale dell'elenco.

Nelle build di debug, si verificherà un errore di asserzione se l'elenco non è valido o se la rimozione dell'elemento comporta l'accesso alla memoria che non fa parte della struttura dell'elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#27](../../atl/codesnippet/cpp/catllist-class_15.cpp)]

## <a name="catllistremovehead"></a><a name="removehead"></a>CAtlList:: RemoveHead

Chiamare questo metodo per rimuovere l'elemento all'inizio dell'elenco.

```cpp
E RemoveHead();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'elemento all'inizio dell'elenco.

### <a name="remarks"></a>Osservazioni

L'elemento Head viene eliminato dall'elenco e la memoria viene liberata. Viene restituita una copia dell'elemento. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#28](../../atl/codesnippet/cpp/catllist-class_16.cpp)]

## <a name="catllistremoveheadnoreturn"></a><a name="removeheadnoreturn"></a>CAtlList:: RemoveHeadNoReturn

Chiamare questo metodo per rimuovere l'elemento all'inizio dell'elenco senza restituire un valore.

```cpp
void RemoveHeadNoReturn() throw();
```

### <a name="remarks"></a>Osservazioni

L'elemento Head viene eliminato dall'elenco e la memoria viene liberata. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: IsEmpty](#isempty).

## <a name="catllistremovetail"></a><a name="removetail"></a>CAtlList:: RemoveTail

Chiamare questo metodo per rimuovere l'elemento alla parte finale dell'elenco.

```cpp
E RemoveTail();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'elemento in corrispondenza della parte finale dell'elenco.

### <a name="remarks"></a>Osservazioni

L'elemento tail viene eliminato dall'elenco e la memoria viene liberata. Viene restituita una copia dell'elemento. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#29](../../atl/codesnippet/cpp/catllist-class_17.cpp)]

## <a name="catllistremovetailnoreturn"></a><a name="removetailnoreturn"></a>CAtlList:: RemoveTailNoReturn

Chiamare questo metodo per rimuovere l'elemento alla parte finale dell'elenco senza restituire un valore.

```cpp
void RemoveTailNoReturn() throw();
```

### <a name="remarks"></a>Osservazioni

L'elemento tail viene eliminato dall'elenco e la memoria viene liberata. Nelle build di debug, si verificherà un errore di asserzione se l'elenco è vuoto.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlList:: IsEmpty](#isempty).

## <a name="catllistsetat"></a><a name="setat"></a>CAtlList:: SetAt

Chiamare questo metodo per impostare il valore dell'elemento in una determinata posizione nell'elenco.

```cpp
void SetAt(POSITION pos, INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*POS*<br/>
Valore di posizione corrispondente all'elemento da modificare.

*elemento*<br/>
Nuovo valore dell'elemento.

### <a name="remarks"></a>Osservazioni

Sostituisce il valore esistente con l' *elemento*. Nelle build di debug, si verificherà un errore di asserzione se *pos* è uguale a null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#30](../../atl/codesnippet/cpp/catllist-class_18.cpp)]

## <a name="catllistswapelements"></a><a name="swapelements"></a>CAtlList:: SwapElements

Chiamare questo metodo per scambiare elementi nell'elenco.

```cpp
void SwapElements(POSITION pos1, POSITION pos2) throw();
```

### <a name="parameters"></a>Parametri

*pos1*<br/>
Primo valore della posizione.

*pos2*<br/>
Valore della seconda posizione.

### <a name="remarks"></a>Osservazioni

Scambia gli elementi in corrispondenza delle due posizioni specificate. Nelle build di debug, si verificherà un errore di asserzione se uno dei valori di posizione è uguale a NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#31](../../atl/codesnippet/cpp/catllist-class_19.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CList](../../mfc/reference/clist-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
