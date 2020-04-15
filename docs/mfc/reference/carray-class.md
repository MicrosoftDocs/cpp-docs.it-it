---
title: Classe CArray
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
ms.openlocfilehash: 2c520a732edf54ebb36c07728ceb19791b351143
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377030"
---
# <a name="carray-class"></a>Classe CArray

Supporta matrici simili agli array C, ma che possono ridurre e aumentare dinamicamente in base alle esigenze.

## <a name="syntax"></a>Sintassi

```
template <class TYPE, class ARG_TYPE = const TYPE&>
class CArray : public CObject
```

#### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro modello che specifica il tipo di oggetti archiviati nella matrice. *TYPE* è un parametro `CArray`restituito da .

*ARG_TYPE*<br/>
Parametro modello che specifica il tipo di argomento utilizzato per accedere agli oggetti archiviati nella matrice. Spesso un riferimento a *TYPE*. *ARG_TYPE* è un parametro `CArray`che viene passato a .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArray::CArray](#carray)|Costruisce una matrice vuota.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CArray::Aggiungi](#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CArray::Accoda](#append)|Aggiunge un'altra matrice alla matrice; aumenta l'array se necessario|
|[CArray::Copia](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CArray::ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CArray::FreeExtra](#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CArray::GetAt](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CArray::GetCount](#getcount)|Ottiene il numero di elementi nella matrice.|
|[CArray::GetData](#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|
|[CArray::GetSize](#getsize)|Ottiene il numero di elementi nella matrice.|
|[CArray::GetUpperBound](#getupperbound)|Restituisce il massimo indice valido.|
|[CArray::InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CArray::IsEmpty](#isempty)|Determina se la matrice è vuota.|
|[CArray::RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CArray::RemoveAt](#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CArray::SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CArray::SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CArray::SetSize](#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator&#91;&#93;](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Gli indici di matrice iniziano sempre dalla posizione 0.Array indexes always start at position 0. È possibile decidere se correggere il limite superiore o abilitare l'espansione della matrice quando si aggiungono elementi oltre il limite corrente. La memoria viene allocata contiguamente al limite superiore, anche se alcuni elementi sono null.

> [!NOTE]
> La maggior parte `CArray` dei metodi che ridimensionano un oggetto o vi aggiungono memcpy_s [per](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md) spostare gli elementi. Si tratta di `memcpy_s` un problema perché non è compatibile con gli oggetti che richiedono la chiamata del costruttore. Se gli elementi `CArray` in , `memcpy_s`è necessario creare `CArray` una nuova delle dimensioni appropriate. È quindi necessario utilizzare [CArray::Copy](#copy) e [CArray::SetAt](#setat) per popolare la nuova `memcpy_s`matrice perché tali metodi utilizzano un operatore di assegnazione anziché .

Come con una matrice C, `CArray` il tempo di accesso per un elemento indicizzato è costante ed è indipendente dalla dimensione della matrice.

> [!TIP]
> Prima di utilizzare una matrice, utilizzare [SetSize](#setsize) per stabilirne le dimensioni e allocare la memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Se è necessario un dump di singoli elementi in una matrice, è necessario impostare la profondità dell'oggetto [CDumpContext](../../mfc/reference/cdumpcontext-class.md) su 1 o su un valore maggiore.

Alcune funzioni membro di questa classe chiamano funzioni di supporto `CArray` globali che devono essere personalizzate per la maggior parte degli utilizzi della classe. Vedere l'argomento [Guida alla classe Collection](../../mfc/reference/collection-class-helpers.md) nella sezione Macro e globali MFC.

La derivazione della classe di matrice è come la derivazione dell'elenco.

Per ulteriori informazioni sull'utilizzo `CArray`di , vedere l'articolo [Raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="carrayadd"></a><a name="add"></a>CArray::Aggiungi

Aggiunge un nuovo elemento alla fine di una matrice, aumentando la matrice di 1.

```
INT_PTR Add(ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di argomenti che fanno riferimento agli elementi in questa matrice.

*nuovoElemento*<br/>
Elemento da aggiungere a questa matrice.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Se [SetSize](#setsize) è stato `nGrowBy` utilizzato con un valore maggiore di 1, è possibile allocare memoria aggiuntiva. Tuttavia, il limite superiore aumenterà di solo 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#22](../../mfc/codesnippet/cpp/carray-class_1.cpp)]

## <a name="carrayappend"></a><a name="append"></a>CArray::Accoda

Chiamare questa funzione membro per aggiungere il contenuto di una matrice alla fine di un'altra.

```
INT_PTR Append(const CArray& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Origine degli elementi da aggiungere a una matrice.

### <a name="return-value"></a>Valore restituito

Indice del primo elemento accodato.

### <a name="remarks"></a>Osservazioni

Le matrici devono essere dello stesso tipo.

Se necessario, `Append` è possibile allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#23](../../mfc/codesnippet/cpp/carray-class_2.cpp)]

## <a name="carraycarray"></a><a name="carray"></a>CArray::CArray

Costruisce una matrice vuota.

```
CArray();
```

### <a name="remarks"></a>Osservazioni

La matrice cresce un elemento alla volta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#24](../../mfc/codesnippet/cpp/carray-class_3.cpp)]

## <a name="carraycopy"></a><a name="copy"></a>CArray::Copia

Utilizzare questa funzione membro per copiare gli elementi di una matrice in un'altra.

```
void Copy(const CArray& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Origine degli elementi da copiare in una matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per sovrascrivere gli elementi di una matrice con gli elementi di un'altra matrice.

`Copy`non libera memoria; Tuttavia, se `Copy` necessario, può allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#25](../../mfc/codesnippet/cpp/carray-class_4.cpp)]

## <a name="carrayelementat"></a><a name="elementat"></a>CArray::ElementAt

Restituisce un riferimento temporaneo all'elemento specificato all'interno della matrice.

```
TYPE& ElementAt(INT_PTR nIndex);
const TYPE& ElementAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

### <a name="return-value"></a>Valore restituito

Riferimento a un elemento della matrice.

### <a name="remarks"></a>Osservazioni

Viene utilizzato per implementare l'operatore di assegnazione sul lato sinistro per le matrici.

### <a name="example"></a>Esempio

  Vedere l'esempio per [GetSize](#getsize).

## <a name="carrayfreeextra"></a><a name="freeextra"></a>CArray::FreeExtra

Libera qualsiasi memoria aggiuntiva allocata durante l'accresciuta dell'array.

```
void FreeExtra();
```

### <a name="remarks"></a>Osservazioni

Questa funzione non ha alcun effetto sulla dimensione o sul limite superiore della matrice.

### <a name="example"></a>Esempio

  Vedere l'esempio per [GetData](#getdata).

## <a name="carraygetat"></a><a name="getat"></a>CArray::GetAt

Restituisce l'elemento della matrice in corrispondenza dell'indice specificato.

```
TYPE& GetAt(INT_PTR nIndex);
const TYPE& GetAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo degli elementi della matrice.

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

### <a name="return-value"></a>Valore restituito

Elemento della matrice attualmente in corrispondenza di questo indice.

### <a name="remarks"></a>Osservazioni

Se si passa un valore negativo o `GetUpperBound` un valore maggiore del valore restituito da, verrà eseguito un'asserzione non riuscita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#26](../../mfc/codesnippet/cpp/carray-class_5.cpp)]

## <a name="carraygetcount"></a><a name="getcount"></a>CArray::GetCount

Restituisce il numero di elementi della matrice.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono in base zero, la dimensione è maggiore di 1 rispetto all'indice più grande. La chiamata a questo metodo genererà lo stesso risultato del [metodo CArray::GetSize](#getsize) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#27](../../mfc/codesnippet/cpp/carray-class_6.cpp)]

## <a name="carraygetdata"></a><a name="getdata"></a>CArray::GetData

Utilizzare questa funzione membro per ottenere l'accesso diretto agli elementi in una matrice.

```
const TYPE* GetData() const;
TYPE* GetData();
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo degli elementi della matrice.

### <a name="return-value"></a>Valore restituito

Puntatore a un elemento della matrice.

### <a name="remarks"></a>Osservazioni

Se non sono `GetData` disponibili elementi, restituisce un valore null.

Mentre l'accesso diretto agli elementi di una matrice può `GetData`aiutare a lavorare più rapidamente, prestare attenzione quando si chiama ; eventuali errori che si commette influiscono direttamente sugli elementi dell'array.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#28](../../mfc/codesnippet/cpp/carray-class_7.cpp)]

## <a name="carraygetsize"></a><a name="getsize"></a>CArray::GetSize

Restituisce le dimensioni della matrice.

```
INT_PTR GetSize() const;
```

### <a name="remarks"></a>Osservazioni

Poiché gli indici sono in base zero, la dimensione è maggiore di 1 rispetto all'indice più grande. La chiamata a questo metodo genererà lo stesso risultato del [metodo CArray::GetCount](#getcount) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#29](../../mfc/codesnippet/cpp/carray-class_8.cpp)]

## <a name="carraygetupperbound"></a><a name="getupperbound"></a>CArray::GetUpperBound

Restituisce il limite superiore corrente di questa matrice.

```
INT_PTR GetUpperBound() const;
```

### <a name="remarks"></a>Osservazioni

Poiché gli indici di matrice sono in base zero, questa funzione restituisce un valore 1 minore di `GetSize`.

La `GetUpperBound( )` condizione -1 indica che la matrice non contiene elementi.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CArray::GetAt](#getat).

## <a name="carrayinsertat"></a><a name="insertat"></a>CArray::InsertAt

La prima `InsertAt` versione di inserisce un elemento (o più copie di un elemento) in corrispondenza di un indice specificato in una matrice.

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
Indice Integer che può essere maggiore del `GetUpperBound`valore restituito da .

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di elementi in questa matrice.

*nuovoElemento*<br/>
Elemento da inserire in questa matrice.

*nConteggio*<br/>
Il numero di volte in cui questo elemento deve essere inserito (il valore predefinito è 1).

*nInizioIndice*<br/>
Indice Integer che può essere maggiore del valore restituito da [GetUpperBound](#getupperbound).

*pNewArray (matrice)*<br/>
Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.

### <a name="remarks"></a>Osservazioni

Nel processo, sposta verso l'alto (incrementando l'indice) l'elemento esistente in corrispondenza di questo indice e sposta verso l'alto tutti gli elementi al di sopra di esso.

La seconda versione inserisce tutti `CArray` gli elementi di un'altra raccolta, a partire dalla posizione *nStartIndex.*

La `SetAt` funzione, al contrario, sostituisce un elemento di matrice specificato e non sposta alcun elemento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#30](../../mfc/codesnippet/cpp/carray-class_9.cpp)]

## <a name="carrayisempty"></a><a name="isempty"></a>CArray::IsEmpty

Determina se la matrice è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la matrice non contiene elementi; in caso contrario 0.

## <a name="carrayoperator-"></a><a name="operator_at"></a>CArray::operatore\[\]

Questi operatori di pedice sono un comodo sostituto per le funzioni [SetAt](#setat) e [GetAt.](#getat)

```
TYPE& operator[](int_ptr nindex);
const TYPE& operator[](int_ptr nindex) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi in questa matrice.

*nIndex*<br/>
Indice dell'elemento a cui accedere.

### <a name="remarks"></a>Osservazioni

Il primo operatore, chiamato per le matrici che non sono **const**, può essere utilizzato a destra (r-value) o a sinistra (l-value) di un'istruzione di assegnazione. Il secondo, chiamato per le matrici **const,** può essere utilizzato solo a destra.

La versione di debug della libreria asserisce se il pedice (a sinistra o a destra di un'istruzione di assegnazione) non è più limitato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#34](../../mfc/codesnippet/cpp/carray-class_10.cpp)]

## <a name="carrayrelocateelements"></a><a name="relocateelements"></a>CArray::RelocateElements

Riposiziona i dati in un nuovo buffer quando la matrice deve aumentare o ridurre.

```
template<class TYPE, class ARG_TYPE>
AFX_INLINE void CArray<TYPE, ARG_TYPE>::RelocateElements(
    TYPE* pNewData,
    const TYPE* pData,
    INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*pNewData (informazioni in base ai dati di*<br/>
Nuovo buffer per la matrice di elementi.

*pDati*<br/>
La vecchia matrice di elementi.

*nConteggio*<br/>
Numero di elementi nella matrice precedente.

### <a name="remarks"></a>Osservazioni

*pNewData* è sempre sufficientemente grande da contenere tutti gli elementi *pData.*

Il [CArray](../../mfc/reference/carray-class.md) implementazione utilizza questo metodo per copiare i dati precedenti in un nuovo buffer quando la matrice deve crescere o ridurre (quando [SetSize](#setsize) o [FreeExtra](#freeextra) vengono chiamati). L'implementazione predefinita copia solo i dati.

Per le matrici in cui un elemento contiene un puntatore a uno dei propri membri o un'altra struttura contiene un puntatore a uno degli elementi della matrice, i puntatori non vengono aggiornati in copia normale. In questo caso, è possibile correggere i `RelocateElements` puntatori implementando una specializzazione di con i tipi pertinenti. L'utente è anche responsabile della copia dei dati.

## <a name="carrayremoveall"></a><a name="removeall"></a>CArray::RemoveAll

Rimuove tutti gli elementi dalla matrice.

```
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Se la matrice è già vuota, la funzione funziona ancora.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#31](../../mfc/codesnippet/cpp/carray-class_11.cpp)]

## <a name="carrayremoveat"></a><a name="removeat"></a>CArray::RemoveAt

Rimuove uno o più elementi a partire da un indice specificato in una matrice.

```
void RemoveAt(
    INT_PTR nIndex,
    INT_PTR nCount = 1);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

*nConteggio*<br/>
Numero di elementi da rimuovere.

### <a name="remarks"></a>Osservazioni

Nel processo, sposta verso il basso tutti gli elementi sopra gli elementi rimossi. Decrementa il limite superiore della matrice ma non libera memoria.

Se si tenta di rimuovere più elementi di quelli contenuti nella matrice sopra il punto di rimozione, la versione di debug della libreria asserisce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#32](../../mfc/codesnippet/cpp/carray-class_12.cpp)]

## <a name="carraysetat"></a><a name="setat"></a>CArray::SetAt

Imposta l'elemento della matrice in corrispondenza dell'indice specificato.

```
void SetAt(INT_PTR nIndex, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da [GetUpperBound](#getupperbound).

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di argomenti utilizzati per fare riferimento agli elementi della matrice.

*nuovoElemento*<br/>
Nuovo valore dell'elemento da archiviare nella posizione specificata.

### <a name="remarks"></a>Osservazioni

`SetAt`non farà crescere l'array. Utilizzare [SetAtGrow](#setatgrow) se si desidera che l'array cresca automaticamente.

È necessario assicurarsi che il valore di indice rappresenti una posizione valida nella matrice. Se non è esaurito, la versione di debug della libreria asserisce.

### <a name="example"></a>Esempio

  Vedere l'esempio per [GetAt](#getat).

## <a name="carraysetatgrow"></a><a name="setatgrow"></a>CArray::SetAtGrow

Imposta l'elemento della matrice in corrispondenza dell'indice specificato.

```
void SetAtGrow(INT_PTR nIndex, ARG_TYPE newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0.

*ARG_TYPE*<br/>
Parametro di modello che specifica il tipo di elementi nella matrice.

*nuovoElemento*<br/>
Elemento da aggiungere a questa matrice. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

La matrice aumenta automaticamente se necessario (ovvero, il limite superiore viene regolato in base al nuovo elemento).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#33](../../mfc/codesnippet/cpp/carray-class_13.cpp)]

## <a name="carraysetsize"></a><a name="setsize"></a>CArray::SetSize

Stabilisce le dimensioni di una matrice vuota o esistente; alloca memoria se necessario.

```
void SetSize(
    INT_PTR nNewSize,
    INT_PTR nGrowBy = -1);
```

### <a name="parameters"></a>Parametri

*nNewSize (informazioni in base alle dimensioni è in*<br/>
La nuova dimensione della matrice (numero di elementi). Deve essere maggiore o uguale a 0.

*nAcia di GrowBy*<br/>
Numero minimo di slot elemento da allocare se è necessario un aumento delle dimensioni.

### <a name="remarks"></a>Osservazioni

Se la nuova dimensione è inferiore alla dimensione precedente, la matrice viene troncata e tutta la memoria inutilizzata viene rilasciata.

Utilizzare questa funzione per impostare la dimensione della matrice prima di iniziare a utilizzare la matrice. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Il parametro *nGrowBy* influisce sull'allocazione di memoria interna durante l'aumento della matrice. Il suo utilizzo non influisce mai sulla dimensione della matrice come riportato da [GetSize](#getsize) e [GetUpperBound](#getupperbound). Se viene utilizzato il valore predefinito, MFC alloca memoria in modo calcolato per evitare la frammentazione della memoria e ottimizzare l'efficienza per la maggior parte dei casi.

### <a name="example"></a>Esempio

  Vedere l'esempio per [GetData](#getdata).

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CObArray](../../mfc/reference/cobarray-class.md)<br/>
[Supporti delle classi di raccolte](../../mfc/reference/collection-class-helpers.md)
