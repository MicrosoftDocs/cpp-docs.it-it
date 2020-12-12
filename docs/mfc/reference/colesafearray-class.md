---
description: 'Altre informazioni su: classe COleSafeArray'
title: Classe COleSafeArray
ms.date: 08/29/2019
f1_keywords:
- COleSafeArray
- AFXDISP/COleSafeArray
- AFXDISP/COleSafeArray::COleSafeArray
- AFXDISP/COleSafeArray::AccessData
- AFXDISP/COleSafeArray::AllocData
- AFXDISP/COleSafeArray::AllocDescriptor
- AFXDISP/COleSafeArray::Attach
- AFXDISP/COleSafeArray::Clear
- AFXDISP/COleSafeArray::Copy
- AFXDISP/COleSafeArray::Create
- AFXDISP/COleSafeArray::CreateOneDim
- AFXDISP/COleSafeArray::Destroy
- AFXDISP/COleSafeArray::DestroyData
- AFXDISP/COleSafeArray::DestroyDescriptor
- AFXDISP/COleSafeArray::Detach
- AFXDISP/COleSafeArray::GetByteArray
- AFXDISP/COleSafeArray::GetDim
- AFXDISP/COleSafeArray::GetElement
- AFXDISP/COleSafeArray::GetElemSize
- AFXDISP/COleSafeArray::GetLBound
- AFXDISP/COleSafeArray::GetOneDimSize
- AFXDISP/COleSafeArray::GetUBound
- AFXDISP/COleSafeArray::Lock
- AFXDISP/COleSafeArray::PtrOfIndex
- AFXDISP/COleSafeArray::PutElement
- AFXDISP/COleSafeArray::Redim
- AFXDISP/COleSafeArray::ResizeOneDim
- AFXDISP/COleSafeArray::UnaccessData
- AFXDISP/COleSafeArray::Unlock
helpviewer_keywords:
- COleSafeArray [MFC], COleSafeArray
- COleSafeArray [MFC], AccessData
- COleSafeArray [MFC], AllocData
- COleSafeArray [MFC], AllocDescriptor
- COleSafeArray [MFC], Attach
- COleSafeArray [MFC], Clear
- COleSafeArray [MFC], Copy
- COleSafeArray [MFC], Create
- COleSafeArray [MFC], CreateOneDim
- COleSafeArray [MFC], Destroy
- COleSafeArray [MFC], DestroyData
- COleSafeArray [MFC], DestroyDescriptor
- COleSafeArray [MFC], Detach
- COleSafeArray [MFC], GetByteArray
- COleSafeArray [MFC], GetDim
- COleSafeArray [MFC], GetElement
- COleSafeArray [MFC], GetElemSize
- COleSafeArray [MFC], GetLBound
- COleSafeArray [MFC], GetOneDimSize
- COleSafeArray [MFC], GetUBound
- COleSafeArray [MFC], Lock
- COleSafeArray [MFC], PtrOfIndex
- COleSafeArray [MFC], PutElement
- COleSafeArray [MFC], Redim
- COleSafeArray [MFC], ResizeOneDim
- COleSafeArray [MFC], UnaccessData
- COleSafeArray [MFC], Unlock
ms.assetid: f45a5224-5f48-40ec-9ddd-287ef9740150
ms.openlocfilehash: 6c33f58f71167c492883a25b05fce6bb8fb09916
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226701"
---
# <a name="colesafearray-class"></a>Classe COleSafeArray

Classe per utilizzare matrici di tipo e dimensioni arbitrari.

## <a name="syntax"></a>Sintassi

```
class COleSafeArray : public tagVARIANT
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleSafeArray:: COleSafeArray](#colesafearray)|Costruisce un oggetto `COleSafeArray`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleSafeArray:: AccessData](#accessdata)|Recupera un puntatore ai dati della matrice.|
|[COleSafeArray:: AllocData](#allocdata)|Alloca memoria per la matrice.|
|[COleSafeArray:: AllocDescriptor](#allocdescriptor)|Alloca memoria per il descrittore di matrici sicure.|
|[COleSafeArray:: Connetti](#attach)|Fornisce il controllo della `VARIANT` matrice esistente all' `COleSafeArray` oggetto.|
|[COleSafeArray:: Clear](#clear)|Libera tutti i dati nell'oggetto sottostante `VARIANT` .|
|[COleSafeArray:: Copy](#copy)|Crea una copia di una matrice esistente.|
|[COleSafeArray:: create](#create)|Crea una matrice sicura.|
|[COleSafeArray:: CreateOneDim](#createonedim)|Crea un oggetto unidimensionale `COleSafeArray` .|
|[COleSafeArray::D estroy](#destroy)|Elimina definitivamente una matrice esistente.|
|[COleSafeArray::D estroyData](#destroydata)|Elimina i dati in una matrice sicura.|
|[COleSafeArray::D estroyDescriptor](#destroydescriptor)|Elimina definitivamente un descrittore di una matrice sicura.|
|[COleSafeArray::D etach](#detach)|Scollega la matrice VARIANT dall'oggetto, in `COleSafeArray` modo che i dati non vengano liberati.|
|[COleSafeArray:: GetByteArray](#getbytearray)|Copia il contenuto della matrice sicura in un [CByteArray](../../mfc/reference/cbytearray-class.md).|
|[COleSafeArray:: GetDim](#getdim)|Restituisce il numero di dimensioni nella matrice.|
|[COleSafeArray:: GetElement](#getelement)|Recupera un singolo elemento della matrice sicura.|
|[COleSafeArray:: GetElemSize](#getelemsize)|Restituisce la dimensione, in byte, di un elemento in una matrice sicura.|
|[COleSafeArray:: GetLBound](#getlbound)|Restituisce il limite inferiore per qualsiasi dimensione di una matrice sicura.|
|[COleSafeArray:: GetOneDimSize](#getonedimsize)|Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray` .|
|[COleSafeArray:: GetUBound](#getubound)|Restituisce il limite superiore per qualsiasi dimensione di una matrice sicura.|
|[COleSafeArray:: Lock](#lock)|Incrementa il conteggio dei blocchi di una matrice e inserisce un puntatore sui dati della matrice nel descrittore della matrice.|
|[COleSafeArray::P trOfIndex](#ptrofindex)|Restituisce un puntatore all'elemento indicizzato.|
|[COleSafeArray::P utElement](#putelement)|Assegna un singolo elemento nella matrice.|
|[COleSafeArray:: ReDim](#redim)|Modifica il limite meno significativo (più a destra) di una matrice sicura.|
|[COleSafeArray:: ResizeOneDim](#resizeonedim)|Modifica il numero di elementi in un oggetto unidimensionale `COleSafeArray` .|
|[COleSafeArray:: UnaccessData](#unaccessdata)|Decrementa il conteggio dei blocchi di una matrice e invalida il puntatore recuperato da `AccessData` .|
|[COleSafeArray:: Unlock](#unlock)|Decrementa il conteggio dei blocchi di una matrice in modo che possa essere liberato o ridimensionato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[COleSafeArray:: operator LPCVARIANT](#operator_lpcvariant)|Accede alla struttura sottostante `VARIANT` dell' `COleSafeArray` oggetto.|
|[COleSafeArray:: operator LPVARIANT](#operator_lpvariant)|Accede alla struttura sottostante `VARIANT` dell' `COleSafeArray` oggetto.|
|[COleSafeArray:: operator =](#operator_eq)|Copia i valori in un `COleSafeArray` oggetto ( `SAFEARRAY` ,, `VARIANT` `COleVariant` o `COleSafeArray` matrice).|
|[COleSafeArray:: operator = =](#operator_eq_eq)|Confronta due matrici Variant (,, `SAFEARRAY` `VARIANT` `COleVariant` o `COleSafeArray` matrici).|
|[Operatore COleSafeArray:: &lt;&lt;](#operator_lt_lt)|Restituisce il contenuto di un `COleSafeArray` oggetto nel contesto di dump.|

## <a name="remarks"></a>Commenti

`COleSafeArray` deriva dalla `VARIANT` struttura OLE. Le `SAFEARRAY` funzioni membro OLE sono disponibili tramite `COleSafeArray` , oltre a un set di funzioni membro progettate appositamente per matrici unidimensionali di byte.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`COleSafeArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="colesafearrayaccessdata"></a><a name="accessdata"></a> COleSafeArray:: AccessData

Recupera un puntatore ai dati della matrice.

```cpp
void AccessData(void** ppvData);
```

### <a name="parameters"></a>Parametri

*ppvData*<br/>
Puntatore a un puntatore ai dati della matrice.

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#26](../../mfc/codesnippet/cpp/colesafearray-class_1.cpp)]

## <a name="colesafearrayallocdata"></a><a name="allocdata"></a> COleSafeArray:: AllocData

Alloca memoria per una matrice sicura.

```cpp
void AllocData();
```

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearrayallocdescriptor"></a><a name="allocdescriptor"></a> COleSafeArray:: AllocDescriptor

Alloca memoria per il descrittore di una matrice sicura.

```cpp
void AllocDescriptor(DWORD dwDims);
```

### <a name="parameters"></a>Parametri

*dwDims*<br/>
Numero di dimensioni nella matrice sicura.

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearrayattach"></a><a name="attach"></a> COleSafeArray:: Connetti

Fornisce il controllo dei dati in una `VARIANT` matrice esistente all' `COleSafeArray` oggetto.

```cpp
void Attach(VARIANT& varSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Un oggetto `VARIANT`. Il parametro *varSrc* deve contenere il [VT_ARRAY](/windows/win32/api/wtypes/ne-wtypes-varenum)VARTYPE.

### <a name="remarks"></a>Commenti

Il `VARIANT` tipo di origine è impostato su VT_EMPTY. Questa funzione Cancella i dati della matrice corrente, se presenti.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray:: AccessData](#accessdata).

## <a name="colesafearrayclear"></a><a name="clear"></a> COleSafeArray:: Clear

Cancella la matrice di sicurezza.

```cpp
void Clear();
```

### <a name="remarks"></a>Commenti

La funzione Cancella una matrice protetta impostando il valore `VARTYPE` dell'oggetto su VT_EMPTY. Il contenuto corrente viene rilasciato e la matrice viene liberata.

## <a name="colesafearraycolesafearray"></a><a name="colesafearray"></a> COleSafeArray:: COleSafeArray

Costruisce un oggetto `COleSafeArray`.

```
COleSafeArray();

COleSafeArray(
    const SAFEARRAY& saSrc,
    VARTYPE vtSrc);

COleSafeArray(
    LPCSAFEARRAY pSrc,
    VARTYPE vtSrc);

COleSafeArray(const COleSafeArray& saSrc);
COleSafeArray(const VARIANT& varSrc);
COleSafeArray(LPCVARIANT pSrc);
COleSafeArray(const COleVariant& varSrc);
```

### <a name="parameters"></a>Parametri

*saSrc*<br/>
Oggetto esistente `COleSafeArray` o `SAFEARRAY` da copiare nel nuovo `COleSafeArray` oggetto.

*vtSrc*<br/>
VARTYPE del nuovo `COleSafeArray` oggetto.

*psaSrc*<br/>
Puntatore a un `SAFEARRAY` oggetto da copiare nel nuovo `COleSafeArray` oggetto.

*varSrc*<br/>
`VARIANT`Oggetto o esistente `COleVariant` da copiare nel nuovo `COleSafeArray` oggetto.

*pSrc*<br/>
Puntatore a un `VARIANT` oggetto da copiare nel nuovo `COleSafeArray` oggetto.

### <a name="remarks"></a>Commenti

Tutti questi costruttori creano nuovi `COleSafeArray` oggetti. Se non è presente alcun parametro, `COleSafeArray` viene creato un oggetto vuoto (VT_EMPTY). Se l'oggetto `COleSafeArray` viene copiato da un'altra matrice il cui VarType è noto in modo implicito (a `COleSafeArray` , `COleVariant` o `VARIANT` ), il VarType della matrice di origine viene mantenuto e non è necessario specificarlo. Se l'oggetto `COleSafeArray` viene copiato da un'altra matrice il cui VARTYPE non è noto ( `SAFEARRAY` ), il VarType deve essere specificato nel parametro *vtSrc* .

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraycopy"></a><a name="copy"></a> COleSafeArray:: Copy

Crea una copia di una matrice protetta esistente.

```cpp
void Copy(LPSAFEARRAY* ppsa);
```

### <a name="parameters"></a>Parametri

*PPSA*<br/>
Puntatore a una posizione in cui restituire il nuovo descrittore della matrice.

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraycreate"></a><a name="create"></a> COleSafeArray:: create

Alloca e inizializza i dati per la matrice.

```cpp
void Create(
    VARTYPE vtSrc,
    DWORD dwDims,
    DWORD* rgElements);

void Create(
    VARTYPE vtSrc,
    DWORD dwDims,
    SAFEARRAYBOUND* rgsabounds);
```

### <a name="parameters"></a>Parametri

*vtSrc*<br/>
Tipo di base della matrice, ovvero il VARTYPE di ogni elemento della matrice. VARTYPE è limitato a un subset dei tipi Variant. Non è possibile impostare l'VT_ARRAY né il flag di VT_BYREF. VT_EMPTY e VT_NULL non sono tipi di base validi per la matrice. Tutti gli altri tipi sono validi.

*dwDims*<br/>
Numero di dimensioni nella matrice. Questo può essere modificato dopo la creazione della matrice con [ReDim](#redim).

*rgElements*<br/>
Puntatore a una matrice del numero di elementi per ogni dimensione della matrice.

*rgsabounds*<br/>
Puntatore a un vettore di limiti (uno per ogni dimensione) da allocare per la matrice.

### <a name="remarks"></a>Commenti

Questa funzione eliminerà i dati della matrice corrente, se necessario. In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

## <a name="colesafearraycreateonedim"></a><a name="createonedim"></a> COleSafeArray:: CreateOneDim

Crea un nuovo oggetto unidimensionale `COleSafeArray` .

```cpp
void CreateOneDim(
    VARTYPE vtSrc,
    DWORD dwElements,
    const void* pvSrcData = NULL,
    long nLBound = 0);
```

### <a name="parameters"></a>Parametri

*vtSrc*<br/>
Tipo di base della matrice, ovvero il VARTYPE di ogni elemento della matrice.

*dwElements*<br/>
Numero di elementi nella matrice. Questo può essere modificato dopo la creazione della matrice con [ResizeOneDim](#resizeonedim).

*pvSrcData*<br/>
Puntatore ai dati da copiare nella matrice.

*nLBound*<br/>
Limite inferiore della matrice.

### <a name="remarks"></a>Commenti

La funzione alloca e inizializza i dati per la matrice, copiando i dati specificati se il puntatore *pvSrcData* non è null.

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#28](../../mfc/codesnippet/cpp/colesafearray-class_3.cpp)]

## <a name="colesafearraydestroy"></a><a name="destroy"></a> COleSafeArray::D estroy

Elimina definitivamente un descrittore della matrice esistente e tutti i dati nella matrice.

```cpp
void Destroy();
```

### <a name="remarks"></a>Commenti

Se gli oggetti vengono archiviati nella matrice, vengono rilasciati tutti gli oggetti. In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraydestroydata"></a><a name="destroydata"></a> COleSafeArray::D estroyData

Elimina tutti i dati in una matrice sicura.

```cpp
void DestroyData();
```

### <a name="remarks"></a>Commenti

Se gli oggetti vengono archiviati nella matrice, vengono rilasciati tutti gli oggetti. In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraydestroydescriptor"></a><a name="destroydescriptor"></a> COleSafeArray::D estroyDescriptor

Elimina definitivamente un descrittore di una matrice sicura.

```cpp
void DestroyDescriptor();
```

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraydetach"></a><a name="detach"></a> COleSafeArray::D etach

Scollega i `VARIANT` dati dall' `COleSafeArray` oggetto.

```
VARIANT Detach();
```

### <a name="return-value"></a>Valore restituito

Valore sottostante `VARIANT` nell' `COleSafeArray` oggetto.

### <a name="remarks"></a>Commenti

La funzione disconnette i dati in una matrice protetta impostando il VARTYPE dell'oggetto su VT_EMPTY. È responsabilità del chiamante liberare l'array chiamando la funzione di Windows [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear).

In errore, la funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray::P utelement](#putelement).

## <a name="colesafearraygetbytearray"></a><a name="getbytearray"></a> COleSafeArray:: GetByteArray

Copia il contenuto della matrice sicura in un oggetto `CByteArray` .

```cpp
void GetByteArray(CByteArray& bytes);
```

### <a name="parameters"></a>Parametri

*bytes*<br/>
Riferimento a un oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) .

## <a name="colesafearraygetdim"></a><a name="getdim"></a> COleSafeArray:: GetDim

Restituisce il numero di dimensioni dell' `COleSafeArray` oggetto.

```
DWORD GetDim();
```

### <a name="return-value"></a>Valore restituito

Numero di dimensioni nella matrice sicura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

## <a name="colesafearraygetelement"></a><a name="getelement"></a> COleSafeArray:: GetElement

Recupera un singolo elemento della matrice sicura.

```cpp
void GetElement(
    long* rgIndices,
    void* pvData);
```

### <a name="parameters"></a>Parametri

*rgIndices*<br/>
Puntatore a una matrice di indici per ogni dimensione della matrice.

*pvData*<br/>
Puntatore alla posizione in cui inserire l'elemento della matrice.

### <a name="remarks"></a>Commenti

Questa funzione chiama automaticamente le funzioni `SafeArrayLock` di Windows e `SafeArrayUnlock` prima e dopo il recupero dell'elemento. Se l'elemento dati è una stringa, un oggetto o una variante, la funzione copia l'elemento in modo corretto. Il parametro *pvData* deve puntare a un buffer sufficientemente grande per contenere l'elemento.

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#29](../../mfc/codesnippet/cpp/colesafearray-class_4.cpp)]

## <a name="colesafearraygetelemsize"></a><a name="getelemsize"></a> COleSafeArray:: GetElemSize

Recupera la dimensione di un elemento in un `COleSafeArray` oggetto.

```
DWORD GetElemSize();
```

### <a name="return-value"></a>Valore restituito

Dimensione, in byte, degli elementi di una matrice sicura.

## <a name="colesafearraygetlbound"></a><a name="getlbound"></a> COleSafeArray:: GetLBound

Restituisce il limite inferiore per qualsiasi dimensione di un `COleSafeArray` oggetto.

```cpp
void GetLBound(
    DWORD dwDim,
    long* pLBound);
```

### <a name="parameters"></a>Parametri

*dwDim*<br/>
Dimensione della matrice per la quale ottenere il limite inferiore.

*pLBound*<br/>
Puntatore alla posizione in cui restituire il limite inferiore.

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#30](../../mfc/codesnippet/cpp/colesafearray-class_5.cpp)]

## <a name="colesafearraygetonedimsize"></a><a name="getonedimsize"></a> COleSafeArray:: GetOneDimSize

Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray` .

```
DWORD GetOneDimSize();
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice protetta unidimensionale.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray:: CreateOneDim](#createonedim).

## <a name="colesafearraygetubound"></a><a name="getubound"></a> COleSafeArray:: GetUBound

Restituisce il limite superiore per qualsiasi dimensione di una matrice sicura.

```cpp
void GetUBound(
    DWORD dwDim,
    long* pUBound);
```

### <a name="parameters"></a>Parametri

*dwDim*<br/>
Dimensione della matrice per la quale ottenere il limite superiore.

*pUBound*<br/>
Puntatore alla posizione in cui restituire il limite superiore.

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#31](../../mfc/codesnippet/cpp/colesafearray-class_6.cpp)]

## <a name="colesafearraylock"></a><a name="lock"></a> COleSafeArray:: Lock

Incrementa il conteggio dei blocchi di una matrice e inserisce un puntatore sui dati della matrice nel descrittore della matrice.

```cpp
void Lock();
```

### <a name="remarks"></a>Commenti

In questo errore viene generata un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

Il puntatore nel descrittore della matrice è valido fino a quando non `Unlock` viene chiamato il metodo. Le chiamate a `Lock` possono essere annidate `Unlock` . è necessario lo stesso numero di chiamate a.

Una matrice non può essere eliminata mentre è bloccata.

## <a name="colesafearrayoperator-lpcvariant"></a><a name="operator_lpcvariant"></a> COleSafeArray:: operator LPCVARIANT

Chiamare questo operatore di cast per accedere alla `VARIANT` struttura sottostante per questo `COleSafeArray` oggetto.

```
operator LPCVARIANT() const;
```

## <a name="colesafearrayoperator-lpvariant"></a><a name="operator_lpvariant"></a> COleSafeArray:: operator LPVARIANT

Chiamare questo operatore di cast per accedere alla `VARIANT` struttura sottostante per questo `COleSafeArray` oggetto.

```
operator LPVARIANT();
```

### <a name="remarks"></a>Commenti

Si noti che la modifica del valore nella struttura a cui `VARIANT` accede il puntatore restituito da questa funzione modificherà il valore di questo `COleSafeArray` oggetto.

## <a name="colesafearrayoperator-"></a><a name="operator_eq"></a> COleSafeArray:: operator =

Questi operatori di assegnazione di overload copiano il valore di origine in questo `COleSafeArray` oggetto.

```
COleSafeArray& operator=(const COleSafeArray& saSrc);
COleSafeArray& operator=(const VARIANT& varSrc);
COleSafeArray& operator=(LPCVARIANT pSrc);
COleSafeArray& operator=(const COleVariant& varSrc);
```

### <a name="remarks"></a>Commenti

Di seguito viene riportata una breve descrizione di ogni operatore:

- **operatore = (** *saSrc* **)** Copia un `COleSafeArray` oggetto esistente in questo oggetto.

- **operatore = (** *varSrc* **)** Copia una `VARIANT` matrice o esistente `COleVariant` in questo oggetto.

- **operatore = (** *pSrc* **)** Copia l' `VARIANT` oggetto Array a cui accede *pSrc* in questo oggetto.

## <a name="colesafearrayoperator-"></a><a name="operator_eq_eq"></a> COleSafeArray:: operator = =

Questo operatore confronta due matrici (,, `SAFEARRAY` `VARIANT` `COleVariant` o `COleSafeArray` matrici) e restituisce un valore diverso da zero se sono uguali; in caso contrario, 0.

```
BOOL operator==(const SAFEARRAY& saSrc) const;  BOOL operator==(LPCSAFEARRAY pSrc) const;

BOOL operator==(const COleSafeArray& saSrc) const;  BOOL operator==(const VARIANT& varSrc) const;

BOOL operator==(LPCVARIANT pSrc) const;  BOOL operator==(const COleVariant& varSrc) const;
```

### <a name="remarks"></a>Commenti

Due matrici sono uguali se hanno lo stesso numero di dimensioni, le stesse dimensioni in ogni dimensione e i valori di elemento uguali.

## <a name="colesafearrayoperator-ltlt"></a><a name="operator_lt_lt"></a> Operatore COleSafeArray:: &lt;&lt;

L' `COleSafeArray` operatore di inserimento (<<) supporta il dump di diagnostica e l'archiviazione di un `COleSafeArray` oggetto in un archivio.

```
CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,
    COleSafeArray& saSrc);
```

## <a name="colesafearrayptrofindex"></a><a name="ptrofindex"></a> COleSafeArray::P trOfIndex

Restituisce un puntatore all'elemento specificato dai valori di indice.

```cpp
void PtrOfIndex(
    long* rgIndices,
    void** ppvData);
```

### <a name="parameters"></a>Parametri

*rgIndices*<br/>
Matrice di valori di indice che identificano un elemento della matrice. È necessario specificare tutti gli indici per l'elemento.

*ppvData*<br/>
Al ritorno, puntatore all'elemento identificato dai valori in *rgIndices*.

## <a name="colesafearrayputelement"></a><a name="putelement"></a> COleSafeArray::P utElement

Assegna un singolo elemento nella matrice.

```cpp
void PutElement(
    long* rgIndices,
    void* pvData);
```

### <a name="parameters"></a>Parametri

*rgIndices*<br/>
Puntatore a una matrice di indici per ogni dimensione della matrice.

*pvData*<br/>
Puntatore ai dati da assegnare alla matrice. I tipi Variant VT_DISPATCH, VT_UNKNOWN e VT_BSTR sono puntatori e non richiedono un altro livello di riferimento indiretto.

### <a name="remarks"></a>Commenti

Questa funzione chiama automaticamente le funzioni di Windows [SafeArrayLock](/windows/win32/api/oleauto/nf-oleauto-safearraylock) e [SafeArrayUnlock](/windows/win32/api/oleauto/nf-oleauto-safearrayunlock) prima e dopo l'assegnazione dell'elemento. Se l'elemento dati è una stringa, un oggetto o una variante, la funzione lo copia correttamente e se l'elemento esistente è una stringa, un oggetto o una variante, esso viene cancellato correttamente.

Si noti che possono esistere più blocchi in una matrice. È pertanto possibile inserire elementi in una matrice mentre questa è bloccata da altre operazioni.

In errore, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#32](../../mfc/codesnippet/cpp/colesafearray-class_7.cpp)]

## <a name="colesafearrayredim"></a><a name="redim"></a> COleSafeArray:: ReDim

Modifica il limite meno significativo (più a destra) di una matrice sicura.

```cpp
void Redim(SAFEARRAYBOUND* psaboundNew);
```

### <a name="parameters"></a>Parametri

*psaboundNew*<br/>
Puntatore a una nuova struttura di associazione di matrici sicure che contiene il nuovo limite di matrice. È possibile modificare solo la dimensione meno significativa di una matrice.

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearrayresizeonedim"></a><a name="resizeonedim"></a> COleSafeArray:: ResizeOneDim

Modifica il numero di elementi in un oggetto unidimensionale `COleSafeArray` .

```cpp
void ResizeOneDim(DWORD dwElements);
```

### <a name="parameters"></a>Parametri

*dwElements*<br/>
Numero di elementi nella matrice di sicurezza unidimensionale.

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray:: CreateOneDim](#createonedim).

## <a name="colesafearrayunaccessdata"></a><a name="unaccessdata"></a> COleSafeArray:: UnaccessData

Decrementa il conteggio dei blocchi di una matrice e invalida il puntatore recuperato da `AccessData` .

```cpp
void UnaccessData();
```

### <a name="remarks"></a>Commenti

In errore, la funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray:: AccessData](#accessdata).

## <a name="colesafearrayunlock"></a><a name="unlock"></a> COleSafeArray:: Unlock

Decrementa il conteggio dei blocchi di una matrice in modo che possa essere liberato o ridimensionato.

```cpp
void Unlock();
```

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata dopo che l'accesso ai dati in una matrice è terminato. In questo errore viene generata un'eccezione [COleException](../../mfc/reference/coleexception-class.md).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleVariant](../../mfc/reference/colevariant-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[CDatabase (classe)](../../mfc/reference/cdatabase-class.md)<br/>
