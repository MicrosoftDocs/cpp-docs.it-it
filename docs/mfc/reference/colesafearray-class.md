---
title: Classe COleSafeArray | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8a1bad1ccc1671176ce213e59c5d4c8c318a441b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43203424"
---
# <a name="colesafearray-class"></a>Classe COleSafeArray
Classe per utilizzare matrici di tipo e dimensioni arbitrari.

## <a name="syntax"></a>Sintassi

```
class COleSafeArray : public tagVARIANT
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleSafeArray::COleSafeArray](#colesafearray)|Costruisce un oggetto `COleSafeArray`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleSafeArray::AccessData](#accessdata)|Recupera un puntatore alla matrice di dati.|
|[COleSafeArray::AllocData](#allocdata)|Alloca memoria per la matrice.|
|[COleSafeArray::AllocDescriptor](#allocdescriptor)|Alloca memoria per il descrittore della matrice protetta.|
|[COleSafeArray::Attach](#attach)|Offre il controllo dell'oggetto esistente `VARIANT` matrice di `COleSafeArray` oggetto.|
|[COleSafeArray::Clear](#clear)|Libera tutti i dati sottostanti `VARIANT`.|
|[COleSafeArray::Copy](#copy)|Crea una copia di una matrice esistente.|
|[COleSafeArray::Create](#create)|Crea una matrice protetta.|
|[COleSafeArray::CreateOneDim](#createonedim)|Crea una matrice unidimensionale `COleSafeArray` oggetto.|
|[COleSafeArray::Destroy](#destroy)|Elimina una matrice esistente.|
|[COleSafeArray::DestroyData](#destroydata)|Elimina definitivamente i dati in una matrice protetta.|
|[COleSafeArray::DestroyDescriptor](#destroydescriptor)|Elimina definitivamente un descrittore di una matrice protetta.|
|[COleSafeArray::Detach](#detach)|Scollega la matrice di VARIANT di `COleSafeArray` (in modo che i dati non verranno liberati) dell'oggetto.|
|[COleSafeArray::GetByteArray](#getbytearray)|Copia il contenuto della matrice protetta in un [CByteArray](../../mfc/reference/cbytearray-class.md).|
|[COleSafeArray::GetDim](#getdim)|Restituisce il numero di dimensioni nella matrice.|
|[ColeSafeArray:: GetElement](#getelement)|Recupera un singolo elemento della matrice protetta.|
|[COleSafeArray::GetElemSize](#getelemsize)|Restituisce le dimensioni, in byte, di un elemento in una matrice protetta.|
|[COleSafeArray::GetLBound](#getlbound)|Restituisce il limite minimo per una determinata dimensione della matrice protetta.|
|[COleSafeArray::GetOneDimSize](#getonedimsize)|Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray` oggetto.|
|[COleSafeArray::GetUBound](#getubound)|Restituisce il limite superiore per una determinata dimensione della matrice protetta.|
|[COleSafeArray::Lock](#lock)|Incrementa il conteggio dei blocchi di una matrice e inserisce un puntatore alla matrice di dati nel descrittore di matrice.|
|[COleSafeArray::PtrOfIndex](#ptrofindex)|Restituisce un puntatore all'elemento indicizzato.|
|[COleSafeArray::PutElement](#putelement)|Assegna un singolo elemento nella matrice.|
|[COleSafeArray::Redim](#redim)|Modifica del limite meno significativo (all'estrema destra) di una matrice protetta.|
|[COleSafeArray::ResizeOneDim](#resizeonedim)|Modifica il numero di elementi in una matrice unidimensionale `COleSafeArray` oggetto.|
|[COleSafeArray::UnaccessData](#unaccessdata)|Decrementa il conteggio di una matrice il blocco e invalida il puntatore recuperato da `AccessData`.|
|[COleSafeArray::Unlock](#unlock)|Decrementa il conteggio dei blocchi di una matrice in modo che può essere liberato o ridimensionato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleSafeArray::operator LPCVARIANT](#operator_lpcvariant)|Accede a sottostante `VARIANT` struttura del `COleSafeArray` oggetto.|
|[COleSafeArray::operator LPVARIANT](#operator_lpvariant)|Accede a sottostante `VARIANT` struttura del `COleSafeArray` oggetto.|
|[COleSafeArray::operator =](#operator_eq)|Copia i valori in una `COleSafeArray` oggetti (`SAFEARRAY`, `VARIANT`, `COleVariant`, o `COleSafeArray` matrice).|
|[COleSafeArray::operator = =](#operator_eq_eq)|Confronta due matrici variante (`SAFEARRAY`, `VARIANT`, `COleVariant`, o `COleSafeArray` matrici).|
|[COleSafeArray::operator &lt;&lt;](#operator_lt_lt)|Restituisce il contenuto di un `COleSafeArray` oggetto al contesto di dump.|

## <a name="remarks"></a>Note

`COleSafeArray` deriva da OLE `VARIANT` struttura. OLE `SAFEARRAY` sono disponibili tramite le funzioni membro `COleSafeArray`, nonché come un set di funzioni membro appositamente progettata per le matrici unidimensionali di byte.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`COleSafeArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="accessdata"></a>  COleSafeArray::AccessData

Recupera un puntatore alla matrice di dati.

```
void AccessData(void** ppvData);
```

### <a name="parameters"></a>Parametri

*ppvData*<br/>
Un puntatore a un puntatore alla matrice di dati.

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#26](../../mfc/codesnippet/cpp/colesafearray-class_1.cpp)]

##  <a name="allocdata"></a>  COleSafeArray::AllocData

Alloca memoria per una matrice protetta.

```
void AllocData();
```

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="allocdescriptor"></a>  COleSafeArray::AllocDescriptor

Alloca memoria per il descrittore della matrice protetta.

```
void AllocDescriptor(DWORD dwDims);
```

### <a name="parameters"></a>Parametri

*dwDims*<br/>
Numero di dimensioni della matrice protetta.

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="attach"></a>  COleSafeArray::Attach

Offre il controllo dei dati in un oggetto esistente `VARIANT` matrice di `COleSafeArray` oggetto.

```
void Attach(VARIANT& varSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT`. Il *varSrc* parametro deve avere il VARTYPE [VT_ARRAY](/windows/desktop/api/wtypes/ne-wtypes-varenum).

### <a name="remarks"></a>Note

L'origine `VARIANT`del tipo è impostato su VT_EMPTY. Questa funzione Cancella i dati della matrice corrente, se presente.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [COleSafeArray::AccessData](#accessdata).

##  <a name="clear"></a>  COleSafeArray::Clear

Cancella la matrice protetta.

```
void Clear();
```

### <a name="remarks"></a>Note

La funzione Cancella una matrice protetta impostando il `VARTYPE` dell'oggetto parametro su VT_EMPTY. Il contenuto corrente viene rilasciato e la matrice viene liberata.

##  <a name="colesafearray"></a>  COleSafeArray::COleSafeArray

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
Un oggetto esistente `COleSafeArray` oggetto oppure `SAFEARRAY` da copiare nel nuovo `COleSafeArray` oggetto.

*vtSrc*<br/>
Il VARTYPE del nuovo `COleSafeArray` oggetto.

*psaSrc*<br/>
Un puntatore a un `SAFEARRAY` da copiare nel nuovo `COleSafeArray` oggetto.

*varSrc*<br/>
Un oggetto esistente `VARIANT` oppure `COleVariant` oggetto da copiare nel nuovo `COleSafeArray` oggetto.

*pSrc*<br/>
Un puntatore a un `VARIANT` da copiare nel nuovo oggetto `COleSafeArray` oggetto.

### <a name="remarks"></a>Note

Tutti questi costruttori creare nuovi `COleSafeArray` oggetti. Se non è disponibile alcun parametro, un oggetto vuoto `COleSafeArray` oggetto viene creato (VT_EMPTY). Se il `COleSafeArray` viene copiato da un'altra matrice il cui VARTYPE è noto in modo implicito (una `COleSafeArray`, `COleVariant`, o `VARIANT`), VARTYPE della matrice di origine è stato mantenuto e non è necessario specificarlo. Se il `COleSafeArray` viene copiato da un'altra matrice non è noto il cui VARTYPE (`SAFEARRAY`), il VARTYPE deve essere specificato nel *vtSrc* parametro.

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="copy"></a>  COleSafeArray::Copy

Crea una copia di una matrice sicura esistente.

```
void Copy(LPSAFEARRAY* ppsa);
```

### <a name="parameters"></a>Parametri

*ppsa*<br/>
Puntatore a una posizione in cui restituire il nuovo descrittore della matrice.

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="create"></a>  COleSafeArray::Create

Alloca e inizializza i dati per la matrice.

```
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
Il tipo di base della matrice (vale a dire il VARTYPE di ogni elemento della matrice). Il VARTYPE è limitato a un subset dei tipi varianti. È possibile impostare il VT_ARRAY né il flag VT_BYREF. VT_EMPTY e VT_NULL non sono tipi di base validi per la matrice. Tutti gli altri tipi sono valide.

*dwDims*<br/>
Numero di dimensioni nella matrice. Può essere modificato dopo la matrice viene creata con [Redim](#redim).

*rgElements*<br/>
Puntatore a una matrice del numero di elementi per ogni dimensione della matrice.

*rgsabounds*<br/>
Puntatore a un vettore di limiti, una per ogni dimensione, da allocare per la matrice.

### <a name="remarks"></a>Note

Se necessario, questa funzione cancellerà i dati della matrice corrente. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

##  <a name="createonedim"></a>  COleSafeArray::CreateOneDim

Crea un nuovo oggetto unidimensionale `COleSafeArray` oggetto.

```
void CreateOneDim(
    VARTYPE vtSrc,
    DWORD dwElements,
    const void* pvSrcData = NULL,
    long nLBound = 0);
```

### <a name="parameters"></a>Parametri

*vtSrc*<br/>
Il tipo di base della matrice (vale a dire il VARTYPE di ogni elemento della matrice).

*dwElements*<br/>
Numero di elementi nella matrice. Può essere modificato dopo la matrice viene creata con [ResizeOneDim](#resizeonedim).

*pvSrcData*<br/>
Puntatore ai dati da copiare nella matrice.

*nLBound*<br/>
Il limite inferiore della matrice.

### <a name="remarks"></a>Note

La funzione alloca e inizializza i dati per l'array, copiare i dati specificati, se il puntatore del mouse *pvSrcData* non NULL.

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#28](../../mfc/codesnippet/cpp/colesafearray-class_3.cpp)]

##  <a name="destroy"></a>  COleSafeArray::Destroy

Elimina definitivamente un descrittore di matrice esistente e tutti i dati nella matrice.

```
void Destroy();
```

### <a name="remarks"></a>Note

Se gli oggetti vengono archiviati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="destroydata"></a>  COleSafeArray::DestroyData

Elimina tutti i dati in una matrice protetta.

```
void DestroyData();
```

### <a name="remarks"></a>Note

Se gli oggetti vengono archiviati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="destroydescriptor"></a>  COleSafeArray::DestroyDescriptor

Elimina definitivamente un descrittore di una matrice protetta.

```
void DestroyDescriptor();
```

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="detach"></a>  COleSafeArray::Detach

Consente di scollegare il `VARIANT` i dati dal `COleSafeArray` oggetto.

```
VARIANT Detach();
```

### <a name="return-value"></a>Valore restituito

Sottostante `VARIANT` valore di `COleSafeArray` oggetto.

### <a name="remarks"></a>Note

La funzione consente di scollegare i dati in una matrice protetta impostando VARTYPE dell'oggetto parametro su VT_EMPTY. È responsabilità del chiamante liberare la matrice, chiamando la funzione di Windows [VariantClear](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-variantclear).

In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [COleSafeArray::PutElement](#putelement).

##  <a name="getbytearray"></a>  COleSafeArray::GetByteArray

Copia il contenuto della matrice protetta in un `CByteArray`.

```
void GetByteArray(CByteArray& bytes);
```

### <a name="parameters"></a>Parametri

*Byte*<br/>
Un riferimento a un [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto.

##  <a name="getdim"></a>  COleSafeArray::GetDim

Restituisce il numero di dimensioni di `COleSafeArray` oggetto.

```
DWORD GetDim();
```

### <a name="return-value"></a>Valore restituito

Il numero di dimensioni della matrice protetta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

##  <a name="getelement"></a>  ColeSafeArray:: GetElement

Recupera un singolo elemento della matrice protetta.

```
void GetElement(
    long* rgIndices,
    void* pvData);
```

### <a name="parameters"></a>Parametri

*rgIndices*<br/>
Puntatore a una matrice di indici per ogni dimensione della matrice.

*pvData*<br/>
Puntatore alla posizione in cui inserire l'elemento della matrice.

### <a name="remarks"></a>Note

Questa funzione chiama automaticamente le funzioni di windows `SafeArrayLock` e `SafeArrayUnlock` prima e dopo aver recuperato l'elemento. Se l'elemento dati è una stringa, un oggetto o una variante, la funzione Copia l'elemento in modo corretto. Il parametro *pvData* deve puntare a un grande buffer sufficiente per contenere l'elemento.

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#29](../../mfc/codesnippet/cpp/colesafearray-class_4.cpp)]

##  <a name="getelemsize"></a>  COleSafeArray::GetElemSize

Recupera le dimensioni di un elemento in un `COleSafeArray` oggetto.

```
DWORD GetElemSize();
```

### <a name="return-value"></a>Valore restituito

Le dimensioni, in byte, degli elementi della matrice protetta.

##  <a name="getlbound"></a>  COleSafeArray::GetLBound

Restituisce il limite inferiore di una determinata dimensione di un `COleSafeArray` oggetto.

```
void GetLBound(
    DWORD dwDim,
    long* pLBound);
```

### <a name="parameters"></a>Parametri

*dwDim*<br/>
La dimensione di matrice per cui ottenere il limite inferiore.

*pLBound*<br/>
Puntatore alla posizione per restituire il limite inferiore.

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#30](../../mfc/codesnippet/cpp/colesafearray-class_5.cpp)]

##  <a name="getonedimsize"></a>  COleSafeArray::GetOneDimSize

Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray` oggetto.

```
DWORD GetOneDimSize();
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi della matrice protetta unidimensionale.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [COleSafeArray::CreateOneDim](#createonedim).

##  <a name="getubound"></a>  COleSafeArray::GetUBound

Restituisce il limite superiore per una determinata dimensione della matrice protetta.

```
void GetUBound(
    DWORD dwDim,
    long* pUBound);
```

### <a name="parameters"></a>Parametri

*dwDim*<br/>
La dimensione di matrice per cui ottenere il limite superiore.

*pUBound*<br/>
Puntatore alla posizione per restituire il limite superiore.

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#31](../../mfc/codesnippet/cpp/colesafearray-class_6.cpp)]

##  <a name="lock"></a>  COleSafeArray::Lock

Incrementa il conteggio dei blocchi di una matrice e un puntatore alla matrice di dati nel descrittore di matrice sul posto.

```
void Lock();
```

### <a name="remarks"></a>Note

In caso di errore, viene generata una [COleException](../../mfc/reference/coleexception-class.md).

Il puntatore nel descrittore della matrice è valido fino a `Unlock` viene chiamato. Le chiamate a `Lock` possono essere annidate; un numero uguale di chiamate a `Unlock` sono necessari.

Una matrice non può essere eliminata mentre è bloccato.

##  <a name="operator_lpcvariant"></a>  COleSafeArray::operator LPCVARIANT

Chiamare questo operatore di cast per accedere a sottostante `VARIANT` struttura per l'oggetto `COleSafeArray` oggetto.

```
operator LPCVARIANT() const;
```

##  <a name="operator_lpvariant"></a>  COleSafeArray::operator LPVARIANT

Chiamare questo operatore di cast per accedere a sottostante `VARIANT` struttura per l'oggetto `COleSafeArray` oggetto.

```
operator LPVARIANT();
```

### <a name="remarks"></a>Note

Si noti che la modifica il valore di `VARIANT` struttura a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questa `COleSafeArray` oggetto.

##  <a name="operator_eq"></a>  COleSafeArray::operator =

Questi operatori di assegnazione di overload copiare il valore di origine in questo `COleSafeArray` oggetto.

```
COleSafeArray& operator=(const COleSafeArray& saSrc);
COleSafeArray& operator=(const VARIANT& varSrc);
  COleSafeArray& operator=(LPCVARIANT pSrc);
COleSafeArray& operator=(const COleVariant& varSrc);
```

### <a name="remarks"></a>Note

Di seguito una breve descrizione di ogni operatore:

- **operatore = (** *saSrc* **)** copia un oggetto esistente `COleSafeArray` oggetto in questo oggetto.

- **operatore = (** *varSrc* **)** copia un oggetto esistente `VARIANT` o `COleVariant` matrice in questo oggetto.

- **operatore = (** *pSrc* **)** copie il `VARIANT` oggetto matrice a cui accede *pSrc* in questo oggetto.

##  <a name="operator_eq_eq"></a>  COleSafeArray::operator = =

Questo operatore confronta due matrici (`SAFEARRAY`, `VARIANT`, `COleVariant`, o `COleSafeArray` matrici) e restituisce diverso da zero se sono uguali; in caso contrario 0.

```
BOOL operator==(const SAFEARRAY& saSrc) const;  BOOL operator==(LPCSAFEARRAY pSrc) const;

BOOL operator==(const COleSafeArray& saSrc) const;  BOOL operator==(const VARIANT& varSrc) const;

BOOL operator==(LPCVARIANT pSrc) const;  BOOL operator==(const COleVariant& varSrc) const;
```

### <a name="remarks"></a>Note

Due matrici sono uguali se hanno un numero uguale di quote, dimensioni uguali in ogni dimensione e i valori degli elementi uguali.

##  <a name="operator_lt_lt"></a>  COleSafeArray::operator &lt;&lt;

Il `COleSafeArray` inserimento (<<) operatore supporta il dump di diagnostica e l'archiviazione di un `COleSafeArray` oggetto in un archivio.

```
CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,
    COleSafeArray& saSrc);
```

##  <a name="ptrofindex"></a>  COleSafeArray::PtrOfIndex

Restituisce un puntatore all'elemento specificato dai valori di indice.

```
void PtrOfIndex(
    long* rgIndices,
    void** ppvData);
```

### <a name="parameters"></a>Parametri

*rgIndices*<br/>
Matrice di valori di indice che identifica un elemento della matrice. È necessario specificare tutti gli indici per l'elemento.

*ppvData*<br/>
Su return, puntatore all'elemento identificato in base ai valori *rgIndices*.

##  <a name="putelement"></a>  COleSafeArray::PutElement

Assegna un singolo elemento nella matrice.

```
void PutElement(
    long* rgIndices,
    void* pvData);
```

### <a name="parameters"></a>Parametri

*rgIndices*<br/>
Puntatore a una matrice di indici per ogni dimensione della matrice.

*pvData*<br/>
Puntatore ai dati da assegnare alla matrice. Tipi variant VT_DISPATCH VT_UNKNOWN e VT_BSTR sono puntatori e non richiedono un ulteriore livello di riferimento indiretto.

### <a name="remarks"></a>Note

Questa funzione chiama automaticamente le funzioni di Windows [SafeArrayLock](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-safearraylock) e [SafeArrayUnlock](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-safearrayunlock) prima e dopo l'assegnazione dell'elemento. Se l'elemento dati è una stringa, un oggetto o una variante, la funzione lo copia correttamente e se l'elemento esistente è una stringa, un oggetto o una variante, esso viene cancellato correttamente.

Si noti che possono esistere più blocchi in una matrice. È pertanto possibile inserire elementi in una matrice mentre questa è bloccata da altre operazioni.

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) oppure [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#32](../../mfc/codesnippet/cpp/colesafearray-class_7.cpp)]

##  <a name="redim"></a>  COleSafeArray::Redim

Modifica del limite meno significativo (all'estrema destra) di una matrice protetta.

```
void Redim(SAFEARRAYBOUND* psaboundNew);
```

### <a name="parameters"></a>Parametri

*psaboundNew*<br/>
Puntatore a una nuova matrice protetta associato struttura che contiene il nuovo array associato. Può essere modificata solo la dimensione meno significativa di una matrice.

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).

##  <a name="resizeonedim"></a>  COleSafeArray::ResizeOneDim

Modifica il numero di elementi in una matrice unidimensionale `COleSafeArray` oggetto.

```
void ResizeOneDim(DWORD dwElements);
```

### <a name="parameters"></a>Parametri

*dwElements*<br/>
Numero di elementi della matrice protetta unidimensionale.

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [COleSafeArray::CreateOneDim](#createonedim).

##  <a name="unaccessdata"></a>  COleSafeArray::UnaccessData

Decrementa il conteggio di una matrice il blocco e invalida il puntatore recuperato da `AccessData`.

```
void UnaccessData();
```

### <a name="remarks"></a>Note

In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [COleSafeArray::AccessData](#accessdata).

##  <a name="unlock"></a>  COleSafeArray::Unlock

Decrementa il conteggio dei blocchi di una matrice in modo che può essere liberato o ridimensionato.

```
void Unlock();
```

### <a name="remarks"></a>Note

Questa funzione viene chiamata dopo aver completato l'accesso ai dati in una matrice. In caso di errore, viene generata una [COleException](../../mfc/reference/coleexception-class.md).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleVariant](../../mfc/reference/colevariant-class.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
