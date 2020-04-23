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
ms.openlocfilehash: 20cf147e955b6b19919f35750b0f46a8b5a67ad0
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752071"
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
Classe base della classe matrice di puntatori tipizzata; deve essere una `CObArray` classe `CPtrArray`array ( o ).

*TIPO*<br/>
Tipo degli elementi archiviati nella matrice della classe base.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTypedPtrArray::Add](#add)|Aggiunge un nuovo elemento alla fine di una matrice. Aumenta l'array se necessario|
|[CTypedPtrArray::Append](#append)|Aggiunge il contenuto di una matrice alla fine di un'altra. Aumenta l'array se necessario|
|[CTypedPtrArray::Copia](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CTypedPtrArray::ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CTypedPtrArray::GetAt](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CTypedPtrArray::InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CTypedPtrArray::SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CTypedPtrArray::SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTypedPtrArray::operatore \[\]](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Quando si `CTypedPtrArray` utilizza `CPtrArray` `CObArray`invece o , la funzionalità di controllo dei tipi di C, consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.

Inoltre, il `CTypedPtrArray` wrapper esegue gran parte del cast `CObArray` che `CPtrArray`sarebbe necessario se si utilizzasse o .

Poiché `CTypedPtrArray` tutte le funzioni sono inline, l'utilizzo di questo modello non influisce in modo significativo sulle dimensioni o sulla velocità del codice.

Per ulteriori informazioni `CTypedPtrArray`sull'utilizzo di , vedere gli articoli [Raccolte](../../mfc/collections.md) e [classi basate su modelli](../../mfc/template-based-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BASE_CLASS`

`CTypedPtrArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="ctypedptrarrayadd"></a><a name="add"></a>CTypedPtrArray::Add

Questa funzione `BASE_CLASS`membro chiama **::Add**.

```
INT_PTR Add(TYPE newElement);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elemento da aggiungere alla matrice.

*nuovoElemento*<br/>
Elemento da aggiungere a questa matrice.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::Add](../../mfc/reference/cobarray-class.md#add).

## <a name="ctypedptrarrayappend"></a><a name="append"></a>CTypedPtrArray::Append

Questa funzione `BASE_CLASS`membro chiama ::Append.

```
INT_PTR Append(const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```

### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Classe base della classe matrice di puntatori tipizzata; deve essere una classe array ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).

*TIPO*<br/>
Tipo degli elementi archiviati nella matrice della classe base.

*src*<br/>
Origine degli elementi da aggiungere a una matrice.

### <a name="return-value"></a>Valore restituito

Indice del primo elemento accodato.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::Append](../../mfc/reference/cobarray-class.md#append).

## <a name="ctypedptrarraycopy"></a><a name="copy"></a>CTypedPtrArray::Copia

Questa funzione `BASE_CLASS`membro chiama **::Copy**.

```cpp
void Copy(const CTypedPtrArray<BASE_CLASS, TYPE>& src);
```

### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Classe base della classe matrice di puntatori tipizzata; deve essere una classe array ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).

*TIPO*<br/>
Tipo degli elementi archiviati nella matrice della classe base.

*src*<br/>
Origine degli elementi da copiare in una matrice.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::Copy](../../mfc/reference/cobarray-class.md#copy).

## <a name="ctypedptrarrayelementat"></a><a name="elementat"></a>CTypedPtrArray::ElementAt

Questa funzione inline chiama `BASE_CLASS` **::ElementAt**.

```
TYPE& ElementAt(INT_PTR nIndex);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati in questa matrice.

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **::GetUpperBound**.

### <a name="return-value"></a>Valore restituito

Un riferimento temporaneo all'elemento nella posizione specificata da *nIndex*. Questo elemento è del tipo specificato dal parametro di modello *TYPE*.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat).

## <a name="ctypedptrarraygetat"></a><a name="getat"></a>CTypedPtrArray::GetAt

Questa funzione inline chiama `BASE_CLASS` **::GetAt**.

```
TYPE GetAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nella matrice.

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **::GetUpperBound**.

### <a name="return-value"></a>Valore restituito

Copia dell'elemento nella posizione specificata da *nIndex*. Questo elemento è del tipo specificato dal parametro di modello *TYPE*.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::GetAt](../../mfc/reference/cobarray-class.md#getat)

## <a name="ctypedptrarrayinsertat"></a><a name="insertat"></a>CTypedPtrArray::InsertAt

Questa funzione `BASE_CLASS`membro chiama **::InsertAt**.

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
Indice integer che può essere maggiore del valore restituito da [CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound).

*TIPO*<br/>
Tipo degli elementi archiviati nella matrice della classe base.

*nuovoElemento*<br/>
Puntatore all'oggetto da inserire in questa matrice. È consentito *un newElement* di valore **NULL.**

*nConteggio*<br/>
Il numero di volte in cui questo elemento deve essere inserito (il valore predefinito è 1).

*nInizioIndice*<br/>
Indice Integer che può essere maggiore del `CObArray::GetUpperBound`valore restituito da .

*BASE_CLASS*<br/>
Classe base della classe matrice di puntatori tipizzata; deve essere una classe array ( [CObArray](../../mfc/reference/cobarray-class.md) o [CPtrArray](../../mfc/reference/cptrarray-class.md)).

*pNewArray (matrice)*<br/>
Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat).

## <a name="ctypedptrarrayoperator--"></a><a name="operator_at"></a>CTypedPtrArray::operator [ ]

Questi operatori inline chiamano `BASE_CLASS` **::operator [ ]**.

```
TYPE& operator[ ](int_ptr nindex);
TYPE operator[ ](int_ptr nindex) const;
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi archiviati nella matrice.

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da `BASE_CLASS` **::GetUpperBound**.

### <a name="remarks"></a>Osservazioni

Il primo operatore, chiamato per le matrici che non sono **const**, può essere utilizzato a destra (r-value) o a sinistra (l-value) di un'istruzione di assegnazione. Il secondo, richiamato per le matrici **const,** può essere utilizzato solo a destra.

La versione di debug della libreria asserisce se il pedice (a sinistra o a destra di un'istruzione di assegnazione) non è più limitato.

## <a name="ctypedptrarraysetat"></a><a name="setat"></a>CTypedPtrArray::SetAt

Questa funzione `BASE_CLASS`membro chiama **::SetAt**.

```cpp
void SetAt(
    INT_PTR nIndex,
    TYPE ptr);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da [CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound).

*TIPO*<br/>
Tipo degli elementi archiviati nella matrice della classe base.

*Ptr*<br/>
Puntatore all'elemento da inserire nella matrice in corrispondenza di nIndex. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::SetAt](../../mfc/reference/cobarray-class.md#setat).

## <a name="ctypedptrarraysetatgrow"></a><a name="setatgrow"></a>CTypedPtrArray::SetAtGrow

Questa funzione `BASE_CLASS`membro chiama **::SetAtGrow**.

```cpp
void SetAtGrow(
    INT_PTR nIndex,
    TYPE newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0.

*TIPO*<br/>
Tipo degli elementi archiviati nella matrice della classe base.

*nuovoElemento*<br/>
Puntatore all'oggetto da aggiungere a questa matrice. È consentito un valore **NULL.**

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow).

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CPtrArray](../../mfc/reference/cptrarray-class.md)<br/>
[Classe CObArray](../../mfc/reference/cobarray-class.md)
