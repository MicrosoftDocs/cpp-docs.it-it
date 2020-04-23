---
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
ms.openlocfilehash: 10e9975bac776429a38bfc707215a9465ce35c2e
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753767"
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
|[COleSafeArray::COleSafeArray (matrice CC)](#colesafearray)|Costruisce un oggetto `COleSafeArray`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleSafeArray::AccessData](#accessdata)|Recupera un puntatore ai dati della matrice.|
|[COleSafeArray::AllocData](#allocdata)|Alloca memoria per la matrice.|
|[COleSafeArray::AllocDescriptor](#allocdescriptor)|Alloca memoria per il descrittore di matrice sicura.|
|[COleSafeArray::Attach](#attach)|Fornisce il controllo `VARIANT` della `COleSafeArray` matrice esistente all'oggetto.|
|[COleSafeArray::Cancella](#clear)|Libera tutti i dati `VARIANT`nell'oggetto sottostante.|
|[COleSafeArray::Copia](#copy)|Crea una copia di una matrice esistente.|
|[COleSafeArray::Create](#create)|Crea una matrice sicura.|
|[COleSafeArray::CreateOneDim](#createonedim)|Crea un oggetto `COleSafeArray` unidimensionale.|
|[COleSafeArray::Destroy](#destroy)|Elimina una matrice esistente.|
|[COleSafeArray::DestroyData](#destroydata)|Elimina i dati in una matrice sicura.|
|[COleSafeArray::DestroyDescriptor](#destroydescriptor)|Elimina il descrittore di una matrice sicura.|
|[COleSafeArray::Detach](#detach)|Scollega la matrice VARIANT `COleSafeArray` dall'oggetto (in modo che i dati non vengano liberati).|
|[COleSafeArray::GetByteArray](#getbytearray)|Copia il contenuto della matrice sicura in un [oggetto CByteArray](../../mfc/reference/cbytearray-class.md).|
|[COleSafeArray::GetDim](#getdim)|Restituisce il numero di dimensioni nella matrice.|
|[COleSafeArray::GetElement](#getelement)|Recupera un singolo elemento della matrice sicura.|
|[COleSafeArray::GetElemSize](#getelemsize)|Restituisce la dimensione, in byte, di un elemento in una matrice sicura.|
|[COleSafeArray::GetLBound (Informazioni in base alle informazioni in due)](#getlbound)|Restituisce il limite inferiore per qualsiasi dimensione di una matrice sicura.|
|[COleSafeArray::GetOneDimSize](#getonedimsize)|Restituisce il numero di elementi `COleSafeArray` nell'oggetto unidimensionale.|
|[COleSafeArray::GetUBound](#getubound)|Restituisce il limite superiore per qualsiasi dimensione di una matrice sicura.|
|[COleSafeArray::Lock (Chiave):](#lock)|Incrementa il conteggio dei blocchi di una matrice e inserisce un puntatore ai dati della matrice nel descrittore della matrice.|
|[COleSafeArray::PtrOfIndex](#ptrofindex)|Restituisce un puntatore all'elemento indicizzato.|
|[COleSafeArray::PutElement](#putelement)|Assegna un singolo elemento nella matrice.|
|[COleSafeArray::Redim](#redim)|Modifica il limite meno significativo (più a destra) di una matrice sicura.|
|[COleSafeArray::ResizeOneDim (Informazioni in base alle persone)](#resizeonedim)|Modifica il numero di elementi `COleSafeArray` in un oggetto unidimensionale.|
|[COleSafeArray::UnaccessData](#unaccessdata)|Decrementa il numero di blocchi di una matrice `AccessData`e invalida il puntatore recuperato da .|
|[COleSafeArray::Sblocca](#unlock)|Decrementa il numero di blocchi di una matrice in modo che possa essere liberata o ridimensionata.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleSafeArray::operatorEVARIANT](#operator_lpcvariant)|Accede alla struttura `VARIANT` sottostante `COleSafeArray` dell'oggetto.|
|[COleSafeArray::operatore LPVARIANT](#operator_lpvariant)|Accede alla struttura `VARIANT` sottostante `COleSafeArray` dell'oggetto.|
|[COleSafeArray::operatore](#operator_eq)|Copia i valori `COleSafeArray` in`SAFEARRAY` `VARIANT`un `COleVariant`oggetto `COleSafeArray` ( , , , o array).|
|[COleSafeArray::operator](#operator_eq_eq)|Confronta due matrici variant`SAFEARRAY` `VARIANT`( `COleVariant`, `COleSafeArray` , , o matrici ).|
|[COleSafeArray::operatore&lt;&lt;](#operator_lt_lt)|Restituisce il contenuto `COleSafeArray` di un oggetto nel contesto dump.|

## <a name="remarks"></a>Osservazioni

`COleSafeArray`deriva dalla struttura `VARIANT` OLE. Le funzioni `SAFEARRAY` membro OLE `COleSafeArray`sono disponibili tramite , nonché un set di funzioni membro progettate specificamente per matrici unidimensionali di byte.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`COleSafeArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="colesafearrayaccessdata"></a><a name="accessdata"></a>COleSafeArray::AccessData

Recupera un puntatore ai dati della matrice.

```cpp
void AccessData(void** ppvData);
```

### <a name="parameters"></a>Parametri

*ppvData (dati di ppvData)*<br/>
Puntatore a un puntatore ai dati della matrice.

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#26](../../mfc/codesnippet/cpp/colesafearray-class_1.cpp)]

## <a name="colesafearrayallocdata"></a><a name="allocdata"></a>COleSafeArray::AllocData

Alloca memoria per una matrice sicura.

```cpp
void AllocData();
```

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearrayallocdescriptor"></a><a name="allocdescriptor"></a>COleSafeArray::AllocDescriptor

Alloca memoria per il descrittore di una matrice sicura.

```cpp
void AllocDescriptor(DWORD dwDims);
```

### <a name="parameters"></a>Parametri

*dwDims*<br/>
Numero di dimensioni nella matrice sicura.

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearrayattach"></a><a name="attach"></a>COleSafeArray::Attach

Fornisce all'oggetto il `VARIANT` `COleSafeArray` controllo dei dati di una matrice esistente.

```cpp
void Attach(VARIANT& varSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT` . Il parametro *varSrc* deve avere il [VT_ARRAY](/windows/win32/api/wtypes/ne-wtypes-varenum)VARTYPE .

### <a name="remarks"></a>Osservazioni

Il `VARIANT`tipo di origine è impostato su VT_EMPTY. Questa funzione cancella i dati della matrice corrente, se presenti.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray::AccessData](#accessdata).

## <a name="colesafearrayclear"></a><a name="clear"></a>COleSafeArray::Cancella

Cancella l'array sicuro.

```cpp
void Clear();
```

### <a name="remarks"></a>Osservazioni

La funzione cancella una matrice `VARTYPE` sicura impostando l'oggetto dell'oggetto su VT_EMPTY. Il contenuto corrente viene rilasciato e l'array viene liberato.

## <a name="colesafearraycolesafearray"></a><a name="colesafearray"></a>COleSafeArray::COleSafeArray (matrice CC)

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
Oggetto `COleSafeArray` esistente `SAFEARRAY` o da copiare `COleSafeArray` nel nuovo oggetto.

*vtSrc*<br/>
VARTYPE del nuovo `COleSafeArray` oggetto.

*psaSrc*<br/>
Puntatore a `SAFEARRAY` a da copiare nel nuovo `COleSafeArray` oggetto.

*varSrc*<br/>
Oggetto `VARIANT` esistente `COleVariant` da copiare nel `COleSafeArray` nuovo oggetto.

*pSrc*<br/>
Puntatore a `VARIANT` un oggetto da `COleSafeArray` copiare nel nuovo oggetto.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori `COleSafeArray` creano nuovi oggetti. Se non è presente `COleSafeArray` alcun parametro, viene creato un oggetto vuoto (VT_EMPTY). Se `COleSafeArray` l'oggetto viene copiato da un'altra `COleSafeArray` `COleVariant`matrice `VARIANT`il cui VARTYPE è noto in modo implicito (a , o ), il VARTYPE della matrice di origine viene mantenuto e non è necessario specificarlo. Se `COleSafeArray` l'oggetto viene copiato da un'altra matrice il cui VARTYPE non è noto (`SAFEARRAY`), il VARTYPE deve essere specificato nel parametro *vtSrc.*

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraycopy"></a><a name="copy"></a>COleSafeArray::Copia

Crea una copia di una matrice sicura esistente.

```cpp
void Copy(LPSAFEARRAY* ppsa);
```

### <a name="parameters"></a>Parametri

*ppsa*<br/>
Puntatore a una posizione in cui restituire il nuovo descrittore della matrice.

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraycreate"></a><a name="create"></a>COleSafeArray::Create

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
Il tipo di base della matrice ( vale a dire il VARTYPE di ogni elemento della matrice). Il VARTYPE è limitato a un sottoinsieme dei tipi variant. Non è possibile impostare né il VT_ARRAY né il flag VT_BYREF. VT_EMPTY e VT_NULL non sono tipi di base validi per la matrice. Tutti gli altri tipi sono legali.

*dwDims*<br/>
Numero di dimensioni nella matrice. Questo può essere modificato dopo la creazione della matrice con [Redim](#redim).

*RgElementi*<br/>
Puntatore a una matrice del numero di elementi per ogni dimensione nella matrice.

*Rgsabounds*<br/>
Puntatore a un vettore di limiti (uno per ogni dimensione) da allocare per la matrice.

### <a name="remarks"></a>Osservazioni

Questa funzione cancellerà i dati della matrice corrente, se necessario. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

## <a name="colesafearraycreateonedim"></a><a name="createonedim"></a>COleSafeArray::CreateOneDim

Crea un nuovo `COleSafeArray` oggetto unidimensionale.

```cpp
void CreateOneDim(
    VARTYPE vtSrc,
    DWORD dwElements,
    const void* pvSrcData = NULL,
    long nLBound = 0);
```

### <a name="parameters"></a>Parametri

*vtSrc*<br/>
Il tipo di base della matrice ( vale a dire il VARTYPE di ogni elemento della matrice).

*dwElements*<br/>
Numero di elementi nella matrice. Questo può essere modificato dopo la creazione della matrice con [ResizeOneDim](#resizeonedim).

*pvSrcDati*<br/>
Puntatore ai dati da copiare nella matrice.

*NLBound (innLBound)*<br/>
Limite inferiore della matrice.

### <a name="remarks"></a>Osservazioni

La funzione alloca e inizializza i dati per la matrice, copiando i dati specificati se il puntatore *pvSrcData* non è NULL.

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#28](../../mfc/codesnippet/cpp/colesafearray-class_3.cpp)]

## <a name="colesafearraydestroy"></a><a name="destroy"></a>COleSafeArray::Destroy

Elimina un descrittore di matrice esistente e tutti i dati nella matrice.

```cpp
void Destroy();
```

### <a name="remarks"></a>Osservazioni

Se gli oggetti vengono archiviati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraydestroydata"></a><a name="destroydata"></a>COleSafeArray::DestroyData

Elimina tutti i dati in una matrice sicura.

```cpp
void DestroyData();
```

### <a name="remarks"></a>Osservazioni

Se gli oggetti vengono archiviati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraydestroydescriptor"></a><a name="destroydescriptor"></a>COleSafeArray::DestroyDescriptor

Elimina il descrittore di una matrice sicura.

```cpp
void DestroyDescriptor();
```

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearraydetach"></a><a name="detach"></a>COleSafeArray::Detach

Scollega i `VARIANT` dati `COleSafeArray` dall'oggetto.

```
VARIANT Detach();
```

### <a name="return-value"></a>Valore restituito

Valore `VARIANT` sottostante `COleSafeArray` nell'oggetto.

### <a name="remarks"></a>Osservazioni

La funzione scollega i dati in una matrice sicura impostando VARTYPE dell'oggetto su VT_EMPTY. È responsabilità del chiamante liberare l'array chiamando la funzione Windows [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear).

In caso di errore, la funzione genera [un'eccezione COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray::PutElement](#putelement).

## <a name="colesafearraygetbytearray"></a><a name="getbytearray"></a>COleSafeArray::GetByteArray

Copia il contenuto della matrice `CByteArray`safe in un oggetto .

```cpp
void GetByteArray(CByteArray& bytes);
```

### <a name="parameters"></a>Parametri

*Byte*<br/>
Riferimento a un oggetto [CByteArray.](../../mfc/reference/cbytearray-class.md)

## <a name="colesafearraygetdim"></a><a name="getdim"></a>COleSafeArray::GetDim

Restituisce il numero `COleSafeArray` di dimensioni nell'oggetto.

```
DWORD GetDim();
```

### <a name="return-value"></a>Valore restituito

Numero di dimensioni nella matrice sicura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]

## <a name="colesafearraygetelement"></a><a name="getelement"></a>COleSafeArray::GetElement

Recupera un singolo elemento della matrice sicura.

```cpp
void GetElement(
    long* rgIndices,
    void* pvData);
```

### <a name="parameters"></a>Parametri

*RgIndices*<br/>
Puntatore a una matrice di indici per ogni dimensione della matrice.

*dati pvData*<br/>
Puntatore alla posizione in cui posizionare l'elemento della matrice.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama automaticamente `SafeArrayLock` `SafeArrayUnlock` le funzioni di windows e prima e dopo il recupero dell'elemento. Se l'elemento dati è una stringa, un oggetto o una variante, la funzione copia l'elemento nel modo corretto. Il parametro *pvData* deve puntare a un buffer sufficientemente grande per contenere l'elemento.

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#29](../../mfc/codesnippet/cpp/colesafearray-class_4.cpp)]

## <a name="colesafearraygetelemsize"></a><a name="getelemsize"></a>COleSafeArray::GetElemSize

Recupera le dimensioni di un `COleSafeArray` elemento in un oggetto.

```
DWORD GetElemSize();
```

### <a name="return-value"></a>Valore restituito

Dimensione, in byte, degli elementi di una matrice sicura.

## <a name="colesafearraygetlbound"></a><a name="getlbound"></a>COleSafeArray::GetLBound (Informazioni in base alle informazioni in due)

Restituisce il limite inferiore `COleSafeArray` per qualsiasi dimensione di un oggetto.

```cpp
void GetLBound(
    DWORD dwDim,
    long* pLBound);
```

### <a name="parameters"></a>Parametri

*dwDim*<br/>
Dimensione della matrice per la quale ottenere il limite inferiore.

*Limite di proprietà*<br/>
Puntatore alla posizione in cui restituire il limite inferiore.

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera [un'eccezione COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#30](../../mfc/codesnippet/cpp/colesafearray-class_5.cpp)]

## <a name="colesafearraygetonedimsize"></a><a name="getonedimsize"></a>COleSafeArray::GetOneDimSize

Restituisce il numero di elementi `COleSafeArray` nell'oggetto unidimensionale.

```
DWORD GetOneDimSize();
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice sicura unidimensionale.

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray::CreateOneDim](#createonedim).

## <a name="colesafearraygetubound"></a><a name="getubound"></a>COleSafeArray::GetUBound

Restituisce il limite superiore per qualsiasi dimensione di una matrice sicura.

```cpp
void GetUBound(
    DWORD dwDim,
    long* pUBound);
```

### <a name="parameters"></a>Parametri

*dwDim*<br/>
Dimensione della matrice per la quale ottenere il limite superiore.

*pUBound (in modo incisivo in*<br/>
Puntatore alla posizione in cui restituire il limite superiore.

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera [un'eccezione COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#31](../../mfc/codesnippet/cpp/colesafearray-class_6.cpp)]

## <a name="colesafearraylock"></a><a name="lock"></a>COleSafeArray::Lock (Chiave):

Incrementa il conteggio dei blocchi di una matrice e inserisce un puntatore ai dati della matrice nel descrittore della matrice.

```cpp
void Lock();
```

### <a name="remarks"></a>Osservazioni

In caso di errore, genera un [COleException](../../mfc/reference/coleexception-class.md).

Il puntatore nel descrittore `Unlock` della matrice è valido fino a quando non viene chiamato. Le `Lock` chiamate a possono essere annidate; è necessario un `Unlock` numero uguale di chiamate a.

Una matrice non può essere eliminata mentre è bloccata.

## <a name="colesafearrayoperator-lpcvariant"></a><a name="operator_lpcvariant"></a>COleSafeArray::operatorEVARIANT

Chiamare questo operatore di `VARIANT` cast `COleSafeArray` per accedere alla struttura sottostante per questo oggetto.

```
operator LPCVARIANT() const;
```

## <a name="colesafearrayoperator-lpvariant"></a><a name="operator_lpvariant"></a>COleSafeArray::operatore LPVARIANT

Chiamare questo operatore di `VARIANT` cast `COleSafeArray` per accedere alla struttura sottostante per questo oggetto.

```
operator LPVARIANT();
```

### <a name="remarks"></a>Osservazioni

Si noti che `VARIANT` la modifica del valore nella struttura a cui `COleSafeArray` accede il puntatore restituito da questa funzione verrà modificato il valore di questo oggetto.

## <a name="colesafearrayoperator-"></a><a name="operator_eq"></a>COleSafeArray::operatore

Questi operatori di assegnazione di `COleSafeArray` overload copiano il valore di origine in questo oggetto.

```
COleSafeArray& operator=(const COleSafeArray& saSrc);
COleSafeArray& operator=(const VARIANT& varSrc);
COleSafeArray& operator=(LPCVARIANT pSrc);
COleSafeArray& operator=(const COleVariant& varSrc);
```

### <a name="remarks"></a>Osservazioni

Di seguito è fornita una breve descrizione di ciascun operatore:

- **operatore : (** *saSrc* **)** Copia un `COleSafeArray` oggetto esistente in questo oggetto.

- **operatore : (** *varSrc* **)** Copia un `VARIANT` oggetto `COleVariant` esistente o una matrice in questo oggetto.

- **operatore : (** *pSrc* **)** Copia l'oggetto `VARIANT` array a cui accede *pSrc* in questo oggetto.

## <a name="colesafearrayoperator-"></a><a name="operator_eq_eq"></a>COleSafeArray::operator

Questo operatore confronta due`SAFEARRAY` `VARIANT`matrici `COleVariant`( `COleSafeArray` , , , o matrici) e restituisce un valore diverso da zero se sono uguali; in caso contrario 0.

```
BOOL operator==(const SAFEARRAY& saSrc) const;  BOOL operator==(LPCSAFEARRAY pSrc) const;

BOOL operator==(const COleSafeArray& saSrc) const;  BOOL operator==(const VARIANT& varSrc) const;

BOOL operator==(LPCVARIANT pSrc) const;  BOOL operator==(const COleVariant& varSrc) const;
```

### <a name="remarks"></a>Osservazioni

Due matrici sono uguali se hanno un numero uguale di dimensioni, uguale dimensione in ogni dimensione e valori di elementi uguali.

## <a name="colesafearrayoperator-ltlt"></a><a name="operator_lt_lt"></a>COleSafeArray::operatore&lt;&lt;

L'operatore `COleSafeArray` di inserimento (<<) supporta `COleSafeArray` il dump diagnostico e l'archiviazione di un oggetto in un archivio.

```
CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,
    COleSafeArray& saSrc);
```

## <a name="colesafearrayptrofindex"></a><a name="ptrofindex"></a>COleSafeArray::PtrOfIndex

Restituisce un puntatore all'elemento specificato dai valori di indice.

```cpp
void PtrOfIndex(
    long* rgIndices,
    void** ppvData);
```

### <a name="parameters"></a>Parametri

*RgIndices*<br/>
Matrice di valori di indice che identificano un elemento della matrice. È necessario specificare tutti gli indici per l'elemento.

*ppvData (dati di ppvData)*<br/>
Al ritorno, puntatore all'elemento identificato dai valori in *rgIndices*.

## <a name="colesafearrayputelement"></a><a name="putelement"></a>COleSafeArray::PutElement

Assegna un singolo elemento nella matrice.

```cpp
void PutElement(
    long* rgIndices,
    void* pvData);
```

### <a name="parameters"></a>Parametri

*RgIndices*<br/>
Puntatore a una matrice di indici per ogni dimensione della matrice.

*dati pvData*<br/>
Puntatore ai dati da assegnare alla matrice. VT_DISPATCH, VT_UNKNOWN e VT_BSTR tipi variant sono puntatori e non richiedono un altro livello di riferimento indiretto.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama automaticamente le funzioni di Windows [SafeArrayLock](/windows/win32/api/oleauto/nf-oleauto-safearraylock) e [SafeArrayUnlock](/windows/win32/api/oleauto/nf-oleauto-safearrayunlock) prima e dopo l'assegnazione dell'elemento. Se l'elemento dati è una stringa, un oggetto o una variante, la funzione lo copia correttamente e se l'elemento esistente è una stringa, un oggetto o una variante, esso viene cancellato correttamente.

Si noti che possono esistere più blocchi in una matrice. È pertanto possibile inserire elementi in una matrice mentre questa è bloccata da altre operazioni.

In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#32](../../mfc/codesnippet/cpp/colesafearray-class_7.cpp)]

## <a name="colesafearrayredim"></a><a name="redim"></a>COleSafeArray::Redim

Modifica il limite meno significativo (più a destra) di una matrice sicura.

```cpp
void Redim(SAFEARRAYBOUND* psaboundNew);
```

### <a name="parameters"></a>Parametri

*psaboundNuovo*<br/>
Puntatore a una nuova struttura associata a una matrice sicura contenente la nuova matrice associata. È possibile modificare solo la dimensione meno significativa di una matrice.

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera [un'eccezione COleException](../../mfc/reference/coleexception-class.md).

## <a name="colesafearrayresizeonedim"></a><a name="resizeonedim"></a>COleSafeArray::ResizeOneDim (Informazioni in base alle persone)

Modifica il numero di elementi `COleSafeArray` in un oggetto unidimensionale.

```cpp
void ResizeOneDim(DWORD dwElements);
```

### <a name="parameters"></a>Parametri

*dwElements*<br/>
Numero di elementi nella matrice sicura unidimensionale.

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera [un'eccezione COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray::CreateOneDim](#createonedim).

## <a name="colesafearrayunaccessdata"></a><a name="unaccessdata"></a>COleSafeArray::UnaccessData

Decrementa il numero di blocchi di una matrice `AccessData`e invalida il puntatore recuperato da .

```cpp
void UnaccessData();
```

### <a name="remarks"></a>Osservazioni

In caso di errore, la funzione genera [un'eccezione COleException](../../mfc/reference/coleexception-class.md).

### <a name="example"></a>Esempio

  Vedere l'esempio per [COleSafeArray::AccessData](#accessdata).

## <a name="colesafearrayunlock"></a><a name="unlock"></a>COleSafeArray::Sblocca

Decrementa il numero di blocchi di una matrice in modo che possa essere liberata o ridimensionata.

```cpp
void Unlock();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata al termine dell'accesso ai dati in una matrice. In caso di errore, genera un [COleException](../../mfc/reference/coleexception-class.md).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleVariant](../../mfc/reference/colevariant-class.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)<br/>
[Classe CDatabase](../../mfc/reference/cdatabase-class.md)<br/>
