---
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
ms.openlocfilehash: 9f4899d4470903a4145cc171579e4b251b984f95
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747194"
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
Classe base della classe elenco di puntatori tipizzata; deve essere una classe `CObList` `CPtrList`elenco di puntatori ( o ).

*TIPO*<br/>
Tipo degli elementi archiviati nell'elenco della classe base.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTypedPtrList::AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) all'intestazione dell'elenco (fa una nuova testa).|
|[CTypedPtrList::AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla coda dell'elenco (crea una nuova coda).|
|[CTypedPtrList::GetAt](#getat)|Ottiene l'elemento in una posizione specificata.|
|[CTypedPtrList::GetHead](#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|
|[CTypedPtrList::GetNext](#getnext)|Ottiene l'elemento successivo per l'iterazione.|
|[CTypedPtrList::GetPrev](#getprev)|Ottiene l'elemento precedente per l'iterazione.|
|[CTypedPtrList::GetTail](#gettail)|Restituisce l'elemento tail dell'elenco (non può essere vuoto).|
|[CTypedPtrList::RemoveHead](#removehead)|Rimuove l'elemento dall'intestazione dell'elenco.|
|[CTypedPtrList::RemoveTail](#removetail)|Rimuove l'elemento dalla coda dell'elenco.|
|[CTypedPtrList::SetAt](#setat)|Imposta l'elemento in una posizione specificata.|

## <a name="remarks"></a>Osservazioni

Quando si `CTypedPtrList` utilizza `CObList` `CPtrList`invece o , la funzionalità di controllo dei tipi di C, consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.

Inoltre, il `CTypedPtrList` wrapper esegue gran parte del cast `CObList` che `CPtrList`sarebbe necessario se si utilizzasse o .

Poiché `CTypedPtrList` tutte le funzioni sono inline, l'utilizzo di questo modello non influisce in modo significativo sulle dimensioni o sulla velocità del codice.

Gli elenchi `CObList` derivati da possono essere `CPtrList` serializzati, ma quelli derivati da non possono.

Quando un oggetto `CTypedPtrList` viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati solo i puntatori e non le entità che referenziano.

Per ulteriori informazioni `CTypedPtrList`sull'utilizzo di , vedere gli articoli [Raccolte](../../mfc/collections.md) e [classi basate su modelli](../../mfc/template-based-classes.md).

## <a name="example"></a>Esempio

In questo esempio `CTypedPtrList`viene creata un'istanza di , viene aggiunto un oggetto, l'elenco viene serializzato su disco e quindi viene eliminato l'oggetto:

[!code-cpp[NVC_MFCCollections#110](../../mfc/codesnippet/cpp/ctypedptrlist-class_1.cpp)]

[!code-cpp[NVC_MFCCollections#111](../../mfc/codesnippet/cpp/ctypedptrlist-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BASE_CLASS`

`_CTypedPtrList`

`CTypedPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="ctypedptrlistaddhead"></a><a name="addhead"></a>CTypedPtrList::AddHead

Questa funzione `BASE_CLASS`membro chiama **::AddHead**.

```
POSITION AddHead(TYPE newElement);
void AddHead(CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Tipo degli elementi archiviati nell'elenco della classe base.

*nuovoElemento*<br/>
Puntatore all'oggetto da aggiungere a questo elenco. È consentito un valore NULL.

*BASE_CLASS*<br/>
Classe base della classe elenco di puntatori tipizzata; deve essere una classe di elenco di puntatori ( [CObList](../../mfc/reference/coblist-class.md) o [CPtrList](../../mfc/reference/cptrlist-class.md)).

*pNewList (in questo elenco)*<br/>
Puntatore a un altro [oggetto CTypedPtrList.](../../mfc/reference/ctypedptrlist-class.md) Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore POSITION dell'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

La prima versione aggiunge un nuovo elemento prima dell'intestazione dell'elenco. La seconda versione aggiunge un altro elenco di elementi prima della testa.

## <a name="ctypedptrlistaddtail"></a><a name="addtail"></a>CTypedPtrList::AddTail

Questa funzione `BASE_CLASS`membro chiama **::AddTail**.

```
POSITION AddTail(TYPE newElement);
void AddTail(CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Tipo degli elementi archiviati nell'elenco della classe base.

*nuovoElemento*<br/>
Puntatore all'oggetto da aggiungere a questo elenco. È consentito un valore NULL.

*BASE_CLASS*<br/>
Classe base della classe elenco di puntatori tipizzata; deve essere una classe di elenco di puntatori ( [CObList](../../mfc/reference/coblist-class.md) o [CPtrList](../../mfc/reference/cptrlist-class.md)).

*pNewList (in questo elenco)*<br/>
Puntatore a un altro [oggetto CTypedPtrList.](../../mfc/reference/ctypedptrlist-class.md) Gli elementi in *pNewList* verranno aggiunti a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore POSITION dell'elemento appena inserito.

### <a name="remarks"></a>Osservazioni

La prima versione aggiunge un nuovo elemento dopo la coda dell'elenco. La seconda versione aggiunge un altro elenco di elementi dopo la coda dell'elenco.

## <a name="ctypedptrlistgetat"></a><a name="getat"></a>CTypedPtrList::GetAt

Una variabile di tipo POSITION è una chiave per l'elenco.

```
TYPE& GetAt(POSITION position);
TYPE GetAt(POSITION position) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

*Posizione*<br/>
Valore POSITION restituito da `GetHeadPosition` una `Find` chiamata di funzione membro o precedente.

### <a name="return-value"></a>Valore restituito

Se si accede all'elenco `const CTypedPtrList`tramite `GetAt` un puntatore a un oggetto , verrà restituito un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalla modifica.

Se si accede all'elenco direttamente `CTypedPtrList`o `GetAt` tramite un puntatore a un oggetto , verrà restituito un riferimento a un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

Non è uguale a un indice e non è possibile operare su un valore POSITION manualmente. `GetAt`recupera il `CObject` puntatore associato a una posizione specificata.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Questa funzione inline chiama `BASE_CLASS` **::GetAt**.

## <a name="ctypedptrlistgethead"></a><a name="gethead"></a>CTypedPtrList::GetHead

Ottiene il puntatore che rappresenta l'elemento head di questo elenco.

```
TYPE& GetHead();
TYPE GetHead() const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Se si accede all'elenco `const CTypedPtrList`tramite `GetHead` un puntatore a un oggetto , verrà restituito un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalla modifica.

Se si accede all'elenco direttamente `CTypedPtrList`o `GetHead` tramite un puntatore a un oggetto , verrà restituito un riferimento a un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `GetHead`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistgetnext"></a><a name="getnext"></a>CTypedPtrList::GetNext

Ottiene l'elemento dell'elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore POSITION della voce successiva nell'elenco.

```
TYPE& GetNext(POSITION& rPosition);
TYPE GetNext(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi contenuti in questo elenco.

*rPosizione*<br/>
Riferimento a un valore POSITION restituito `GetNext` `GetHeadPosition`da una chiamata a funzione membro precedente , , o da un'altra chiamata a funzione membro.

### <a name="return-value"></a>Valore restituito

Se si accede all'elenco `const CTypedPtrList`tramite `GetNext` un puntatore a un oggetto , verrà restituito un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalla modifica.

Se si accede all'elenco direttamente `CTypedPtrList`o `GetNext` tramite un puntatore a un oggetto , verrà restituito un riferimento a un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È possibile `GetNext` utilizzare in un ciclo di iterazione in `GetHeadPosition` avanti se si stabilisce la posizione iniziale con una chiamata a o [CPtrList::Find](../../mfc/reference/coblist-class.md#find).

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è l'ultimo nell'elenco, il nuovo valore di *rPosition* è impostato su NULL.

È possibile rimuovere un elemento durante un'iterazione. Vedere l'esempio per [CObList::RemoveAt](../../mfc/reference/coblist-class.md#removeat).

## <a name="ctypedptrlistgetprev"></a><a name="getprev"></a>CTypedPtrList::GetPrev

Ottiene l'elemento dell'elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore POSITION della voce precedente nell'elenco.

```
TYPE& GetPrev(POSITION& rPosition);
TYPE GetPrev(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi contenuti in questo elenco.

*rPosizione*<br/>
Riferimento a un valore POSITION restituito `GetPrev` da una chiamata di funzione membro precedente o da un'altra chiamata.

### <a name="return-value"></a>Valore restituito

Se si accede all'elenco `const CTypedPtrList`tramite `GetPrev` un puntatore a un oggetto , verrà restituito un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalla modifica.

Se si accede all'elenco direttamente `CTypedPtrList`o `GetPrev` tramite un puntatore a un oggetto , verrà restituito un riferimento a un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È possibile `GetPrev` utilizzare in un ciclo di iterazione inverso se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find`.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Se l'elemento recuperato è il primo nell'elenco, il nuovo valore di *rPosition* è impostato su NULL.

## <a name="ctypedptrlistgettail"></a><a name="gettail"></a>CTypedPtrList::GetTail

Ottiene il puntatore che rappresenta l'elemento head di questo elenco.

```
TYPE& GetTail();
TYPE GetTail() const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Se si accede all'elenco `const CTypedPtrList`tramite `GetTail` un puntatore a un oggetto , verrà restituito un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalla modifica.

Se si accede all'elenco direttamente `CTypedPtrList`o `GetTail` tramite un puntatore a un oggetto , verrà restituito un riferimento a un puntatore del tipo specificato dal parametro di modello *TYPE*. In questo modo la funzione può essere utilizzata su entrambi i lati di un'istruzione di assegnazione e pertanto consente di modificare le voci dell'elenco.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `GetTail`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistremovehead"></a><a name="removehead"></a>CTypedPtrList::RemoveHead

Rimuove l'elemento dall'intestazione dell'elenco e lo restituisce.

```
TYPE RemoveHead();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Il puntatore in precedenza all'intestazione dell'elenco. Questo puntatore è del tipo specificato dal parametro di modello *TYPE*.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `RemoveHead`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistremovetail"></a><a name="removetail"></a>CTypedPtrList::RemoveTail

Rimuove l'elemento dalla coda dell'elenco e lo restituisce.

```
TYPE RemoveTail();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Il puntatore in precedenza alla fine dell'elenco. Questo puntatore è del tipo specificato dal parametro di modello *TYPE*.

### <a name="remarks"></a>Osservazioni

È necessario assicurarsi che l'elenco non sia vuoto prima di chiamare `RemoveTail`. Se l'elenco è vuoto, la versione di debug della libreria Microsoft Foundation Class asserisce. Utilizzare [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contenga elementi.

## <a name="ctypedptrlistsetat"></a><a name="setat"></a>CTypedPtrList::SetAt

Questa funzione `BASE_CLASS`membro chiama **::SetAt**.

```cpp
void SetAt(POSITION pos, TYPE newElement);
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
POSIZIONE dell'elemento da impostare.

*TIPO*<br/>
Tipo degli elementi archiviati nell'elenco della classe base.

*nuovoElemento*<br/>
Puntatore all'oggetto da scrivere nell'elenco.

### <a name="remarks"></a>Osservazioni

Una variabile di tipo POSITION è una chiave per l'elenco. Non è uguale a un indice e non è possibile operare su un valore POSITION manualmente. `SetAt`scrive il puntatore all'oggetto nella posizione specificata nell'elenco.

È necessario assicurarsi che il valore POSITION rappresenti una posizione valida nell'elenco. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Per osservazioni più dettagliate, vedere [CObList::SetAt](../../mfc/reference/coblist-class.md#setat).

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CPtrList](../../mfc/reference/cptrlist-class.md)<br/>
[Classe CObList](../../mfc/reference/coblist-class.md)
