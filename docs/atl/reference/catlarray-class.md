---
title: Classe CAtlArray
ms.date: 11/04/2016
f1_keywords:
- CAtlArray
- ATLCOLL/ATL::CAtlArray
- ATLCOLL/ATL::Add
- ATLCOLL/ATL::Append
- ATLCOLL/ATL::AssertValid
- ATLCOLL/ATL::Copy
- ATLCOLL/ATL::FreeExtra
- ATLCOLL/ATL::GetAt
- ATLCOLL/ATL::GetCount
- ATLCOLL/ATL::GetData
- ATLCOLL/ATL::InsertArrayAt
- ATLCOLL/ATL::InsertAt
- ATLCOLL/ATL::IsEmpty
- ATLCOLL/ATL::RemoveAll
- ATLCOLL/ATL::RemoveAt
- ATLCOLL/ATL::SetAt
- ATLCOLL/ATL::SetAtGrow
- ATLCOLL/ATL::SetCount
- ATLCOLL/ATL::INARGTYPE
- ATLCOLL/ATL::OUTARGTYPE
helpviewer_keywords:
- CAtlArray class
ms.assetid: 0b503aa8-2357-40af-a326-6654bf1da098
ms.openlocfilehash: 6a0b83f722d1b616e9c10713646d337f9cb090a4
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418090"
---
# <a name="catlarray-class"></a>Classe CAtlArray

Questa classe implementa un oggetto Array.

## <a name="syntax"></a>Sintassi

```
template<typename E, class ETraits = CElementTraits<E>>
class CAtlArray
```

#### <a name="parameters"></a>Parametri

*E*<br/>
Tipo di dati da memorizzare nella matrice.

*ETraits*<br/>
Codice utilizzato per copiare o spostare elementi.

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[Aggiungere](#add)|Chiamare questo metodo per aggiungere un elemento all'oggetto Array.|
|[Append](#append)|Chiamare questo metodo per aggiungere il contenuto di una matrice alla fine di un altro.|
|[AssertValid](#assertvalid)|Chiamare questo metodo per verificare che l'oggetto matrice sia valido.|
|[CAtlArray](#catlarray)|Costruttore.|
|[~ CAtlArray](#dtor)|Distruttore.|
|[Copia](#copy)|Chiamare questo metodo per copiare gli elementi di una matrice in un'altra matrice.|
|[FreeExtra](#freeextra)|Chiamare questo metodo per rimuovere tutti gli elementi vuoti dalla matrice.|
|[GetAt](#getat)|Chiamare questo metodo per recuperare un singolo elemento dall'oggetto Array.|
|[GetCount](#getcount)|Chiamare questo metodo per restituire il numero di elementi archiviati nella matrice.|
|[GetData](#getdata)|Chiamare questo metodo per restituire un puntatore al primo elemento nella matrice.|
|[InsertArrayAt](#insertarrayat)|Chiamare questo metodo per inserire una matrice in un'altra.|
|[InsertAt](#insertat)|Chiamare questo metodo per inserire un nuovo elemento (o più copie di un elemento) nell'oggetto Array.|
|[IsEmpty](#isempty)|Chiamare questo metodo per verificare se la matrice è vuota.|
|[RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dall'oggetto Array.|
|[RemoveAt](#removeat)|Chiamare questo metodo per rimuovere uno o più elementi dalla matrice.|
|[SetAt](#setat)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto Array.|
|[SetAtGrow](#setatgrow)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice, espandendo la matrice come richiesto.|
|[SetCount](#setcount)|Chiamare questo metodo per impostare la dimensione dell'oggetto Array.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore&#91;&#93;](#operator_at)|Chiamare questo operatore per restituire un riferimento a un elemento nella matrice.|

### <a name="typedefs"></a>Typedef

|||
|-|-|
|[INARGTYPE](#inargtype)|Tipo di dati da utilizzare per l'aggiunta di elementi alla matrice.|
|[OUTARGTYPE](#outargtype)|Tipo di dati da utilizzare per il recupero di elementi dalla matrice.|

## <a name="remarks"></a>Osservazioni

`CAtlArray` fornisce metodi per la creazione e la gestione di una matrice di elementi di un tipo definito dall'utente. Sebbene simili alle matrici C standard, l'oggetto `CAtlArray` può ridursi e aumentare dinamicamente in base alle esigenze. L'indice della matrice inizia sempre dalla posizione 0 e il limite superiore può essere fisso oppure è consentito espandersi quando vengono aggiunti nuovi elementi.

Per le matrici con un numero ridotto di elementi, è possibile usare la classe ATL [CSimpleArray](../../atl/reference/csimplearray-class.md) .

`CAtlArray` è strettamente correlato alla classe `CArray` di MFC e funzionerà in un progetto MFC, sebbene senza supporto della serializzazione.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="add"></a>CAtlArray:: Add

Chiamare questo metodo per aggiungere un elemento all'oggetto Array.

```
size_t Add(INARGTYPE element);
size_t Add();
```

### <a name="parameters"></a>Parametri

*elemento*<br/>
Elemento da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Il nuovo elemento viene aggiunto alla fine della matrice. Se non viene specificato alcun elemento, viene aggiunto un elemento vuoto; ovvero, la dimensione della matrice è aumentata come se fosse stato aggiunto un elemento reale. Se l'operazione ha esito negativo, viene chiamato [AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow) con l'argomento E_OUTOFMEMORY.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#1](../../atl/codesnippet/cpp/catlarray-class_1.cpp)]

##  <a name="append"></a>CAtlArray:: Append

Chiamare questo metodo per aggiungere il contenuto di una matrice alla fine di un altro.

```
size_t Append(const CAtlArray<E, ETraits>& aSrc);
```

### <a name="parameters"></a>Parametri

*aSrc*<br/>
Matrice da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice del primo elemento accodato.

### <a name="remarks"></a>Osservazioni

Gli elementi nella matrice specificata vengono aggiunti alla fine della matrice esistente. Se necessario, la memoria verrà allocata per contenere i nuovi elementi.

Le matrici devono essere dello stesso tipo e non è possibile aggiungere una matrice a se stessa.

Nelle compilazioni di debug viene generato un ATLASSERT se l'argomento `CAtlArray` non è una matrice valida o se *asrc* fa riferimento allo stesso oggetto. Nelle build di rilascio, gli argomenti non validi possono causare un comportamento imprevedibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#2](../../atl/codesnippet/cpp/catlarray-class_2.cpp)]

##  <a name="assertvalid"></a>CAtlArray:: AssertValid

Chiamare questo metodo per verificare che l'oggetto matrice sia valido.

```
void AssertValid() const;
```

### <a name="remarks"></a>Osservazioni

Se l'oggetto matrice non è valido, ATLASSERT genererà un'asserzione. Questo metodo è disponibile solo se è stato definito _DEBUG.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#3](../../atl/codesnippet/cpp/catlarray-class_3.cpp)]

##  <a name="catlarray"></a>CAtlArray:: CAtlArray

Costruttore.

```
CAtlArray() throw();
```

### <a name="remarks"></a>Osservazioni

Inizializza l'oggetto matrice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#4](../../atl/codesnippet/cpp/catlarray-class_4.cpp)]

##  <a name="dtor"></a>CAtlArray:: ~ CAtlArray

Distruttore.

```
~CAtlArray() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse usate dall'oggetto Array.

##  <a name="copy"></a>CAtlArray:: Copy

Chiamare questo metodo per copiare gli elementi di una matrice in un'altra matrice.

```
void Copy(const CAtlArray<E, ETraits>& aSrc);
```

### <a name="parameters"></a>Parametri

*aSrc*<br/>
Origine degli elementi da copiare in una matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per sovrascrivere gli elementi di una matrice con gli elementi di un'altra matrice. Se necessario, la memoria verrà allocata per contenere i nuovi elementi. Non è possibile copiare gli elementi di una matrice in se stesso.

Se il contenuto esistente della matrice deve essere mantenuto, utilizzare [CAtlArray:: Append](#append) .

Nelle compilazioni di debug viene generato un ATLASSERT se l'oggetto `CAtlArray` esistente non è valido o se *asrc* fa riferimento allo stesso oggetto. Nelle build di rilascio, gli argomenti non validi possono causare un comportamento imprevedibile.

> [!NOTE]
> `CAtlArray::Copy` non supporta matrici costituite da elementi creati con la classe [CAutoPtr](../../atl/reference/cautoptr-class.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#5](../../atl/codesnippet/cpp/catlarray-class_5.cpp)]

##  <a name="freeextra"></a>CAtlArray:: FreeExtra

Chiamare questo metodo per rimuovere tutti gli elementi vuoti dalla matrice.

```
void FreeExtra() throw();
```

### <a name="remarks"></a>Osservazioni

Tutti gli elementi vuoti vengono rimossi, ma le dimensioni e il limite superiore della matrice rimangono invariati.

Nelle compilazioni di debug viene generato un ATLASSERT se l'oggetto CAtlArray non è valido o se la matrice supera la dimensione massima.

##  <a name="getat"></a>CAtlArray:: GetA

Chiamare questo metodo per recuperare un singolo elemento dall'oggetto Array.

```
const E& GetAt(size_t iElement) const throw();
E& GetAt(size_t iElement) throw();
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Valore di indice dell'elemento di matrice da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'elemento di matrice obbligatorio.

### <a name="remarks"></a>Osservazioni

Nelle compilazioni di debug viene generato un ATLASSERT se *IElement* supera il numero di elementi nella matrice. Nelle build di rilascio, un argomento non valido può causare un comportamento imprevedibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#6](../../atl/codesnippet/cpp/catlarray-class_6.cpp)]

##  <a name="getcount"></a>CAtlArray:: GetCount

Chiamare questo metodo per restituire il numero di elementi archiviati nella matrice.

```
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi archiviati nella matrice.

### <a name="remarks"></a>Osservazioni

Poiché il primo elemento della matrice è nella posizione 0, il valore restituito da `GetCount` è sempre 1 maggiore dell'indice più grande.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlArray:: Geta](#getat).

##  <a name="getdata"></a>CAtlArray:: GetData

Chiamare questo metodo per restituire un puntatore al primo elemento nella matrice.

```
E* GetData() throw();
const E* GetData() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla posizione di memoria che archivia il primo elemento nella matrice. Se non sono disponibili elementi, viene restituito NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#7](../../atl/codesnippet/cpp/catlarray-class_7.cpp)]

##  <a name="inargtype"></a>CAtlArray:: INARGTYPE

Tipo di dati da utilizzare per l'aggiunta di elementi alla matrice.

```
typedef ETraits::INARGTYPE INARGTYPE;
```

##  <a name="insertarrayat"></a>CAtlArray:: InsertArrayAt

Chiamare questo metodo per inserire una matrice in un'altra.

```
void InsertArrayAt(size_t iStart, const CAtlArray<E, ETraits>* paNew);
```

### <a name="parameters"></a>Parametri

*iStart*<br/>
Indice in corrispondenza del quale deve essere inserita la matrice.

*paNew*<br/>
Matrice da inserire.

### <a name="remarks"></a>Osservazioni

Gli elementi della matrice *paNew* vengono copiati nell'oggetto Array, a partire dall'elemento *Tart*. Gli elementi della matrice esistenti vengono spostati per evitare che vengano sovrascritti.

Nelle compilazioni di debug viene generato un ATLASSERT se l'oggetto `CAtlArray` non è valido o se il puntatore *paNew* è null o non valido.

> [!NOTE]
> `CAtlArray::InsertArrayAt` non supporta matrici costituite da elementi creati con la classe [CAutoPtr](../../atl/reference/cautoptr-class.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#8](../../atl/codesnippet/cpp/catlarray-class_8.cpp)]

##  <a name="insertat"></a>CAtlArray:: InsertAt

Chiamare questo metodo per inserire un nuovo elemento (o più copie di un elemento) nell'oggetto Array.

```
void InsertAt(size_t iElement, INARGTYPE element, size_t nCount = 1);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Indice in cui inserire l'elemento o gli elementi.

*elemento*<br/>
Valore dell'elemento o degli elementi da inserire.

*nCount*<br/>
Numero di elementi da aggiungere.

### <a name="remarks"></a>Osservazioni

Inserisce uno o più elementi nella matrice, a partire dall'indice *IElement*. Gli elementi esistenti vengono spostati per evitare che vengano sovrascritti.

Nelle compilazioni di debug, viene generato un ATLASSERT se l'oggetto `CAtlArray` non è valido, il numero di elementi da aggiungere è zero oppure il numero combinato di elementi è troppo grande per la matrice da contenere. Nelle compilazioni finali, il passaggio di parametri non validi può causare risultati imprevedibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#9](../../atl/codesnippet/cpp/catlarray-class_9.cpp)]

##  <a name="isempty"></a>CAtlArray:: IsEmpty

Chiamare questo metodo per verificare se la matrice è vuota.

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se la matrice è vuota; in caso contrario, false.

### <a name="remarks"></a>Osservazioni

La matrice viene definita vuota se non contiene elementi. Pertanto, anche se la matrice contiene elementi vuoti, non è vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#10](../../atl/codesnippet/cpp/catlarray-class_10.cpp)]

##  <a name="operator_at"></a>CAtlArray:: operator []

Chiamare questo operatore per restituire un riferimento a un elemento nella matrice.

```
E& operator[](size_t ielement) throw();
const E& operator[](size_t ielement) const throw();
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Valore di indice dell'elemento di matrice da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'elemento di matrice obbligatorio.

### <a name="remarks"></a>Osservazioni

Esegue una funzione simile a [CAtlArray:: Geta](#getat). A differenza della classe MFC [CArray](../../mfc/reference/carray-class.md), questo operatore non può essere usato come sostituto di [CAtlArray:: SetAt](#setat).

Nelle compilazioni di debug viene generato un ATLASSERT se *IElement* supera il numero totale di elementi nella matrice. Nelle compilazioni finali, un parametro non valido può causare risultati imprevedibili.

##  <a name="outargtype"></a>CAtlArray:: OUTARGTYPE

Tipo di dati da utilizzare per il recupero di elementi dalla matrice.

```
typedef ETraits::OUTARGTYPE OUTARGTYPE;
```

##  <a name="removeall"></a>CAtlArray:: RemoveAll

Chiamare questo metodo per rimuovere tutti gli elementi dall'oggetto Array.

```
void RemoveAll() throw();
```

### <a name="remarks"></a>Osservazioni

Rimuove tutti gli elementi dall'oggetto Array.

Questo metodo chiama [CAtlArray:: secount](#setcount) per ridimensionare la matrice e successivamente libera la memoria allocata.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlArray:: IsEmpty](#isempty).

##  <a name="removeat"></a>CAtlArray:: RemoveAt

Chiamare questo metodo per rimuovere uno o più elementi dalla matrice.

```
void RemoveAt(size_t iElement, size_t nCount = 1);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Indice del primo elemento da rimuovere.

*nCount*<br/>
Numero di elementi da rimuovere.

### <a name="remarks"></a>Osservazioni

Rimuove uno o più elementi dalla matrice. Tutti gli elementi rimanenti vengono spostati verso il basso. Il limite superiore viene decrementato, ma la memoria non viene liberata fino a quando non viene effettuata una chiamata a [CAtlArray:: FreeExtra](#freeextra) .

Nelle compilazioni di debug viene generato un ATLASSERT se l'oggetto `CAtlArray` non è valido o se il totale combinato di *IElement* e *nCount* supera il numero totale di elementi nella matrice. Nelle compilazioni finali, i parametri non validi possono provocare risultati imprevedibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#11](../../atl/codesnippet/cpp/catlarray-class_11.cpp)]

##  <a name="setat"></a>CAtlArray:: SetAt

Chiamare questo metodo per impostare il valore di un elemento nell'oggetto Array.

```
void SetAt(size_t iElement, INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Indice che punta all'elemento della matrice da impostare.

*elemento*<br/>
Nuovo valore dell'elemento specificato.

### <a name="remarks"></a>Osservazioni

Nelle compilazioni di debug viene generato un ATLASSERT se *IElement* supera il numero di elementi nella matrice. Nelle compilazioni finali, un parametro non valido può causare risultati imprevedibili.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlArray:: Geta](#getat).

##  <a name="setcount"></a>CAtlArray:: secount

Chiamare questo metodo per impostare la dimensione dell'oggetto Array.

```
bool SetCount(size_t nNewSize, int nGrowBy = - 1);
```

### <a name="parameters"></a>Parametri

*nNewSize*<br/>
Dimensioni obbligatorie della matrice.

*nGrowBy*<br/>
Valore utilizzato per determinare la dimensione del buffer. Il valore-1 determina l'utilizzo di un valore calcolato internamente.

### <a name="return-value"></a>Valore restituito

Restituisce true se la matrice è stata ridimensionata correttamente; in caso contrario, false.

### <a name="remarks"></a>Osservazioni

La matrice può essere aumentata o ridotta di dimensioni. Se è aumentato, alla matrice vengono aggiunti elementi vuoti aggiuntivi. Se diminuita, gli elementi con gli indici più grandi verranno eliminati e la memoria verrà liberata.

Utilizzare questo metodo per impostare la dimensione della matrice prima di utilizzarla. Se `SetCount` non viene utilizzato, il processo di aggiunta di elementi, e la successiva allocazione di memoria eseguita, ridurrà le prestazioni e la memoria frammentata.

### <a name="example"></a>Esempio

Vedere l'esempio per [CAtlArray:: GetData](#getdata).

##  <a name="setatgrow"></a>CAtlArray:: SetAtGrow

Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice, espandendo la matrice come richiesto.

```
void SetAtGrow(size_t iElement, INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Indice che punta all'elemento della matrice da impostare.

*elemento*<br/>
Nuovo valore dell'elemento specificato.

### <a name="remarks"></a>Osservazioni

Sostituisce il valore dell'elemento a cui punta l'indice. Se *IElement* è maggiore della dimensione corrente della matrice, la matrice viene aumentata automaticamente utilizzando una chiamata a [CAtlArray:: secount](#setcount). Nelle compilazioni di debug viene generato un ATLASSERT se l'oggetto `CAtlArray` non è valido. Nelle compilazioni finali, i parametri non validi possono provocare risultati imprevedibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#12](../../atl/codesnippet/cpp/catlarray-class_12.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MMXSwarm](../../overview/visual-cpp-samples.md)<br/>
[Esempio DynamicConsumer](../../overview/visual-cpp-samples.md)<br/>
[Esempio UpdatePV](../../overview/visual-cpp-samples.md)<br/>
[Esempio Marquee](../../overview/visual-cpp-samples.md)<br/>
[Classe CArray](../../mfc/reference/carray-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
