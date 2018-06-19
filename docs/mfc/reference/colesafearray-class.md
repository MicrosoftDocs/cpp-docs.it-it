---
title: Classe COleSafeArray | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: e21cecc00c9aab170c79247bced635783541be48
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33376877"
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
|[COleSafeArray::AllocDescriptor](#allocdescriptor)|Alloca memoria per il descrittore di matrice protetta.|  
|[COleSafeArray::Attach](#attach)|Offre un controllo dell'oggetto esistente **VARIANT** matrice il `COleSafeArray` oggetto.|  
|[COleSafeArray::Clear](#clear)|Libera tutti i dati sottostanti **VARIANT**.|  
|[COleSafeArray::Copy](#copy)|Crea una copia di una matrice esistente.|  
|[COleSafeArray::Create](#create)|Crea una matrice protetta.|  
|[COleSafeArray::CreateOneDim](#createonedim)|Crea un oggetto unidimensionale `COleSafeArray` oggetto.|  
|[COleSafeArray::Destroy](#destroy)|Elimina definitivamente una matrice esistente.|  
|[COleSafeArray::DestroyData](#destroydata)|Elimina i dati in una matrice protetta.|  
|[COleSafeArray::DestroyDescriptor](#destroydescriptor)|Elimina definitivamente un descrittore di una matrice sicura.|  
|[COleSafeArray::Detach](#detach)|Disconnette il **VARIANT** della matrice dal `COleSafeArray` oggetto (in modo che i dati non verranno liberati).|  
|[COleSafeArray::GetByteArray](#getbytearray)|Copia il contenuto della matrice protetta in un [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[COleSafeArray::GetDim](#getdim)|Restituisce il numero di dimensioni nella matrice.|  
|[ColeSafeArray:: GetElement](#getelement)|Recupera un singolo elemento della matrice protetta.|  
|[COleSafeArray::GetElemSize](#getelemsize)|Restituisce le dimensioni, in byte, di un elemento in una matrice protetta.|  
|[COleSafeArray::GetLBound](#getlbound)|Restituisce il limite inferiore di qualsiasi dimensione di una matrice sicura.|  
|[COleSafeArray::GetOneDimSize](#getonedimsize)|Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray` oggetto.|  
|[COleSafeArray::GetUBound](#getubound)|Restituisce il limite superiore di qualsiasi dimensione di una matrice sicura.|  
|[COleSafeArray::Lock](#lock)|Incrementa il conteggio dei blocchi di una matrice e posiziona un puntatore alla matrice di dati nel descrittore della matrice.|  
|[COleSafeArray::PtrOfIndex](#ptrofindex)|Restituisce un puntatore all'elemento indicizzato.|  
|[COleSafeArray::PutElement](#putelement)|Assegna un singolo elemento nella matrice.|  
|[COleSafeArray::Redim](#redim)|Modifica il limite meno significativo (all'estrema destra) di una matrice sicura.|  
|[COleSafeArray::ResizeOneDim](#resizeonedim)|Modifica il numero di elementi in un oggetto unidimensionale `COleSafeArray` oggetto.|  
|[COleSafeArray::UnaccessData](#unaccessdata)|Decrementa il blocco numero di una matrice e invalida il puntatore recuperato da `AccessData`.|  
|[COleSafeArray::Unlock](#unlock)|Decrementa il conteggio dei blocchi di una matrice in modo può essere liberato o ridimensionato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleSafeArray::operator LPCVARIANT](#operator_lpcvariant)|Accede a sottostante **VARIANT** struttura il `COleSafeArray` oggetto.|  
|[COleSafeArray::operator LPVARIANT](#operator_lpvariant)|Accede a sottostante **VARIANT** struttura il `COleSafeArray` oggetto.|  
|[COleSafeArray::operator =](#operator_eq)|Copia i valori in un `COleSafeArray` oggetto ( **SAFEARRAY**, **VARIANT**, `COleVariant`, o `COleSafeArray` matrice).|  
|[COleSafeArray::operator = =](#operator_eq_eq)|Confronta due matrici di tipo variant ( **SAFEARRAY**, **variante**, `COleVariant`, o `COleSafeArray` matrici).|  
|[COleSafeArray::operator &lt;&lt;](#operator_lt_lt)|Restituisce il contenuto di un `COleSafeArray` oggetto al contesto di dump.|  
  
## <a name="remarks"></a>Note  
 `COleSafeArray` deriva da OLE **VARIANT** struttura. OLE **SAFEARRAY** sono disponibili tramite le funzioni membro `COleSafeArray`, nonché come un set di funzioni membro appositamente progettati per le matrici unidimensionali di byte.  
  
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
 `ppvData`  
 Un puntatore a un puntatore alla matrice di dati.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#26](../../mfc/codesnippet/cpp/colesafearray-class_1.cpp)]  
  
##  <a name="allocdata"></a>  COleSafeArray::AllocData  
 Alloca memoria per una matrice protetta.  
  
```  
void AllocData();
```  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="allocdescriptor"></a>  COleSafeArray::AllocDescriptor  
 Alloca memoria per il descrittore di una matrice sicura.  
  
```  
void AllocDescriptor(DWORD dwDims);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDims`  
 Numero di dimensioni della matrice-safe.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="attach"></a>  COleSafeArray::Attach  
 Controllo dei dati in un oggetto esistente **VARIANT** matrice il `COleSafeArray` oggetto.  
  
```  
void Attach(VARIANT& varSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *varSrc*  
 Oggetto **VARIANT** oggetto. Il *varSrc* parametro deve avere il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4)**VT_ARRAY**.  
  
### <a name="remarks"></a>Note  
 L'origine **VARIANT**del tipo è impostato su `VT_EMPTY`. Questa funzione Cancella la matrice di dati corrente, se presente.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [COleSafeArray::AccessData](#accessdata).  
  
##  <a name="clear"></a>  COleSafeArray::Clear  
 Cancella la matrice protetta.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 La funzione Cancella una matrice protetta impostando il `VARTYPE` dell'oggetto da `VT_EMPTY`. Il contenuto corrente viene rilasciato e la matrice viene liberata.  
  
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
 `saSrc`  
 Un oggetto esistente `COleSafeArray` oggetto o **SAFEARRAY** da copiare nel nuovo `COleSafeArray` oggetto.  
  
 `vtSrc`  
 Il **VARTYPE** del nuovo `COleSafeArray` oggetto.  
  
 `psaSrc`  
 Un puntatore a un **SAFEARRAY** da copiare nel nuovo `COleSafeArray` oggetto.  
  
 *varSrc*  
 Un oggetto esistente **VARIANT** o `COleVariant` oggetto da copiare nel nuovo `COleSafeArray` oggetto.  
  
 `pSrc`  
 Un puntatore a un **VARIANT** oggetto da copiare nel nuovo `COleSafeArray` oggetto.  
  
### <a name="remarks"></a>Note  
 Tutti questi costruttori creare nuovi `COleSafeArray` oggetti. Se è presente alcun parametro, un oggetto vuoto `COleSafeArray` viene creato l'oggetto ( `VT_EMPTY`). Se il `COleSafeArray` viene copiato da un'altra matrice il cui [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) è noto in modo implicito (un `COleSafeArray`, `COleVariant`, o **VARIANT**), il **VARTYPE** di Matrice di origine viene mantenuta e non deve essere specificata. Se il `COleSafeArray` viene copiato da un'altra matrice il cui **VARTYPE** non è noto ( **SAFEARRAY**), il **VARTYPE** devono essere specificati nel `vtSrc` parametro.  
  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="copy"></a>  COleSafeArray::Copy  
 Crea una copia di una matrice sicura esistente.  
  
```  
void Copy(LPSAFEARRAY* ppsa);
```  
  
### <a name="parameters"></a>Parametri  
 *ppsa*  
 Puntatore a un percorso in cui restituire il nuovo descrittore della matrice.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
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
 `vtSrc`  
 Il tipo di base della matrice (vale a dire il **VARTYPE** di ogni elemento della matrice). Il **VARTYPE** è limitato a un subset dei tipi variant. Né il **VT_ARRAY** né la **VT_BYREF** flag può essere impostato. `VT_EMPTY` e **VT_NULL** non sono tipi di base validi per la matrice. Tutti gli altri tipi sono valide.  
  
 `dwDims`  
 Numero di dimensioni della matrice. Questo comportamento può essere modificato dopo la creazione della matrice con [Redim](#redim).  
  
 *rgElements*  
 Puntatore a una matrice del numero di elementi per ogni dimensione della matrice.  
  
 *rgsabounds*  
 Puntatore a un vettore di limiti, una per ogni dimensione, da allocare per la matrice.  
  
### <a name="remarks"></a>Note  
 Se necessario, questa funzione eliminerà i dati della matrice corrente. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#27](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]  
  
##  <a name="createonedim"></a>  COleSafeArray::CreateOneDim  
 Crea un nuovo unidimensionale `COleSafeArray` oggetto.  
  
```  
void CreateOneDim(
    VARTYPE vtSrc,  
    DWORD dwElements,  
    const void* pvSrcData = NULL,  
    long nLBound = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `vtSrc`  
 Il tipo di base della matrice (vale a dire il **VARTYPE** di ogni elemento della matrice).  
  
 `dwElements`  
 Numero di elementi nella matrice. Questo comportamento può essere modificato dopo la creazione della matrice con [ResizeOneDim](#resizeonedim).  
  
 `pvSrcData`  
 Puntatore ai dati da copiare nella matrice.  
  
 *nLBound*  
 Il limite inferiore della matrice.  
  
### <a name="remarks"></a>Note  
 La funzione alloca e inizializza i dati per la matrice, copiando i dati specificati, se il puntatore `pvSrcData` non **NULL**.  
  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#28](../../mfc/codesnippet/cpp/colesafearray-class_3.cpp)]  
  
##  <a name="destroy"></a>  COleSafeArray::Destroy  
 Elimina definitivamente un descrittore della matrice esistente e tutti i dati nella matrice.  
  
```  
void Destroy();
```  
  
### <a name="remarks"></a>Note  
 Se gli oggetti vengono memorizzati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="destroydata"></a>  COleSafeArray::DestroyData  
 Elimina tutti i dati in una matrice protetta.  
  
```  
void DestroyData();
```  
  
### <a name="remarks"></a>Note  
 Se gli oggetti vengono memorizzati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="destroydescriptor"></a>  COleSafeArray::DestroyDescriptor  
 Elimina definitivamente un descrittore di una matrice sicura.  
  
```  
void DestroyDescriptor();
```  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="detach"></a>  COleSafeArray::Detach  
 Disconnette il **VARIANT** dati dal `COleSafeArray` oggetto.  
  
```  
VARIANT Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Sottostante **VARIANT** valore di `COleSafeArray` oggetto.  
  
### <a name="remarks"></a>Note  
 La funzione rimuove i dati in una matrice protetta impostando il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) dell'oggetto da `VT_EMPTY`. È responsabilità del chiamante liberare la matrice chiamando la funzione Windows [VariantClear](http://msdn.microsoft.com/en-us/28741d81-8404-4f85-95d3-5c209ec13835).  
  
 In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [COleSafeArray::PutElement](#putelement).  
  
##  <a name="getbytearray"></a>  COleSafeArray::GetByteArray  
 Copia il contenuto della matrice protetta in un `CByteArray`.  
  
```  
void GetByteArray(CByteArray& bytes);
```  
  
### <a name="parameters"></a>Parametri  
 `bytes`  
 Un riferimento a un [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto.  
  
##  <a name="getdim"></a>  COleSafeArray::GetDim  
 Restituisce il numero di dimensioni di `COleSafeArray` oggetto.  
  
```  
DWORD GetDim();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di dimensioni della matrice-safe.  
  
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
 `rgIndices`  
 Puntatore a una matrice di indici per ogni dimensione della matrice.  
  
 `pvData`  
 Puntatore alla posizione in cui inserire l'elemento della matrice.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama automaticamente le funzioni di windows `SafeArrayLock` e `SafeArrayUnlock` prima e dopo aver recuperato l'elemento. Se l'elemento dati è una stringa, un oggetto o una variante, la funzione Copia l'elemento in modo corretto. Il parametro `pvData` deve puntare a un grande buffer con dimensioni sufficienti per contenere l'elemento.  
  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#29](../../mfc/codesnippet/cpp/colesafearray-class_4.cpp)]  
  
##  <a name="getelemsize"></a>  COleSafeArray::GetElemSize  
 Recupera le dimensioni di un elemento in un `COleSafeArray` oggetto.  
  
```  
DWORD GetElemSize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni in byte, degli elementi della matrice protetta.  
  
##  <a name="getlbound"></a>  COleSafeArray::GetLBound  
 Restituisce il limite inferiore di qualsiasi dimensione di un `COleSafeArray` oggetto.  
  
```  
void GetLBound(
    DWORD dwDim,  
    long* pLBound);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDim`  
 La dimensione di matrice per cui ottenere il limite inferiore.  
  
 *pLBound*  
 Puntatore al percorso per restituire il limite inferiore.  
  
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
 Il numero di elementi nella matrice unidimensionale-safe.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [COleSafeArray::CreateOneDim](#createonedim).  
  
##  <a name="getubound"></a>  COleSafeArray::GetUBound  
 Restituisce il limite superiore di qualsiasi dimensione di una matrice sicura.  
  
```  
void GetUBound(
    DWORD dwDim,  
    long* pUBound);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDim`  
 La dimensione di matrice per cui ottenere il limite superiore.  
  
 *pUBound*  
 Puntatore al percorso per restituire il limite superiore.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#31](../../mfc/codesnippet/cpp/colesafearray-class_6.cpp)]  
  
##  <a name="lock"></a>  COleSafeArray::Lock  
 Incrementa il conteggio dei blocchi di una matrice e sul posto di un puntatore alla matrice di dati nel descrittore della matrice.  
  
```  
void Lock();
```  
  
### <a name="remarks"></a>Note  
 In caso di errore, viene generata una [COleException](../../mfc/reference/coleexception-class.md).  
  
 È valido fino a quando il puntatore nel descrittore della matrice `Unlock` viene chiamato. Le chiamate a `Lock` possono essere annidate; un numero uguale di chiamate a `Unlock` sono necessari.  
  
 Impossibile eliminare una matrice è bloccato.  
  
##  <a name="operator_lpcvariant"></a>  COleSafeArray::operator LPCVARIANT  
 Chiamare l'operatore di cast per accedere all'oggetto **VARIANT** struttura per questo `COleSafeArray` oggetto.  
  
```  
operator LPCVARIANT() const;  
```  
  
##  <a name="operator_lpvariant"></a>  COleSafeArray::operator LPVARIANT  
 Chiamare l'operatore di cast per accedere all'oggetto **VARIANT** struttura per questo `COleSafeArray` oggetto.  
  
```  
operator LPVARIANT();
```   
  
### <a name="remarks"></a>Note  
 Si noti che la modifica il valore di **VARIANT** struttura a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questo `COleSafeArray` oggetto.  
  
##  <a name="operator_eq"></a>  COleSafeArray::operator =  
 Questi operatori di assegnazione di overload copiare il valore di origine in questo `COleSafeArray` oggetto.  
  
```  
COleSafeArray& operator=(const COleSafeArray& saSrc);  
COleSafeArray& operator=(const VARIANT& varSrc);  
  COleSafeArray& operator=(LPCVARIANT pSrc);  
COleSafeArray& operator=(const COleVariant& varSrc);
```  
  
### <a name="remarks"></a>Note  
 Di seguito una breve descrizione di ciascun operatore:  
  
- **operatore = (** *saSrc* **)** copia esistente `COleSafeArray` oggetto in questo oggetto.  
  
- **operatore = (** *varSrc * * *)** copia esistente **VARIANT** o `COleVariant` matrice in questo oggetto.  
  
- **operatore = (** `pSrc` **)** copie il **VARIANT** oggetto matrice a cui accede `pSrc` in questo oggetto.  
  
##  <a name="operator_eq_eq"></a>  COleSafeArray::operator = =  
 Questo operatore confronta due matrici ( **SAFEARRAY**, **VARIANT**, `COleVariant`, o `COleSafeArray` matrici) e restituisce diverso da zero se sono uguali; in caso contrario 0.  
  
```  
BOOL operator==(const SAFEARRAY& saSrc) const;  BOOL operator==(LPCSAFEARRAY pSrc) const;  
   
BOOL operator==(const COleSafeArray& saSrc) const;  BOOL operator==(const VARIANT& varSrc) const;  
   
BOOL operator==(LPCVARIANT pSrc) const;  BOOL operator==(const COleVariant& varSrc) const;  ```  
  
### Remarks  
 Two arrays are equal if they have an equal number of dimensions, equal size in each dimension, and equal element values.  
  
##  <a name="operator_lt_lt"></a>  COleSafeArray::operator &lt;&lt;  
 The `COleSafeArray` insertion (<<) operator supports diagnostic dumping and storing of a `COleSafeArray` object to an archive.  
  
```  
Operatore CDumpContext & AFXAPI << (CDumpContext & controller di dominio,  
    COleSafeArray & saSrc);
```  
  
##  <a name="ptrofindex"></a>  COleSafeArray::PtrOfIndex  
 Returns a pointer to the element specified by the index values.  
  
```  
PtrOfIndex (rgIndices prolungata *, void  
    void * * ppvData);
```  
  
### Parameters  
 `rgIndices`  
 An array of index values that identify an element of the array. All indexes for the element must be specified.  
  
 `ppvData`  
 On return, pointer to the element identified by the values in `rgIndices`.  
  
##  <a name="putelement"></a>  COleSafeArray::PutElement  
 Assigns a single element into the array.  
  
```  
PutElement (rgIndices prolungata *, void  
    void * pvData);
```  
  
### Parameters  
 `rgIndices`  
 Pointer to an array of indexes for each dimension of the array.  
  
 `pvData`  
 Pointer to the data to assign to the array. **VT_DISPATCH**, **VT_UNKNOWN**, and `VT_BSTR` variant types are pointers and do not require another level of indirection.  
  
### Remarks  
 This function automatically calls the Windows functions [SafeArrayLock](https://msdn.microsoft.com/library/windows/desktop/ms221492.aspx) and [SafeArrayUnlock](https://msdn.microsoft.com/library/windows/desktop/ms221246.aspx) before and after assigning the element. If the data element is a string, object, or variant, the function copies it correctly, and if the existing element is a string, object, or variant, it is cleared correctly.  
  
 Note that you can have multiple locks on an array, so you can put elements into an array while the array is locked by other operations.  
  
 On error, the function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#32](../../mfc/codesnippet/cpp/colesafearray-class_7.cpp)]  
  
##  <a name="redim"></a>  COleSafeArray::Redim  
 Changes the least significant (rightmost) bound of a safe array.  
  
```  
Redim void (SAFEARRAYBOUND * psaboundNew);
```  
  
### Parameters  
 *psaboundNew*  
 Pointer to a new safe array bound structure containing the new array bound. Only the least significant dimension of an array may be changed.  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="resizeonedim"></a>  COleSafeArray::ResizeOneDim  
 Changes the number of elements in a one-dimensional `COleSafeArray` object.  
  
```  
void ResizeOneDim (DWORD dwElements);
```  
  
### Parameters  
 `dwElements`  
 Number of elements in the one-dimensional safe array.  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
  See the example for [COleSafeArray::CreateOneDim](#createonedim).  
  
##  <a name="unaccessdata"></a>  COleSafeArray::UnaccessData  
 Decrements the lock count of an array and invalidates the pointer retrieved by `AccessData`.  
  
```  
void UnaccessData();
```  
  
### Remarks  
 On error, the function throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
### Example  
  See the example for [COleSafeArray::AccessData](#accessdata).  
  
##  <a name="unlock"></a>  COleSafeArray::Unlock  
 Decrements the lock count of an array so it can be freed or resized.  
  
```  
Unlock void;
```  
  
### Remarks  
 This function is called after access to the data in an array is finished. On error, it throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleVariant Class](../../mfc/reference/colevariant-class.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)
