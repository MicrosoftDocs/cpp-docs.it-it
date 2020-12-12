---
description: 'Altre informazioni su: classe CTypedPtrList'
title: Classe CTypedPtrList
ms.date: 11/04/2016
f1_keywords:
- CTypedPtrList
- AFXTEMPL/CTypedPtrList
- AFXTEMPL/CTypedPtrList::AddHead
- AFXTEMPL/CTypedPtrList::AddTail
- AFXTEMPL/CTypedPtrList::GetAt
- AFXTEMPL/CTypedPtrList::GetHead
- AFXTEMPL/CTypedPtrList::GetNext
- AFXTEMPL/CTypedPtrList::GetPrev
- AFXTEMPL/CTypedPtrList::GetTail
- AFXTEMPL/CTypedPtrList::RemoveHead
- AFXTEMPL/CTypedPtrList::RemoveTail
- AFXTEMPL/CTypedPtrList::SetAt
helpviewer_keywords:
- CTypedPtrList [MFC], AddHead
- CTypedPtrList [MFC], AddTail
- CTypedPtrList [MFC], GetAt
- CTypedPtrList [MFC], GetHead
- CTypedPtrList [MFC], GetNext
- CTypedPtrList [MFC], GetPrev
- CTypedPtrList [MFC], GetTail
- CTypedPtrList [MFC], RemoveHead
- CTypedPtrList [MFC], RemoveTail
- CTypedPtrList [MFC], SetAt
ms.assetid: c273096e-1756-4340-864b-4a08b674a65e
ms.openlocfilehash: 353e9af00b1366b260ce3cb3689018a8e4e370c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318533"
---
# <a name="ctypedptrlist-class"></a>Classe CTypedPtrList

Fornisce un "wrapper" indipendente dai tipi per gli oggetti della classe `CPtrList`.

## <a name="syntax"></a>Sintassi

```
template<class BASE_CLASS, class TYPE>
class CTypedPtrList : public BASE_CLASS
```

#### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Classe di base della classe elenco di puntatori tipizzati; deve essere una classe di elenco di puntatori ( `CObList` o `CPtrList` ).

*TYPE*<br/>
Tipo degli elementi archiviati nell'elenco delle classi base.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTypedPtrList:: AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) all'inizio dell'elenco (crea una nuova intestazione).|
|[CTypedPtrList:: AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi di un altro elenco) alla parte finale dell'elenco (crea una nuova coda).|
|[CTypedPtrList:: GetA](#getat)|Ottiene l'elemento in una posizione specificata.|
|[CTypedPtrList:: GetHead](#gethead)|Restituisce l'elemento Head dell'elenco (non può essere vuoto).|
|[CTypedPtrList:: GetNext](#getnext)|Ottiene l'elemento successivo per l'iterazione.|
|[CTypedPtrList:: GetPrev](#getprev)|Ottiene l'elemento precedente per l'iterazione.|
|[CTypedPtrList:: GetTail](#gettail)|Restituisce l'elemento tail dell'elenco (non può essere vuoto).|
|[CTypedPtrList:: RemoveHead](#removehead)|Rimuove l'elemento dall'inizio dell'elenco.|
|[CTypedPtrList:: RemoveTail](#removetail)|Rimuove l'elemento dalla parte finale dell'elenco.|
|[CTypedPtrList:: SetAt](#setat)|Imposta l'elemento in una posizione specificata.|

## <a name="remarks"></a>Commenti

Quando si usa `CTypedPtrList` invece di `CObList` o `CPtrList` , la funzionalità di controllo dei tipi C++ consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.

Inoltre, il `CTypedPtrList` wrapper esegue gran parte del cast che sarebbe necessario se fosse stato usato `CObList` o `CPtrList` .

Poiché tutte le `CTypedPtrList` funzioni sono inline, l'uso di questo modello non influisce in modo significativo sulle dimensioni o sulla velocità del codice.

Gli elenchi derivati da `CObList` possono essere serializzati, ma quelli derivati da `CPtrList` non possono.

Quando un oggetto `CTypedPtrList` viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati solo i puntatori e non le entità che referenziano.

Per ulteriori informazioni sull'utilizzo di `CTypedPtrList` , vedere gli articoli [raccolte](../../mfc/collections.md) e [classi basate su modello](../../mfc/template-based-classes.md).

## <a name="example"></a>Esempio

In questo esempio viene creata un'istanza di `CTypedPtrList` , viene aggiunto un oggetto, viene serializzato l'elenco su disco e quindi viene eliminato l'oggetto:

[!code-cpp[NVC_MFCCollections#110](../../mfc/codesnippet/cpp/ctypedptrlist-class_1.cpp)]

[!code-cpp[NVC_MFCCollections#111](../../mfc/codesnippet/cpp/ctypedptrlist-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BASE_CLASS`

`_CTypedPtrList`

`CTypedPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="ctypedptrlistaddhead"></a><a name="addhead"></a> CTypedPtrList:: AddHead

Questa funzione membro chiama `BASE_CLASS` **:: AddHead**.

```
POSITION AddHead(TYPE newElement);
void AddHead(CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Tipo degli elementi archiviati nell'elenco delle classi base.

*newElement*<br/>
Puntatore all'oggetto da aggiungere all'elenco. È consentito un valore NULL.

*BASE_CLASS*<br/>
Classe di base della classe elenco di puntatori tipizzati; deve essere una classe elenco di puntatori ( [CObList](../../mfc/reference/coblist-class.md) o [CPtrList](../../mfc/reference/cptrlist-class.md)).

*pNewList*<br/>
Puntatore a un altro oggetto [CTypedPtrList](../../mfc/reference/ctypedptrlist-class.md) . Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

### <a name="remarks"></a>Commenti

La prima versione aggiunge un nuovo elemento prima dell'inizio dell'elenco. La seconda versione aggiunge un altro elenco di elementi prima dell'intestazione.

## <a name="ctypedptrlistaddtail"></a><a name="addtail"></a> CTypedPtrList:: AddTail

Questa funzione membro chiama `BASE_CLASS` **:: AddTail**.

```
POSITION AddTail(TYPE newElement);
void AddTail(CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Tipo degli elementi archiviati nell'elenco delle classi base.

*newElement*<br/>
Puntatore all'oggetto da aggiungere all'elenco. È consentito un valore NULL.

*BASE_CLASS*<br/>
Classe di base della classe elenco di puntatori tipizzati; deve essere una classe elenco di puntatori ( [CObList](../../mfc/reference/coblist-class.md) o [CPtrList](../../mfc/reference/cptrlist-class.md)).

*pNewList*<br/>
Puntatore a un altro oggetto [CTypedPtrList](../../mfc/reference/ctypedptrlist-class.md) . Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

### <a name="remarks"></a>Commenti

La prima versione aggiunge un nuovo elemento dopo la parte finale dell'elenco. La seconda versione aggiunge un altro elenco di elementi dopo la parte finale dell'elenco.

## <a name="ctypedptrlistgetat"></a><a name="getat"></a> CTypedPtrList:: GetA

Una variabile di tipo POSITION è una chiave per l'elenco.

```
TYPE& GetAt(POSITION position);
TYPE GetAt(POSITION position) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

*position*<br/>
Valore di posizione restituito da una `GetHeadPosition` chiamata di `Find` funzione membro o precedente.

### <a name="return-value"></a>Valore restituito

Se è possibile accedere all'elenco tramite un puntatore a un oggetto `const CTypedPtrList` , `GetAt` restituisce un puntatore del tipo specificato dal *tipo* di parametro di modello. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e pertanto protegge l'elenco dalla modifica.

Se è possibile accedere all'elenco direttamente o tramite un puntatore a un oggetto `CTypedPtrList` , `GetAt` restituisce un riferimento a un puntatore del tipo specificato dal *tipo* di parametro del modello. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

Non è uguale a un indice e non è possibile operare su un valore di posizione autonomamente. `GetAt` Recupera il `CObject` puntatore associato a una posizione specificata.

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Questa funzione inline chiama `BASE_CLASS` **:: Geta**.

## <a name="ctypedptrlistgethead"></a><a name="gethead"></a> CTypedPtrList:: GetHead

Ottiene il puntatore che rappresenta l'elemento Head dell'elenco.

```
TYPE& GetHead();
TYPE GetHead() const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Se è possibile accedere all'elenco tramite un puntatore a un oggetto `const CTypedPtrList` , `GetHead` restituisce un puntatore del tipo specificato dal *tipo* di parametro di modello. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e pertanto protegge l'elenco dalla modifica.

Se è possibile accedere all'elenco direttamente o tramite un puntatore a un oggetto `CTypedPtrList` , `GetHead` restituisce un riferimento a un puntatore del tipo specificato dal *tipo* di parametro del modello. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `GetHead` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistgetnext"></a><a name="getnext"></a> CTypedPtrList:: GetNext

Ottiene l'elemento di elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore di posizione della voce successiva nell'elenco.

```
TYPE& GetNext(POSITION& rPosition);
TYPE GetNext(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi contenuti nell'elenco.

*rPosition*<br/>
Riferimento a un valore di posizione restituito da un' `GetNext` `GetHeadPosition` altra chiamata di funzione membro, o.

### <a name="return-value"></a>Valore restituito

Se è possibile accedere all'elenco tramite un puntatore a un oggetto `const CTypedPtrList` , `GetNext` restituisce un puntatore del tipo specificato dal *tipo* di parametro di modello. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e pertanto protegge l'elenco dalla modifica.

Se è possibile accedere all'elenco direttamente o tramite un puntatore a un oggetto `CTypedPtrList` , `GetNext` restituisce un riferimento a un puntatore del tipo specificato dal *tipo* di parametro del modello. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

È possibile usare `GetNext` in un ciclo di iterazione in diretta se si stabilisce la posizione iniziale con una chiamata a `GetHeadPosition` o [CPtrList:: find](../../mfc/reference/coblist-class.md#find).

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di *rPosition* viene impostato su null.

È possibile rimuovere un elemento durante un'iterazione. Vedere l'esempio per [CObList:: RemoveAt](../../mfc/reference/coblist-class.md#removeat).

## <a name="ctypedptrlistgetprev"></a><a name="getprev"></a> CTypedPtrList:: GetPrev

Ottiene l'elemento dell'elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore di posizione della voce precedente nell'elenco.

```
TYPE& GetPrev(POSITION& rPosition);
TYPE GetPrev(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi contenuti nell'elenco.

*rPosition*<br/>
Riferimento a un valore di posizione restituito da una `GetPrev` chiamata di funzione membro precedente o successiva.

### <a name="return-value"></a>Valore restituito

Se è possibile accedere all'elenco tramite un puntatore a un oggetto `const CTypedPtrList` , `GetPrev` restituisce un puntatore del tipo specificato dal *tipo* di parametro di modello. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e pertanto protegge l'elenco dalla modifica.

Se è possibile accedere all'elenco direttamente o tramite un puntatore a un oggetto `CTypedPtrList` , `GetPrev` restituisce un riferimento a un puntatore del tipo specificato dal *tipo* di parametro del modello. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

È possibile usare `GetPrev` in un ciclo di iterazione inversa se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find` .

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è il primo nell'elenco, il nuovo valore di *rPosition* viene impostato su null.

## <a name="ctypedptrlistgettail"></a><a name="gettail"></a> CTypedPtrList:: GetTail

Ottiene il puntatore che rappresenta l'elemento Head dell'elenco.

```
TYPE& GetTail();
TYPE GetTail() const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Se è possibile accedere all'elenco tramite un puntatore a un oggetto `const CTypedPtrList` , `GetTail` restituisce un puntatore del tipo specificato dal *tipo* di parametro di modello. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e pertanto protegge l'elenco dalla modifica.

Se è possibile accedere all'elenco direttamente o tramite un puntatore a un oggetto `CTypedPtrList` , `GetTail` restituisce un riferimento a un puntatore del tipo specificato dal *tipo* di parametro del modello. Ciò consente di usare la funzione su entrambi i lati di un'istruzione di assegnazione e quindi di modificare le voci dell'elenco.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `GetTail` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistremovehead"></a><a name="removehead"></a> CTypedPtrList:: RemoveHead

Rimuove l'elemento dall'inizio dell'elenco e lo restituisce.

```
TYPE RemoveHead();
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Puntatore precedente all'inizio dell'elenco. Questo puntatore è del tipo specificato dal *tipo* di parametro del modello.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `RemoveHead` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistremovetail"></a><a name="removetail"></a> CTypedPtrList:: RemoveTail

Rimuove l'elemento dalla parte finale dell'elenco e lo restituisce.

```
TYPE RemoveTail();
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Puntatore precedente alla parte finale dell'elenco. Questo puntatore è del tipo specificato dal *tipo* di parametro del modello.

### <a name="remarks"></a>Commenti

Prima di chiamare, è necessario assicurarsi che l'elenco non sia vuoto `RemoveTail` . Se l'elenco è vuoto, la versione di debug del libreria Microsoft Foundation Class dichiara. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistsetat"></a><a name="setat"></a> CTypedPtrList:: SetAt

Questa funzione membro chiama `BASE_CLASS` **:: SetAt**.

```cpp
void SetAt(POSITION pos, TYPE newElement);
```

### <a name="parameters"></a>Parametri

*pos*<br/>
POSIZIONE dell'elemento da impostare.

*TYPE*<br/>
Tipo degli elementi archiviati nell'elenco delle classi base.

*newElement*<br/>
Puntatore all'oggetto da scrivere nell'elenco.

### <a name="remarks"></a>Commenti

Una variabile di tipo POSITION è una chiave per l'elenco. Non è uguale a un indice e non è possibile operare su un valore di posizione autonomamente. `SetAt` scrive il puntatore all'oggetto nella posizione specificata nell'elenco.

È necessario assicurarsi che il valore di posizione rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Per osservazioni più dettagliate, vedere [CObList:: SetAt](../../mfc/reference/coblist-class.md#setat).

## <a name="see-also"></a>Vedi anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CPtrList](../../mfc/reference/cptrlist-class.md)<br/>
[Classe CObList](../../mfc/reference/coblist-class.md)
