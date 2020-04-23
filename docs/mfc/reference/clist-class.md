---
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
ms.openlocfilehash: adc065687f0c2c40b7e66326ff9d1e6210a6962c
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754135"
---
# <a name="clist-class"></a>Classe CList

Supporta elenchi ordinati di oggetti non univoci accessibili in sequenza o in base al valore.

## <a name="syntax"></a>Sintassi

```
template<class TYPE, class ARG_TYPE = const TYPE&>
class CList : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Elenco::CList](#clist)|Costruisce un elenco ordinato vuoto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CList::AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) all'intestazione dell'elenco (fa una nuova testa).|
|[CList::AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla coda dell'elenco (crea una nuova coda).|
|[CList::Find](#find)|Ottiene la posizione di un elemento specificato dal valore del puntatore.|
|[CList::FindIndex](#findindex)|Ottiene la posizione di un elemento specificato da un indice in base zero.|
|[CList::GetAt](#getat)|Ottiene l'elemento in una posizione specificata.|
|[CList::GetCount](#getcount)|Restituisce il numero di elementi in questo elenco.|
|[CList::GetHead](#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|
|[CList::GetHeadPosition](#getheadposition)|Restituisce la posizione dell'elemento head dell'elenco.|
|[CList::GetNext](#getnext)|Ottiene l'elemento successivo per l'iterazione.|
|[CList::GetPrev](#getprev)|Ottiene l'elemento precedente per l'iterazione.|
|[CList::GetSize](#getsize)|Restituisce il numero di elementi in questo elenco.|
|[CList::GetTail](#gettail)|Restituisce l'elemento tail dell'elenco (non può essere vuoto).|
|[CList::GetTailPosition](#gettailposition)|Restituisce la posizione dell'elemento tail dell'elenco.|
|[CList::InsertAfter (Elenco cList::InsertAfter)](#insertafter)|Inserisce un nuovo elemento dopo una determinata posizione.|
|[CList::InsertBefore](#insertbefore)|Inserisce un nuovo elemento prima di una determinata posizione.|
|[CList::IsEmpty](#isempty)|Verifica la condizione di elenco vuota (nessun elemento).|
|[CList::RemoveAll](#removeall)|Rimuove tutti gli elementi da questo elenco.|
|[CList::RemoveAt](#removeat)|Rimuove un elemento da questo elenco, specificato dalla posizione.|
|[CList::RemoveHead](#removehead)|Rimuove l'elemento dall'intestazione dell'elenco.|
|[CList::RemoveTail](#removetail)|Rimuove l'elemento dalla coda dell'elenco.|
|[CList::SetAt](#setat)|Imposta l'elemento in una posizione specificata.|

#### <a name="parameters"></a>Parametri

*TIPO*<br/>
Tipo di oggetto memorizzato nell'elenco.

*ARG_TYPE*<br/>
Tipo utilizzato per fare riferimento agli oggetti memorizzati nell'elenco. Può essere un riferimento.

## <a name="remarks"></a>Osservazioni

`CList`elenchi si comportano come liste doppiamente collegate.

Una variabile di tipo POSITION è una chiave per l'elenco. È possibile usare una variabile POSITION come iteratore per attraversare un elenco in sequenza e come segnalibro per mantenere una posizione. Tuttavia, una posizione non è la stessa di un indice.

L'inserimento dell'elemento è molto veloce alla testa della lista, alla coda e a una posizione nota. Una ricerca sequenziale è necessaria per cercare un elemento in base al valore o all'indice. Questa ricerca può essere lenta se l'elenco è lungo.

Se è necessario un dump di singoli elementi nell'elenco, è necessario impostare la profondità del contesto di dump su 1 o su un valore maggiore.

Alcune funzioni membro di questa classe chiamano funzioni di supporto `CList` globali che devono essere personalizzate per la maggior parte degli utilizzi della classe. Vedere [Collection Class Helpers](../../mfc/reference/collection-class-helpers.md) nella sezione "Macro e Globals".

Per ulteriori informazioni `CList`sull'utilizzo di , vedere l'articolo [Raccolte](../../mfc/collections.md).

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#35](../../mfc/codesnippet/cpp/clist-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="clistaddhead"></a><a name="addhead"></a>CList::AddHead

Aggiunge un nuovo elemento o elenco di elementi all'intestazione dell'elenco.

```
POSITION AddHead(ARG_TYPE newElement);
void AddHead(CList* pNewList);
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*nuovoElemento*<br/>
Nuovo elemento.

*pNewList (in questo elenco)*<br/>
Puntatore a `CList` un altro elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore POSITION dell'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

L'elenco può essere vuoto prima dell'operazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#36](../../mfc/codesnippet/cpp/clist-class_2.cpp)]

## <a name="clistaddtail"></a><a name="addtail"></a>CList::AddTail

Aggiunge un nuovo elemento o elenco di elementi alla fine dell'elenco.

```
POSITION AddTail(ARG_TYPE newElement);
void AddTail(CList* pNewList);
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*nuovoElemento*<br/>
Elemento da aggiungere all'elenco.

*pNewList (in questo elenco)*<br/>
Puntatore a `CList` un altro elenco. Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore POSITION dell'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

L'elenco può essere vuoto prima dell'operazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#37](../../mfc/codesnippet/cpp/clist-class_3.cpp)]

## <a name="clistclist"></a><a name="clist"></a>Elenco::CList

Costruisce un elenco ordinato vuoto.

```
CList(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
Granularità di allocazione della memoria per l'estensione dell'elenco.

### <a name="remarks"></a>Osservazioni

Man mano che l'elenco aumenta, la memoria viene allocata in unità di voci *nBlockSize.*

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#38](../../mfc/codesnippet/cpp/clist-class_4.cpp)]

## <a name="clistfind"></a><a name="find"></a>CList::Find

Esegue una ricerca nell'elenco in sequenza per trovare il primo elemento corrispondente al *valore searchValue*specificato.

```
POSITION Find(
    ARG_TYPE searchValue,
    POSITION startAfter = NULL) const;
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*valore di ricerca*<br/>
Valore da trovare nell'elenco.

*inizioAfter*<br/>
Posizione iniziale per la ricerca. Se non viene specificato alcun valore, la ricerca inizia con l'elemento head.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'oggetto non viene trovato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#39](../../mfc/codesnippet/cpp/clist-class_5.cpp)]

## <a name="clistfindindex"></a><a name="findindex"></a>CList::FindIndex

Utilizza il valore di *nIndex* come indice nell'elenco.

```
POSITION FindIndex(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento list da trovare.

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se *nIndex* è negativo o troppo grande.

### <a name="remarks"></a>Osservazioni

Si avvia una scansione sequenziale dalla testa della lista, fermandosi sull'elemento *n*th.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#40](../../mfc/codesnippet/cpp/clist-class_6.cpp)]

## <a name="clistgetat"></a><a name="getat"></a>CList::GetAt

Ottiene l'elemento dell'elenco in una posizione specificata.

```
TYPE& GetAt(POSITION position);
const TYPE& GetAt(POSITION position) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di oggetto nell'elenco.

*Posizione*<br/>
Posizione nell'elenco dell'elemento da ottenere.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione `GetHead`del valore restituito per .

### <a name="remarks"></a>Osservazioni

`GetAt`restituisce l'elemento (o un riferimento all'elemento) associato a una determinata posizione. Non è uguale a un indice e non è possibile operare su un valore POSITION manualmente. Una variabile di tipo POSITION è una chiave per l'elenco.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CList::GetHeadPosition](#getheadposition).

## <a name="clistgetcount"></a><a name="getcount"></a>CList::GetCount

Ottiene il numero di elementi in questo elenco.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore integer contenente il numero di elementi.

### <a name="remarks"></a>Osservazioni

La chiamata a questo metodo genererà lo stesso risultato del [metodo CList::GetSize](#getsize) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CList::RemoveHead](#removehead).

## <a name="clistgethead"></a><a name="gethead"></a>CList::GetHead

Ottiene l'elemento head (o un riferimento all'elemento head) di questo elenco.

```
const TYPE& GetHead() const;

TYPE& GetHead();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di oggetto nell'elenco.

### <a name="return-value"></a>Valore restituito

Se l'elenco è `GetHead` **const**, restituisce una copia dell'elemento all'intestazione dell'elenco. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.

Se l'elenco non `GetHead` è **const**, restituisce un riferimento all'elemento all'capo dell'elenco. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `GetHead`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#41](../../mfc/codesnippet/cpp/clist-class_7.cpp)]

## <a name="clistgetheadposition"></a><a name="getheadposition"></a>CList::GetHeadPosition

Ottiene la posizione dell'elemento head di questo elenco.

```
POSITION GetHeadPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'elenco è vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#42](../../mfc/codesnippet/cpp/clist-class_8.cpp)]

## <a name="clistgetnext"></a><a name="getnext"></a>CList::GetNext

Ottiene l'elemento dell'elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore POSITION della voce successiva nell'elenco.

```
TYPE& GetNext(POSITION& rPosition);
const TYPE& GetNext(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

*rPosizione*<br/>
Riferimento a un valore POSITION restituito `GetNext`da una precedente , [GetHeadPosition](#getheadposition)o da un'altra chiamata di funzione membro.

### <a name="return-value"></a>Valore restituito

Se l'elenco è `GetNext` **const**, restituisce una copia di un elemento dell'elenco. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.

Se l'elenco non `GetNext` è **const**, restituisce un riferimento a un elemento dell'elenco. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È possibile `GetNext` utilizzare in un ciclo di iterazione in `GetHeadPosition` `Find`avanti se si stabilisce la posizione iniziale con una chiamata a o .

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di `rPosition` è impostato su NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#43](../../mfc/codesnippet/cpp/clist-class_9.cpp)]

## <a name="clistgetprev"></a><a name="getprev"></a>CList::GetPrev

Ottiene l'elemento `rPosition`dell'elenco `rPosition` identificato da , quindi imposta il valore POSITION della voce precedente nell'elenco.

```
TYPE& GetPrev(POSITION& rPosition);
const TYPE& GetPrev(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

*rPosizione*<br/>
Riferimento a un valore POSITION restituito `GetPrev` da una chiamata di funzione membro precedente o da un'altra chiamata.

### <a name="return-value"></a>Valore restituito

Se l'elenco è `GetPrev` **const**, restituisce una copia dell'elemento all'intestazione dell'elenco. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e protegge l'elenco dalla modifica.

Se l'elenco non `GetPrev` è **const**, restituisce un riferimento a un elemento dell'elenco. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È possibile `GetPrev` utilizzare in un ciclo di iterazione inverso se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find`.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è il primo nell'elenco, il nuovo valore di *rPosition* è impostato su NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#44](../../mfc/codesnippet/cpp/clist-class_10.cpp)]

## <a name="clistgetsize"></a><a name="getsize"></a>CList::GetSize

Restituisce il numero di elementi dell'elenco.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nell'elenco.  La chiamata a questo metodo genererà lo stesso risultato del metodo [CList::GetCount.](#getcount)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#45](../../mfc/codesnippet/cpp/clist-class_11.cpp)]

## <a name="clistgettail"></a><a name="gettail"></a>CList::GetTail

Ottiene `CObject` il puntatore che rappresenta l'elemento finale di questo elenco.

```
TYPE& GetTail();
const TYPE& GetTail() const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

### <a name="return-value"></a>Valore restituito

Vedere la descrizione del valore restituito per [GetHead](../../mfc/reference/coblist-class.md#gethead).

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `GetTail`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#46](../../mfc/codesnippet/cpp/clist-class_12.cpp)]

## <a name="clistgettailposition"></a><a name="gettailposition"></a>CList::GetTailPosition

Ottiene la posizione dell'elemento tail di questo elenco; NULL se l'elenco è vuoto.

```
POSITION GetTailPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'elenco è vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#47](../../mfc/codesnippet/cpp/clist-class_13.cpp)]

## <a name="clistinsertafter"></a><a name="insertafter"></a>CList::InsertAfter (Elenco cList::InsertAfter)

Aggiunge un elemento a questo elenco dopo l'elemento nella posizione specificata.

```
POSITION InsertAfter(POSITION position, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*Posizione*<br/>
Valore POSITION restituito da `GetNext`una `GetPrev`chiamata `Find` di funzione membro precedente , , o .

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo dell'elemento dell'elenco.

*nuovoElemento*<br/>
Elemento da aggiungere all'elenco.

### <a name="return-value"></a>Valore restituito

Valore POSITION da usare per l'iterazione o il recupero dell'elemento dell'elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#48](../../mfc/codesnippet/cpp/clist-class_14.cpp)]

## <a name="clistinsertbefore"></a><a name="insertbefore"></a>CList::InsertBefore (Controllo (CList::InsertBefore)

Aggiunge un elemento all'elenco prima dell'elemento nella posizione specificata.

```
POSITION InsertBefore(POSITION position, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*Posizione*<br/>
Valore POSITION restituito da `GetNext`una `GetPrev`chiamata `Find` di funzione membro precedente , , o .

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*nuovoElemento*<br/>
Elemento da aggiungere all'elenco.

### <a name="return-value"></a>Valore restituito

Valore POSITION da usare per l'iterazione o il recupero dell'elemento dell'elenco.

### <a name="remarks"></a>Osservazioni

Se *position* è NULL, l'elemento viene inserito all'intestazione dell'elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#49](../../mfc/codesnippet/cpp/clist-class_15.cpp)]

## <a name="clistisempty"></a><a name="isempty"></a>CList::IsEmpty

Indica se questo elenco non contiene elementi.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questo elenco è vuoto; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#50](../../mfc/codesnippet/cpp/clist-class_16.cpp)]

## <a name="clistremoveall"></a><a name="removeall"></a>CList::RemoveAll

Rimuove tutti gli elementi da questo elenco e libera la memoria associata.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Non viene generato alcun errore se l'elenco è già vuoto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#51](../../mfc/codesnippet/cpp/clist-class_17.cpp)]

## <a name="clistremoveat"></a><a name="removeat"></a>CList::RemoveAt

Rimuove l'elemento specificato da questo elenco.

```cpp
void RemoveAt(POSITION position);
```

### <a name="parameters"></a>Parametri

*Posizione*<br/>
Posizione dell'elemento da rimuovere dall'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#52](../../mfc/codesnippet/cpp/clist-class_18.cpp)]

## <a name="clistremovehead"></a><a name="removehead"></a>CList::RemoveHead

Rimuove l'elemento dall'intestazione dell'elenco e restituisce un puntatore a esso.

```
TYPE RemoveHead();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

### <a name="return-value"></a>Valore restituito

Elemento precedentemente all'intestazione dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `RemoveHead`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#53](../../mfc/codesnippet/cpp/clist-class_19.cpp)]

## <a name="clistremovetail"></a><a name="removetail"></a>CList::RemoveTail

Rimuove l'elemento dalla coda dell'elenco e restituisce un puntatore a esso.

```
TYPE RemoveTail();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi nell'elenco.

### <a name="return-value"></a>Valore restituito

Elemento che si trovava alla fine dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `RemoveTail`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](#isempty) per verificare che l'elenco contenga elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#54](../../mfc/codesnippet/cpp/clist-class_20.cpp)]

## <a name="clistsetat"></a><a name="setat"></a>CList::SetAt

Una variabile di tipo POSITION è una chiave per l'elenco.

```cpp
void SetAt(POSITION pos, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
POSIZIONE dell'elemento da impostare.

*ARG_TYPE*<br/>
Parametro del modello che specifica il tipo di elemento dell'elenco (può essere un riferimento).

*nuovoElemento*<br/>
Elemento da aggiungere all'elenco.

### <a name="remarks"></a>Osservazioni

Non è uguale a un indice e non è possibile operare su un valore POSITION manualmente. `SetAt`scrive l'elemento nella posizione specificata nell'elenco.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#55](../../mfc/codesnippet/cpp/clist-class_21.cpp)]

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMap](../../mfc/reference/cmap-class.md)<br/>
[Classe CArray](../../mfc/reference/carray-class.md)
