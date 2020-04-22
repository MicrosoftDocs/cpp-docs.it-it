---
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
ms.openlocfilehash: f24965357e0b71f28ba39b82d045600e7e1a44e2
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749681"
---
# <a name="coblist-class"></a>Classe CObList

fSupporti elenchi ordinati `CObject` di puntatori non univoci accessibili in sequenza o in base al valore del puntatore.fSupports ordered lists of nonunique pointers accessible in sequenza o by pointer value.

## <a name="syntax"></a>Sintassi

```
class CObList : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObList::CObList](#coblist)|Costruisce un elenco `CObject` vuoto per i puntatori.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObList::AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) all'intestazione dell'elenco (fa una nuova testa).|
|[CObList::AddTail (Aggiungitail)](#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla coda dell'elenco (crea una nuova coda).|
|[CObList::Find](#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|
|[CObList::FindIndex](#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|
|[CObList::GetAt](#getat)|Ottiene l'elemento in una posizione specificata.|
|[CObList::GetCount](#getcount)|Restituisce il numero di elementi in questo elenco.|
|[CObList::GetHead](#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|
|[CObList::GetHeadPosition](#getheadposition)|Restituisce la posizione dell'elemento head dell'elenco.|
|[CObList::GetNext](#getnext)|Ottiene l'elemento successivo per l'iterazione.|
|[CObList::GetPrev](#getprev)|Ottiene l'elemento precedente per l'iterazione.|
|[CObList::GetSize](#getsize)|Restituisce il numero di elementi in questo elenco.|
|[CObList::GetTail](#gettail)|Restituisce l'elemento tail dell'elenco (non può essere vuoto).|
|[CObList::GetTailPosition](#gettailposition)|Restituisce la posizione dell'elemento tail dell'elenco.|
|[CObList::InsertAfter (Opzione CObList::InsertAfter)](#insertafter)|Inserisce un nuovo elemento dopo una determinata posizione.|
|[CObList::InsertBefore (Informazioni in precedenza)](#insertbefore)|Inserisce un nuovo elemento prima di una determinata posizione.|
|[CObList::IsEmpty](#isempty)|Verifica la condizione di elenco vuota (nessun elemento).|
|[CObList::RemoveAll](#removeall)|Rimuove tutti gli elementi da questo elenco.|
|[CObList::RemoveAt](#removeat)|Rimuove un elemento da questo elenco, specificato dalla posizione.|
|[CObList::RemoveHead](#removehead)|Rimuove l'elemento dall'intestazione dell'elenco.|
|[CObList::RemoveTail](#removetail)|Rimuove l'elemento dalla coda dell'elenco.|
|[CObList::SetAt](#setat)|Imposta l'elemento in una posizione specificata.|

## <a name="remarks"></a>Osservazioni

`CObList`elenchi si comportano come liste doppiamente collegate.

Una variabile di tipo POSITION è una chiave per l'elenco. È possibile usare una variabile POSITION sia come iteratore per attraversare un elenco in sequenza che come segnalibro per mantenere una posizione. Tuttavia, una posizione non è la stessa di un indice.

L'inserimento dell'elemento è molto veloce alla testa della lista, alla coda e a una posizione nota. Una ricerca sequenziale è necessaria per cercare un elemento in base al valore o all'indice. Questa ricerca può essere lenta se l'elenco è lungo.

`CObList`incorpora la macro IMPLEMENT_SERIAL per supportare la serializzazione e il dump dei relativi elementi. Se un `CObject` elenco di puntatori viene archiviato in un archivio, con un operatore di inserimento di overload o con la `Serialize` funzione membro, ogni `CObject` elemento viene serializzato a sua volta.

Se è necessario un `CObject` dump di singoli elementi nell'elenco, è necessario impostare la profondità del contesto di dump su 1 o su un valore maggiore.

Quando `CObList` un oggetto viene eliminato o quando i `CObject` relativi elementi vengono rimossi, vengono rimossi solo i puntatori, non gli oggetti a cui fanno riferimento.

È possibile derivare `CObList`le proprie classi da . La nuova classe elenco, progettata per `CObject`contenere puntatori a oggetti derivati da , aggiunge nuovi membri dati e nuove funzioni membro. Si noti che l'elenco risultante non è `CObject` strettamente indipendente dai tipi, perché consente l'inserimento di qualsiasi puntatore.

> [!NOTE]
> Se si intende serializzare l'elenco, è necessario utilizzare la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) nell'implementazione della classe derivata.

Per ulteriori informazioni `CObList`sull'utilizzo di , vedere l'articolo [Raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CObList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll.h

## <a name="coblistaddhead"></a><a name="addhead"></a>CObList::AddHead

Aggiunge un nuovo elemento o elenco di elementi all'intestazione dell'elenco.

```
POSITION AddHead(CObject* newElement);
void AddHead(CObList* pNewList);
```

### <a name="parameters"></a>Parametri

*nuovoElemento*<br/>
Puntatore `CObject` da aggiungere a questo elenco.

*pNewList (in questo elenco)*<br/>
Puntatore a `CObList` un altro elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore POSITION dell'elemento appena inserito.

Nella tabella seguente vengono illustrate altre `CObList::AddHead`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION AddHead( void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddHead( CPtrList** <strong>\*</strong> `pNewList` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION AddHead(const CString&** `newElement` **);**<br /><br /> **POSITION AddHead(LPCTSTR** `newElement` **);**<br /><br /> **void AddHead(CStringList** <strong>\*</strong> `pNewList` **);**|

### <a name="remarks"></a>Osservazioni

L'elenco può essere vuoto prima dell'operazione.

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#89](../../mfc/codesnippet/cpp/coblist-class_1.cpp)]

I risultati di questo programma sono i seguenti:

```Output
AddHead example: A CObList with 2 elements
a CAge at $44A8 40
a CAge at $442A 21
```

## <a name="coblistaddtail"></a><a name="addtail"></a>CObList::AddTail (Aggiungitail)

Aggiunge un nuovo elemento o elenco di elementi alla fine dell'elenco.

```
POSITION AddTail(CObject* newElement);
void AddTail(CObList* pNewList);
```

### <a name="parameters"></a>Parametri

*nuovoElemento*<br/>
Puntatore `CObject` da aggiungere a questo elenco.

*pNewList (in questo elenco)*<br/>
Puntatore a `CObList` un altro elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore POSITION dell'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

L'elenco può essere vuoto prima dell'operazione.

Nella tabella seguente vengono illustrate altre `CObList::AddTail`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION AddTail( void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddTail( CPtrList** <strong>\*</strong> `pNewList` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION AddTail( const CString&** `newElement` **);**<br /><br /> **POSITION AddTail( LPCTSTR** `newElement` **);**<br /><br /> **void AddTail( CStringList** <strong>\*</strong> `pNewList` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#90](../../mfc/codesnippet/cpp/coblist-class_2.cpp)]

I risultati di questo programma sono i seguenti:

```Output
AddTail example: A CObList with 2 elements
a CAge at $444A 21
a CAge at $4526 40
```

## <a name="coblistcoblist"></a><a name="coblist"></a>CObList::CObList

Costruisce un `CObject` elenco di puntatori vuoto.

```
CObList(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
Granularità di allocazione della memoria per l'estensione dell'elenco.

### <a name="remarks"></a>Osservazioni

Man mano che l'elenco aumenta, la memoria viene allocata in unità di voci *nBlockSize.* Se un'allocazione `CMemoryException` di memoria non riesce, viene generata un'eccezione.

Nella tabella seguente vengono illustrate altre `CObList::CObList`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**CPtrList( INT_PTR** `nBlockSize` **- 10 );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CStringList( INT_PTR** `nBlockSize` **- 10 );**|

### <a name="example"></a>Esempio

  Di seguito è `CObject`riportato `CAge` un elenco della classe derivata da utilizzata in tutti gli esempi di raccolta:

[!code-cpp[NVC_MFCCollections#91](../../mfc/codesnippet/cpp/coblist-class_3.h)]

Di seguito è `CObList` riportato un esempio di utilizzo del costruttore:Below is an example of constructor usage:

[!code-cpp[NVC_MFCCollections#92](../../mfc/codesnippet/cpp/coblist-class_4.cpp)]

## <a name="coblistfind"></a><a name="find"></a>CObList::Find

Esegue la ricerca nell'elenco `CObject` in sequenza per trovare il primo puntatore corrispondente al puntatore specificato. `CObject`

```
POSITION Find(
    CObject* searchValue,
    POSITION startAfter = NULL) const;
```

### <a name="parameters"></a>Parametri

*valore di ricerca*<br/>
Puntatore all'oggetto da trovare in questo elenco.

*inizioAfter*<br/>
Posizione iniziale per la ricerca.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'oggetto non viene trovato.

### <a name="remarks"></a>Osservazioni

Si noti che vengono confrontati i valori del puntatore, non il contenuto degli oggetti.

Nella tabella seguente vengono illustrate altre `CObList::Find`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION Find( void** <strong>\*</strong> `searchValue` **, POSITION** `startAfter` **: NULL ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION Find( LPCTSTR** `searchValue` **, POSITION** `startAfter` **e NULL ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#93](../../mfc/codesnippet/cpp/coblist-class_5.cpp)]

## <a name="coblistfindindex"></a><a name="findindex"></a>CObList::FindIndex

Utilizza il valore di *nIndex* come indice nell'elenco.

```
POSITION FindIndex(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento list da trovare.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se *nIndex* è troppo grande. Il framework genera un'asserzione se *nIndex* è negativo.

### <a name="remarks"></a>Osservazioni

Si avvia una scansione sequenziale dalla testa della lista, fermandosi sull'elemento *n*th.

Nella tabella seguente vengono illustrate altre `CObList::FindIndex`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION FindIndex( INT_PTR** `nIndex` **) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION FindIndex( INT_PTR** `nIndex` **) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#94](../../mfc/codesnippet/cpp/coblist-class_6.cpp)]

## <a name="coblistgetat"></a><a name="getat"></a>CObList::GetAt

Una variabile di tipo POSITION è una chiave per l'elenco.

```
CObject*& GetAt(POSITION position);
const CObject*& GetAt(POSITION position) const;
```

### <a name="parameters"></a>Parametri

*Posizione*<br/>
Valore POSITION restituito da `GetHeadPosition` una `Find` chiamata di funzione membro o precedente.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Osservazioni

Non è uguale a un indice e non è possibile operare su un valore POSITION manualmente. `GetAt`recupera il `CObject` puntatore associato a una posizione specificata.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Nella tabella seguente vengono illustrate altre `CObList::GetAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const\* void& GetAt( posizione POSITION** *position* **) const;**<br /><br /> **void\*& GetAt(** *posizione* POSITION **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetAt( posizione POSITION** *position* **) const;**<br /><br /> **CString& GetAt(** *posizione* POSITION **);**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [FindIndex](#findindex).

## <a name="coblistgetcount"></a><a name="getcount"></a>CObList::GetCount

Ottiene il numero di elementi in questo elenco.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore integer contenente il numero di elementi.

Nella tabella seguente vengono illustrate altre `CObList::GetCount`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**INT_PTR GetCount( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**INT_PTR GetCount( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#95](../../mfc/codesnippet/cpp/coblist-class_7.cpp)]

## <a name="coblistgethead"></a><a name="gethead"></a>CObList::GetHead

Ottiene `CObject` il puntatore che rappresenta l'elemento head di questo elenco.

```
CObject*& GetHead();
const CObject*& GetHead() const;
```

### <a name="return-value"></a>Valore restituito

Se si accede all'elenco `const CObList`tramite `GetHead` un `CObject` puntatore a un oggetto , verrà restituito un puntatore. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalla modifica.

Se si accede all'elenco direttamente `CObList`o `GetHead` tramite un `CObject` puntatore a un oggetto , viene restituito un riferimento a un puntatore. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `GetHead`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

Nella tabella seguente vengono illustrate altre `CObList::GetHead`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const\* void& GetHead( ) const; void\*& GetHead( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetHead( ) const; CString& GetHead( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

Nell'esempio seguente viene `GetHead` illustrato l'utilizzo di nel lato sinistro di un'istruzione di assegnazione.

[!code-cpp[NVC_MFCCollections#96](../../mfc/codesnippet/cpp/coblist-class_8.cpp)]

## <a name="coblistgetheadposition"></a><a name="getheadposition"></a>CObList::GetHeadPosition

Ottiene la posizione dell'elemento head di questo elenco.

```
POSITION GetHeadPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'elenco è vuoto.

Nella tabella seguente vengono illustrate altre `CObList::GetHeadPosition`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION GetHeadPosition( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION GetHeadPosition( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#97](../../mfc/codesnippet/cpp/coblist-class_9.cpp)]

## <a name="coblistgetnext"></a><a name="getnext"></a>CObList::GetNext

Ottiene l'elemento dell'elenco identificato da *rPosition*, quindi imposta *rPosition* sul `POSITION` valore della voce successiva nell'elenco.

```
CObject*& GetNext(POSITION& rPosition);
const CObject* GetNext(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*rPosizione*<br/>
Riferimento a un valore POSITION restituito `GetNext` `GetHeadPosition`da una chiamata a funzione membro precedente , , o da un'altra chiamata a funzione membro.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Osservazioni

È possibile `GetNext` utilizzare in un ciclo di iterazione in `GetHeadPosition` `Find`avanti se si stabilisce la posizione iniziale con una chiamata a o .

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di *rPosition* è impostato su NULL.

È possibile rimuovere un elemento durante un'iterazione. Vedere l'esempio per [RemoveAt](#removeat).

> [!NOTE]
> A partire da MFC 8.0 la versione const di questo metodo è stata modificata in modo che restituisca `const CObject*` anziché `const CObject*&`.  Questa modifica è stata apportata per portare il compilatore in conformità con lo standard C .

Nella tabella seguente vengono illustrate altre `CObList::GetNext`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const void* GetNext( POSITION&` `rPosition` `) const;`|
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetNext( POSITION&` `rPosition` `) const;`|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#98](../../mfc/codesnippet/cpp/coblist-class_10.cpp)]

I risultati di questo programma sono i seguenti:

```Output
a CAge at $479C 40
a CAge at $46C0 21
```

## <a name="coblistgetprev"></a><a name="getprev"></a>CObList::GetPrev

Ottiene l'elemento dell'elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore POSITION della voce precedente nell'elenco.

```
CObject*& GetPrev(POSITION& rPosition);
const CObject* GetPrev(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*rPosizione*<br/>
Riferimento a un valore POSITION restituito `GetPrev` da una chiamata di funzione membro precedente o da un'altra chiamata.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Osservazioni

È possibile `GetPrev` utilizzare in un ciclo di iterazione inverso se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find`.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è il primo nell'elenco, il nuovo valore di *rPosition* è impostato su NULL.

> [!NOTE]
> A partire da MFC 8.0 la versione const di questo metodo è stata modificata in modo che restituisca `const CObject*` anziché `const CObject*&`.  Questa modifica è stata apportata per portare il compilatore in conformità con lo standard C .

Nella tabella seguente vengono illustrate altre `CObList::GetPrev`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const void* GetPrev( POSITION&` `rPosition` `) const;`|
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetPrev( POSITION&` `rPosition` `) const;`|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#99](../../mfc/codesnippet/cpp/coblist-class_11.cpp)]

I risultati di questo programma sono i seguenti:

```Output
a CAge at $421C 21
a CAge at $421C 40
```

## <a name="coblistgetsize"></a><a name="getsize"></a>CObList::GetSize

Restituisce il numero di elementi dell'elenco.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nell'elenco.

Nella tabella seguente vengono illustrate altre `CObList::GetSize`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**INT_PTR GetSize( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**INT_PTR GetSize( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#100](../../mfc/codesnippet/cpp/coblist-class_12.cpp)]

## <a name="coblistgettail"></a><a name="gettail"></a>CObList::GetTail

Ottiene `CObject` il puntatore che rappresenta l'elemento finale di questo elenco.

```
CObject*& GetTail();
const CObject*& GetTail() const;
```

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](#gethead).

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `GetTail`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

Nella tabella seguente vengono illustrate altre `CObList::GetTail`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const\* void& GetTail( ) const; void\*& GetTail( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetTail( ) const; CString& GetTail( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#101](../../mfc/codesnippet/cpp/coblist-class_13.cpp)]

## <a name="coblistgettailposition"></a><a name="gettailposition"></a>CObList::GetTailPosition

Ottiene la posizione dell'elemento tail di questo elenco; **NULL** se l'elenco è vuoto.

```
POSITION GetTailPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'elenco è vuoto.

Nella tabella seguente vengono illustrate altre `CObList::GetTailPosition`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION GetTailPosition( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION GetTailPosition( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#102](../../mfc/codesnippet/cpp/coblist-class_14.cpp)]

## <a name="coblistinsertafter"></a><a name="insertafter"></a>CObList::InsertAfter (Opzione CObList::InsertAfter)

Aggiunge un elemento a questo elenco dopo l'elemento nella posizione specificata.

```
POSITION InsertAfter(
    POSITION position,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*Posizione*<br/>
Valore POSITION restituito da `GetNext`una `GetPrev`chiamata `Find` di funzione membro precedente , , o .

*nuovoElemento*<br/>
Puntatore all'oggetto da aggiungere a questo elenco.

Nella tabella seguente vengono illustrate altre `CObList::InsertAfter`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION InsertAfter( posizione POSITION** *position* **, void** <strong>\*</strong> `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION InsertAfter(** *posizione* POSITION **, const CString&** `newElement` **);**<br /><br /> **POSITION InsertAfter( Posizione** *POSITION* **, LPCTSTR** `newElement` **);**|

### <a name="return-value"></a>Valore restituito

Un valore POSITION che corrisponde al parametro *position.*

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#103](../../mfc/codesnippet/cpp/coblist-class_15.cpp)]

I risultati di questo programma sono i seguenti:

```Output
InsertAfter example: A CObList with 3 elements
a CAge at $4A44 40
a CAge at $4A64 65
a CAge at $4968 21
```

## <a name="coblistinsertbefore"></a><a name="insertbefore"></a>CObList::InsertBefore (Informazioni in precedenza)

Aggiunge un elemento all'elenco prima dell'elemento nella posizione specificata.

```
POSITION InsertBefore(
    POSITION position,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*Posizione*<br/>
Valore POSITION restituito da `GetNext`una `GetPrev`chiamata `Find` di funzione membro precedente , , o .

*nuovoElemento*<br/>
Puntatore all'oggetto da aggiungere a questo elenco.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'elenco è vuoto.

Nella tabella seguente vengono illustrate altre `CObList::InsertBefore`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION InsertBefore(** *posizione* POSITION **, void** <strong>\*</strong> `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION InsertBefore(** *posizione* POSITION **, const CString&** `newElement` **);**<br /><br /> **POSITION InsertBefore( posizione POSITION** *position* **, LPCTSTR** `newElement` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#104](../../mfc/codesnippet/cpp/coblist-class_16.cpp)]

I risultati di questo programma sono i seguenti:

```Output
InsertBefore example: A CObList with 3 elements
a CAge at $4AE2 40
a CAge at $4B02 65
a CAge at $49E6 21
```

## <a name="coblistisempty"></a><a name="isempty"></a>CObList::IsEmpty

Indica se questo elenco non contiene elementi.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questo elenco è vuoto; in caso contrario 0.

Nella tabella seguente vengono illustrate altre `CObList::IsEmpty`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**BOOL IsEmpty( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**BOOL IsEmpty( ) const;**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [RemoveAll](#removeall).

## <a name="coblistremoveall"></a><a name="removeall"></a>CObList::RemoveAll

Rimuove tutti gli elementi da questo `CObList` elenco e libera la memoria associata.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Non viene generato alcun errore se l'elenco è già vuoto.

Quando si rimuovono elementi da un `CObList`oggetto , si rimuovono i puntatori agli oggetti dall'elenco. È tua responsabilità eliminare gli oggetti stessi.

Nella tabella seguente vengono illustrate altre `CObList::RemoveAll`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void RemoveAll( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void RemoveAll( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#105](../../mfc/codesnippet/cpp/coblist-class_17.cpp)]

## <a name="coblistremoveat"></a><a name="removeat"></a>CObList::RemoveAt

Rimuove l'elemento specificato da questo elenco.

```cpp
void RemoveAt(POSITION position);
```

### <a name="parameters"></a>Parametri

*Posizione*<br/>
Posizione dell'elemento da rimuovere dall'elenco.

### <a name="remarks"></a>Osservazioni

Quando si rimuove un `CObList`elemento da un oggetto , si rimuove il puntatore all'oggetto dall'elenco. È tua responsabilità eliminare gli oggetti stessi.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Nella tabella seguente vengono illustrate altre `CObList::RemoveAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void RemoveAt( Posizione** *posizione* **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void RemoveAt( Posizione** *posizione* **);**|

### <a name="example"></a>Esempio

  Prestare attenzione quando si rimuove un elemento durante un'iterazione dell'elenco. Nell'esempio seguente viene illustrata una tecnica di rimozione che garantisce un valore **POSITION** valido per [GetNext](#getnext).

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#106](../../mfc/codesnippet/cpp/coblist-class_18.cpp)]

I risultati di questo programma sono i seguenti:

`RemoveAt example: A CObList with 2 elements`

`a CAge at $4C1E 65`

`a CAge at $4B22 21`

## <a name="coblistremovehead"></a><a name="removehead"></a>CObList::RemoveHead

Rimuove l'elemento dall'intestazione dell'elenco e restituisce un puntatore a esso.

```
CObject* RemoveHead();
```

### <a name="return-value"></a>Valore restituito

Il `CObject` puntatore in precedenza all'intestazione dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `RemoveHead`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

Nella tabella seguente vengono illustrate altre `CObList::RemoveHead`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void\* RemoveHead( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveHead( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#107](../../mfc/codesnippet/cpp/coblist-class_19.cpp)]

## <a name="coblistremovetail"></a><a name="removetail"></a>CObList::RemoveTail

Rimuove l'elemento dalla coda dell'elenco e restituisce un puntatore a esso.

```
CObject* RemoveTail();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto che si trovava nella parte finale dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `RemoveTail`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

Nella tabella seguente vengono illustrate altre `CObList::RemoveTail`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void\* RemoveTail( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveTail( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#108](../../mfc/codesnippet/cpp/coblist-class_20.cpp)]

## <a name="coblistsetat"></a><a name="setat"></a>CObList::SetAt

Imposta l'elemento in una posizione specificata.

```cpp
void SetAt(
    POSITION pos,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
POSIZIONE dell'elemento da impostare.

*nuovoElemento*<br/>
Puntatore `CObject` da scrivere nell'elenco.

### <a name="remarks"></a>Osservazioni

Una variabile di tipo POSITION è una chiave per l'elenco. Non è uguale a un indice e non è possibile operare su un valore POSITION manualmente. `SetAt`scrive `CObject` il puntatore nella posizione specificata nell'elenco.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Nella tabella seguente vengono illustrate altre `CObList::SetAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void SetAt( POSITION** `pos` **, const CString&** `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void SetAt( POSITION** `pos` **, LPCTSTR** `newElement` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](#coblist) per un `CAge` elenco della classe.

[!code-cpp[NVC_MFCCollections#109](../../mfc/codesnippet/cpp/coblist-class_21.cpp)]

I risultati di questo programma sono i seguenti:

```Output
SetAt example: A CObList with 2 elements
a CAge at $4D98 40
a CAge at $4DB8 65
```

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CStringList](../../mfc/reference/cstringlist-class.md)<br/>
[Classe CPtrList](../../mfc/reference/cptrlist-class.md)
