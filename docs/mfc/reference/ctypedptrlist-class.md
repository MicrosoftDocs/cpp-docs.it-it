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
ms.openlocfilehash: 9233e83a08fde87c15be5cc1c42a2f1dd3b56511
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324506"
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
Classe di base della classe di elenco puntatore tipizzato. deve essere una classe di elenco puntatore ( `CObList` o `CPtrList`).

*TIPO*<br/>
Tipo degli elementi da archiviare nell'elenco della classe di base.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTypedPtrList::AddHead](#addhead)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) nell'intestazione dell'elenco (creando un nuovo inizio).|
|[CTypedPtrList::AddTail](#addtail)|Aggiunge un elemento (o tutti gli elementi in un altro elenco) alla fine dell'elenco (creando una nuova fine).|
|[CTypedPtrList::GetAt](#getat)|Ottiene l'elemento in una determinata posizione.|
|[CTypedPtrList::GetHead](#gethead)|Restituisce l'elemento head dell'elenco (non può essere vuoto).|
|[CTypedPtrList::GetNext](#getnext)|Ottiene l'elemento successivo per eseguire l'iterazione.|
|[CTypedPtrList::GetPrev](#getprev)|Ottiene l'elemento precedente per eseguire l'iterazione.|
|[CTypedPtrList::GetTail](#gettail)|Restituisce l'elemento della parte finale dell'elenco (non può essere vuoto).|
|[CTypedPtrList::RemoveHead](#removehead)|Rimuove l'elemento dall'inizio dell'elenco.|
|[CTypedPtrList::RemoveTail](#removetail)|Rimuove l'elemento dalla parte finale dell'elenco.|
|[CTypedPtrList::SetAt](#setat)|Imposta l'elemento in una determinata posizione.|

## <a name="remarks"></a>Note

Quando si usa `CTypedPtrList` invece `CObList` o `CPtrList`, la funzionalità di controllo del tipo C++ consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.

Inoltre, il `CTypedPtrList` wrapper esegue gran parte del cast che sarebbero necessari se è stato usato `CObList` o `CPtrList`.

Poiché tutti `CTypedPtrList` funzioni inline, utilizzo del modello non influire in modo significativo la dimensione o velocità del codice.

Elenco derivato da `CObList` possono essere serializzate, ma quelli derivati da `CPtrList` Impossibile.

Quando un oggetto `CTypedPtrList` viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati solo i puntatori e non le entità che referenziano.

Per altre informazioni sull'uso `CTypedPtrList`, vedere gli articoli [raccolte](../../mfc/collections.md) e [classi basate su modello](../../mfc/template-based-classes.md).

## <a name="example"></a>Esempio

In questo esempio crea un'istanza di `CTypedPtrList`, aggiunge un oggetto, serializza l'elenco su disco e quindi Elimina l'oggetto:

[!code-cpp[NVC_MFCCollections#110](../../mfc/codesnippet/cpp/ctypedptrlist-class_1.cpp)]

[!code-cpp[NVC_MFCCollections#111](../../mfc/codesnippet/cpp/ctypedptrlist-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BASE_CLASS`

`_CTypedPtrList`

`CTypedPtrList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

##  <a name="addhead"></a>  CTypedPtrList::AddHead

Questa funzione membro chiama `BASE_CLASS` **:: AddHead**.

```
POSITION AddHead(TYPE newElement);
void AddHead(CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Tipo degli elementi da archiviare nell'elenco della classe di base.

*newElement*<br/>
Il puntatore all'oggetto da aggiungere a questo elenco. Un valore NULL è consentito.

*BASE_CLASS*<br/>
Classe di base della classe di elenco puntatore tipizzato. deve essere una classe di elenco puntatore ( [CObList](../../mfc/reference/coblist-class.md) oppure [CPtrList](../../mfc/reference/cptrlist-class.md)).

*pNewList*<br/>
Un puntatore a un'altra [CTypedPtrList](../../mfc/reference/ctypedptrlist-class.md) oggetto. Gli elementi in *pNewList* verrà aggiunto a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

### <a name="remarks"></a>Note

La prima versione aggiunge un nuovo elemento prima dell'inizio dell'elenco. La seconda versione aggiunge un altro elenco di elementi che precedono la testa.

##  <a name="addtail"></a>  CTypedPtrList::AddTail

Questa funzione membro chiama `BASE_CLASS` **:: AddTail**.

```
POSITION AddTail(TYPE newElement);
void AddTail(CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Tipo degli elementi da archiviare nell'elenco della classe di base.

*newElement*<br/>
Il puntatore all'oggetto da aggiungere a questo elenco. Un valore NULL è consentito.

*BASE_CLASS*<br/>
Classe di base della classe di elenco puntatore tipizzato. deve essere una classe di elenco puntatore ( [CObList](../../mfc/reference/coblist-class.md) oppure [CPtrList](../../mfc/reference/cptrlist-class.md)).

*pNewList*<br/>
Un puntatore a un'altra [CTypedPtrList](../../mfc/reference/ctypedptrlist-class.md) oggetto. Gli elementi in *pNewList* verrà aggiunto a questo elenco.

### <a name="return-value"></a>Valore restituito

La prima versione restituisce il valore di posizione dell'elemento appena inserito.

### <a name="remarks"></a>Note

La prima versione aggiunge un nuovo elemento dopo la parte finale dell'elenco. La seconda versione aggiunge un altro elenco di elementi dopo la parte finale dell'elenco.

##  <a name="getat"></a>  CTypedPtrList::GetAt

Una variabile di tipo di posizione è una chiave per l'elenco.

```
TYPE& GetAt(POSITION position);
TYPE GetAt(POSITION position) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

*position*<br/>
Un valore di posizione restituito da una precedente `GetHeadPosition` o `Find` chiamata di funzione membro.

### <a name="return-value"></a>Valore restituito

Se l'elenco è accessibile tramite un puntatore a un `const CTypedPtrList`, quindi `GetAt` restituisce un puntatore di tipo specificato dal parametro di modello *tipo*. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalle modifiche.

Se l'elenco è possibile accedere direttamente o tramite un puntatore a un `CTypedPtrList`, quindi `GetAt` restituisce un riferimento a un puntatore di tipo specificato dal parametro di modello *tipo*. Questo modo la funzione deve essere utilizzata in entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.

### <a name="remarks"></a>Note

Non è quello utilizzato per un indice e non è possibile operare su un valore di posizione manualmente. `GetAt` Recupera il `CObject` puntatore associato a una determinata posizione.

È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.

Questa funzione inline chiama `BASE_CLASS` **:: GetAt**.

##  <a name="gethead"></a>  CTypedPtrList::GetHead

Ottiene il puntatore che rappresenta l'elemento head dell'elenco.

```
TYPE& GetHead();
TYPE GetHead() const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Se l'elenco è accessibile tramite un puntatore a un `const CTypedPtrList`, quindi `GetHead` restituisce un puntatore di tipo specificato dal parametro di modello *tipo*. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalle modifiche.

Se l'elenco è possibile accedere direttamente o tramite un puntatore a un `CTypedPtrList`, quindi `GetHead` restituisce un riferimento a un puntatore di tipo specificato dal parametro di modello *tipo*. Questo modo la funzione deve essere utilizzata in entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.

### <a name="remarks"></a>Note

È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `GetHead`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contiene gli elementi.

##  <a name="getnext"></a>  CTypedPtrList::GetNext

Ottiene l'elemento di elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore di posizione della voce successiva nell'elenco.

```
TYPE& GetNext(POSITION& rPosition);
TYPE GetNext(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi contenuti in questo elenco.

*rPosition*<br/>
Un riferimento a un valore di posizione restituito da una precedente `GetNext`, `GetHeadPosition`, o un'altra chiamata di funzione membro.

### <a name="return-value"></a>Valore restituito

Se l'elenco è accessibile tramite un puntatore a un `const CTypedPtrList`, quindi `GetNext` restituisce un puntatore di tipo specificato dal parametro di modello *tipo*. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalle modifiche.

Se l'elenco è possibile accedere direttamente o tramite un puntatore a un `CTypedPtrList`, quindi `GetNext` restituisce un riferimento a un puntatore di tipo specificato dal parametro di modello *tipo*. Questo modo la funzione deve essere utilizzata in entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.

### <a name="remarks"></a>Note

È possibile usare `GetNext` in un ciclo di iterazione in avanti se si stabilisce la posizione iniziale con una chiamata a `GetHeadPosition` oppure [CPtrList::Find](../../mfc/reference/coblist-class.md#find).

È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.

Se l'elemento recuperato è l'ultimo nell'elenco, quindi il nuovo valore della *rPosition* è impostato su NULL.

È possibile rimuovere un elemento durante un'iterazione. Vedere l'esempio relativo [CObList::RemoveAt](../../mfc/reference/coblist-class.md#removeat).

##  <a name="getprev"></a>  CTypedPtrList::GetPrev

Ottiene l'elemento di elenco identificato da *rPosition*, quindi imposta *rPosition* sul valore di posizione della voce nell'elenco precedente.

```
TYPE& GetPrev(POSITION& rPosition);
TYPE GetPrev(POSITION& rPosition) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi contenuti in questo elenco.

*rPosition*<br/>
Un riferimento a un valore di posizione restituito da una precedente `GetPrev` o un'altra chiamata di funzione membro.

### <a name="return-value"></a>Valore restituito

Se l'elenco è accessibile tramite un puntatore a un `const CTypedPtrList`, quindi `GetPrev` restituisce un puntatore di tipo specificato dal parametro di modello *tipo*. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalle modifiche.

Se l'elenco è possibile accedere direttamente o tramite un puntatore a un `CTypedPtrList`, quindi `GetPrev` restituisce un riferimento a un puntatore di tipo specificato dal parametro di modello *tipo*. Questo modo la funzione deve essere utilizzata in entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.

### <a name="remarks"></a>Note

È possibile usare `GetPrev` in un ciclo di iterazione inversa se si stabilisce la posizione iniziale con una chiamata a `GetTailPosition` o `Find`.

È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.

Se l'elemento recuperato è il primo nell'elenco, quindi il nuovo valore della *rPosition* è impostato su NULL.

##  <a name="gettail"></a>  CTypedPtrList::GetTail

Ottiene il puntatore che rappresenta l'elemento head dell'elenco.

```
TYPE& GetTail();
TYPE GetTail() const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Se l'elenco è accessibile tramite un puntatore a un `const CTypedPtrList`, quindi `GetTail` restituisce un puntatore di tipo specificato dal parametro di modello *tipo*. In questo modo la funzione può essere utilizzato solo sul lato destro di un'istruzione di assegnazione e quindi protegge l'elenco dalle modifiche.

Se l'elenco è possibile accedere direttamente o tramite un puntatore a un `CTypedPtrList`, quindi `GetTail` restituisce un riferimento a un puntatore di tipo specificato dal parametro di modello *tipo*. Questo modo la funzione deve essere utilizzata in entrambi i lati di un'istruzione di assegnazione e pertanto le voci dell'elenco da modificare.

### <a name="remarks"></a>Note

È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `GetTail`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contiene gli elementi.

##  <a name="removehead"></a>  CTypedPtrList::RemoveHead

Rimuove l'elemento dall'inizio dell'elenco e lo restituisce.

```
TYPE RemoveHead();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Il puntatore in precedenza in corrispondenza dell'inizio dell'elenco. Puntatore ' this ' è del tipo specificato dal parametro di modello *tipo*.

### <a name="remarks"></a>Note

È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `RemoveHead`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contiene gli elementi.

##  <a name="removetail"></a>  CTypedPtrList::RemoveTail

Rimuove l'elemento dalla parte finale dell'elenco e lo restituisce.

```
TYPE RemoveTail();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nell'elenco.

### <a name="return-value"></a>Valore restituito

Il puntatore in precedenza nella fase finale dell'elenco. Puntatore ' this ' è del tipo specificato dal parametro di modello *tipo*.

### <a name="remarks"></a>Note

È necessario assicurarsi che l'elenco non sia vuota prima di chiamare `RemoveTail`. Se l'elenco è vuoto, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation. Uso [IsEmpty](../../mfc/reference/coblist-class.md#isempty) per verificare che l'elenco contiene gli elementi.

##  <a name="setat"></a>  CTypedPtrList::SetAt

Questa funzione membro chiama `BASE_CLASS` **:: SetAt**.

```
void SetAt(POSITION pos, TYPE newElement);
```

### <a name="parameters"></a>Parametri

*pos*<br/>
La posizione dell'elemento da impostare.

*TIPO*<br/>
Tipo degli elementi da archiviare nell'elenco della classe di base.

*newElement*<br/>
Il puntatore all'oggetto da scrivere nell'elenco.

### <a name="remarks"></a>Note

Una variabile di tipo di posizione è una chiave per l'elenco. Non è quello utilizzato per un indice e non è possibile operare su un valore di posizione manualmente. `SetAt` Scrive il puntatore all'oggetto nella posizione specificata nell'elenco.

È necessario assicurarsi che il valore di posizione rappresenta una posizione valida nell'elenco. Se non è valido, quindi asserisce la versione di Debug della libreria di classi Microsoft Foundation.

Per ulteriori osservazioni, vedere [CObList::SetAt](../../mfc/reference/coblist-class.md#setat).

## <a name="see-also"></a>Vedere anche

[Esempio MFC COLLECT](../../overview/visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CPtrList](../../mfc/reference/cptrlist-class.md)<br/>
[Classe CObList](../../mfc/reference/coblist-class.md)
