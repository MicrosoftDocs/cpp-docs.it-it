---
title: CArray (classe)
ms.date: 11/04/2016
f1_keywords:
- CArray
- AFXTEMPL/CArray
- AFXTEMPL/CArray::CArray
- AFXTEMPL/CArray::Add
- AFXTEMPL/CArray::Append
- AFXTEMPL/CArray::Copy
- AFXTEMPL/CArray::ElementAt
- AFXTEMPL/CArray::FreeExtra
- AFXTEMPL/CArray::GetAt
- AFXTEMPL/CArray::GetCount
- AFXTEMPL/CArray::GetData
- AFXTEMPL/CArray::GetSize
- AFXTEMPL/CArray::GetUpperBound
- AFXTEMPL/CArray::InsertAt
- AFXTEMPL/CArray::IsEmpty
- AFXTEMPL/CArray::RemoveAll
- AFXTEMPL/CArray::RemoveAt
- AFXTEMPL/CArray::SetAt
- AFXTEMPL/CArray::SetAtGrow
- AFXTEMPL/CArray::SetSize
helpviewer_keywords:
- CArray [MFC], CArray
- CArray [MFC], Add
- CArray [MFC], Append
- CArray [MFC], Copy
- CArray [MFC], ElementAt
- CArray [MFC], FreeExtra
- CArray [MFC], GetAt
- CArray [MFC], GetCount
- CArray [MFC], GetData
- CArray [MFC], GetSize
- CArray [MFC], GetUpperBound
- CArray [MFC], InsertAt
- CArray [MFC], IsEmpty
- CArray [MFC], RemoveAll
- CArray [MFC], RemoveAt
- CArray [MFC], SetAt
- CArray [MFC], SetAtGrow
- CArray [MFC], SetSize
ms.assetid: fead8b00-4cfd-4625-ad0e-251df62ba92f
ms.openlocfilehash: f82dbf7dce2e14bf760bb76d23d23f667797ee0f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78874511"
---
# <a name="carray-class"></a>CArray (classe)

Supporta matrici simili a matrici C, ma è in grado di ridurre e aumentare in modo dinamico se necessario.

## <a name="syntax"></a>Sintassi

```
template <class TYPE, class ARG_TYPE = const TYPE&>
class CArray : public CObject
```

#### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di oggetti archiviati nella matrice. Il *tipo* è un parametro restituito da `CArray`.

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di argomento usato per accedere agli oggetti archiviati nella matrice. Spesso un riferimento al *tipo*. *ARG_TYPE* è un parametro passato al `CArray`.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArray:: CArray](#carray)|Costruisce una matrice vuota.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArray:: Add](#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CArray:: Append](#append)|Accoda un'altra matrice alla matrice; aumenta la matrice se necessario|
|[CArray:: Copy](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CArray:: ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CArray:: FreeExtra](#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CArray:: GetA](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CArray:: GetCount](#getcount)|Ottiene il numero di elementi nella matrice.|
|[CArray:: GetData](#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|
|[CArray:: GetSize](#getsize)|Ottiene il numero di elementi nella matrice.|
|[CArray:: GetUpperBound](#getupperbound)|Restituisce il massimo indice valido.|
|[CArray:: InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CArray:: IsEmpty](#isempty)|Determina se la matrice è vuota.|
|[CArray:: RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CArray:: RemoveAt](#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CArray:: SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CArray:: SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CArray:: sesize](#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator&#91;&#93;](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Gli indici di matrice iniziano sempre dalla posizione 0. È possibile decidere se correggere il limite superiore o abilitare la matrice da espandere quando si aggiungono elementi oltre il limite corrente. La memoria viene allocata in modo contiguo al limite superiore, anche se alcuni elementi sono null.

> [!NOTE]
>  La maggior parte dei metodi che ridimensionano un oggetto `CArray` o aggiungono elementi al suo utilizzo [memcpy_s](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md) per spostare gli elementi. Si tratta di un problema perché `memcpy_s` non è compatibile con gli oggetti che richiedono la chiamata del costruttore. Se gli elementi nel `CArray` non sono compatibili con `memcpy_s`, è necessario creare un nuovo `CArray` delle dimensioni appropriate. È quindi necessario utilizzare [CArray:: Copy](#copy) e [CArray:: SetAt](#setat) per popolare la nuova matrice, in quanto tali metodi utilizzano un operatore di assegnazione anziché `memcpy_s`.

Come con una matrice C, il tempo di accesso per un `CArray` elemento indicizzato è costante ed è indipendente dalla dimensione della matrice.

> [!TIP]
>  Prima di usare una matrice, usare [sesize](#setsize) per stabilirne le dimensioni e allocare la memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Se è necessario un dump di singoli elementi in una matrice, è necessario impostare la profondità dell'oggetto [CDumpContext](../../mfc/reference/cdumpcontext-class.md) su 1 o su un valore superiore.

Alcune funzioni membro di questa classe chiamano funzioni helper globali che devono essere personalizzate per la maggior parte degli utilizzi della classe `CArray`. Vedere gli [helper della classe di raccolta](../../mfc/reference/collection-class-helpers.md) topic nella sezione macro e globali MFC.

La derivazione della classe Array è simile alla derivazione dell'elenco.

Per ulteriori informazioni sull'utilizzo di `CArray`, vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

##  <a name="add"></a>CArray:: Add

Aggiunge un nuovo elemento alla fine di una matrice, aumentando di 1 la matrice.

```
INT_PTR Add(ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di argomenti che fanno riferimento a elementi di questa matrice.

*newElement*<br/>
Elemento da aggiungere a questa matrice.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Se la [dimensione](#setsize) è stata utilizzata con un valore `nGrowBy` maggiore di 1, è possibile allocare memoria aggiuntiva. Tuttavia, il limite superiore aumenterà di un solo 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#22](../../mfc/codesnippet/cpp/carray-class_1.cpp)]

##  <a name="append"></a>CArray:: Append

Chiamare questa funzione membro per aggiungere il contenuto di una matrice alla fine di un altro.

```
INT_PTR Append(const CArray& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Origine degli elementi da accodare a una matrice.

### <a name="return-value"></a>Valore restituito

Indice del primo elemento accodato.

### <a name="remarks"></a>Osservazioni

Le matrici devono essere dello stesso tipo.

Se necessario, `Append` possibile allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#23](../../mfc/codesnippet/cpp/carray-class_2.cpp)]

##  <a name="carray"></a>CArray:: CArray

Costruisce una matrice vuota.

```
CArray();
```

### <a name="remarks"></a>Osservazioni

La matrice aumenta di un elemento alla volta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#24](../../mfc/codesnippet/cpp/carray-class_3.cpp)]

##  <a name="copy"></a>CArray:: Copy

Usare questa funzione membro per copiare gli elementi di una matrice in un'altra.

```
void Copy(const CArray& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Origine degli elementi da copiare in una matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per sovrascrivere gli elementi di una matrice con gli elementi di un'altra matrice.

`Copy` non libera memoria; Tuttavia, se necessario, `Copy` possibile allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#25](../../mfc/codesnippet/cpp/carray-class_4.cpp)]

##  <a name="elementat"></a>CArray:: ElementAt

Restituisce un riferimento temporaneo all'elemento specificato all'interno della matrice.

```
TYPE& ElementAt(INT_PTR nIndex);
const TYPE& ElementAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

### <a name="return-value"></a>Valore restituito

Riferimento a un elemento della matrice.

### <a name="remarks"></a>Osservazioni

Viene usato per implementare l'operatore di assegnazione lato sinistro per le matrici.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [GetSize](#getsize).

##  <a name="freeextra"></a>CArray:: FreeExtra

Libera qualsiasi memoria aggiuntiva allocata mentre è cresciuta la matrice.

```
void FreeExtra();
```

### <a name="remarks"></a>Osservazioni

Questa funzione non ha alcun effetto sulla dimensione o sul limite superiore della matrice.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [GetData](#getdata).

##  <a name="getat"></a>CArray:: GetA

Restituisce l'elemento della matrice in corrispondenza dell'indice specificato.

```
TYPE& GetAt(INT_PTR nIndex);
const TYPE& GetAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo degli elementi della matrice.

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

### <a name="return-value"></a>Valore restituito

Elemento della matrice attualmente in corrispondenza di questo indice.

### <a name="remarks"></a>Osservazioni

Il passaggio di un valore negativo o di un valore maggiore del valore restituito da `GetUpperBound` comporterà un'asserzione non riuscita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#26](../../mfc/codesnippet/cpp/carray-class_5.cpp)]

##  <a name="getcount"></a>CArray:: GetCount

Restituisce il numero di elementi di matrice.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono in base zero, la dimensione è 1 maggiore dell'indice più grande. La chiamata a questo metodo genererà lo stesso risultato del metodo [CArray:: GetSize](#getsize) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#27](../../mfc/codesnippet/cpp/carray-class_6.cpp)]

##  <a name="getdata"></a>CArray:: GetData

Usare questa funzione membro per ottenere l'accesso diretto agli elementi in una matrice.

```
const TYPE* GetData() const;
TYPE* GetData();
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo degli elementi della matrice.

### <a name="return-value"></a>Valore restituito

Puntatore a un elemento di matrice.

### <a name="remarks"></a>Osservazioni

Se non sono disponibili elementi, `GetData` restituisce un valore null.

Sebbene l'accesso diretto agli elementi di una matrice possa aiutare a lavorare più rapidamente, prestare attenzione quando si chiama `GetData`; gli eventuali errori che si verificano direttamente influiscono sugli elementi della matrice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#28](../../mfc/codesnippet/cpp/carray-class_7.cpp)]

##  <a name="getsize"></a>CArray:: GetSize

Restituisce le dimensioni della matrice.

```
INT_PTR GetSize() const;
```

### <a name="remarks"></a>Osservazioni

Poiché gli indici sono in base zero, la dimensione è 1 maggiore dell'indice più grande. La chiamata a questo metodo genererà lo stesso risultato del metodo [CArray:: GetCount](#getcount) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#29](../../mfc/codesnippet/cpp/carray-class_8.cpp)]

##  <a name="getupperbound"></a>CArray:: GetUpperBound

Restituisce il limite superiore corrente di questa matrice.

```
INT_PTR GetUpperBound() const;
```

### <a name="remarks"></a>Osservazioni

Poiché gli indici di matrice sono in base zero, questa funzione restituisce un valore 1 minore di `GetSize`.

La condizione `GetUpperBound( )` =-1 indica che la matrice non contiene elementi.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CArray:: Geta](#getat).

##  <a name="insertat"></a>CArray:: InsertAt

La prima versione di `InsertAt` inserisce un elemento (o più copie di un elemento) in corrispondenza di un indice specificato in una matrice.

```
void InsertAt(
    INT_PTR nIndex,
    ARG_TYPE newElement,
    INT_PTR nCount = 1);

void InsertAt(
    INT_PTR nStartIndex,
    CArray* pNewArray);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer che può essere maggiore del valore restituito da `GetUpperBound`.

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di elementi in questa matrice.

*newElement*<br/>
Elemento da inserire in questa matrice.

*nCount*<br/>
Il numero di volte in cui l'elemento deve essere inserito (il valore predefinito è 1).

*nStartIndex*<br/>
Indice integer che può essere maggiore del valore restituito da [GetUpperBound](#getupperbound).

*pNewArray*<br/>
Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.

### <a name="remarks"></a>Osservazioni

Nel processo, sposta verso l'alto (incrementando l'indice) l'elemento esistente in corrispondenza dell'indice e sposta tutti gli elementi al di sopra di esso.

La seconda versione inserisce tutti gli elementi di un'altra raccolta di `CArray`, a partire dalla posizione *nStartIndex* .

La funzione `SetAt`, al contrario, sostituisce un elemento di matrice specificato e non sposta gli elementi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#30](../../mfc/codesnippet/cpp/carray-class_9.cpp)]

##  <a name="isempty"></a>CArray:: IsEmpty

Determina se la matrice è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la matrice non contiene elementi. in caso contrario, 0.

##  <a name="operator_at"></a>CArray:: operator \[\]

Questi operatori di pedice sono un comodo sostituto per le funzioni [SetAt](#setat) e [Geta](#getat) .

```
TYPE& operator[](int_ptr nindex);
const TYPE& operator[](int_ptr nindex) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi in questa matrice.

*nIndex*<br/>
Indice dell'elemento a cui accedere.

### <a name="remarks"></a>Osservazioni

Il primo operatore, chiamato per le matrici che non sono **const**, può essere utilizzato sia sul lato destro (r-value) che sulla sinistra (l-value) di un'istruzione di assegnazione. Il secondo oggetto, chiamato per le matrici **const** , può essere utilizzato solo a destra.

La versione di debug della libreria dichiara se l'indice (sul lato sinistro o destro di un'istruzione di assegnazione) non è più limitato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#34](../../mfc/codesnippet/cpp/carray-class_10.cpp)]

##  <a name="relocateelements"></a>CArray:: RelocateElements

Consente di spostare i dati in un nuovo buffer quando è necessario aumentare o ridurre la matrice.

```
template<class TYPE, class ARG_TYPE>
AFX_INLINE void CArray<TYPE, ARG_TYPE>::RelocateElements(
    TYPE* pNewData,
    const TYPE* pData,
    INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*pNewData*<br/>
Nuovo buffer per la matrice di elementi.

*pData*<br/>
Matrice precedente di elementi.

*nCount*<br/>
Numero di elementi nella matrice precedente.

### <a name="remarks"></a>Osservazioni

il numero di *pNewData* è sempre sufficiente per conservare tutti gli elementi *pData* .

L'implementazione di [CArray](../../mfc/reference/carray-class.md) utilizza questo metodo per copiare i dati obsoleti in un nuovo buffer quando la matrice deve aumentare o ridursi (quando vengono chiamati i metodi di [ridimensionamento](#setsize) o [FreeExtra](#freeextra) ). L'implementazione predefinita copia semplicemente i dati.

Per le matrici in cui un elemento contiene un puntatore a uno dei propri membri oppure un'altra struttura contiene un puntatore a uno degli elementi di matrice, i puntatori non vengono aggiornati nella copia normale. In questo caso, è possibile correggere i puntatori implementando una specializzazione di `RelocateElements` con i tipi pertinenti. Si è anche responsabili della copia dei dati.

##  <a name="removeall"></a>CArray:: RemoveAll

Rimuove tutti gli elementi dalla matrice.

```
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Se la matrice è già vuota, la funzione continuerà a funzionare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#31](../../mfc/codesnippet/cpp/carray-class_11.cpp)]

##  <a name="removeat"></a>CArray:: RemoveAt

Rimuove uno o più elementi a partire da un indice specificato in una matrice.

```
void RemoveAt(
    INT_PTR nIndex,
    INT_PTR nCount = 1);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

*nCount*<br/>
Numero di elementi da rimuovere.

### <a name="remarks"></a>Osservazioni

Nel processo, sposta tutti gli elementi sopra gli elementi rimossi. Decrementa il limite superiore della matrice, ma non libera la memoria.

Se si tenta di rimuovere più elementi di quelli contenuti nella matrice sopra il punto di rimozione, la versione di debug della libreria viene dichiarata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#32](../../mfc/codesnippet/cpp/carray-class_12.cpp)]

##  <a name="setat"></a>CArray:: SetAt

Imposta l'elemento di matrice in corrispondenza dell'indice specificato.

```
void SetAt(INT_PTR nIndex, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di argomenti utilizzati per fare riferimento agli elementi della matrice.

*newElement*<br/>
Nuovo valore dell'elemento da archiviare in corrispondenza della posizione specificata.

### <a name="remarks"></a>Osservazioni

`SetAt` non comporterà l'aumento della matrice. Usare [SetAtGrow](#setatgrow) se si vuole che la matrice cresca automaticamente.

È necessario assicurarsi che il valore di indice rappresenti una posizione valida nella matrice. Se il timeout non è associato, la versione di debug della libreria viene dichiarata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [Geta](#getat).

##  <a name="setatgrow"></a>CArray:: SetAtGrow

Imposta l'elemento di matrice in corrispondenza dell'indice specificato.

```
void SetAtGrow(INT_PTR nIndex, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0.

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di elementi nella matrice.

*newElement*<br/>
Elemento da aggiungere a questa matrice. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

Se necessario, la matrice si espande automaticamente (ovvero il limite superiore viene regolato per adattarsi al nuovo elemento).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#33](../../mfc/codesnippet/cpp/carray-class_13.cpp)]

##  <a name="setsize"></a>CArray:: sesize

Stabilisce la dimensione di una matrice vuota o esistente. Se necessario, alloca memoria.

```
void SetSize(
    INT_PTR nNewSize,
    INT_PTR nGrowBy = -1);
```

### <a name="parameters"></a>Parametri

*nNewSize*<br/>
Nuova dimensione della matrice (numero di elementi). Deve essere maggiore o uguale a 0.

*nGrowBy*<br/>
Numero minimo di slot di elementi da allocare se è necessario un aumento delle dimensioni.

### <a name="remarks"></a>Osservazioni

Se la nuova dimensione è inferiore alla dimensione precedente, la matrice viene troncata e viene rilasciata tutta la memoria inutilizzata.

Usare questa funzione per impostare le dimensioni della matrice prima di iniziare a usare la matrice. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Il parametro *nGrowBy* influiscono sull'allocazione della memoria interna durante la crescita della matrice. Il suo utilizzo non influiscono mai sulle dimensioni della matrice come riportato da [GetSize](#getsize) e [GetUpperBound](#getupperbound). Se viene utilizzato il valore predefinito, MFC alloca memoria in un modo calcolato per evitare la frammentazione della memoria e ottimizzare l'efficienza nella maggior parte dei casi.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [GetData](#getdata).

## <a name="see-also"></a>Vedere anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CObArray](../../mfc/reference/cobarray-class.md)<br/>
[Supporti delle classi di raccolte](../../mfc/reference/collection-class-helpers.md)
