---
title: CObArray (classe)
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
ms.openlocfilehash: b083bf0e82f9d9b928e613f07a71d36147240cd2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212371"
---
# <a name="cobarray-class"></a>CObArray (classe)

Supporta matrici di puntatori `CObject` .

## <a name="syntax"></a>Sintassi

```
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
|[CObArray:: GetData](#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|
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
|[CObArray:: (operatore \[ )\]](#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Osservazioni

Queste matrici di oggetti sono simili alle matrici C, ma possono essere compattate e aumentate in modo dinamico in modo necessario.

Gli indici di matrice iniziano sempre dalla posizione 0. È possibile decidere se correggere il limite superiore o consentire l'espansione della matrice quando si aggiungono elementi oltre il limite corrente. La memoria viene allocata in modo contiguo al limite superiore, anche se alcuni elementi sono null.

In Win32, le dimensioni di un `CObArray` oggetto sono limitate solo alla memoria disponibile.

Come con una matrice C, il tempo di accesso per un `CObArray` elemento indicizzato è costante ed è indipendente dalla dimensione della matrice.

`CObArray`incorpora la macro IMPLEMENT_SERIAL per supportare la serializzazione e il dump dei relativi elementi. Se una matrice di `CObject` puntatori viene archiviata in un archivio, con l'operatore di inserimento di overload o con la `Serialize` funzione membro, ogni `CObject` elemento viene a sua volta serializzato insieme al relativo indice di matrice.

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

## <a name="cobarrayadd"></a><a name="add"></a>CObArray:: Add

Aggiunge un nuovo elemento alla fine di una matrice, aumentando di 1 la matrice.

```
INT_PTR Add(CObject* newElement);
```

### <a name="parameters"></a>Parametri

*newElement*<br/>
`CObject`Puntatore da aggiungere a questa matrice.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento aggiunto.

### <a name="remarks"></a>Osservazioni

Se la [dimensione](#setsize) è stata usata con un valore di *nGrowBy* maggiore di 1, è possibile allocare memoria aggiuntiva. Tuttavia, il limite superiore aumenterà di un solo 1.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::Add` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR aggiungere (byte** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR Add (DWORD** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**Aggiunta INT_PTR (void** <strong>\*</strong> `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR Add (LPCTSTR** `newElement` **); throw (CMemoryException \* );**<br /><br /> **INT_PTR Add (const CString&** `newElement` **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR aggiungere (uint** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR aggiungere (Word** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#75](../../mfc/codesnippet/cpp/cobarray-class_1.cpp)]

I risultati di questo programma sono i seguenti:

```Output
Add example: A CObArray with 2 elements
[0] = a CAge at $442A 21
[1] = a CAge at $4468 40
```

## <a name="cobarrayappend"></a><a name="append"></a>CObArray:: Append

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

Se necessario, `Append` può allocare memoria aggiuntiva per contenere gli elementi aggiunti alla matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::Append` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR Append (const CByteArray&** *src* **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR Append (const CDWordArray&** *src* **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR Append (const CPtrArray&** *src* **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR Append (const CStringArray&** *src* **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR Append (const CUIntArray&** *src* **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR Append (const CWordArray&** *src* **);**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#76](../../mfc/codesnippet/cpp/cobarray-class_2.cpp)]

## <a name="cobarraycopy"></a><a name="copy"></a>CObArray:: Copy

Chiamare questa funzione membro per sovrascrivere gli elementi della matrice specificata con gli elementi di un'altra matrice dello stesso tipo.

```cpp
void Copy(const CObArray& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
Origine degli elementi da copiare nella matrice.

### <a name="remarks"></a>Osservazioni

`Copy`non libera memoria; Se necessario, tuttavia, `Copy` può allocare memoria aggiuntiva per contenere gli elementi copiati nella matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::Copy` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void Copy (const CByteArray&** *src* **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void Copy (const CDWordArray&** *src* **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void Copy (const CPtrArray&** *src* **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void Copy (const CStringArray&** *src* **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void Copy (const CUIntArray&** *src* **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void Copy (const CWordArray&** *src* **);**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#77](../../mfc/codesnippet/cpp/cobarray-class_3.cpp)]

## <a name="cobarraycobarray"></a><a name="cobarray"></a>CObArray:: CObArray

Costruisce una `CObject` matrice di puntatori vuota.

```
CObArray();
```

### <a name="remarks"></a>Osservazioni

La matrice aumenta di un elemento alla volta.

Nella tabella seguente vengono illustrati altri costruttori simili a `CObArray::CObArray` .

|Classe|Costruttore|
|-----------|-----------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**CByteArray ();**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**CDWordArray ();**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**CPtrArray ();**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CStringArray ();**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**CUIntArray ();**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**CWordArray ();**|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#78](../../mfc/codesnippet/cpp/cobarray-class_4.cpp)]

## <a name="cobarrayelementat"></a><a name="elementat"></a>CObArray:: ElementAt

Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.

```
CObject*& ElementAt(INT_PTR nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

### <a name="return-value"></a>Valore restituito

Riferimento a un `CObject` puntatore.

### <a name="remarks"></a>Osservazioni

Viene usato per implementare l'operatore di assegnazione lato sinistro per le matrici. Si noti che si tratta di una funzione avanzata che deve essere utilizzata solo per implementare speciali operatori di matrici.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::ElementAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE& ElementAt (INT_PTR** `nIndex` **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD& ElementAt (INT_PTR** `nIndex` **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void \*& ElementAt (INT_PTR** `nIndex` **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString& ElementAt (INT_PTR** `nIndex` **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT& ElementAt (INT_PTR** `nIndex` **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD& ElementAt (INT_PTR** `nIndex` **);**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [Cobarrat:: GetSize](#getsize).

## <a name="cobarrayfreeextra"></a><a name="freeextra"></a>CObArray:: FreeExtra

Libera qualsiasi memoria aggiuntiva allocata mentre è cresciuta la matrice.

```cpp
void FreeExtra();
```

### <a name="remarks"></a>Osservazioni

Questa funzione non ha alcun effetto sulla dimensione o sul limite superiore della matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::FreeExtra` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void FreeExtra ();**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void FreeExtra ();**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void FreeExtra ();**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void FreeExtra ();**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void FreeExtra ();**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void FreeExtra ();**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [Cobarrat:: GetData](#getdata).

## <a name="cobarraygetat"></a><a name="getat"></a>CObArray:: GetA

Restituisce l'elemento della matrice in corrispondenza dell'indice specificato.

```
CObject* GetAt(INT_PTR nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

### <a name="return-value"></a>Valore restituito

`CObject`Elemento del puntatore attualmente in corrispondenza di questo indice.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se si passa un valore negativo o un valore maggiore del valore restituito da, `GetUpperBound` viene generata un'asserzione non riuscita.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**Byte Geta (INT_PTR** `nIndex` **) const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD Geta (INT_PTR** `nIndex` **) const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void \* Geta (INT_PTR** `nIndex` **) const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|Di **CString (INT_PTR** `nIndex` **) const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**Uint Geta (INT_PTR** `nIndex` **) const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**Word Geta (INT_PTR** `nIndex` **) const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#79](../../mfc/codesnippet/cpp/cobarray-class_5.cpp)]

## <a name="cobarraygetcount"></a><a name="getcount"></a>CObArray:: GetCount

Restituisce il numero di elementi di matrice.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella matrice. Poiché gli indici sono in base zero, la dimensione è 1 maggiore dell'indice più grande.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetCount` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetCount () const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetCount () const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetCount () const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetCount () const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetCount () const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetCount () const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#80](../../mfc/codesnippet/cpp/cobarray-class_6.cpp)]

## <a name="cobarraygetdata"></a><a name="getdata"></a>CObArray:: GetData

Usare questa funzione membro per ottenere l'accesso diretto agli elementi nella matrice.

```
const CObject** GetData() const;

CObject** GetData();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla matrice di `CObject` puntatori.

### <a name="remarks"></a>Osservazioni

Se non sono disponibili elementi, `GetData` restituisce un valore null.

Sebbene l'accesso diretto agli elementi di una matrice possa aiutare a lavorare più rapidamente, prestare attenzione quando si chiama. gli `GetData` eventuali errori apportati influiscono direttamente sugli elementi della matrice.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetData` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE const \* GetData () const; BYTE \* GetData ();**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**const DWORD \* GetData () const; DWORD \* GetData ();**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**const void \* \* GetData () const; void \* \* GetData ();**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**const CString \* GetData () const; CString \* GetData ();**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**const UINT \* GetData () const; UINT \* GetData ();**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**const WORD \* GetData () const; PAROLA \* GetData ();**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#81](../../mfc/codesnippet/cpp/cobarray-class_7.cpp)]

## <a name="cobarraygetsize"></a><a name="getsize"></a>CObArray:: GetSize

Restituisce le dimensioni della matrice.

```
INT_PTR GetSize() const;
```

### <a name="remarks"></a>Osservazioni

Poiché gli indici sono in base zero, la dimensione è 1 maggiore dell'indice più grande.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetSize` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetSize () const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetSize () const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetSize () const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetSize () const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetSize () const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetSize () const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#82](../../mfc/codesnippet/cpp/cobarray-class_8.cpp)]

## <a name="cobarraygetupperbound"></a><a name="getupperbound"></a>CObArray:: GetUpperBound

Restituisce il limite superiore corrente di questa matrice.

```
INT_PTR GetUpperBound() const;
```

### <a name="return-value"></a>Valore restituito

Indice del limite superiore (in base zero).

### <a name="remarks"></a>Osservazioni

Poiché gli indici di matrice sono in base zero, questa funzione restituisce un valore 1 minore di `GetSize` .

La condizione `GetUpperBound( )` =-1 indica che la matrice non contiene elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::GetUpperBound` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**INT_PTR GetUpperBound () const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**INT_PTR GetUpperBound () const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**INT_PTR GetUpperBound () const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**INT_PTR GetUpperBound () const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**INT_PTR GetUpperBound () const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**INT_PTR GetUpperBound () const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#83](../../mfc/codesnippet/cpp/cobarray-class_9.cpp)]

## <a name="cobarrayinsertat"></a><a name="insertat"></a>CObArray:: InsertAt

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

*nIndex*<br/>
Indice integer che può essere maggiore del valore restituito da `GetUpperBound` .

*newElement*<br/>
`CObject`Puntatore da inserire in questa matrice. È consentito un *newElement* di valore null.

*nCount*<br/>
Il numero di volte in cui l'elemento deve essere inserito (il valore predefinito è 1).

*nStartIndex*<br/>
Indice integer che può essere maggiore del valore restituito da `GetUpperBound` .

*pNewArray*<br/>
Un'altra matrice che contiene gli elementi da aggiungere a questa matrice.

### <a name="remarks"></a>Osservazioni

La prima versione di `InsertAt` inserisce un elemento (o più copie di un elemento) in corrispondenza di un indice specificato in una matrice. Nel processo, sposta verso l'alto (incrementando l'indice) l'elemento esistente in corrispondenza dell'indice e sposta tutti gli elementi al di sopra di esso.

La seconda versione inserisce tutti gli elementi di un'altra `CObArray` raccolta, a partire dalla posizione *nStartIndex* .

La `SetAt` funzione, invece, sostituisce un elemento di matrice specificato e non sposta gli elementi.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::InsertAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, byte** `newElement` **, int** `nCount` **= 1);**<br /><br /> **Throw (CMemoryException \* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CByteArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, DWORD** `newElement` **, int** `nCount` **= 1);**<br /><br /> **Throw (CMemoryException \* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CDWordArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **, int** `nCount` **= 1);**<br /><br /> **Throw (CMemoryException \* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CPtrArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, LPCTSTR** `newElement` **, int** `nCount` **= 1);**<br /><br /> **Throw (CMemoryException \* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CStringArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, uint** `newElement` **, int** `nCount` **= 1);**<br /><br /> **Throw (CMemoryException \* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CUIntArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void InsertAt (INT_PTR** `nIndex` **, Word** `newElement` **, int** `nCount` **= 1);**<br /><br /> **Throw (CMemoryException \* );**<br /><br /> **void InsertAt (INT_PTR** `nStartIndex` **, CWordArray** <strong>\*</strong> `pNewArray` **);**<br /><br /> **Throw (CMemoryException \* );**|

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

## <a name="cobarrayisempty"></a><a name="isempty"></a>CObArray:: IsEmpty

Determina se la matrice è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la matrice è vuota. in caso contrario, 0.

## <a name="cobarrayoperator--"></a><a name="operator_at"></a>CObArray:: operator []

Questi operatori di pedice sono un comodo sostituto per le `SetAt` `GetAt` funzioni e.

```
CObject*& operator[](int_ptr nindex);
CObject* operator[](int_ptr nindex) const;
```

### <a name="remarks"></a>Osservazioni

Il primo operatore, chiamato per le matrici che non sono **`const`** , può essere utilizzato sia sul lato destro (r-value) che sulla sinistra (l-value) di un'istruzione di assegnazione. Il secondo oggetto, chiamato per le **`const`** matrici, può essere utilizzato solo a destra.

La versione di debug della libreria dichiara se l'indice (sul lato sinistro o destro di un'istruzione di assegnazione) non è più limitato.

Nella tabella seguente vengono illustrati altri operatori simili a `CObArray::operator []` .

|Classe|Operatore|
|-----------|--------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**BYTE& (operatore) [] (INT_PTR** `nindex` ** \) ;**<br /><br /> **Byte (operatore) [] (INT_PTR** `nindex` ** \) const;**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**DWORD& (operatore) [] (INT_PTR** `nindex` ** \) ;**<br /><br /> **DWORD (operatore) [] (INT_PTR** `nindex` ** \) const;**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void \*& operator [] (INT_PTR** `nindex` ** \) ;**<br /><br /> **void \* (operatore) [] (INT_PTR** `nindex` ** \) const;**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**CString& (operatore) [] (INT_PTR** `nindex` ** \) ;**<br /><br /> **CString (operatore) [] (INT_PTR** `nindex` ** \) const;**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**UINT& (operatore) [] (INT_PTR** `nindex` ** \) ;**<br /><br /> **Uint (operatore) [] (INT_PTR** `nindex` ** \) const;**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**WORD& (operatore) [] (INT_PTR** `nindex` ** \) ;**<br /><br /> **Word (operatore) [] (INT_PTR** `nindex` ** \) const;**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#88](../../mfc/codesnippet/cpp/cobarray-class_11.cpp)]

## <a name="cobarrayremoveall"></a><a name="removeall"></a>CObArray:: RemoveAll

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
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**il void RemoveAll ();**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**il void RemoveAll ();**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**il void RemoveAll ();**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**il void RemoveAll ();**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**il void RemoveAll ();**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**il void RemoveAll ();**|

### <a name="example"></a>Esempio

Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#85](../../mfc/codesnippet/cpp/cobarray-class_12.cpp)]

## <a name="cobarrayremoveat"></a><a name="removeat"></a>CObArray:: RemoveAt

Rimuove uno o più elementi a partire da un indice specificato in una matrice.

```cpp
void RemoveAt(
    INT_PTR nIndex,
    INT_PTR nCount = 1);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

*nCount*<br/>
Numero di elementi da rimuovere.

### <a name="remarks"></a>Osservazioni

Nel processo, sposta tutti gli elementi sopra gli elementi rimossi. Decrementa il limite superiore della matrice, ma non libera la memoria.

Se si tenta di rimuovere più elementi di quelli contenuti nella matrice sopra il punto di rimozione, la versione di debug della libreria viene dichiarata.

La `RemoveAt` funzione rimuove il `CObject` puntatore dalla matrice, ma non elimina l'oggetto stesso.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::RemoveAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** `nCount` **= 1);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void RemoveAt (INT_PTR** `nIndex` **, INT_PTR** *nCount* **= 1);**|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#112](../../mfc/codesnippet/cpp/cobarray-class_13.cpp)]

I risultati di questo programma sono i seguenti:

```Output
RemoveAt example: A CObArray with 1 elements
[0] = a CAge at $4606 40
```

## <a name="cobarraysetat"></a><a name="setat"></a>CObArray:: SetAt

Imposta l'elemento di matrice in corrispondenza dell'indice specificato.

```cpp
void SetAt(
    INT_PTR nIndex,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0 e minore o uguale al valore restituito da `GetUpperBound` .

*newElement*<br/>
Puntatore all'oggetto da inserire in questa matrice. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

`SetAt`non comporterà l'aumento della matrice. Usare `SetAtGrow` se si vuole che la matrice cresca automaticamente.

È necessario assicurarsi che il valore di indice rappresenti una posizione valida nella matrice. Se il timeout non è associato, la versione di debug della libreria viene dichiarata.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::SetAt` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**SetAt void (INT_PTR** `nIndex` **, byte** `newElement` **);**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|la **SetAt void (INT_PTR** `nIndex` **, DWORD** `newElement` **);**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|si **void SetAt (INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **);**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|non è **valido (INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|si **void SetAt (INT_PTR** `nIndex` **, uint** `newElement` **);**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|la **SetAt è void (INT_PTR** `nIndex` **, Word** `newElement` **);**|

### <a name="example"></a>Esempio

  Vedere [CObList:: CObList](../../mfc/reference/coblist-class.md#coblist) per un elenco della `CAge` classe utilizzata in tutti gli esempi di raccolta.

[!code-cpp[NVC_MFCCollections#86](../../mfc/codesnippet/cpp/cobarray-class_14.cpp)]

I risultati di questo programma sono i seguenti:

```Output
SetAt example: A CObArray with 2 elements
[0] = a CAge at $47E0 30
[1] = a CAge at $47A0 40
```

## <a name="cobarraysetatgrow"></a><a name="setatgrow"></a>CObArray:: SetAtGrow

Imposta l'elemento di matrice in corrispondenza dell'indice specificato.

```cpp
void SetAtGrow(
    INT_PTR nIndex,
    CObject* newElement);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice integer maggiore o uguale a 0.

*newElement*<br/>
Puntatore all'oggetto da aggiungere a questa matrice. È consentito un valore NULL.

### <a name="remarks"></a>Osservazioni

Se necessario, la matrice si espande automaticamente (ovvero il limite superiore viene regolato per adattarsi al nuovo elemento).

La tabella seguente Mostra altre funzioni membro simili a `CObArray::SetAtGrow` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, byte** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, DWORD** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, void** <strong>\*</strong> `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, LPCTSTR** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, uint** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void SetAtGrow (INT_PTR** `nIndex` **, Word** `newElement` **);**<br /><br /> **Throw (CMemoryException \* );**|

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

## <a name="cobarraysetsize"></a><a name="setsize"></a>CObArray:: sesize

Stabilisce la dimensione di una matrice vuota o esistente. Se necessario, alloca memoria.

```cpp
void SetSize(
    INT_PTR nNewSize,
    INT_PTR nGrowBy = -1);
```

### <a name="parameters"></a>Parametri

*nNewSize*<br/>
Nuova dimensione della matrice (numero di elementi). Versione 0 o successive.

*nGrowBy*<br/>
Numero minimo di slot di elementi da allocare se è necessario un aumento delle dimensioni.

### <a name="remarks"></a>Osservazioni

Se la nuova dimensione è inferiore alla dimensione precedente, la matrice viene troncata e viene rilasciata tutta la memoria inutilizzata. Per maggiore efficienza, chiamare `SetSize` per impostare la dimensione della matrice prima di utilizzarla. In questo modo si evita di dover riallocare e copiare la matrice ogni volta che viene aggiunto un elemento.

Il parametro *nGrowBy* influiscono sull'allocazione della memoria interna durante la crescita della matrice. Il suo utilizzo non influiscono mai sulle dimensioni della matrice come indicato da `GetSize` e `GetUpperBound` .

Se la dimensione della matrice è aumentata, tutti i puntatori di **CObject** appena allocati <strong>\*</strong> vengono impostati su null.

La tabella seguente Mostra altre funzioni membro simili a `CObArray::SetSize` .

|Classe|Funzione membro|
|-----------|---------------------|
|[CByteArray](../../mfc/reference/cbytearray-class.md)|**void sesize (INT_PTR** `nNewSize` **, int** `nGrowBy` **=-1);**<br /><br /> **Throw (CMemoryException \* );**|
|[CDWordArray](../../mfc/reference/cdwordarray-class.md)|**void sesize (INT_PTR** `nNewSize` **, int** `nGrowBy` **=-1);**<br /><br /> **Throw (CMemoryException \* );**|
|[CPtrArray](../../mfc/reference/cptrarray-class.md)|**void sesize (INT_PTR** `nNewSize` **, int** `nGrowBy` **=-1);**<br /><br /> **Throw (CMemoryException \* );**|
|[CStringArray](../../mfc/reference/cstringarray-class.md)|**void sesize (INT_PTR** `nNewSize` **, int** `nGrowBy` **=-1);**<br /><br /> **Throw (CMemoryException \* );**|
|[CUIntArray](../../mfc/reference/cuintarray-class.md)|**void sesize (INT_PTR** `nNewSize` **, int** `nGrowBy` **=-1);**<br /><br /> **Throw (CMemoryException \* );**|
|[CWordArray](../../mfc/reference/cwordarray-class.md)|**void sesize (INT_PTR** `nNewSize` **, int** `nGrowBy` **=-1);**<br /><br /> **Throw (CMemoryException \* );**|

### <a name="example"></a>Esempio

  Vedere l'esempio per [Cobarrat:: GetData](#getdata).

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CStringArray](../../mfc/reference/cstringarray-class.md)<br/>
[Classe CPtrArray](../../mfc/reference/cptrarray-class.md)<br/>
[Classe CByteArray](../../mfc/reference/cbytearray-class.md)<br/>
[Classe CWordArray](../../mfc/reference/cwordarray-class.md)<br/>
[Classe CDWordArray](../../mfc/reference/cdwordarray-class.md)
