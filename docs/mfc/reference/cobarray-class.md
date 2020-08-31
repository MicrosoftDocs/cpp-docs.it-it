---
title: CObArray (classe)
description: Riferimento API per la `CObArray` `MFC` classe che archivia i `CObject` puntatori in una matrice.
ms.date: 08/27/2020
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
ms.openlocfilehash: cbc1799a9634b3d8c09077b755b8a097289460fd
ms.sourcegitcommit: c8f1605354724a13566bc3b0fac3c5d98265f1d0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/28/2020
ms.locfileid: "89062146"
---
# <a name="cobarray-class"></a>CObArray (classe)

Supporta matrici di puntatori `CObject` .

## <a name="syntax"></a>Sintassi

```cpp
class CObArray : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray:: CObArray](#cobarray)|Costruisce una matrice vuota per i `CObject` puntatori.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray:: Add](#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray:: Append](#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray:: Copy](#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray:: ElementAt](#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CObArray:: FreeExtra](#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CObArray:: GetA](#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CObArray:: GetCount](#getcount)|Ottiene il numero di elementi nella matrice.|
|[CObArray:: GetData](#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere `NULL`.|
|[CObArray:: GetSize](#getsize)|Ottiene il numero di elementi nella matrice.|
|[CObArray:: GetUpperBound](#getupperbound)|Restituisce il massimo indice valido.|
|[CObArray:: InsertAt](#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CObArray:: IsEmpty](#isempty)|Determina se la matrice è vuota.|
|[CObArray:: RemoveAll](#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CObArray:: RemoveAt](#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CObArray:: SetAt](#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CObArray:: SetAtGrow](#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CObArray:: sesize](#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray:: (operatore \[ ) \]](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Queste matrici di oggetti sono simili alle matrici C, ma possono essere compattate e aumentate in modo dinamico in modo necessario.

Gli indici di matrice iniziano sempre dalla posizione 0. È possibile decidere se correggere il limite superiore o consentire l'espansione della matrice quando si aggiungono elementi oltre il limite corrente. La memoria viene allocata in modo contiguo al limite superiore, anche se alcuni elementi sono `NULL` .

In Win32, le dimensioni di un `CObArray` oggetto sono limitate solo alla memoria disponibile.

Come con una matrice C, il tempo di accesso per un `CObArray` elemento indicizzato è costante ed è indipendente dalla dimensione della matrice.

`CObArray` incorpora la macro IMPLEMENT_SERIAL per supportare la serializzazione e il dump dei relativi elementi. Se una matrice di `CObject` puntatori viene archiviata in un archivio, con l'operatore di inserimento di overload o con la `Serialize` funzione membro, ogni `CObject` elemento viene a sua volta serializzato insieme al relativo indice di matrice.

Se è necessario un dump di singoli `CObject` elementi in una matrice, è necessario impostare la profondità dell' `CDumpContext` oggetto su un valore maggiore o uguale a 1.

Quando un `CObArray` oggetto viene eliminato o quando vengono rimossi gli elementi, `CObject` vengono rimossi solo i puntatori, non gli oggetti a cui fanno riferimento.

> [!NOTE]
> Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

La derivazione della classe Array è simile alla derivazione dell'elenco. Per informazioni dettagliate sulla derivazione di una classe di elenco per scopi specifici, vedere le [raccolte](../../mfc/collections.md)di articoli.

> [!NOTE]
> È necessario usare la macro IMPLEMENT_SERIAL nell'implementazione della classe derivata se si intende serializzare la matrice.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CObArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

## <a name="cobarrayadd"></a><a name="add"></a> CObArray:: Add

Aggiunge un nuovo elemento alla fine di una matrice, aumentando di 1 la matrice.

```cpp
INT_PTR Add(CObject* newElement);
```

### <a name="parameters"></a>Parametri

*newElement*\
`CObject`Puntatore da aggiungere a questa matrice.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Se la [dimensione](#setsize) è stata usata con un valore di *nGrowBy* maggiore di 1, è possibile allocare memoria aggiuntiva. Tuttavia, il limite superiore aumenterà di un solo 1.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::Add` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`INT_PTR Add(BYTE newElement);`<br /><br />`throw(CMemoryException*);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`INT_PTR Add(DWORD newElement);`<br /><br />`throw(CMemoryException*);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`INT_PTR Add(void* newElement);`<br /><br />`throw(CMemoryException*);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`INT_PTR Add(LPCTSTR newElement); throw(CMemoryException*);`<br /><br />`INT_PTR Add(const CString& newElement);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`INT_PTR Add(UINT newElement);`<br /><br />`throw(CMemoryException*);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`INT_PTR Add(WORD newElement);`<br /><br />`throw(CMemoryException*);`|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#75](../../mfc/codesnippet/cpp/cobarray-class_1.cpp)]

I risultati di questo programma sono i seguenti:

```Output
Add example: A CObArray with 2 elements
[0] = a CAge at $442A 21
[1] = a CAge at $4468 40
```

## <a name="cobarrayappend"></a><a name="append"></a> CObArray:: Append

Chiamare questa funzione membro per aggiungere il contenuto di un'altra matrice alla fine della matrice specificata.

```cpp
INT_PTR Append(const CObArray& src);
```

### <a name="parameters"></a>Parametri

*src*\
Origine degli elementi da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Indice del primo elemento accodato.

### <a name="remarks"></a>Osservazioni

Le matrici devono essere dello stesso tipo.

Se necessario, `Append` può allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::Append` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`INT_PTR Append(const CByteArray& src);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`INT_PTR Append(const CDWordArray& src);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`INT_PTR Append(const CPtrArray& src);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`INT_PTR Append(const CStringArray& src);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`INT_PTR Append(const CUIntArray& src);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`INT_PTR Append(const CWordArray& src);`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#76](../../mfc/codesnippet/cpp/cobarray-class_2.cpp)]

## <a name="cobarraycopy"></a><a name="copy"></a> CObArray:: Copy

Chiamare questa funzione membro per sovrascrivere gli elementi della matrice specificata con gli elementi di un'altra matrice dello stesso tipo.

```cpp
void Copy(const CObArray& src);
```

### <a name="parameters"></a>Parametri

*src*\
Origine degli elementi da copiare nella matrice.

### <a name="remarks"></a>Osservazioni

`Copy` non libera la memoria. Se necessario, `Copy` può allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::Copy` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void Copy(const CByteArray& src);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void Copy(const CDWordArray& src);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void Copy(const CPtrArray& src);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void Copy(const CStringArray& src);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void Copy(const CUIntArray& src);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void Copy(const CWordArray& src);`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#77](../../mfc/codesnippet/cpp/cobarray-class_3.cpp)]

## <a name="cobarraycobarray"></a><a name="cobarray"></a> CObArray:: CObArray

Costruisce una `CObject` matrice di puntatori vuota.

```cpp
CObArray();
```

### <a name="remarks"></a>Osservazioni

La matrice aumenta di un elemento alla volta.

Nella tabella seguente vengono illustrati altri costruttori simili a `CObArray::CObArray` .

|Classe|Costruttore|
|-----------|-----------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`CByteArray();`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`CDWordArray();`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`CPtrArray();`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`CStringArray();`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`CUIntArray();`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`CWordArray();`|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#78](../../mfc/codesnippet/cpp/cobarray-class_4.cpp)]

## <a name="cobarrayelementat"></a><a name="elementat"></a> CObArray:: ElementAt

Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.

```cpp
CObject*& ElementAt(INT_PTR nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*\
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

### <a name="return-value"></a>Valore restituito

Riferimento a un `CObject` puntatore.

### <a name="remarks"></a>Osservazioni

Viene usato per implementare l'operatore di assegnazione lato sinistro per le matrici. Si tratta di una funzione avanzata che deve essere utilizzata solo per implementare speciali operatori di matrici.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::ElementAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`BYTE& ElementAt(INT_PTR nIndex);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`DWORD& ElementAt(INT_PTR nIndex);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void*& ElementAt(INT_PTR nIndex);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`CString& ElementAt(INT_PTR nIndex);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`UINT& ElementAt(INT_PTR nIndex);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`WORD& ElementAt(INT_PTR nIndex);`|

### <a name="example"></a>Esempio

Vedere l'esempio per [Cobarrat:: GetSize](#getsize).

## <a name="cobarrayfreeextra"></a><a name="freeextra"></a> CObArray:: FreeExtra

Libera qualsiasi memoria aggiuntiva allocata mentre è cresciuta la matrice.

```cpp
void FreeExtra();
```

### <a name="remarks"></a>Osservazioni

Questa funzione non ha alcun effetto sulla dimensione o sul limite superiore della matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::FreeExtra` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void FreeExtra();`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void FreeExtra();`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void FreeExtra();`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void FreeExtra();`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void FreeExtra();`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void FreeExtra();`|

### <a name="example"></a>Esempio

  Vedere l'esempio per [Cobarrat:: GetData](#getdata).

## <a name="cobarraygetat"></a><a name="getat"></a> CObArray:: GetA

Restituisce l'elemento della matrice in corrispondenza dell'indice specificato.

```cpp
CObject* GetAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*\
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

### <a name="return-value"></a>Valore restituito

`CObject`Elemento del puntatore attualmente in corrispondenza di questo indice.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se si passa un valore negativo o un valore maggiore del valore restituito da, `GetUpperBound` viene generata un'asserzione non riuscita.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`BYTE GetAt(INT_PTR nIndex) const;`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`DWORD GetAt(INT_PTR nIndex) const;`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void* GetAt(INT_PTR nIndex) const;`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`CString GetAt(INT_PTR nIndex) const;`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`UINT GetAt(INT_PTR nIndex) const;`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`WORD GetAt(INT_PTR nIndex) const;`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#79](../../mfc/codesnippet/cpp/cobarray-class_5.cpp)]

## <a name="cobarraygetcount"></a><a name="getcount"></a> CObArray:: GetCount

Restituisce il numero di elementi di matrice.

```cpp
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono in base zero, la dimensione è 1 maggiore dell'indice più grande.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetCount` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`INT_PTR GetCount() const;`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`INT_PTR GetCount() const;`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`INT_PTR GetCount() const;`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`INT_PTR GetCount() const;`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`INT_PTR GetCount() const;`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`INT_PTR GetCount() const;`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#80](../../mfc/codesnippet/cpp/cobarray-class_6.cpp)]

## <a name="cobarraygetdata"></a><a name="getdata"></a> CObArray:: GetData

Usare questa funzione membro per ottenere l'accesso diretto agli elementi nella matrice.

```cpp
const CObject** GetData() const;

CObject** GetData();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla matrice di `CObject` puntatori.

### <a name="remarks"></a>Osservazioni

Se non sono disponibili elementi, `GetData` restituisce un `NULL` valore.

Sebbene l'accesso diretto agli elementi di una matrice possa aiutare a lavorare più rapidamente, prestare attenzione quando si chiama. gli `GetData` eventuali errori apportati influiscono direttamente sugli elementi della matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetData` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`const BYTE* GetData() const; BYTE* GetData();`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`const DWORD* GetData() const; DWORD* GetData();`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`const void** GetData() const; void** GetData();`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`const CString* GetData() const; CString* GetData();`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`const UINT* GetData() const; UINT* GetData();`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`const WORD* GetData() const; WORD* GetData();`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#81](../../mfc/codesnippet/cpp/cobarray-class_7.cpp)]

## <a name="cobarraygetsize"></a><a name="getsize"></a> CObArray:: GetSize

Restituisce le dimensioni della matrice.

```cpp
INT_PTR GetSize() const;
```

### <a name="remarks"></a>Osservazioni

Poiché gli indici sono in base zero, la dimensione è 1 maggiore dell'indice più grande.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetSize` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`INT_PTR GetSize() const;`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`INT_PTR GetSize() const;`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`INT_PTR GetSize() const;`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`INT_PTR GetSize() const;`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`INT_PTR GetSize() const;`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`INT_PTR GetSize() const;`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#82](../../mfc/codesnippet/cpp/cobarray-class_8.cpp)]

## <a name="cobarraygetupperbound"></a><a name="getupperbound"></a> CObArray:: GetUpperBound

Restituisce il limite superiore corrente di questa matrice.

```cpp
INT_PTR GetUpperBound() const;
```

### <a name="return-value"></a>Valore restituito

Indice del limite superiore (in base zero).

### <a name="remarks"></a>Osservazioni

Poiché gli indici di matrice sono in base zero, questa funzione restituisce un valore 1 minore di `GetSize` .

La condizione `GetUpperBound() = -1` indica che la matrice non contiene elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetUpperBound` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`INT_PTR GetUpperBound() const;`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`INT_PTR GetUpperBound() const;`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`INT_PTR GetUpperBound() const;`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`INT_PTR GetUpperBound() const;`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`INT_PTR GetUpperBound() const;`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`INT_PTR GetUpperBound() const;`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#83](../../mfc/codesnippet/cpp/cobarray-class_9.cpp)]

## <a name="cobarrayinsertat"></a><a name="insertat"></a> CObArray:: InsertAt

Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.

```cpp
void InsertAt(
    INT_PTR nIndex,
    CObject* newElement,
    INT_PTR nCount = 1);

void InsertAt(
    INT_PTR nStartIndex,
    CObArray* pNewArray);
```

### <a name="parameters"></a>Parametri

*nIndex*\
Indice integer che può essere maggiore del valore restituito da `GetUpperBound` .

*newElement*\
`CObject`Puntatore da inserire in questa matrice. È consentito un *newElement* di valore `NULL` .

*nCount*\
Il numero di volte in cui l'elemento deve essere inserito (il valore predefinito è 1).

*nStartIndex*\
Indice integer che può essere maggiore del valore restituito da `GetUpperBound` .

*pNewArray*\
Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.

### <a name="remarks"></a>Osservazioni

La prima versione di `InsertAt` inserisce un elemento (o più copie di un elemento) in corrispondenza di un indice specificato in una matrice. Nel processo, sposta verso l'alto (incrementando l'indice) l'elemento esistente in corrispondenza dell'indice e sposta tutti gli elementi al di sopra di esso.

La seconda versione inserisce tutti gli elementi di un'altra `CObArray` raccolta, a partire dalla posizione *nStartIndex* .

La `SetAt` funzione, invece, sostituisce un elemento di matrice specificato e non sposta gli elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::InsertAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void InsertAt(INT_PTR nIndex, BYTE newElement, int nCount = 1);`<br /><br />`throw(CMemoryException*);`<br /><br />`void InsertAt(INT_PTR nStartIndex, CByteArray* pNewArray);`<br /><br />`throw(CMemoryException*);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void InsertAt(INT_PTR nIndex, DWORD newElement, int nCount = 1);`<br /><br />`throw(CMemoryException*);`<br /><br />`void InsertAt(INT_PTR nStartIndex, CDWordArray* pNewArray);`<br /><br />`throw(CMemoryException*);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void InsertAt(INT_PTR nIndex, void* newElement, int nCount = 1);`<br /><br />`throw(CMemoryException*);`<br /><br />`void InsertAt(INT_PTR nStartIndex, CPtrArray* pNewArray);`<br /><br />`throw(CMemoryException*);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void InsertAt(INT_PTR nIndex, LPCTSTR newElement, int nCount = 1);`<br /><br />`throw(CMemoryException*);`<br /><br />`void InsertAt(INT_PTR nStartIndex, CStringArray* pNewArray);`<br /><br />`throw(CMemoryException*);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void InsertAt(INT_PTR nIndex, UINT newElement, int nCount = 1);`<br /><br />`throw(CMemoryException*);`<br /><br />`void InsertAt(INT_PTR nStartIndex, CUIntArray* pNewArray);`<br /><br />`throw(CMemoryException*);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void InsertAt(INT_PTR nIndex, WORD newElement, int nCount = 1);`<br /><br />`throw(CMemoryException*);`<br /><br />`void InsertAt(INT_PTR nStartIndex, CWordArray* pNewArray);`<br /><br />`throw(CMemoryException*);`|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#84](../../mfc/codesnippet/cpp/cobarray-class_10.cpp)]

I risultati di questo programma sono i seguenti:

```Output
InsertAt example: A CObArray with 3 elements
[0] = a CAge at $45C8 21
[1] = a CAge at $4646 30
[2] = a CAge at $4606 40
```

## <a name="cobarrayisempty"></a><a name="isempty"></a> CObArray:: IsEmpty

Determina se la matrice è vuota.

```cpp
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la matrice è vuota. in caso contrario, 0.

## <a name="cobarrayoperator--"></a><a name="operator_at"></a> CObArray:: operator []

Questi operatori di pedice sono un comodo sostituto per le `SetAt` `GetAt` funzioni e.

```cpp
CObject*& operator[](int_ptr nindex);
CObject* operator[](int_ptr nindex) const;
```

### <a name="remarks"></a>Osservazioni

Il primo operatore, chiamato per le matrici che non sono **`const`** , può essere utilizzato sia sul lato destro (r-value) che sulla sinistra (l-value) di un'istruzione di assegnazione. Il secondo oggetto, chiamato per le **`const`** matrici, può essere utilizzato solo a destra.

La versione di debug della libreria dichiara se l'indice (sul lato sinistro o destro di un'istruzione di assegnazione) non è più limitato.

Nella tabella seguente vengono illustrati altri operatori simili a `CObArray::operator []` .

|Classe|Operatore|
|-----------|--------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`BYTE& operator [](INT_PTR nindex);`<br /><br />`BYTE operator [](INT_PTR nindex) const;`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`DWORD& operator [](INT_PTR nindex);`<br /><br />`DWORD operator [](INT_PTR nindex) const;`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void*& operator [](INT_PTR nindex);`<br /><br />`void* operator [](INT_PTR nindex) const;`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`CString& operator [](INT_PTR nindex);`<br /><br />`CString operator [](INT_PTR nindex) const;`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`UINT& operator [](INT_PTR nindex);`<br /><br />`UINT operator [](INT_PTR nindex) const;`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`WORD& operator [](INT_PTR nindex);`<br /><br />`WORD operator [](INT_PTR nindex) const;`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#88](../../mfc/codesnippet/cpp/cobarray-class_11.cpp)]

## <a name="cobarrayremoveall"></a><a name="removeall"></a> CObArray:: RemoveAll

Rimuove tutti i puntatori da questa matrice, ma non elimina effettivamente gli `CObject` oggetti.

```cpp
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

Se la matrice è già vuota, la funzione continuerà a funzionare.

La `RemoveAll` funzione libera tutta la memoria usata per l'archiviazione del puntatore.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::RemoveAll` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void RemoveAll();`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void RemoveAll();`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void RemoveAll();`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void RemoveAll();`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void RemoveAll();`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void RemoveAll();`|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#85](../../mfc/codesnippet/cpp/cobarray-class_12.cpp)]

## <a name="cobarrayremoveat"></a><a name="removeat"></a> CObArray:: RemoveAt

Rimuove uno o più elementi a partire da un indice specificato in una matrice.

```cpp
void RemoveAt(
    INT_PTR nIndex,
    INT_PTR nCount = 1);
```

### <a name="parameters"></a>Parametri

*nIndex*\
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

*nCount*\
Numero di elementi da rimuovere.

### <a name="remarks"></a>Osservazioni

Nel processo, sposta tutti gli elementi sopra gli elementi rimossi. Decrementa il limite superiore della matrice, ma non libera la memoria.

Se si tenta di rimuovere più elementi di quelli contenuti nella matrice sopra il punto di rimozione, la versione di debug della libreria viene dichiarata.

La `RemoveAt` funzione rimuove il `CObject` puntatore dalla matrice, ma non elimina l'oggetto stesso.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::RemoveAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void RemoveAt(INT_PTR nIndex, INT_PTR nCount = 1);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void RemoveAt(INT_PTR nIndex, INT_PTR nCount = 1);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void RemoveAt(INT_PTR nIndex, INT_PTR nCount = 1);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void RemoveAt(INT_PTR nIndex, INT_PTR nCount = 1);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void RemoveAt(INT_PTR nIndex, INT_PTR nCount = 1);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void RemoveAt(INT_PTR nIndex, INT_PTR nCount = 1);`|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#112](../../mfc/codesnippet/cpp/cobarray-class_13.cpp)]

I risultati di questo programma sono i seguenti:

```Output
RemoveAt example: A CObArray with 1 elements
[0] = a CAge at $4606 40
```

## <a name="cobarraysetat"></a><a name="setat"></a> CObArray:: SetAt

Imposta l'elemento di matrice in corrispondenza dell'indice specificato.

```cpp
void SetAt(
    INT_PTR nIndex,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*\
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

*newElement*\
Puntatore all'oggetto da inserire in questa matrice. `NULL`È consentito un valore.

### <a name="remarks"></a>Osservazioni

`SetAt` non comporterà l'aumento della matrice. Usare `SetAtGrow` se si vuole che la matrice cresca automaticamente.

Verificare che il valore di indice rappresenti una posizione valida nella matrice. Se è fuori limite, la versione di debug della libreria viene dichiarata.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::SetAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void SetAt(INT_PTR nIndex, BYTE newElement);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void SetAt(INT_PTR nIndex, DWORD newElement);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void SetAt(INT_PTR nIndex, void* newElement);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void SetAt(INT_PTR nIndex, LPCTSTR newElement);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void SetAt(INT_PTR nIndex, UINT newElement);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void SetAt(INT_PTR nIndex, WORD newElement);`|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#86](../../mfc/codesnippet/cpp/cobarray-class_14.cpp)]

I risultati di questo programma sono i seguenti:

```Output
SetAt example: A CObArray with 2 elements
[0] = a CAge at $47E0 30
[1] = a CAge at $47A0 40
```

## <a name="cobarraysetatgrow"></a><a name="setatgrow"></a> CObArray:: SetAtGrow

Imposta l'elemento di matrice in corrispondenza dell'indice specificato.

```cpp
void SetAtGrow(
    INT_PTR nIndex,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*\
Indice integer maggiore o uguale a 0.

*newElement*\
Puntatore all'oggetto da aggiungere a questa matrice. `NULL`È consentito un valore.

### <a name="remarks"></a>Osservazioni

Se necessario, la matrice si espande automaticamente (ovvero il limite superiore viene regolato per adattarsi al nuovo elemento).

La tabella seguente Mostra altre funzioni membro simili a `CObArray::SetAtGrow` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void SetAtGrow(INT_PTR nIndex, BYTE newElement);`<br /><br />`throw(CMemoryException*);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void SetAtGrow(INT_PTR nIndex, DWORD newElement);`<br /><br />`throw(CMemoryException*);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void SetAtGrow(INT_PTR nIndex, void* newElement);`<br /><br />`throw( CMemoryException*);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void SetAtGrow(INT_PTR nIndex, LPCTSTR newElement);`<br /><br />`throw(CMemoryException*);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void SetAtGrow(INT_PTR nIndex, UINT newElement);`<br /><br />`throw(CMemoryException*);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void SetAtGrow(INT_PTR nIndex, WORD newElement);`<br /><br />`throw(CMemoryException*);`|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#87](../../mfc/codesnippet/cpp/cobarray-class_15.cpp)]

I risultati di questo programma sono i seguenti:

```Output
SetAtGrow example: A CObArray with 4 elements
[0] = a CAge at $47C0 21
[1] = a CAge at $4800 40
[2] = NULL
[3] = a CAge at $4840 65
```

## <a name="cobarraysetsize"></a><a name="setsize"></a> CObArray:: sesize

Stabilisce la dimensione di una matrice vuota o esistente. Se necessario, alloca memoria.

```cpp
void SetSize(
    INT_PTR nNewSize,
    INT_PTR nGrowBy = -1);
```

### <a name="parameters"></a>Parametri

*nNewSize*\
Nuova dimensione della matrice (numero di elementi). Versione 0 o successive.

*nGrowBy*\
Numero minimo di slot di elementi da allocare se è necessario un aumento delle dimensioni.

### <a name="remarks"></a>Osservazioni

Se la nuova dimensione è inferiore alla dimensione precedente, la matrice viene troncata e viene rilasciata tutta la memoria inutilizzata. Per maggiore efficienza, chiamare `SetSize` per impostare la dimensione della matrice prima di utilizzarla. In questo modo si evita di dover riallocare e copiare la matrice ogni volta che viene aggiunto un elemento.

Il parametro *nGrowBy* influiscono sull'allocazione della memoria interna durante la crescita della matrice. Il suo utilizzo non influiscono mai sulle dimensioni della matrice come indicato da `GetSize` e `GetUpperBound` .

Se la dimensione della matrice è aumentata, tutti i puntatori appena allocati `CObject *` vengono impostati su `NULL` .

La tabella seguente Mostra altre funzioni membro simili a `CObArray::SetSize` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|`void SetSize(INT_PTR nNewSize, int nGrowBy = -1);`<br /><br /> `throw(CMemoryException*);`|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|`void SetSize(INT_PTR nNewSize, int nGrowBy = -1);`<br /><br /> `throw(CMemoryException*);`|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|`void SetSize(INT_PTR nNewSize, int nGrowBy = -1);`<br /><br /> `throw(CMemoryException*);`|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|`void SetSize(INT_PTR nNewSize, int nGrowBy = -1);`<br /><br /> `throw(CMemoryException*);`|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|`void SetSize(INT_PTR nNewSize, int nGrowBy = -1);`<br /><br /> `throw(CMemoryException*);`|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|`void SetSize(INT_PTR nNewSize, int nGrowBy = -1);`<br /><br /> `throw(CMemoryException*);`|

### <a name="example"></a>Esempio

  Vedere l'esempio per [Cobarrat:: GetData](#getdata).

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)\
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)\
[Classe CStringArray](../../mfc/reference/cstringarray-class.md)\
[Classe CPtrArray](../../mfc/reference/cptrarray-class.md)\
[Classe CByteArray](../../mfc/reference/cbytearray-class.md)\
[Classe CWordArray](../../mfc/reference/cwordarray-class.md)\
[Classe CDWordArray](../../mfc/reference/cdwordarray-class.md)
