---
description: 'Altre informazioni su: classe CObList'
title: Classe CObList
ms.date: 11/04/2016
f1_keywords:
- CObList
- AFXCOLL/CObList
- AFXCOLL/CObList::CObList
- AFXCOLL/CObList::AddHead
- AFXCOLL/CObList::AddTail
- AFXCOLL/CObList::Find
- AFXCOLL/CObList::FindIndex
- AFXCOLL/CObList::GetAt
- AFXCOLL/CObList::GetCount
- AFXCOLL/CObList::GetHead
- AFXCOLL/CObList::GetHeadPosition
- AFXCOLL/CObList::GetNext
- AFXCOLL/CObList::GetPrev
- AFXCOLL/CObList::GetSize
- AFXCOLL/CObList::GetTail
- AFXCOLL/CObList::GetTailPosition
- AFXCOLL/CObList::InsertAfter
- AFXCOLL/CObList::InsertBefore
- AFXCOLL/CObList::IsEmpty
- AFXCOLL/CObList::RemoveAll
- AFXCOLL/CObList::RemoveAt
- AFXCOLL/CObList::RemoveHead
- AFXCOLL/CObList::RemoveTail
- AFXCOLL/CObList::SetAt
helpviewer_keywords:
- CObList [MFC], CObList
- CObList [MFC], AddHead
- CObList [MFC], AddTail
- CObList [MFC], Find
- CObList [MFC], FindIndex
- CObList [MFC], GetAt
- CObList [MFC], GetCount
- CObList [MFC], GetHead
- CObList [MFC], GetHeadPosition
- CObList [MFC], GetNext
- CObList [MFC], GetPrev
- CObList [MFC], GetSize
- CObList [MFC], GetTail
- CObList [MFC], GetTailPosition
- CObList [MFC], InsertAfter
- CObList [MFC], InsertBefore
- CObList [MFC], IsEmpty
- CObList [MFC], RemoveAll
- CObList [MFC], RemoveAt
- CObList [MFC], RemoveHead
- CObList [MFC], RemoveTail
- CObList [MFC], SetAt
ms.assetid: 80699c93-33d8-4f8b-b8cf-7b58aeab64ca
ms.openlocfilehash: edfa476780e07b41f4f1e0abede24244ad837578
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331452"
---
# <a name="coblist-class"></a>Classe CObList

Supporta elenchi ordinati di puntatori non univoci `CObject` accessibili in sequenza o in base al valore del puntatore.

## <a name="syntax"></a>Sintassi

```
class CObList : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CObList:: CObList](#coblist)|Costruisce un elenco vuoto per i `CObject` puntatori.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CObList:: AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) all'inizio dell'elenco (crea una nuova intestazione).|
|[CObList:: AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) alla parte finale dell'elenco (crea una nuova coda).|
|[CObList:: trova](#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|
|[CObList:: FindIndex](#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|
|[CObList:: GetA](#getat)|Ottiene l'elemento in una posizione specificata.|
|[CObList:: GetCount](#getcount)|Restituisce il numero di elementi in questo elenco.|
|[CObList:: GetHead](#gethead)|Restituisce l'elemento Head dell'elenco (non può essere vuoto).|
|[CObList:: GetHeadPosition](#getheadposition)|Restituisce la posizione dell'elemento Head dell'elenco.|
|[CObList:: GetNext](#getnext)|Ottiene l'elemento successivo per l'iterazione.|
|[CObList:: GetPrev](#getprev)|Ottiene l'elemento precedente per l'iterazione.|
|[CObList:: GetSize](#getsize)|Restituisce il numero di elementi in questo elenco.|
|[CObList:: GetTail](#gettail)|Restituisce l'elemento tail dell'elenco (non può essere vuoto).|
|[CObList:: GetTailPosition](#gettailposition)|Restituisce la posizione dell'elemento tail dell'elenco.|
|[CObList:: InsertAfter](#insertafter)|Inserisce un nuovo elemento dopo una posizione specificata.|
|[CObList:: InsertBefore](#insertbefore)|Inserisce un nuovo elemento prima di una posizione specificata.|
|[CObList:: IsEmpty](#isempty)|Verifica se la condizione dell'elenco è vuota (nessun elemento).|
|[CObList:: RemoveAll](#removeall)|Rimuove tutti gli elementi da questo elenco.|
|[CObList:: RemoveAt](#removeat)|Rimuove un elemento da questo elenco, specificato dalla posizione.|
|[CObList:: RemoveHead](#removehead)|Rimuove l'elemento dall'inizio dell'elenco.|
|[CObList:: RemoveTail](#removetail)|Rimuove l'elemento dalla parte finale dell'elenco.|
|[CObList:: SetAt](#setat)|Imposta l'elemento in una posizione specificata.|

## <a name="remarks"></a>Commenti

`CObList` gli elenchi si comportano come elenchi con collegamento doppio.

Una variabile di tipo POSITION è una chiave per l'elenco. È possibile usare una variabile POSITION sia come iteratore per attraversare un elenco in sequenza che come segnalibro per conservare una posizione. Tuttavia, una posizione non corrisponde a un indice.

L'inserimento di elementi è molto veloce nella parte iniziale dell'elenco, nella parte finale e in una posizione nota. Una ricerca sequenziale è necessaria per cercare un elemento in base al valore o all'indice. Questa ricerca può essere lenta se l'elenco è lungo.

`CObList` incorpora la macro IMPLEMENT_SERIAL per supportare la serializzazione e il dump dei relativi elementi. Se un elenco di `CObject` puntatori viene archiviato in un archivio, con un operatore di inserimento di overload o con la `Serialize` funzione membro, ogni `CObject` elemento viene serializzato a sua volta.

Se è necessario un dump di singoli `CObject` elementi nell'elenco, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Quando un `CObList` oggetto viene eliminato o quando vengono rimossi gli elementi, `CObject` vengono rimossi solo i puntatori, non gli oggetti a cui fanno riferimento.

È possibile derivare classi personalizzate da `CObList` . La nuova classe List, progettata per mantenere i puntatori agli oggetti derivati da `CObject` , aggiunge nuovi membri dati e nuove funzioni membro. Si noti che l'elenco risultante non è strettamente indipendente dai tipi, perché consente l'inserimento di qualsiasi `CObject` puntatore.

> [!NOTE]
> È necessario usare la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) nell'implementazione della classe derivata se si intende serializzare l'elenco.

Per ulteriori informazioni sull'utilizzo di `CObList` , vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CObList`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

## <a name="coblistaddhead"></a><a name="addhead"></a> CObList:: AddHead

Aggiunge un nuovo elemento o elenco di elementi all'inizio dell'elenco.

```
POSITION AddHead(CObject* newElement);
void AddHead(CObList* pNewList);
```

### <a name="parameters"></a>Parametri

*newElement*<br/>
`CObject`Puntatore da aggiungere all'elenco.

*pNewList*<br/>
Puntatore a un altro `CObList` elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

La tabella seguente Mostra altre funzioni membro simili a `CObList::AddHead` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**Posizione AddHead (void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddHead (CPtrList** <strong>\*</strong> `pNewList` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**Position AddHead (const CString&** `newElement` **);**<br /><br /> **Position AddHead (LPCTSTR** `newElement` **);**<br /><br /> **void AddHead (CStrings** <strong>\*</strong> `pNewList` **);**|

### <a name="remarks"></a>Commenti

L'elenco può essere vuoto prima dell'operazione.

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#89](../../mfc/codesnippet/cpp/coblist-class_1.cpp)]

I risultati di questo programma sono i seguenti:

```Output
AddHead example: A CObList with 2 elements
a CAge at $44A8 40
a CAge at $442A 21
```

## <a name="coblistaddtail"></a><a name="addtail"></a> CObList:: AddTail

Aggiunge un nuovo elemento o elenco di elementi alla parte finale dell'elenco.

```
POSITION AddTail(CObject* newElement);
void AddTail(CObList* pNewList);
```

### <a name="parameters"></a>Parametri

*newElement*<br/>
`CObject`Puntatore da aggiungere all'elenco.

*pNewList*<br/>
Puntatore a un altro `CObList` elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

### <a name="remarks"></a>Commenti

L'elenco può essere vuoto prima dell'operazione.

La tabella seguente Mostra altre funzioni membro simili a `CObList::AddTail` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**Posizione AddTail (void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddTail (CPtrList** <strong>\*</strong> `pNewList` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**Position AddTail (const CString&** `newElement` **);**<br /><br /> **Position AddTail (LPCTSTR** `newElement` **);**<br /><br /> **void AddTail (CStrings** <strong>\*</strong> `pNewList` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#90](../../mfc/codesnippet/cpp/coblist-class_2.cpp)]

I risultati di questo programma sono i seguenti:

```Output
AddTail example: A CObList with 2 elements
a CAge at $444A 21
a CAge at $4526 40
```

## <a name="coblistcoblist"></a><a name="coblist"></a> CObList:: CObList

Costruisce un `CObject` elenco di puntatori vuoti.

```
CObList(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Granularità di allocazione della memoria per l'estensione dell'elenco.

### <a name="remarks"></a>Commenti

Man mano che l'elenco cresce, la memoria viene allocata in unità di *nBlockSize* . Se un'allocazione di memoria ha esito negativo, `CMemoryException` viene generata un'eccezione.

La tabella seguente Mostra altre funzioni membro simili a `CObList::CObList` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**CPtrList (INT_PTR** `nBlockSize` **= 10);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString (INT_PTR** `nBlockSize` **= 10);**|

### <a name="example"></a>Esempio

  Di seguito è riportato un elenco della `CObject` classe derivata da `CAge` utilizzata in tutti gli esempi di raccolta:

[!code-cpp[NVC_MFCCollections#91](../../mfc/codesnippet/cpp/coblist-class_3.h)]

Di seguito è riportato un esempio di `CObList` utilizzo del costruttore:

[!code-cpp[NVC_MFCCollections#92](../../mfc/codesnippet/cpp/coblist-class_4.cpp)]

## <a name="coblistfind"></a><a name="find"></a> CObList:: trova

Cerca in sequenza l'elenco per trovare il primo `CObject` puntatore corrispondente al `CObject` puntatore specificato.

```
POSITION Find(
    CObject* searchValue,
    POSITION startAfter = NULL) const;
```

### <a name="parameters"></a>Parametri

*searchValue*<br/>
Puntatore all'oggetto da trovare nell'elenco.

*startAfter*<br/>
Posizione iniziale per la ricerca.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'oggetto non viene trovato.

### <a name="remarks"></a>Commenti

Si noti che i valori del puntatore vengono confrontati, non il contenuto degli oggetti.

La tabella seguente Mostra altre funzioni membro simili a `CObList::Find` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**Posizione di ricerca (void** <strong>\*</strong> `searchValue` **, Posizione** `startAfter` **= Null) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**Position Find (LPCTSTR** `searchValue` **, position** `startAfter` **= null) const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#93](../../mfc/codesnippet/cpp/coblist-class_5.cpp)]

## <a name="coblistfindindex"></a><a name="findindex"></a> CObList:: FindIndex

Usa il valore di *nIndex* come indice nell'elenco.

```
POSITION FindIndex(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento dell'elenco da trovare.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se *nIndex* è troppo grande. Il Framework genera un'asserzione se *nIndex* è negativo.

### <a name="remarks"></a>Commenti

Viene avviata un'analisi sequenziale dall'inizio dell'elenco, arrestando il *n*° elemento.

La tabella seguente Mostra altre funzioni membro simili a `CObList::FindIndex` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**Position FindIndex (INT_PTR** `nIndex` **) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**Position FindIndex (INT_PTR** `nIndex` **) const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#94](../../mfc/codesnippet/cpp/coblist-class_6.cpp)]

## <a name="coblistgetat"></a><a name="getat"></a> CObList:: GetA

Una variabile di tipo POSITION è una chiave per l'elenco.

```
CObject*& GetAt(POSITION position);
const CObject*& GetAt(POSITION position) const;
```

### <a name="parameters"></a>Parametri

*position*<br/>
Valore di posizione restituito da una `GetHeadPosition` chiamata di `Find` funzione membro o precedente.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Commenti

Non è uguale a un indice e non è possibile operare su un valore di posizione autonomamente. `GetAt` Recupera il `CObject` puntatore associato a una posizione specificata.

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void \*& Geta (** position *position* **) const;**<br /><br /> **void \*& Geta (** position *position* **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& Geta (** position *position* **) const;**<br /><br /> **CString& Geta (** *posizione* **);**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [FindIndex](#findindex).

## <a name="coblistgetcount"></a><a name="getcount"></a> CObList:: GetCount

Ottiene il numero di elementi in questo elenco.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore integer contenente il numero di elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetCount` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**INT_PTR GetCount () const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**INT_PTR GetCount () const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#95](../../mfc/codesnippet/cpp/coblist-class_7.cpp)]

## <a name="coblistgethead"></a><a name="gethead"></a> CObList:: GetHead

Ottiene il `CObject` puntatore che rappresenta l'elemento Head dell'elenco.

```
CObject*& GetHead();
const CObject*& GetHead() const;
```

### <a name="return-value"></a>Valore restituito

Se si accede all'elenco tramite un puntatore a un oggetto `const CObList` , viene `GetHead` restituito un `CObject` puntatore. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e pertanto protegge l'elenco dalla modifica.

Se è possibile accedere all'elenco direttamente o tramite un puntatore a un oggetto `CObList` , `GetHead` restituisce un riferimento a un `CObject` puntatore. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `GetHead` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetHead` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void \*& GetHead () const; void \*& GetHead ();**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetHead () const; CString& GetHead ();**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

Nell'esempio seguente viene illustrato l'utilizzo di `GetHead` sul lato sinistro di un'istruzione di assegnazione.

[!code-cpp[NVC_MFCCollections#96](../../mfc/codesnippet/cpp/coblist-class_8.cpp)]

## <a name="coblistgetheadposition"></a><a name="getheadposition"></a> CObList:: GetHeadPosition

Ottiene la posizione dell'elemento Head dell'elenco.

```
POSITION GetHeadPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'elenco è vuoto.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetHeadPosition` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION GetHeadPosition () const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION GetHeadPosition () const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#97](../../mfc/codesnippet/cpp/coblist-class_9.cpp)]

## <a name="coblistgetnext"></a><a name="getnext"></a> CObList:: GetNext

Ottiene l'elemento di elenco identificato da *rPosition*, quindi imposta *rPosition* sul `POSITION` valore della voce successiva nell'elenco.

```
CObject*& GetNext(POSITION& rPosition);
const CObject* GetNext(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*rPosition*<br/>
Riferimento a un valore di posizione restituito da un' `GetNext` `GetHeadPosition` altra chiamata di funzione membro, o.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Commenti

È possibile usare `GetNext` in un ciclo di iterazione in diretta se si stabilisce la posizione iniziale con una chiamata a `GetHeadPosition` o `Find` .

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di *rPosition* viene impostato su null.

È possibile rimuovere un elemento durante un'iterazione. Vedere l'esempio per [RemoveAt](#removeat).

> [!NOTE]
> A partire da MFC 8,0, la versione const di questo metodo è stata modificata in modo da restituire `const CObject*` anziché `const CObject*&` .  Questa modifica è stata apportata per rendere il compilatore conforme allo standard C++.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetNext` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const void* GetNext( POSITION&` `rPosition` `) const;`|
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetNext( POSITION&` `rPosition` `) const;`|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#98](../../mfc/codesnippet/cpp/coblist-class_10.cpp)]

I risultati di questo programma sono i seguenti:

```Output
a CAge at $479C 40
a CAge at $46C0 21
```

## <a name="coblistgetprev"></a><a name="getprev"></a> CObList:: GetPrev

Ottiene l'elemento dell'elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore di posizione della voce precedente nell'elenco.

```
CObject*& GetPrev(POSITION& rPosition);
const CObject* GetPrev(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*rPosition*<br/>
Riferimento a un valore di posizione restituito da una `GetPrev` chiamata di funzione membro precedente o successiva.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Commenti

È possibile usare `GetPrev` in un ciclo di iterazione inversa se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find` .

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è il primo nell'elenco, il nuovo valore di *rPosition* viene impostato su null.

> [!NOTE]
> A partire da MFC 8,0, la versione const di questo metodo è stata modificata in modo da restituire `const CObject*` anziché `const CObject*&` .  Questa modifica è stata apportata per rendere il compilatore conforme allo standard C++.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetPrev` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const void* GetPrev( POSITION&` `rPosition` `) const;`|
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetPrev( POSITION&` `rPosition` `) const;`|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#99](../../mfc/codesnippet/cpp/coblist-class_11.cpp)]

I risultati di questo programma sono i seguenti:

```Output
a CAge at $421C 21
a CAge at $421C 40
```

## <a name="coblistgetsize"></a><a name="getsize"></a> CObList:: GetSize

Restituisce il numero di elementi dell'elenco.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare il numero di elementi nell'elenco.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetSize` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**INT_PTR GetSize () const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**INT_PTR GetSize () const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#100](../../mfc/codesnippet/cpp/coblist-class_12.cpp)]

## <a name="coblistgettail"></a><a name="gettail"></a> CObList:: GetTail

Ottiene il `CObject` puntatore che rappresenta l'elemento tail di questo elenco.

```
CObject*& GetTail();
const CObject*& GetTail() const;
```

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `GetTail` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetTail` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void \*& GetTail () const; void \*& GetTail ();**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetTail () const; CString& GetTail ();**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#101](../../mfc/codesnippet/cpp/coblist-class_13.cpp)]

## <a name="coblistgettailposition"></a><a name="gettailposition"></a> CObList:: GetTailPosition

Ottiene la posizione dell'elemento tail dell'elenco; **Null** se l'elenco è vuoto.

```
POSITION GetTailPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'elenco è vuoto.

La tabella seguente Mostra altre funzioni membro simili a `CObList::GetTailPosition` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION GetTailPosition () const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION GetTailPosition () const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#102](../../mfc/codesnippet/cpp/coblist-class_14.cpp)]

## <a name="coblistinsertafter"></a><a name="insertafter"></a> CObList:: InsertAfter

Aggiunge un elemento all'elenco dopo l'elemento in corrispondenza della posizione specificata.

```
POSITION InsertAfter(
    POSITION position,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*position*<br/>
Valore di posizione restituito da una `GetNext` chiamata di `GetPrev` funzione membro, o precedente `Find` .

*newElement*<br/>
Puntatore all'oggetto da aggiungere all'elenco.

La tabella seguente Mostra altre funzioni membro simili a `CObList::InsertAfter` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**Posizione InsertAfter (** *posizione* **, void** <strong>\*</strong> `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**Position InsertAfter (** position *position* **, const CString&** `newElement` **);**<br /><br /> **Position InsertAfter (** position *position* **, LPCTSTR** `newElement` **);**|

### <a name="return-value"></a>Valore restituito

Valore di posizione che corrisponde al parametro *position* .

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#103](../../mfc/codesnippet/cpp/coblist-class_15.cpp)]

I risultati di questo programma sono i seguenti:

```Output
InsertAfter example: A CObList with 3 elements
a CAge at $4A44 40
a CAge at $4A64 65
a CAge at $4968 21
```

## <a name="coblistinsertbefore"></a><a name="insertbefore"></a> CObList:: InsertBefore

Aggiunge un elemento all'elenco prima dell'elemento nella posizione specificata.

```
POSITION InsertBefore(
    POSITION position,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*position*<br/>
Valore di posizione restituito da una `GetNext` chiamata di `GetPrev` funzione membro, o precedente `Find` .

*newElement*<br/>
Puntatore all'oggetto da aggiungere all'elenco.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'elenco è vuoto.

La tabella seguente Mostra altre funzioni membro simili a `CObList::InsertBefore` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**Posizione InsertBefore (** *posizione* **, void** <strong>\*</strong> `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**Posizione InsertBefore (** *posizione* **, const CString&** `newElement` **);**<br /><br /> **Posizione InsertBefore (** *posizione* **, LPCTSTR** `newElement` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#104](../../mfc/codesnippet/cpp/coblist-class_16.cpp)]

I risultati di questo programma sono i seguenti:

```Output
InsertBefore example: A CObList with 3 elements
a CAge at $4AE2 40
a CAge at $4B02 65
a CAge at $49E6 21
```

## <a name="coblistisempty"></a><a name="isempty"></a> CObList:: IsEmpty

Indica se l'elenco non contiene elementi.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elenco è vuoto; in caso contrario, 0.

La tabella seguente Mostra altre funzioni membro simili a `CObList::IsEmpty` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**BOOL IsEmpty () const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**BOOL IsEmpty () const;**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [RemoveAll](#removeall).

## <a name="coblistremoveall"></a><a name="removeall"></a> CObList:: RemoveAll

Rimuove tutti gli elementi dall'elenco e libera la `CObList` memoria associata.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Commenti

Se l'elenco è già vuoto, non viene generato alcun errore.

Quando si rimuovono gli elementi da un `CObList` , i puntatori all'oggetto vengono rimossi dall'elenco. È responsabilità dell'utente eliminare gli oggetti stessi.

La tabella seguente Mostra altre funzioni membro simili a `CObList::RemoveAll` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**il void RemoveAll ();**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**il void RemoveAll ();**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#105](../../mfc/codesnippet/cpp/coblist-class_17.cpp)]

## <a name="coblistremoveat"></a><a name="removeat"></a> CObList:: RemoveAt

Rimuove l'elemento specificato da questo elenco.

```cpp
void RemoveAt(POSITION position);
```

### <a name="parameters"></a>Parametri

*position*<br/>
Posizione dell'elemento da rimuovere dall'elenco.

### <a name="remarks"></a>Commenti

Quando si rimuove un elemento da un `CObList` oggetto, il puntatore all'oggetto viene rimosso dall'elenco. È responsabilità dell'utente eliminare gli oggetti stessi.

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

La tabella seguente Mostra altre funzioni membro simili a `CObList::RemoveAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void RemoveAt (** *posizione posizione* **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void RemoveAt (** *posizione posizione* **);**|

### <a name="example"></a>Esempio

  Prestare attenzione quando si rimuove un elemento durante un'iterazione dell'elenco. Nell'esempio seguente viene illustrata una tecnica di rimozione che garantisce un valore di **posizione** valido per [GetNext](#getnext).

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#106](../../mfc/codesnippet/cpp/coblist-class_18.cpp)]

I risultati di questo programma sono i seguenti:

`RemoveAt example: A CObList with 2 elements`

`a CAge at $4C1E 65`

`a CAge at $4B22 21`

## <a name="coblistremovehead"></a><a name="removehead"></a> CObList:: RemoveHead

Rimuove l'elemento dall'inizio dell'elenco e ne restituisce un puntatore.

```
CObject* RemoveHead();
```

### <a name="return-value"></a>Valore restituito

`CObject`Puntatore precedente all'inizio dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `RemoveHead` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObList::RemoveHead` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void \* RemoveHead ();**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveHead ();**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#107](../../mfc/codesnippet/cpp/coblist-class_19.cpp)]

## <a name="coblistremovetail"></a><a name="removetail"></a> CObList:: RemoveTail

Rimuove l'elemento dalla parte finale dell'elenco e ne restituisce un puntatore.

```
CObject* RemoveTail();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto in corrispondenza della parte finale dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `RemoveTail` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObList::RemoveTail` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void \* RemoveTail ();**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveTail ();**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#108](../../mfc/codesnippet/cpp/coblist-class_20.cpp)]

## <a name="coblistsetat"></a><a name="setat"></a> CObList:: SetAt

Imposta l'elemento in una posizione specificata.

```cpp
void SetAt(
    POSITION pos,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*pos*<br/>
POSIZIONE dell'elemento da impostare.

*newElement*<br/>
`CObject`Puntatore da scrivere nell'elenco.

### <a name="remarks"></a>Commenti

Una variabile di tipo POSITION è una chiave per l'elenco. Non è uguale a un indice e non è possibile operare su un valore di posizione autonomamente. `SetAt` scrive il `CObject` puntatore nella posizione specificata nell'elenco.

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

La tabella seguente Mostra altre funzioni membro simili a `CObList::SetAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void SetAt (position** `pos` **, const CString&** `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void SetAt (position** `pos` **, LPCTSTR** `newElement` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](#coblist) per un elenco della `CAge` classe.

[!code-cpp[NVC_MFCCollections#109](../../mfc/codesnippet/cpp/coblist-class_21.cpp)]

I risultati di questo programma sono i seguenti:

```Output
SetAt example: A CObList with 2 elements
a CAge at $4D98 40
a CAge at $4DB8 65
```

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CString (classe)](../../mfc/reference/cstringlist-class.md)<br/>
[Classe CPtrList](../../mfc/reference/cptrlist-class.md)
