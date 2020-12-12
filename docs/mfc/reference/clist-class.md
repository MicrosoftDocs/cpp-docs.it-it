---
description: 'Altre informazioni su: Classe CList'
title: Classe CList
ms.date: 11/04/2016
f1_keywords:
- CList
- AFXTEMPL/CList
- AFXTEMPL/CList::CList
- AFXTEMPL/CList::AddHead
- AFXTEMPL/CList::AddTail
- AFXTEMPL/CList::Find
- AFXTEMPL/CList::FindIndex
- AFXTEMPL/CList::GetAt
- AFXTEMPL/CList::GetCount
- AFXTEMPL/CList::GetHead
- AFXTEMPL/CList::GetHeadPosition
- AFXTEMPL/CList::GetNext
- AFXTEMPL/CList::GetPrev
- AFXTEMPL/CList::GetSize
- AFXTEMPL/CList::GetTail
- AFXTEMPL/CList::GetTailPosition
- AFXTEMPL/CList::InsertAfter
- AFXTEMPL/CList::InsertBefore
- AFXTEMPL/CList::IsEmpty
- AFXTEMPL/CList::RemoveAll
- AFXTEMPL/CList::RemoveAt
- AFXTEMPL/CList::RemoveHead
- AFXTEMPL/CList::RemoveTail
- AFXTEMPL/CList::SetAt
helpviewer_keywords:
- CList [MFC], CList
- CList [MFC], AddHead
- CList [MFC], AddTail
- CList [MFC], Find
- CList [MFC], FindIndex
- CList [MFC], GetAt
- CList [MFC], GetCount
- CList [MFC], GetHead
- CList [MFC], GetHeadPosition
- CList [MFC], GetNext
- CList [MFC], GetPrev
- CList [MFC], GetSize
- CList [MFC], GetTail
- CList [MFC], GetTailPosition
- CList [MFC], InsertAfter
- CList [MFC], InsertBefore
- CList [MFC], IsEmpty
- CList [MFC], RemoveAll
- CList [MFC], RemoveAt
- CList [MFC], RemoveHead
- CList [MFC], RemoveTail
- CList [MFC], SetAt
ms.assetid: 6f6273c3-c8f6-47f5-ac2a-0a950379ae5d
ms.openlocfilehash: e216bda53c37c325ffb8aeb943d4cefb223ac1d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236685"
---
# <a name="clist-class"></a>Classe CList

Supporta elenchi ordinati di oggetti non univoci accessibili in sequenza o in base al valore.

## <a name="syntax"></a>Sintassi

```
template<class TYPE, class ARG_TYPE = const TYPE&>
class CList : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CList:: CList](#clist)|Costruisce un elenco ordinato vuoto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CList:: AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) all'inizio dell'elenco (crea una nuova intestazione).|
|[CList:: AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) alla parte finale dell'elenco (crea una nuova coda).|
|[CList:: Find](#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|
|[CList:: FindIndex](#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|
|[CList:: GetA](#getat)|Ottiene l'elemento in una posizione specificata.|
|[CList:: GetCount](#getcount)|Restituisce il numero di elementi in questo elenco.|
|[CList:: GetHead](#gethead)|Restituisce l'elemento Head dell'elenco (non può essere vuoto).|
|[CList:: GetHeadPosition](#getheadposition)|Restituisce la posizione dell'elemento Head dell'elenco.|
|[CList:: GetNext](#getnext)|Ottiene l'elemento successivo per l'iterazione.|
|[CList:: GetPrev](#getprev)|Ottiene l'elemento precedente per l'iterazione.|
|[CList:: GetSize](#getsize)|Restituisce il numero di elementi in questo elenco.|
|[CList:: GetTail](#gettail)|Restituisce l'elemento tail dell'elenco (non può essere vuoto).|
|[CList:: GetTailPosition](#gettailposition)|Restituisce la posizione dell'elemento tail dell'elenco.|
|[CList:: InsertAfter](#insertafter)|Inserisce un nuovo elemento dopo una posizione specificata.|
|[CList::InsertBefore](#insertbefore)|Inserisce un nuovo elemento prima di una posizione specificata.|
|[CList:: IsEmpty](#isempty)|Verifica se la condizione dell'elenco è vuota (nessun elemento).|
|[CList:: RemoveAll](#removeall)|Rimuove tutti gli elementi da questo elenco.|
|[CList:: RemoveAt](#removeat)|Rimuove un elemento da questo elenco, specificato dalla posizione.|
|[CList:: RemoveHead](#removehead)|Rimuove l'elemento dall'inizio dell'elenco.|
|[CList:: RemoveTail](#removetail)|Rimuove l'elemento dalla parte finale dell'elenco.|
|[CList:: SetAt](#setat)|Imposta l'elemento in una posizione specificata.|

#### <a name="parameters"></a>Parametri

*TYPE*<br/>
Tipo di oggetto archiviato nell'elenco.

*ARG_TYPE*<br/>
Tipo utilizzato per fare riferimento a oggetti archiviati nell'elenco. Può essere un riferimento.

## <a name="remarks"></a>Commenti

`CList` gli elenchi si comportano come elenchi con collegamento doppio.

Una variabile di tipo POSITION è una chiave per l'elenco. È possibile usare una variabile POSITION come iteratore per attraversare un elenco in sequenza e come segnalibro per conservare una posizione. Tuttavia, una posizione non corrisponde a un indice.

L'inserimento di elementi è molto veloce nella parte iniziale dell'elenco, nella parte finale e in una posizione nota. Una ricerca sequenziale è necessaria per cercare un elemento in base al valore o all'indice. Questa ricerca può essere lenta se l'elenco è lungo.

Se è necessario un dump di singoli elementi nell'elenco, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Alcune funzioni membro di questa classe chiamano funzioni helper globali che devono essere personalizzate per la maggior parte degli utilizzi della `CList` classe. Vedere gli [helper della classe Collection](../../mfc/reference/collection-class-helpers.md) nella sezione "macro e Globals".

Per ulteriori informazioni sull'utilizzo di `CList` , vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#35](../../mfc/codesnippet/cpp/clist-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="clistaddhead"></a><a name="addhead"></a> CList:: AddHead

Aggiunge un nuovo elemento o elenco di elementi all'inizio dell'elenco.

```
POSITION AddHead(ARG_TYPE newElement);
void AddHead(CList* pNewList);
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*newElement*<br/>
Nuovo elemento.

*pNewList*<br/>
Puntatore a un altro `CList` elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

### <a name="remarks"></a>Commenti

L'elenco può essere vuoto prima dell'operazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#36](../../mfc/codesnippet/cpp/clist-class_2.cpp)]

## <a name="clistaddtail"></a><a name="addtail"></a> CList:: AddTail

Aggiunge un nuovo elemento o elenco di elementi alla parte finale dell'elenco.

```
POSITION AddTail(ARG_TYPE newElement);
void AddTail(CList* pNewList);
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*newElement*<br/>
Elemento da aggiungere all'elenco.

*pNewList*<br/>
Puntatore a un altro `CList` elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

### <a name="remarks"></a>Commenti

L'elenco può essere vuoto prima dell'operazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#37](../../mfc/codesnippet/cpp/clist-class_3.cpp)]

## <a name="clistclist"></a><a name="clist"></a> CList:: CList

Costruisce un elenco ordinato vuoto.

```
CList(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Granularità di allocazione della memoria per l'estensione dell'elenco.

### <a name="remarks"></a>Commenti

Man mano che l'elenco cresce, la memoria viene allocata in unità di *nBlockSize* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#38](../../mfc/codesnippet/cpp/clist-class_4.cpp)]

## <a name="clistfind"></a><a name="find"></a> CList:: Find

Cerca in sequenza l'elenco per trovare il primo elemento che corrisponde al *SearchValue* specificato.

```
POSITION Find(
    ARG_TYPE searchValue,
    POSITION startAfter = NULL) const;
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*searchValue*<br/>
Valore da trovare nell'elenco.

*startAfter*<br/>
Posizione iniziale per la ricerca. Se non viene specificato alcun valore, la ricerca inizia con l'elemento Head.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'oggetto non viene trovato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#39](../../mfc/codesnippet/cpp/clist-class_5.cpp)]

## <a name="clistfindindex"></a><a name="findindex"></a> CList:: FindIndex

Usa il valore di *nIndex* come indice nell'elenco.

```
POSITION FindIndex(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento dell'elenco da trovare.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se *nIndex* è negativo o troppo grande.

### <a name="remarks"></a>Commenti

Viene avviata un'analisi sequenziale dall'inizio dell'elenco, arrestando il *n*° elemento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#40](../../mfc/codesnippet/cpp/clist-class_6.cpp)]

## <a name="clistgetat"></a><a name="getat"></a> CList:: GetA

Ottiene l'elemento dell'elenco in una posizione specificata.

```
TYPE& GetAt(POSITION position);
const TYPE& GetAt(POSITION position) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di oggetto nell'elenco.

*position*<br/>
Posizione nell'elenco dell'elemento da ottenere.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per `GetHead` .

### <a name="remarks"></a>Commenti

`GetAt` Restituisce l'elemento (o un riferimento all'elemento) associato a una posizione specificata. Non è uguale a un indice e non è possibile operare su un valore di posizione autonomamente. Una variabile di tipo POSITION è una chiave per l'elenco.

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CList:: GetHeadPosition](#getheadposition).

## <a name="clistgetcount"></a><a name="getcount"></a> CList:: GetCount

Ottiene il numero di elementi in questo elenco.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore integer contenente il numero di elementi.

### <a name="remarks"></a>Commenti

La chiamata a questo metodo genererà lo stesso risultato del metodo [CList:: GetSize](#getsize) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CList:: RemoveHead](#removehead).

## <a name="clistgethead"></a><a name="gethead"></a> CList:: GetHead

Ottiene l'elemento Head (o un riferimento all'elemento Head) dell'elenco.

```
const TYPE& GetHead() const;

TYPE& GetHead();
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di oggetto nell'elenco.

### <a name="return-value"></a>Valore restituito

Se l'elenco è **`const`** , `GetHead` restituisce una copia dell'elemento all'inizio dell'elenco. Ciò consente di utilizzare la funzione solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetHead` restituisce un riferimento all'elemento all'inizio dell'elenco. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `GetHead` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#41](../../mfc/codesnippet/cpp/clist-class_7.cpp)]

## <a name="clistgetheadposition"></a><a name="getheadposition"></a> CList:: GetHeadPosition

Ottiene la posizione dell'elemento Head dell'elenco.

```
POSITION GetHeadPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'elenco è vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#42](../../mfc/codesnippet/cpp/clist-class_8.cpp)]

## <a name="clistgetnext"></a><a name="getnext"></a> CList:: GetNext

Ottiene l'elemento di elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore di posizione della voce successiva nell'elenco.

```
TYPE& GetNext(POSITION& rPosition);
const TYPE& GetNext(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo degli elementi nell'elenco.

*rPosition*<br/>
Riferimento a un valore di posizione restituito da una `GetNext` chiamata di funzione membro precedente, [GetHeadPosition](#getheadposition)o altra.

### <a name="return-value"></a>Valore restituito

Se l'elenco è **`const`** , `GetNext` restituisce una copia di un elemento dell'elenco. Ciò consente di utilizzare la funzione solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetNext` restituisce un riferimento a un elemento dell'elenco. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

È possibile usare `GetNext` in un ciclo di iterazione in diretta se si stabilisce la posizione iniziale con una chiamata a `GetHeadPosition` o `Find` .

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di `rPosition` viene impostato su null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#43](../../mfc/codesnippet/cpp/clist-class_9.cpp)]

## <a name="clistgetprev"></a><a name="getprev"></a> CList:: GetPrev

Ottiene l'elemento dell'elenco identificato da `rPosition` , quindi imposta sul `rPosition` valore di posizione della voce precedente nell'elenco.

```
TYPE& GetPrev(POSITION& rPosition);
const TYPE& GetPrev(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo degli elementi nell'elenco.

*rPosition*<br/>
Riferimento a un valore di posizione restituito da una `GetPrev` chiamata di funzione membro precedente o successiva.

### <a name="return-value"></a>Valore restituito

Se l'elenco è **`const`** , `GetPrev` restituisce una copia dell'elemento all'inizio dell'elenco. Ciò consente di utilizzare la funzione solo sul lato destro di un'istruzione di assegnazione e di proteggere l'elenco dalla modifica.

Se l'elenco non è **`const`** , `GetPrev` restituisce un riferimento a un elemento dell'elenco. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

È possibile usare `GetPrev` in un ciclo di iterazione inversa se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find` .

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è il primo nell'elenco, il nuovo valore di *rPosition* viene impostato su null.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#44](../../mfc/codesnippet/cpp/clist-class_10.cpp)]

## <a name="clistgetsize"></a><a name="getsize"></a> CList:: GetSize

Restituisce il numero di elementi dell'elenco.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare il numero di elementi nell'elenco.  La chiamata a questo metodo genererà lo stesso risultato del metodo [CList:: GetCount](#getcount) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#45](../../mfc/codesnippet/cpp/clist-class_11.cpp)]

## <a name="clistgettail"></a><a name="gettail"></a> CList:: GetTail

Ottiene il `CObject` puntatore che rappresenta l'elemento tail di questo elenco.

```
TYPE& GetTail();
const TYPE& GetTail() const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](../../mfc/reference/coblist-class.md#gethead).

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `GetTail` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#46](../../mfc/codesnippet/cpp/clist-class_12.cpp)]

## <a name="clistgettailposition"></a><a name="gettailposition"></a> CList:: GetTailPosition

Ottiene la posizione dell'elemento tail dell'elenco; NULL se l'elenco è vuoto.

```
POSITION GetTailPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'elenco è vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#47](../../mfc/codesnippet/cpp/clist-class_13.cpp)]

## <a name="clistinsertafter"></a><a name="insertafter"></a> CList:: InsertAfter

Aggiunge un elemento all'elenco dopo l'elemento in corrispondenza della posizione specificata.

```
POSITION InsertAfter(POSITION position, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*position*<br/>
Valore di posizione restituito da una `GetNext` chiamata di `GetPrev` funzione membro, o precedente `Find` .

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo dell'elemento dell'elenco.

*newElement*<br/>
Elemento da aggiungere all'elenco.

### <a name="return-value"></a>Valore restituito

Valore POSITION da usare per l'iterazione o il recupero dell'elemento dell'elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#48](../../mfc/codesnippet/cpp/clist-class_14.cpp)]

## <a name="clistinsertbefore"></a><a name="insertbefore"></a> CList:: InsertBefore

Aggiunge un elemento all'elenco prima dell'elemento nella posizione specificata.

```
POSITION InsertBefore(POSITION position, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*position*<br/>
Valore di posizione restituito da una `GetNext` chiamata di `GetPrev` funzione membro, o precedente `Find` .

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*newElement*<br/>
Elemento da aggiungere all'elenco.

### <a name="return-value"></a>Valore restituito

Valore POSITION da usare per l'iterazione o il recupero dell'elemento dell'elenco.

### <a name="remarks"></a>Commenti

Se *position* è null, l'elemento viene inserito all'inizio dell'elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#49](../../mfc/codesnippet/cpp/clist-class_15.cpp)]

## <a name="clistisempty"></a><a name="isempty"></a> CList:: IsEmpty

Indica se l'elenco non contiene elementi.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elenco è vuoto; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#50](../../mfc/codesnippet/cpp/clist-class_16.cpp)]

## <a name="clistremoveall"></a><a name="removeall"></a> CList:: RemoveAll

Rimuove tutti gli elementi dall'elenco e libera la memoria associata.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Commenti

Se l'elenco è già vuoto, non viene generato alcun errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#51](../../mfc/codesnippet/cpp/clist-class_17.cpp)]

## <a name="clistremoveat"></a><a name="removeat"></a> CList:: RemoveAt

Rimuove l'elemento specificato da questo elenco.

```cpp
void RemoveAt(POSITION position);
```

### <a name="parameters"></a>Parametri

*position*<br/>
Posizione dell'elemento da rimuovere dall'elenco.

### <a name="remarks"></a>Commenti

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#52](../../mfc/codesnippet/cpp/clist-class_18.cpp)]

## <a name="clistremovehead"></a><a name="removehead"></a> CList:: RemoveHead

Rimuove l'elemento dall'inizio dell'elenco e ne restituisce un puntatore.

```
TYPE RemoveHead();
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

### <a name="return-value"></a>Valore restituito

Elemento precedentemente all'inizio dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `RemoveHead` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#53](../../mfc/codesnippet/cpp/clist-class_19.cpp)]

## <a name="clistremovetail"></a><a name="removetail"></a> CList:: RemoveTail

Rimuove l'elemento dalla parte finale dell'elenco e ne restituisce un puntatore.

```
TYPE RemoveTail();
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

### <a name="return-value"></a>Valore restituito

Elemento in corrispondenza della parte finale dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `RemoveTail` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#54](../../mfc/codesnippet/cpp/clist-class_20.cpp)]

## <a name="clistsetat"></a><a name="setat"></a> CList:: SetAt

Una variabile di tipo POSITION è una chiave per l'elenco.

```cpp
void SetAt(POSITION pos, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*pos*<br/>
POSIZIONE dell'elemento da impostare.

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*newElement*<br/>
Elemento da aggiungere all'elenco.

### <a name="remarks"></a>Commenti

Non è uguale a un indice e non è possibile operare su un valore di posizione autonomamente. `SetAt` scrive l'elemento nella posizione specificata nell'elenco.

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#55](../../mfc/codesnippet/cpp/clist-class_21.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMap](../../mfc/reference/cmap-class.md)<br/>
[CArray (classe)](../../mfc/reference/carray-class.md)
