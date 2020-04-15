---
title: Classe CObArray
ms.date: 11/04/2016
f1_keywords:
- CObArray
- AFXCOLL/CObArray
- AFXCOLL/CObArray::CObArray
- AFXCOLL/CObArray::Add
- AFXCOLL/CObArray::Append
- AFXCOLL/CObArray::Copy
- AFXCOLL/CObArray::ElementAt
- AFXCOLL/CObArray::FreeExtra
- AFXCOLL/CObArray::GetAt
- AFXCOLL/CObArray::GetCount
- AFXCOLL/CObArray::GetData
- AFXCOLL/CObArray::GetSize
- AFXCOLL/CObArray::GetUpperBound
- AFXCOLL/CObArray::InsertAt
- AFXCOLL/CObArray::IsEmpty
- AFXCOLL/CObArray::RemoveAll
- AFXCOLL/CObArray::RemoveAt
- AFXCOLL/CObArray::SetAt
- AFXCOLL/CObArray::SetAtGrow
- AFXCOLL/CObArray::SetSize
helpviewer_keywords:
- CObArray [MFC], CObArray
- CObArray [MFC], Add
- CObArray [MFC], Append
- CObArray [MFC], Copy
- CObArray [MFC], ElementAt
- CObArray [MFC], FreeExtra
- CObArray [MFC], GetAt
- CObArray [MFC], GetCount
- CObArray [MFC], GetData
- CObArray [MFC], GetSize
- CObArray [MFC], GetUpperBound
- CObArray [MFC], InsertAt
- CObArray [MFC], IsEmpty
- CObArray [MFC], RemoveAll
- CObArray [MFC], RemoveAt
- CObArray [MFC], SetAt
- CObArray [MFC], SetAtGrow
- CObArray [MFC], SetSize
ms.assetid: 27894efd-2370-4776-9ed9-24a98492af17
ms.openlocfilehash: 7b923fd9231d3652d8d2f1750a8024d15287811e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360455"
---
# <a name="cobarray-class"></a>Classe CObArray

Supporta matrici di puntatori `CObject` .

## <a name="syntax"></a>Sintassi

```
class CObArray : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray::CObArray](#cobarray)|Costruisce una matrice `CObject` vuota per i puntatori.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray::Aggiungi](#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::Aggiungi](#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::Copia](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CObArray::FreeExtra](#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CObArray::GetAt](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CObArray::GetCount](#getcount)|Ottiene il numero di elementi nella matrice.|
|[CObArray::GetData](#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|
|[CObArray::GetSize](#getsize)|Ottiene il numero di elementi nella matrice.|
|[CObArray::GetUpperBound](#getupperbound)|Restituisce il massimo indice valido.|
|[CObArray::InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CObArray::IsEmpty](#isempty)|Determina se la matrice è vuota.|
|[CObArray::RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CObArray::RemoveAt](#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CObArray::SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CObArray::SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::SetSize](#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray::operatore \[\]](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Queste matrici di oggetti sono simili alle matrici C, ma possono ridursi e aumentare dinamicamente in base alle esigenze.

Gli indici di matrice iniziano sempre dalla posizione 0.Array indexes always start at position 0. È possibile decidere se correggere il limite superiore o consentire l'espansione della matrice quando si aggiungono elementi oltre il limite corrente. La memoria viene allocata contiguamente al limite superiore, anche se alcuni elementi sono null.

In Win32, la `CObArray` dimensione di un oggetto è limitata solo alla memoria disponibile.

Come con una matrice C, `CObArray` il tempo di accesso per un elemento indicizzato è costante ed è indipendente dalla dimensione della matrice.

`CObArray`incorpora la macro IMPLEMENT_SERIAL per supportare la serializzazione e il dump dei relativi elementi. Se una `CObject` matrice di puntatori viene archiviata in un archivio, con l'operatore di inserimento di overload o con la `Serialize` funzione membro, ogni `CObject` elemento viene, a sua volta, serializzato insieme al relativo indice di matrice.

Se è necessario un `CObject` dump di singoli elementi in una `CDumpContext` matrice, è necessario impostare la profondità dell'oggetto su 1 o su un valore maggiore.

Quando `CObArray` un oggetto viene eliminato o quando i `CObject` relativi elementi vengono rimossi, vengono rimossi solo i puntatori, non gli oggetti a cui fanno riferimento.

> [!NOTE]
> Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

La derivazione della classe di matrice è simile alla derivazione dell'elenco. Per informazioni dettagliate sulla derivazione di una classe di elenco per scopi speciali, vedere l'articolo [Raccolte](../../mfc/collections.md).

> [!NOTE]
> Se si intende serializzare la matrice, è necessario utilizzare la macro IMPLEMENT_SERIAL nell'implementazione della classe derivata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CObArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll.h

## <a name="cobarrayadd"></a><a name="add"></a>CObArray::Aggiungi

Aggiunge un nuovo elemento alla fine di una matrice, aumentando la matrice di 1.

```
INT_PTR Add(CObject* newElement);
```

### <a name="parameters"></a>Parametri

*nuovoElemento*<br/>
Puntatore `CObject` da aggiungere a questa matrice.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Se [SetSize](#setsize) è stato utilizzato con un valore *nGrowBy* maggiore di 1, è possibile allocare memoria aggiuntiva. Tuttavia, il limite superiore aumenterà di solo 1.

Nella tabella seguente vengono illustrate altre `CObArray::Add`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR Add( BYTE** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR Add( DWORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR Add( void** <strong>\*</strong> `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR Add( LPCTSTR** `newElement` **); throw( CMemoryException\* );**<br /><br /> **INT_PTR Add(const CString&** `newElement` **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR Add( UINT** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR Add( WORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#75](../../mfc/codesnippet/cpp/cobarray-class_1.cpp)]

I risultati di questo programma sono i seguenti:

```Output
Add example: A CObArray with 2 elements
[0] = a CAge at $442A 21
[1] = a CAge at $4468 40
```

## <a name="cobarrayappend"></a><a name="append"></a>CObArray::Aggiungi

Chiamare questa funzione membro per aggiungere il contenuto di un'altra matrice alla fine della matrice specificata.

```
INT_PTR Append(const CObArray& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Origine degli elementi da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Indice del primo elemento accodato.

### <a name="remarks"></a>Osservazioni

Le matrici devono essere dello stesso tipo.

Se necessario, `Append` è possibile allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.

Nella tabella seguente vengono illustrate altre `CObArray::Append`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR Append( const CByteArray&** *src* **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR Append( const CDWordArray&** *src* **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR Append( const CPtrArray&** *src* **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR Append( const CStringArray&** *src* **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR Append( const CUIntArray&** *src* **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR Append( const CWordArray&** *src* **);**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#76](../../mfc/codesnippet/cpp/cobarray-class_2.cpp)]

## <a name="cobarraycopy"></a><a name="copy"></a>CObArray::Copia

Chiamare questa funzione membro per sovrascrivere gli elementi della matrice specificata con gli elementi di un'altra matrice dello stesso tipo.

```
void Copy(const CObArray& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Origine degli elementi da copiare nella matrice.

### <a name="remarks"></a>Osservazioni

`Copy`non libera memoria; Tuttavia, se `Copy` necessario, può allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.

Nella tabella seguente vengono illustrate altre `CObArray::Copy`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void Copy( const CByteArray&** *src* **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void Copy( const CDWordArray&** *src* **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void Copy( const CPtrArray&** *src* **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void Copy( const CStringArray&** *src* **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void Copy( const CUIntArray&** *src* **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void Copy( const CWordArray&** *src* **);**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#77](../../mfc/codesnippet/cpp/cobarray-class_3.cpp)]

## <a name="cobarraycobarray"></a><a name="cobarray"></a>CObArray::CObArray

Costruisce una `CObject` matrice di puntatori vuota.

```
CObArray();
```

### <a name="remarks"></a>Osservazioni

La matrice cresce un elemento alla volta.

Nella tabella seguente vengono illustrati altri `CObArray::CObArray`costruttori simili a .

|Classe|Costruttore|
|-----------|-----------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**CByteArray( );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**CDWordArray( );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**CPtrArray( );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CStringArray( );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**CUIntArray( );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**CWordArray( );**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#78](../../mfc/codesnippet/cpp/cobarray-class_4.cpp)]

## <a name="cobarrayelementat"></a><a name="elementat"></a>CObArray::ElementAt

Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.

```
CObject*& ElementAt(INT_PTR nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.

### <a name="return-value"></a>Valore restituito

Riferimento a `CObject` un puntatore.

### <a name="remarks"></a>Osservazioni

Viene utilizzato per implementare l'operatore di assegnazione sul lato sinistro per le matrici. Si noti che si tratta di una funzione avanzata che deve essere utilizzata solo per implementare operatori di matrice speciali.

Nella tabella seguente vengono illustrate altre `CObArray::ElementAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE& ElementAt( INT_PTR** `nIndex` **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD& ElementAt( INT_PTR** `nIndex` **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\*& ElementAt( INT_PTR** `nIndex` **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString& ElementAt( INT_PTR** `nIndex` **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT& ElementAt( INT_PTR** `nIndex` **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD& ElementAt( INT_PTR** `nIndex` **);**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [CObArray::GetSize](#getsize).

## <a name="cobarrayfreeextra"></a><a name="freeextra"></a>CObArray::FreeExtra

Libera qualsiasi memoria aggiuntiva allocata durante l'accresciuta dell'array.

```
void FreeExtra();
```

### <a name="remarks"></a>Osservazioni

Questa funzione non ha alcun effetto sulla dimensione o sul limite superiore della matrice.

Nella tabella seguente vengono illustrate altre `CObArray::FreeExtra`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void FreeExtra( );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void FreeExtra( );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void FreeExtra( );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void FreeExtra( );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void FreeExtra( );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void FreeExtra( );**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [CObArray::GetData](#getdata).

## <a name="cobarraygetat"></a><a name="getat"></a>CObArray::GetAt

Restituisce l'elemento della matrice in corrispondenza dell'indice specificato.

```
CObject* GetAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.

### <a name="return-value"></a>Valore restituito

Elemento `CObject` puntatore attualmente in corrispondenza di questo indice.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se si passa un valore negativo o `GetUpperBound` un valore maggiore del valore restituito da, verrà eseguito un'asserzione non riuscita.

Nella tabella seguente vengono illustrate altre `CObArray::GetAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE GetAt( INT_PTR** `nIndex` **) const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD GetAt( INT_PTR** `nIndex` **) const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\* GetAt( INT_PTR** `nIndex` **) const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString GetAt( INT_PTR** `nIndex` **) const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT GetAt( INT_PTR** `nIndex` **) const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD GetAt( INT_PTR** `nIndex` **) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#79](../../mfc/codesnippet/cpp/cobarray-class_5.cpp)]

## <a name="cobarraygetcount"></a><a name="getcount"></a>CObArray::GetCount

Restituisce il numero di elementi della matrice.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono in base zero, la dimensione è maggiore di 1 rispetto all'indice più grande.

Nella tabella seguente vengono illustrate altre `CObArray::GetCount`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetCount( ) const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetCount( ) const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetCount( ) const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetCount( ) const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetCount( ) const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetCount( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#80](../../mfc/codesnippet/cpp/cobarray-class_6.cpp)]

## <a name="cobarraygetdata"></a><a name="getdata"></a>CObArray::GetData

Utilizzare questa funzione membro per ottenere l'accesso diretto agli elementi nella matrice.

```
const CObject** GetData() const;

CObject** GetData();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla matrice `CObject` di puntatori.

### <a name="remarks"></a>Osservazioni

Se non sono `GetData` disponibili elementi, restituisce un valore null.

Mentre l'accesso diretto agli elementi di una matrice può `GetData`aiutare a lavorare più rapidamente, prestare attenzione quando si chiama ; eventuali errori che si commette influiscono direttamente sugli elementi dell'array.

Nella tabella seguente vengono illustrate altre `CObArray::GetData`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**const\* BYTE GetData( ) const; BYTE\* GetData( );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**const DWORD\* GetData( ) const;DWORD\* GetData( );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**const\* \* void GetData( )\* \* const;void GetData( );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**const CString\* GetData( ) const; CString\* GetData( );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**const UINT\* GetData( ) const; UINT\* GetData( );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**const\* WORD GetData( ) const; WORD\* GetData( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#81](../../mfc/codesnippet/cpp/cobarray-class_7.cpp)]

## <a name="cobarraygetsize"></a><a name="getsize"></a>CObArray::GetSize

Restituisce le dimensioni della matrice.

```
INT_PTR GetSize() const;
```

### <a name="remarks"></a>Osservazioni

Poiché gli indici sono in base zero, la dimensione è maggiore di 1 rispetto all'indice più grande.

Nella tabella seguente vengono illustrate altre `CObArray::GetSize`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetSize( ) const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetSize( ) const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetSize( ) const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetSize( ) const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetSize( ) const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetSize( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#82](../../mfc/codesnippet/cpp/cobarray-class_8.cpp)]

## <a name="cobarraygetupperbound"></a><a name="getupperbound"></a>CObArray::GetUpperBound

Restituisce il limite superiore corrente di questa matrice.

```
INT_PTR GetUpperBound() const;
```

### <a name="return-value"></a>Valore restituito

Indice del limite superiore (in base zero).

### <a name="remarks"></a>Osservazioni

Poiché gli indici di matrice sono in base zero, questa funzione restituisce un valore 1 minore di `GetSize`.

La `GetUpperBound( )` condizione -1 indica che la matrice non contiene elementi.

Nella tabella seguente vengono illustrate altre `CObArray::GetUpperBound`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetUpperBound( ) const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetUpperBound( ) const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetUpperBound( ) const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetUpperBound( ) const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetUpperBound( ) const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetUpperBound( ) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#83](../../mfc/codesnippet/cpp/cobarray-class_9.cpp)]

## <a name="cobarrayinsertat"></a><a name="insertat"></a>CObArray::InsertAt

Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.

```
void InsertAt(
    INT_PTR nIndex,
    CObject* newElement,
    INT_PTR nCount = 1);

void InsertAt(
    INT_PTR nStartIndex,
    CObArray* pNewArray);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer che può essere maggiore del `GetUpperBound`valore restituito da .

*nuovoElemento*<br/>
Puntatore `CObject` da inserire in questa matrice. È consentito *un newElement* di valore NULL.

*nConteggio*<br/>
Il numero di volte in cui questo elemento deve essere inserito (il valore predefinito è 1).

*nInizioIndice*<br/>
Indice Integer che può essere maggiore del `GetUpperBound`valore restituito da .

*pNewArray (matrice)*<br/>
Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.

### <a name="remarks"></a>Osservazioni

La prima `InsertAt` versione di inserisce un elemento (o più copie di un elemento) in corrispondenza di un indice specificato in una matrice. Nel processo, sposta verso l'alto (incrementando l'indice) l'elemento esistente in corrispondenza di questo indice e sposta verso l'alto tutti gli elementi al di sopra di esso.

La seconda versione inserisce tutti `CObArray` gli elementi di un'altra raccolta, a partire dalla posizione *nStartIndex.*

La `SetAt` funzione, al contrario, sostituisce un elemento di matrice specificato e non sposta alcun elemento.

Nella tabella seguente vengono illustrate altre `CObArray::InsertAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, BYTE** `newElement` **, int** `nCount` **- 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CByteArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, DWORD** `newElement` **, int** `nCount` **- 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CDWordArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **, int** `nCount` **, 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CPtrArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, LPCTSTR** `newElement` **, int** `nCount` **- 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CStringArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, UINT** `newElement` , **int** `nCount` **e 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CUIntArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void InsertAt( INT_PTR** `nIndex` **, WORD** `newElement` **, int** `nCount` **, 1 );**<br /><br /> **throw( CMemoryException\* );**<br /><br /> **void InsertAt( INT_PTR** `nStartIndex` **, CWordArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **throw( CMemoryException\* );**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#84](../../mfc/codesnippet/cpp/cobarray-class_10.cpp)]

I risultati di questo programma sono i seguenti:

```Output
InsertAt example: A CObArray with 3 elements
[0] = a CAge at $45C8 21
[1] = a CAge at $4646 30
[2] = a CAge at $4606 40
```

## <a name="cobarrayisempty"></a><a name="isempty"></a>CObArray::IsEmpty

Determina se la matrice è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la matrice è vuota; in caso contrario 0.

## <a name="cobarrayoperator--"></a><a name="operator_at"></a>CObArray::operator [ ]

Questi operatori di pedice `SetAt` sono `GetAt` un comodo sostituto per le funzioni e .

```
CObject*& operator[](int_ptr nindex);
CObject* operator[](int_ptr nindex) const;
```

### <a name="remarks"></a>Osservazioni

Il primo operatore, chiamato per le matrici che non sono **const**, può essere utilizzato a destra (r-value) o a sinistra (l-value) di un'istruzione di assegnazione. Il secondo, chiamato per le matrici **const,** può essere utilizzato solo a destra.

La versione di debug della libreria asserisce se il pedice (a sinistra o a destra di un'istruzione di assegnazione) non è più limitato.

Nella tabella seguente vengono illustrati `CObArray::operator []`altri operatori simili a .

|Classe|Operatore|
|-----------|--------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE& operatore [](int_ptr** `nindex` ** \);**<br /><br /> **OPERATORe BYTE [](int_ptr** `nindex` ** \) const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**Operatore& DWORD [](int_ptr** `nindex` ** \);**<br /><br /> **Operatore DWORD [](int_ptr** `nindex` ** \) const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void\*& operatore [](int_ptr** `nindex` ** \);**<br /><br /> **void\* operator [](int_ptr** `nindex` ** \) const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**Operatore& CString [](int_ptr** `nindex` ** \);**<br /><br /> **CString (operatore](int_ptr** `nindex` ** \) const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT& operatore [](int_ptr** `nindex` ** \);**<br /><br /> **UINT (operatore](int_ptr** `nindex` ** \) const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD& operatore [](int_ptr** `nindex` ** \);**<br /><br /> **Operatore WORD [](int_ptr** `nindex` ** \) const;**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#88](../../mfc/codesnippet/cpp/cobarray-class_11.cpp)]

## <a name="cobarrayremoveall"></a><a name="removeall"></a>CObArray::RemoveAll

Rimuove tutti i puntatori da questa matrice `CObject` ma non elimina effettivamente gli oggetti.

```
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Se la matrice è già vuota, la funzione funziona ancora.

La `RemoveAll` funzione libera tutta la memoria utilizzata per l'archiviazione dei puntatori.

Nella tabella seguente vengono illustrate altre `CObArray::RemoveAll`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void RemoveAll( );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void RemoveAll( );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void RemoveAll( );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void RemoveAll( );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void RemoveAll( );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void RemoveAll( );**|

### <a name="example"></a>Esempio

Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#85](../../mfc/codesnippet/cpp/cobarray-class_12.cpp)]

## <a name="cobarrayremoveat"></a><a name="removeat"></a>CObArray::RemoveAt

Rimuove uno o più elementi a partire da un indice specificato in una matrice.

```
void RemoveAt(
    INT_PTR nIndex,
    INT_PTR nCount = 1);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.

*nConteggio*<br/>
Numero di elementi da rimuovere.

### <a name="remarks"></a>Osservazioni

Nel processo, sposta verso il basso tutti gli elementi sopra gli elementi rimossi. Decrementa il limite superiore della matrice ma non libera memoria.

Se si tenta di rimuovere più elementi di quelli contenuti nella matrice sopra il punto di rimozione, la versione di debug della libreria asserisce.

La `RemoveAt` funzione `CObject` rimuove il puntatore dalla matrice, ma non elimina l'oggetto stesso.

Nella tabella seguente vengono illustrate altre `CObArray::RemoveAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **1 );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **1 );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **1 );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **1 );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** `nCount` **1 );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void RemoveAt( INT_PTR** `nIndex` **, INT_PTR** *nCount* **: 1 );**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#112](../../mfc/codesnippet/cpp/cobarray-class_13.cpp)]

I risultati di questo programma sono i seguenti:

```Output
RemoveAt example: A CObArray with 1 elements
[0] = a CAge at $4606 40
```

## <a name="cobarraysetat"></a><a name="setat"></a>CObArray::SetAt

Imposta l'elemento della matrice in corrispondenza dell'indice specificato.

```
void SetAt(
    INT_PTR nIndex,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound`.

*nuovoElemento*<br/>
Puntatore all'oggetto da inserire in questa matrice. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

`SetAt`non farà crescere l'array. Utilizzare `SetAtGrow` se si desidera che l'array cresca automaticamente.

È necessario assicurarsi che il valore di indice rappresenti una posizione valida nella matrice. Se non è esaurito, la versione di debug della libreria asserisce.

Nella tabella seguente vengono illustrate altre `CObArray::SetAt`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetAt( INT_PTR** `nIndex` **, BYTE** `newElement` **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, DWORD** `newElement` **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, UINT** `newElement` **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetAt( INT_PTR** `nIndex` **, WORD** `newElement` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#86](../../mfc/codesnippet/cpp/cobarray-class_14.cpp)]

I risultati di questo programma sono i seguenti:

```Output
SetAt example: A CObArray with 2 elements
[0] = a CAge at $47E0 30
[1] = a CAge at $47A0 40
```

## <a name="cobarraysetatgrow"></a><a name="setatgrow"></a>CObArray::SetAtGrow

Imposta l'elemento della matrice in corrispondenza dell'indice specificato.

```
void SetAtGrow(
    INT_PTR nIndex,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice Integer maggiore o uguale a 0.

*nuovoElemento*<br/>
Puntatore all'oggetto da aggiungere a questa matrice. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

La matrice aumenta automaticamente se necessario (ovvero, il limite superiore viene regolato in base al nuovo elemento).

Nella tabella seguente vengono illustrate altre `CObArray::SetAtGrow`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, BYTE** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, DWORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, UINT** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetAtGrow( INT_PTR** `nIndex` **, WORD** `newElement` **);**<br /><br /> **throw( CMemoryException\* );**|

### <a name="example"></a>Esempio

  Vedere [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) per un `CAge` elenco della classe utilizzata in tutti gli esempi di raccolte.

[!code-cpp[NVC_MFCCollections#87](../../mfc/codesnippet/cpp/cobarray-class_15.cpp)]

I risultati di questo programma sono i seguenti:

```Output
SetAtGrow example: A CObArray with 4 elements
[0] = a CAge at $47C0 21
[1] = a CAge at $4800 40
[2] = NULL
[3] = a CAge at $4840 65
```

## <a name="cobarraysetsize"></a><a name="setsize"></a>CObArray::SetSize

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

Se la nuova dimensione è inferiore alla dimensione precedente, la matrice viene troncata e tutta la memoria inutilizzata viene rilasciata. Per migliorare `SetSize` l'efficienza, chiamare per impostare la dimensione della matrice prima di utilizzarlo. In questo modo si evita la necessità di riallocare e copiare la matrice ogni volta che viene aggiunto un elemento.

Il parametro *nGrowBy* influisce sull'allocazione di memoria interna durante l'aumento della matrice. Il suo utilizzo non influisce `GetSize` mai `GetUpperBound`sulla dimensione della matrice come riportato da e .

Se la dimensione della matrice è aumentata, tutti i puntatori **CObject** <strong>\*</strong> appena allocati vengono impostati su NULL.

Nella tabella seguente vengono illustrate altre `CObArray::SetSize`funzioni membro simili a .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` - **-1 );**<br /><br /> **throw( CMemoryException\* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` - **-1 );**<br /><br /> **throw( CMemoryException\* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` - **-1 );**<br /><br /> **throw( CMemoryException\* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` - **-1 );**<br /><br /> **throw( CMemoryException\* );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` - **-1 );**<br /><br /> **throw( CMemoryException\* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetSize( INT_PTR** `nNewSize` **, int** `nGrowBy` - **-1 );**<br /><br /> **throw( CMemoryException\* );**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [CObArray::GetData](#getdata).

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CStringArray](../../mfc/reference/cstringarray-class.md)<br/>
[Classe CPtrArray](../../mfc/reference/cptrarray-class.md)<br/>
[Classe CByteArray](../../mfc/reference/cbytearray-class.md)<br/>
[Classe CWordArray](../../mfc/reference/cwordarray-class.md)<br/>
[Classe CDWordArray](../../mfc/reference/cdwordarray-class.md)
