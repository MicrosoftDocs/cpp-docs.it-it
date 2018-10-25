---
title: Classe CAtlArray | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CAtlArray class
ms.assetid: 0b503aa8-2357-40af-a326-6654bf1da098
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4c16337949340b03bbaa517ca98ac9b65a5bb2bb
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053930"
---
# <a name="catlarray-class"></a>Classe CAtlArray

Questa classe implementa un oggetto matrice.

## <a name="syntax"></a>Sintassi

```
template<typename E, class ETraits = CElementTraits<E>>
class CAtlArray
```

#### <a name="parameters"></a>Parametri

*E*<br/>
Tipo di dati da memorizzare nella matrice.

*ETraits*<br/>
Il codice usato per copiare o spostare gli elementi.

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Aggiungi](#add)|Chiamare questo metodo per aggiungere un elemento all'oggetto matrice.|
|[Append](#append)|Chiamare questo metodo per aggiungere il contenuto di una matrice alla fine di un altro.|
|[AssertValid](#assertvalid)|Chiamare questo metodo per verificare che l'oggetto matrice sia valido.|
|[CAtlArray](#catlarray)|Costruttore.|
|[~ CAtlArray](#dtor)|Distruttore.|
|[Copia](#copy)|Chiamare questo metodo per copiare gli elementi di una matrice a un altro.|
|[FreeExtra](#freeextra)|Chiamare questo metodo per rimuovere eventuali elementi vuoti dalla matrice.|
|[GetAt](#getat)|Chiamare questo metodo per recuperare un singolo elemento dall'oggetto matrice.|
|[GetCount](#getcount)|Chiamare questo metodo per restituire il numero di elementi archiviati nella matrice.|
|[GetData](#getdata)|Chiamare questo metodo per restituire un puntatore al primo elemento nella matrice.|
|[InsertArrayAt](#insertarrayat)|Chiamare questo metodo per inserire una matrice in un altro.|
|[InsertAt](#insertat)|Chiamare questo metodo per inserire un nuovo elemento (o più copie di un elemento) nell'oggetto matrice.|
|[IsEmpty](#isempty)|Chiamare questo metodo per verificare se la matrice è vuota.|
|[RemoveAll](#removeall)|Chiamare questo metodo per rimuovere tutti gli elementi dall'oggetto matrice.|
|[RemoveAt](#removeat)|Chiamare questo metodo per rimuovere uno o più elementi dalla matrice.|
|[SetAt](#setat)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice.|
|[SetAtGrow](#setatgrow)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice, espandendo la matrice in base alle esigenze.|
|[SetCount](#setcount)|Chiamare questo metodo per impostare le dimensioni dell'oggetto matrice.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore&#91;&#93;](#operator_at)|Chiamare questo operatore per restituire un riferimento a un elemento nella matrice.|

### <a name="typedefs"></a>Definizioni typedef

|||
|-|-|
|[INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi nella matrice.|
|[OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare elementi dalla matrice.|

## <a name="remarks"></a>Note

`CAtlArray` fornisce metodi per la creazione e la gestione di una matrice di elementi di un tipo definito dall'utente. Pur essendo simili alle matrici di C standard, il `CAtlArray` oggetto può ridurre in modo dinamico e di ingrandirsi. Inizia sempre dall'indice della matrice nella posizione 0 e il limite superiore può essere risolto o possibilità di espandere man mano che vengono aggiunti nuovi elementi.

Per le matrici con un numero ridotto di elementi, la classe ATL [CSimpleArray](../../atl/reference/csimplearray-class.md) può essere utilizzato.

`CAtlArray` è strettamente correlato di MFC `CArray` classe e funzionerà in un progetto MFC, ma senza il supporto della serializzazione.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="add"></a>  CAtlArray::Add

Chiamare questo metodo per aggiungere un elemento all'oggetto matrice.

```
size_t Add(INARGTYPE element);
size_t Add();
```

### <a name="parameters"></a>Parametri

*Elemento*<br/>
L'elemento da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice dell'elemento aggiunto.

### <a name="remarks"></a>Note

Il nuovo elemento viene aggiunto alla fine della matrice. Se nessun elemento è specificato, viene aggiunto un elemento vuoto; vale a dire, la matrice viene aumentata di dimensioni come se è stato aggiunto un elemento di reale. Se l'operazione ha esito negativo, [AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow) viene chiamato con l'argomento E_OUTOFMEMORY.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#1](../../atl/codesnippet/cpp/catlarray-class_1.cpp)]

##  <a name="append"></a>  CAtlArray::Append

Chiamare questo metodo per aggiungere il contenuto di una matrice alla fine di un altro.

```
size_t Append(const CAtlArray<E, ETraits>& aSrc);
```

### <a name="parameters"></a>Parametri

*aSrc*<br/>
Matrice da accodare.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice del primo elemento aggiunto.

### <a name="remarks"></a>Note

Gli elementi nella matrice fornita vengono aggiunti alla fine della matrice esistente. Se necessario, verrà allocata memoria per contenere i nuovi elementi.

Le matrici devono essere dello stesso tipo e non è possibile aggiungere una matrice a se stesso.

Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` argomento non è una matrice valida o se *aSrc* fa riferimento allo stesso oggetto. Nelle build di rilascio, argomenti non validi possono causare un comportamento imprevedibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#2](../../atl/codesnippet/cpp/catlarray-class_2.cpp)]

##  <a name="assertvalid"></a>  CAtlArray::AssertValid

Chiamare questo metodo per verificare che l'oggetto matrice sia valido.

```
void AssertValid() const;
```

### <a name="remarks"></a>Note

Se l'oggetto matrice non è valido, ATLASSERT genera un'asserzione. Questo metodo è disponibile solo se è definito debug.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#3](../../atl/codesnippet/cpp/catlarray-class_3.cpp)]

##  <a name="catlarray"></a>  CAtlArray::CAtlArray

Costruttore.

```
CAtlArray() throw();
```

### <a name="remarks"></a>Note

Inizializza l'oggetto matrice.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#4](../../atl/codesnippet/cpp/catlarray-class_4.cpp)]

##  <a name="dtor"></a>  CAtlArray:: ~ CAtlArray

Distruttore.

```
~CAtlArray() throw();
```

### <a name="remarks"></a>Note

Consente di liberare le risorse usate dall'oggetto matrice.

##  <a name="copy"></a>  CAtlArray::Copy

Chiamare questo metodo per copiare gli elementi di una matrice a un altro.

```
void Copy(const CAtlArray<E, ETraits>& aSrc);
```

### <a name="parameters"></a>Parametri

*aSrc*<br/>
L'origine degli elementi da copiare in una matrice.

### <a name="remarks"></a>Note

Chiamare questo metodo per sovrascrivere gli elementi di una matrice con gli elementi di un'altra matrice. Se necessario, verrà allocata memoria per contenere i nuovi elementi. Non è possibile copiare elementi della matrice a se stesso.

Se il contenuto esistente della matrice devono essere conservate, usare [CAtlArray::Append](#append) invece.

Nelle build di debug, verrà generato un ATLASSERT se esistente `CAtlArray` oggetto non è valido, oppure se *aSrc* fa riferimento allo stesso oggetto. Nelle build di rilascio, argomenti non validi possono causare un comportamento imprevedibile.

> [!NOTE]
> `CAtlArray::Copy` non supporta matrici costituite da elementi creati con la [CAutoPtr](../../atl/reference/cautoptr-class.md) classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#5](../../atl/codesnippet/cpp/catlarray-class_5.cpp)]

##  <a name="freeextra"></a>  CAtlArray::FreeExtra

Chiamare questo metodo per rimuovere eventuali elementi vuoti dalla matrice.

```
void FreeExtra() throw();
```

### <a name="remarks"></a>Note

Vengono rimossi tutti gli elementi vuoti, ma le dimensioni e il limite superiore della matrice rimangono invariati.

Nelle build di debug, verrà generato un ATLASSERT se l'oggetto CAtlArray non è valido o se la matrice verrà superata la dimensione massima.

##  <a name="getat"></a>  CAtlArray::GetAt

Chiamare che questo metodo recupera un singolo elemento dall'oggetto matrice.

```
const E& GetAt(size_t iElement) const throw();
E& GetAt(size_t iElement) throw();
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Il valore di indice dell'elemento della matrice da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'elemento della matrice obbligatorio.

### <a name="remarks"></a>Note

Nelle build di debug, verrà generato un ATLASSERT se *iElement* supera il numero di elementi nella matrice. Nelle build di rilascio, un argomento non valido può causare un comportamento imprevedibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#6](../../atl/codesnippet/cpp/catlarray-class_6.cpp)]

##  <a name="getcount"></a>  CAtlArray::GetCount

Chiamare questo metodo per restituire il numero di elementi archiviati nella matrice.

```
size_t GetCount() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi archiviati nella matrice.

### <a name="remarks"></a>Note

Il primo elemento nella matrice è nella posizione 0, il valore restituito da `GetCount` è sempre 1 maggiore dell'indice più grande.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlArray::GetAt](#getat).

##  <a name="getdata"></a>  CAtlArray::GetData

Chiamare questo metodo per restituire un puntatore al primo elemento nella matrice.

```
E* GetData() throw();
const E* GetData() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla posizione di memoria, l'archiviazione al primo elemento nella matrice. Se nessun elemento è disponibile, viene restituito NULL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#7](../../atl/codesnippet/cpp/catlarray-class_7.cpp)]

##  <a name="inargtype"></a>  CAtlArray::INARGTYPE

Il tipo di dati da utilizzare per l'aggiunta di elementi nella matrice.

```
typedef ETraits::INARGTYPE INARGTYPE;
```

##  <a name="insertarrayat"></a>  CAtlArray::InsertArrayAt

Chiamare questo metodo per inserire una matrice in un altro.

```
void InsertArrayAt(size_t iStart, const CAtlArray<E, ETraits>* paNew);
```

### <a name="parameters"></a>Parametri

*iStart*<br/>
Indice in corrispondenza del quale la matrice deve essere inserito.

*paNew*<br/>
Matrice da inserire.

### <a name="remarks"></a>Note

Gli elementi dalla matrice *paNew* vengono copiati nell'oggetto matrice, iniziando dall'elemento *iStart*. Gli elementi della matrice esistenti vengono spostati per evitare la sovrascrittura.

Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido, oppure se il *paNew* puntatore è NULL o non valido.

> [!NOTE]
> `CAtlArray::InsertArrayAt` non supporta matrici costituite da elementi creati con la [CAutoPtr](../../atl/reference/cautoptr-class.md) classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#8](../../atl/codesnippet/cpp/catlarray-class_8.cpp)]

##  <a name="insertat"></a>  CAtlArray::InsertAt

Chiamare questo metodo per inserire un nuovo elemento (o più copie di un elemento) nell'oggetto matrice.

```
void InsertAt(size_t iElement, INARGTYPE element, size_t nCount = 1);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Indice in cui uno o più elementi devono essere inseriti.

*Elemento*<br/>
Il valore di uno o più elementi da inserire.

*nCount*<br/>
Il numero di elementi da aggiungere.

### <a name="remarks"></a>Note

Inserisce uno o più elementi nella matrice, iniziando in corrispondenza dell'indice *iElement*. Gli elementi esistenti vengono spostati per evitare la sovrascrittura.

Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido, il numero di elementi da aggiungere è uguale a zero o è troppo grande per la matrice contenere il numero combinato di elementi. Nelle build di vendita al dettaglio, il passaggio di parametri non validi può provocare risultati imprevisti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#9](../../atl/codesnippet/cpp/catlarray-class_9.cpp)]

##  <a name="isempty"></a>  CAtlArray::IsEmpty

Chiamare questo metodo per verificare se la matrice è vuota.

```
bool IsEmpty() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se la matrice è vuota, false in caso contrario.

### <a name="remarks"></a>Note

La matrice è detto vuoto se non contiene alcun elemento. Pertanto, anche se la matrice contiene elementi vuoti, non è vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#10](../../atl/codesnippet/cpp/catlarray-class_10.cpp)]

##  <a name="operator_at"></a>  [] CAtlArray::operator

Chiamare questo operatore per restituire un riferimento a un elemento nella matrice.

```
E& operator[](size_t ielement) throw();
const E& operator[](size_t ielement) const throw();
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
Il valore di indice dell'elemento della matrice da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'elemento della matrice obbligatorio.

### <a name="remarks"></a>Note

Esegue una funzione simile ai [CAtlArray::GetAt](#getat). A differenza della classe MFC [CArray](../../mfc/reference/carray-class.md), questo operatore non può essere usato in sostituzione di [CAtlArray::SetAt](#setat).

Nelle build di debug, verrà generato un ATLASSERT se *iElement* supera il numero totale di elementi nella matrice. Nelle build di vendita al dettaglio, un parametro non valido può causare risultati imprevedibili.

##  <a name="outargtype"></a>  CAtlArray::OUTARGTYPE

Il tipo di dati da utilizzare per recuperare elementi dalla matrice.

```
typedef ETraits::OUTARGTYPE OUTARGTYPE;
```

##  <a name="removeall"></a>  CAtlArray::RemoveAll

Chiamare questo metodo per rimuovere tutti gli elementi dall'oggetto matrice.

```
void RemoveAll() throw();
```

### <a name="remarks"></a>Note

Rimuove tutti gli elementi dall'oggetto matrice.

Questo metodo chiama [CAtlArray::SetCount](#setcount) per ridimensionare la matrice e successivamente libera tutta la memoria allocata.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlArray::IsEmpty](#isempty).

##  <a name="removeat"></a>  CAtlArray::RemoveAt

Chiamare questo metodo per rimuovere uno o più elementi dalla matrice.

```
void RemoveAt(size_t iElement, size_t nCount = 1);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
L'indice del primo elemento da rimuovere.

*nCount*<br/>
Numero di elementi da rimuovere.

### <a name="remarks"></a>Note

Rimuove uno o più elementi della matrice. Tutti gli elementi rimanenti vengono spostati verso il basso. Il limite superiore è ridotto, ma non viene liberata memoria fino a una chiamata a [CAtlArray::FreeExtra](#freeextra) viene eseguita.

Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido, oppure se il totale combinato delle *iElement* e *nCount* supera il numero totale di elementi nella matrice. Nelle build di vendita al dettaglio, parametri non validi possono causare risultati imprevedibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#11](../../atl/codesnippet/cpp/catlarray-class_11.cpp)]

##  <a name="setat"></a>  CAtlArray::SetAt

Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice.

```
void SetAt(size_t iElement, INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
L'indice che punta all'elemento della matrice da impostare.

*Elemento*<br/>
Il nuovo valore dell'elemento specificato.

### <a name="remarks"></a>Note

Nelle build di debug, verrà generato un ATLASSERT se *iElement* supera il numero di elementi nella matrice. Nelle build di vendita al dettaglio, un parametro non valido può comportare risultati imprevisti.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlArray::GetAt](#getat).

##  <a name="setcount"></a>  CAtlArray::SetCount

Chiamare questo metodo per impostare le dimensioni dell'oggetto matrice.

```
bool SetCount(size_t nNewSize, int nGrowBy = - 1);
```

### <a name="parameters"></a>Parametri

*nNewSize*<br/>
La dimensione necessaria della matrice.

*nGrowBy*<br/>
Un valore utilizzato per determinare le dimensioni di buffer. Il valore -1 determina un valore calcolato internamente da utilizzare.

### <a name="return-value"></a>Valore restituito

Restituisce true se la matrice è stata ridimensionata, false in caso contrario.

### <a name="remarks"></a>Note

La matrice può aumentare o diminuire le dimensioni. Se aumenta, gli elementi vuoti aggiuntivi vengono aggiunti alla matrice. Se è diminuito, verranno eliminati gli elementi con indici più grande e liberata memoria.

Usare questo metodo per impostare le dimensioni della matrice prima di poterla usare. Se `SetCount` non viene utilizzato, il processo di aggiunta di elementi, e l'allocazione di memoria successive eseguite, riduce le prestazioni e frammentazione della memoria.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CAtlArray::GetData](#getdata).

##  <a name="setatgrow"></a>  CAtlArray::SetAtGrow

Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice, espandendo la matrice in base alle esigenze.

```
void SetAtGrow(size_t iElement, INARGTYPE element);
```

### <a name="parameters"></a>Parametri

*iElement*<br/>
L'indice che punta all'elemento della matrice da impostare.

*Elemento*<br/>
Il nuovo valore dell'elemento specificato.

### <a name="remarks"></a>Note

Sostituisce il valore dell'elemento a cui punta l'indice. Se *iElement* è maggiore della dimensione corrente della matrice, la matrice viene automaticamente aumentata tramite una chiamata a [CAtlArray::SetCount](#setcount). Nelle build di debug, verrà generato un ATLASSERT se il `CAtlArray` oggetto non è valido. Nelle build di vendita al dettaglio, parametri non validi possono causare risultati imprevedibili.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#12](../../atl/codesnippet/cpp/catlarray-class_12.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MMXSwarm](../../visual-cpp-samples.md)<br/>
[Esempio DynamicConsumer](../../visual-cpp-samples.md)<br/>
[Esempio UpdatePV](../../visual-cpp-samples.md)<br/>
[Esempio di testo scorrevole](../../visual-cpp-samples.md)<br/>
[Classe CArray](../../mfc/reference/carray-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
