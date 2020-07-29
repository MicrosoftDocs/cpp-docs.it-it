---
title: Classe CTypedPtrArray
ms.date: 11/04/2016
f1_keywords:
- CTypedPtrArray
- AFXTEMPL/CTypedPtrArray
- AFXTEMPL/CTypedPtrArray::Add
- AFXTEMPL/CTypedPtrArray::Append
- AFXTEMPL/CTypedPtrArray::Copy
- AFXTEMPL/CTypedPtrArray::ElementAt
- AFXTEMPL/CTypedPtrArray::GetAt
- AFXTEMPL/CTypedPtrArray::InsertAt
- AFXTEMPL/CTypedPtrArray::SetAt
- AFXTEMPL/CTypedPtrArray::SetAtGrow
helpviewer_keywords:
- CTypedPtrArray [MFC], Add
- CTypedPtrArray [MFC], Append
- CTypedPtrArray [MFC], Copy
- CTypedPtrArray [MFC], ElementAt
- CTypedPtrArray [MFC], GetAt
- CTypedPtrArray [MFC], InsertAt
- CTypedPtrArray [MFC], SetAt
- CTypedPtrArray [MFC], SetAtGrow
ms.assetid: e3ecdf1a-a889-4156-92dd-ddbd36ccd919
ms.openlocfilehash: db24e3992e5db70895ccc2908dba108de843bcdc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215946"
---
# <a name="ctypedptrarray-class"></a>Classe CTypedPtrArray

Fornisce un "wrapper" indipendente dai tipi per gli oggetti della classe `CPtrArray` o `CObArray`.

## <a name="syntax"></a>Sintassi

```
template<class BASE_CLASS, class TYPE>
class CTypedPtrArray : public BASE_CLASS
```

#### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Classe di base della classe Array del puntatore tipizzato; deve essere una classe Array ( `CObArray` o `CPtrArray` ).

*TYPE*<br/>
Tipo degli elementi archiviati nella matrice della classe di base.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTypedPtrArray:: Add](#add)|Aggiunge un nuovo elemento alla fine di una matrice. Aumenta la matrice se necessario|
|[CTypedPtrArray:: Append](#append)|Aggiunge il contenuto di una matrice alla fine di un altro oggetto. Aumenta la matrice se necessario|
|[CTypedPtrArray:: Copy](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CTypedPtrArray:: ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CTypedPtrArray:: GetA](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CTypedPtrArray:: InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CTypedPtrArray:: SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CTypedPtrArray:: SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore \[ CTypedPtrArray::\]](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Quando si usa `CTypedPtrArray` invece di `CPtrArray` o `CObArray` , la funzionalità di controllo dei tipi C++ consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.

Inoltre, il `CTypedPtrArray` wrapper esegue gran parte del cast che sarebbe necessario se fosse stato usato `CObArray` o `CPtrArray` .

Poiché tutte le `CTypedPtrArray` funzioni sono inline, l'uso di questo modello non influisce in modo significativo sulle dimensioni o sulla velocità del codice.

Per ulteriori informazioni sull'utilizzo di `CTypedPtrArray` , vedere gli articoli [raccolte](../../mfc/collections.md) e [classi basate su modello](../../mfc/template-based-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BASE_CLASS`

`CTypedPtrArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="ctypedptrarrayadd"></a><a name="add"></a>CTypedPtrArray:: Add

Questa funzione membro chiama `BASE_CLASS` **:: Add**.

```
INT_PTR Add(TYPE newElement);
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elemento da aggiungere alla matrice.

*newElement*<br/>
Elemento da aggiungere a questa matrice.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [Cobarrat:: Add](../../mfc/reference/cobarray-class.md#add).

## <a name="ctypedptrarrayappend"></a><a name="append"></a>CTypedPtrArray:: Append

Questa funzione membro chiama `BASE_CLASS` :: Append * *.

```
INT_PTR Append(const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```

### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Classe di base della classe Array del puntatore tipizzato; deve essere una classe Array ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).

*TYPE*<br/>
Tipo degli elementi archiviati nella matrice della classe di base.

*src*<br/>
Origine degli elementi da accodare a una matrice.

### <a name="return-value"></a>Valore restituito

Indice del primo elemento accodato.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [Cobarrat:: Append](../../mfc/reference/cobarray-class.md#append).

## <a name="ctypedptrarraycopy"></a><a name="copy"></a>CTypedPtrArray:: Copy

Questa funzione membro chiama `BASE_CLASS` **:: Copy**.

```cpp
void Copy(const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```

### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Classe di base della classe Array del puntatore tipizzato; deve essere una classe Array ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).

*TYPE*<br/>
Tipo degli elementi archiviati nella matrice della classe di base.

*src*<br/>
Origine degli elementi da copiare in una matrice.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [Cobarrat:: Copy](../../mfc/reference/cobarray-class.md#copy).

## <a name="ctypedptrarrayelementat"></a><a name="elementat"></a>CTypedPtrArray:: ElementAt

Questa funzione inline chiama `BASE_CLASS` **:: ElementAt**.

```
TYPE& ElementAt(INT_PTR nIndex);
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati in questa matrice.

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **:: GetUpperBound**.

### <a name="return-value"></a>Valore restituito

Riferimento temporaneo all'elemento nella posizione specificata da *nIndex*. Questo elemento è del tipo specificato dal *tipo*di parametro del modello.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [Cobarrat:: ElementAt](../../mfc/reference/cobarray-class.md#elementat).

## <a name="ctypedptrarraygetat"></a><a name="getat"></a>CTypedPtrArray:: GetA

Questa funzione inline chiama `BASE_CLASS` **:: Geta**.

```
TYPE GetAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nella matrice.

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **:: GetUpperBound**.

### <a name="return-value"></a>Valore restituito

Copia dell'elemento nella posizione specificata da *nIndex*. Questo elemento è del tipo specificato dal *tipo*di parametro del modello.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray:: Geta](../../mfc/reference/cobarray-class.md#getat)

## <a name="ctypedptrarrayinsertat"></a><a name="insertat"></a>CTypedPtrArray:: InsertAt

Questa funzione membro chiama `BASE_CLASS` **:: InsertAt**.

```cpp
void InsertAt(
    INT_PTR nIndex,
    TYPE newElement,
    INT_PTR nCount = 1);

void InsertAt(
    INT_PTR nStartIndex,
    CTypedPtrArray<BASE_CLASS, TYPE>* pNewArray);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer che può essere maggiore del valore restituito da [Cobarrat:: GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound).

*TYPE*<br/>
Tipo degli elementi archiviati nella matrice della classe di base.

*newElement*<br/>
Puntatore all'oggetto da inserire in questa matrice. È consentito un *newElement* di valore **null** .

*nCount*<br/>
Il numero di volte in cui l'elemento deve essere inserito (il valore predefinito è 1).

*nStartIndex*<br/>
Indice integer che può essere maggiore del valore restituito da `CObArray::GetUpperBound` .

*BASE_CLASS*<br/>
Classe di base della classe Array del puntatore tipizzato; deve essere una classe Array ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).

*pNewArray*<br/>
Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [Cobarrat:: InsertAt](../../mfc/reference/cobarray-class.md#insertat).

## <a name="ctypedptrarrayoperator--"></a><a name="operator_at"></a>CTypedPtrArray:: operator []

Questi operatori inline chiamano `BASE_CLASS` **:: operator []**.

```
TYPE& operator[ ](int_ptr nindex);
TYPE operator[ ](int_ptr nindex) const;
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nella matrice.

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **:: GetUpperBound**.

### <a name="remarks"></a>Osservazioni

Il primo operatore, chiamato per le matrici che non sono **`const`** , può essere utilizzato sia sul lato destro (r-value) che sulla sinistra (l-value) di un'istruzione di assegnazione. Il secondo oggetto, richiamato per le **`const`** matrici, può essere utilizzato solo a destra.

La versione di debug della libreria dichiara se l'indice (sul lato sinistro o destro di un'istruzione di assegnazione) non è più limitato.

## <a name="ctypedptrarraysetat"></a><a name="setat"></a>CTypedPtrArray:: SetAt

Questa funzione membro chiama `BASE_CLASS` **:: SetAt**.

```cpp
void SetAt(
    INT_PTR nIndex,
    TYPE ptr);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da [Cobarrat:: GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound).

*TYPE*<br/>
Tipo degli elementi archiviati nella matrice della classe di base.

*ptr*<br/>
Puntatore all'elemento da inserire nella matrice in corrispondenza del nIndex. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray:: SetAt](../../mfc/reference/cobarray-class.md#setat).

## <a name="ctypedptrarraysetatgrow"></a><a name="setatgrow"></a>CTypedPtrArray:: SetAtGrow

Questa funzione membro chiama `BASE_CLASS` **:: SetAtGrow**.

```cpp
void SetAtGrow(
    INT_PTR nIndex,
    TYPE newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0.

*TYPE*<br/>
Tipo degli elementi archiviati nella matrice della classe di base.

*newElement*<br/>
Puntatore all'oggetto da aggiungere a questa matrice. È consentito un valore **null** .

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [Cobarrat:: SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow).

## <a name="see-also"></a>Vedere anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CPtrArray](../../mfc/reference/cptrarray-class.md)<br/>
[CObArray (classe)](../../mfc/reference/cobarray-class.md)
