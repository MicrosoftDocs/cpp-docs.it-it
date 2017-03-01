---
title: Classe COleSafeArray | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleSafeArray
dev_langs:
- C++
helpviewer_keywords:
- COleSafeArray class
- arrays [C++], safe
- safe arrays
- ODBC, safe arrays
ms.assetid: f45a5224-5f48-40ec-9ddd-287ef9740150
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 3cb6fa49e3adf7e14c34baf7feb64d12e54f2758
ms.lasthandoff: 02/24/2017

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
|[COleSafeArray::Attach](#attach)|Offre il controllo dell'oggetto esistente **VARIANT** matrice il `COleSafeArray` oggetto.|  
|[COleSafeArray::Clear](#clear)|Libera tutti i dati sottostanti **VARIANT**.|  
|[COleSafeArray::Copy](#copy)|Crea una copia di una matrice esistente.|  
|[COleSafeArray::Create](#create)|Crea una matrice protetta.|  
|[COleSafeArray::CreateOneDim](#createonedim)|Crea un oggetto unidimensionale `COleSafeArray` oggetto.|  
|[COleSafeArray::Destroy](#destroy)|Elimina una matrice esistente.|  
|[COleSafeArray::DestroyData](#destroydata)|Elimina i dati in una matrice protetta.|  
|[COleSafeArray::DestroyDescriptor](#destroydescriptor)|Elimina un descrittore di una matrice sicura.|  
|[COleSafeArray::Detach](#detach)|Consente di scollegare il **VARIANT** matrice dal `COleSafeArray` (in modo che i dati non verranno liberati) dell'oggetto.|  
|[COleSafeArray::GetByteArray](#getbytearray)|Copia il contenuto della matrice protetta in un [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[COleSafeArray::GetDim](#getdim)|Restituisce il numero di dimensioni nella matrice.|  
|[COleSafeArray::GetElement](#getelement)|Recupera un singolo elemento della matrice protetta.|  
|[COleSafeArray::GetElemSize](#getelemsize)|Restituisce la dimensione, in byte, di un elemento in una matrice protetta.|  
|[COleSafeArray::GetLBound](#getlbound)|Restituisce il limite inferiore di qualsiasi dimensione di una matrice sicura.|  
|[COleSafeArray::GetOneDimSize](#getonedimsize)|Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray` oggetto.|  
|[COleSafeArray::GetUBound](#getubound)|Restituisce il limite superiore per qualsiasi dimensione di una matrice sicura.|  
|[COleSafeArray::Lock](#lock)|Incrementa il conteggio dei blocchi di una matrice e inserisce un puntatore alla matrice di dati nel descrittore della matrice.|  
|[COleSafeArray::PtrOfIndex](#ptrofindex)|Restituisce un puntatore all'elemento indicizzato.|  
|[COleSafeArray::PutElement](#putelement)|Assegna un singolo elemento nella matrice.|  
|[COleSafeArray::Redim](#redim)|Consente di modificare il limite meno significativo (destra) di una matrice sicura.|  
|[COleSafeArray::ResizeOneDim](#resizeonedim)|Modifica il numero di elementi in un oggetto unidimensionale `COleSafeArray` oggetto.|  
|[COleSafeArray::UnaccessData](#unaccessdata)|Decrementa il conteggio di una matrice il blocco e invalida il puntatore recuperato da `AccessData`.|  
|[COleSafeArray::Unlock](#unlock)|Decrementa il conteggio dei blocchi di una matrice in modo può essere liberata o ridimensionato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleSafeArray::operator LPCVARIANT](#operator_lpcvariant)|Accede sottostante **VARIANT** della struttura di `COleSafeArray` oggetto.|  
|[COleSafeArray::operator LPVARIANT](#operator_lpvariant)|Accede sottostante **VARIANT** della struttura di `COleSafeArray` oggetto.|  
|[COleSafeArray::operator =](#operator_eq)|Copia i valori in un `COleSafeArray` oggetto ( **SAFEARRAY**, **VARIANT**, `COleVariant`, o `COleSafeArray` matrice).|  
|[COleSafeArray::operator = =](#operator_eq_eq)|Confronta due matrici di tipo variante ( **SAFEARRAY**, **variante**, `COleVariant`, o `COleSafeArray` matrici).|  
|[COleSafeArray::operator&lt;&lt;](#operator_lt_lt)|Restituisce il contenuto di un `COleSafeArray` oggetto al contesto di dump.|  
  
## <a name="remarks"></a>Note  
 `COleSafeArray`deriva da OLE **VARIANT** struttura. OLE **SAFEARRAY** sono disponibili tramite le funzioni membro `COleSafeArray`, nonché come set di funzioni membro appositamente progettata per le matrici unidimensionali di byte.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagVARIANT`  
  
 `COleSafeArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="a-nameaccessdataa--colesafearrayaccessdata"></a><a name="accessdata"></a>COleSafeArray::AccessData  
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
 [!code-cpp[&#26; NVC_MFCOleContainer](../../mfc/codesnippet/cpp/colesafearray-class_1.cpp)]  
  
##  <a name="a-nameallocdataa--colesafearrayallocdata"></a><a name="allocdata"></a>COleSafeArray::AllocData  
 Alloca memoria per una matrice protetta.  
  
```  
void AllocData();
```  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="a-nameallocdescriptora--colesafearrayallocdescriptor"></a><a name="allocdescriptor"></a>COleSafeArray::AllocDescriptor  
 Alloca memoria per il descrittore della matrice protetta.  
  
```  
void AllocDescriptor(DWORD dwDims);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDims`  
 Numero di dimensioni della matrice sicura.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="a-nameattacha--colesafearrayattach"></a><a name="attach"></a>COleSafeArray::Attach  
 Offre il controllo dei dati in un oggetto esistente **VARIANT** matrice il `COleSafeArray` oggetto.  
  
```  
void Attach(VARIANT& varSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *varSrc*  
 Oggetto **VARIANT** oggetto. Il *varSrc* parametro deve avere il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4)**VT_ARRAY**.  
  
### <a name="remarks"></a>Note  
 L'origine **VARIANT**del tipo è impostato su `VT_EMPTY`. Questa funzione Cancella i dati corrente, se presente.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleSafeArray::AccessData](#accessdata).  
  
##  <a name="a-namecleara--colesafearrayclear"></a><a name="clear"></a>COleSafeArray::Clear  
 Cancella la matrice sicura.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 La funzione Cancella una matrice protetta impostando il `VARTYPE` dell'oggetto `VT_EMPTY`. Il contenuto corrente viene rilasciato e la matrice viene liberata.  
  
##  <a name="a-namecolesafearraya--colesafearraycolesafearray"></a><a name="colesafearray"></a>COleSafeArray::COleSafeArray  
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
 Tutti questi costruttori di creare nuovi `COleSafeArray` oggetti. Se non esiste alcun parametro, un oggetto vuoto `COleSafeArray` oggetto viene creato ( `VT_EMPTY`). Se il `COleSafeArray` viene copiato da un'altra matrice la cui proprietà [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) è noto in modo implicito (un `COleSafeArray`, `COleVariant`, o **VARIANT**), il **VARTYPE** dell'origine matrice viene mantenuta e non deve essere specificata. Se il `COleSafeArray` viene copiato da un'altra matrice la cui proprietà **VARTYPE** non è noto ( **SAFEARRAY**), il **VARTYPE** devono essere specificati nel `vtSrc` parametro.  
  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="a-namecopya--colesafearraycopy"></a><a name="copy"></a>COleSafeArray::Copy  
 Crea una copia di una matrice sicura esistente.  
  
```  
void Copy(LPSAFEARRAY* ppsa);
```  
  
### <a name="parameters"></a>Parametri  
 *ppsa*  
 Puntatore a una posizione in cui restituire il nuovo descrittore della matrice.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="a-namecreatea--colesafearraycreate"></a><a name="create"></a>COleSafeArray::Create  
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
 Il tipo di base della matrice (vale a dire il **VARTYPE** di ogni elemento della matrice). Il **VARTYPE** è limitato a un sottoinsieme dei tipi varianti. Né il **VT_ARRAY** né **VT_BYREF** flag può essere impostato. `VT_EMPTY`e **VT_NULL** non sono tipi di base validi per la matrice. Tutti gli altri tipi sono valide.  
  
 `dwDims`  
 Numero di dimensioni della matrice. Questo comportamento può essere modificato dopo la matrice viene creata con [Redim](#redim).  
  
 *rgElements*  
 Puntatore a una matrice del numero di elementi per ogni dimensione della matrice.  
  
 *rgsabounds*  
 Puntatore a un vettore dei limiti (uno per ogni dimensione) da allocare per la matrice.  
  
### <a name="remarks"></a>Note  
 Se necessario, questa funzione cancellerà i dati correnti. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer&#27;](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]  
  
##  <a name="a-namecreateonedima--colesafearraycreateonedim"></a><a name="createonedim"></a>COleSafeArray::CreateOneDim  
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
 Numero di elementi nella matrice. Questo comportamento può essere modificato dopo la matrice viene creata con [ResizeOneDim](#resizeonedim).  
  
 `pvSrcData`  
 Puntatore ai dati da copiare nella matrice.  
  
 *nLBound*  
 Il limite inferiore della matrice.  
  
### <a name="remarks"></a>Note  
 La funzione alloca e inizializza i dati per l'array, copiando i dati specificati, se il puntatore `pvSrcData` non **NULL**.  
  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[28 NVC_MFCOleContainer](../../mfc/codesnippet/cpp/colesafearray-class_3.cpp)]  
  
##  <a name="a-namedestroya--colesafearraydestroy"></a><a name="destroy"></a>COleSafeArray::Destroy  
 Elimina un descrittore della matrice esistente e tutti i dati nella matrice.  
  
```  
void Destroy();
```  
  
### <a name="remarks"></a>Note  
 Se gli oggetti vengono archiviati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="a-namedestroydataa--colesafearraydestroydata"></a><a name="destroydata"></a>COleSafeArray::DestroyData  
 Elimina tutti i dati in una matrice protetta.  
  
```  
void DestroyData();
```  
  
### <a name="remarks"></a>Note  
 Se gli oggetti vengono archiviati nella matrice, ogni oggetto viene rilasciato. In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="a-namedestroydescriptora--colesafearraydestroydescriptor"></a><a name="destroydescriptor"></a>COleSafeArray::DestroyDescriptor  
 Elimina un descrittore di una matrice sicura.  
  
```  
void DestroyDescriptor();
```  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) o [COleException](../../mfc/reference/coleexception-class.md).  
  
##  <a name="a-namedetacha--colesafearraydetach"></a><a name="detach"></a>COleSafeArray::Detach  
 Consente di scollegare il **VARIANT** dati dal `COleSafeArray` oggetto.  
  
```  
VARIANT Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Sottostante **VARIANT** valore di `COleSafeArray` oggetto.  
  
### <a name="remarks"></a>Note  
 La funzione rimuove i dati in una matrice protetta impostando il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) dell'oggetto `VT_EMPTY`. È responsabilità del chiamante liberare la matrice chiamando la funzione di Windows [VariantClear](http://msdn.microsoft.com/en-us/28741d81-8404-4f85-95d3-5c209ec13835).  
  
 In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleSafeArray::PutElement](#putelement).  
  
##  <a name="a-namegetbytearraya--colesafearraygetbytearray"></a><a name="getbytearray"></a>COleSafeArray::GetByteArray  
 Copia il contenuto della matrice protetta in un `CByteArray`.  
  
```  
void GetByteArray(CByteArray& bytes);
```  
  
### <a name="parameters"></a>Parametri  
 `bytes`  
 Un riferimento a un [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto.  
  
##  <a name="a-namegetdima--colesafearraygetdim"></a><a name="getdim"></a>COleSafeArray::GetDim  
 Restituisce il numero di dimensioni di `COleSafeArray` oggetto.  
  
```  
DWORD GetDim();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di dimensioni della matrice sicura.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer&#27;](../../mfc/codesnippet/cpp/colesafearray-class_2.cpp)]  
  
##  <a name="a-namegetelementa--colesafearraygetelement"></a><a name="getelement"></a>COleSafeArray::GetElement  
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
 [!code-cpp[NVC_MFCOleContainer&#29;](../../mfc/codesnippet/cpp/colesafearray-class_4.cpp)]  
  
##  <a name="a-namegetelemsizea--colesafearraygetelemsize"></a><a name="getelemsize"></a>COleSafeArray::GetElemSize  
 Recupera le dimensioni di un elemento in un `COleSafeArray` oggetto.  
  
```  
DWORD GetElemSize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni in byte, degli elementi della matrice protetta.  
  
##  <a name="a-namegetlbounda--colesafearraygetlbound"></a><a name="getlbound"></a>COleSafeArray::GetLBound  
 Restituisce il limite inferiore di qualsiasi dimensione di un `COleSafeArray` oggetto.  
  
```  
void GetLBound(
    DWORD dwDim,  
    long* pLBound);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDim`  
 La dimensione della matrice per cui ottenere il limite inferiore.  
  
 *pLBound*  
 Puntatore alla posizione per restituire il limite inferiore.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_MFCOleContainer](../../mfc/codesnippet/cpp/colesafearray-class_5.cpp)]  
  
##  <a name="a-namegetonedimsizea--colesafearraygetonedimsize"></a><a name="getonedimsize"></a>COleSafeArray::GetOneDimSize  
 Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray` oggetto.  
  
```  
DWORD GetOneDimSize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella matrice unidimensionale-safe.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleSafeArray::CreateOneDim](#createonedim).  
  
##  <a name="a-namegetubounda--colesafearraygetubound"></a><a name="getubound"></a>COleSafeArray::GetUBound  
 Restituisce il limite superiore per qualsiasi dimensione di una matrice sicura.  
  
```  
void GetUBound(
    DWORD dwDim,  
    long* pUBound);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDim`  
 La dimensione della matrice per cui ottenere il limite superiore.  
  
 *pUBound*  
 Puntatore alla posizione per restituire il limite superiore.  
  
### <a name="remarks"></a>Note  
 In caso di errore, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer&#31;](../../mfc/codesnippet/cpp/colesafearray-class_6.cpp)]  
  
##  <a name="a-namelocka--colesafearraylock"></a><a name="lock"></a>COleSafeArray::Lock  
 Incrementa il conteggio dei blocchi di una matrice e un puntatore alla matrice di dati nel descrittore della matrice sul posto.  
  
```  
void Lock();
```  
  
### <a name="remarks"></a>Note  
 In caso di errore, viene generata una [COleException](../../mfc/reference/coleexception-class.md).  
  
 È valido fino a quando il puntatore nel descrittore della matrice `Unlock` viene chiamato. Le chiamate a `Lock` possono essere annidate; lo stesso numero di chiamate a `Unlock` sono necessari.  
  
 Impossibile eliminare una matrice mentre è bloccato.  
  
##  <a name="a-nameoperatorlpcvarianta--colesafearrayoperator-lpcvariant"></a><a name="operator_lpcvariant"></a>COleSafeArray::operator LPCVARIANT  
 Chiamare l'operatore di cast per accedere all'oggetto **VARIANT** per questa struttura `COleSafeArray` oggetto.  
  
```  
operator LPCVARIANT() const;  
```  
  
##  <a name="a-nameoperatorlpvarianta--colesafearrayoperator-lpvariant"></a><a name="operator_lpvariant"></a>COleSafeArray::operator LPVARIANT  
 Chiamare l'operatore di cast per accedere all'oggetto **VARIANT** per questa struttura `COleSafeArray` oggetto.  
  
```  
operator LPVARIANT();
```   
  
### <a name="remarks"></a>Note  
 Si noti che la modifica il valore di **VARIANT** struttura accede il puntatore restituito da questa funzione verrà modificato il valore di questo `COleSafeArray` oggetto.  
  
##  <a name="a-nameoperatoreqa--colesafearrayoperator-"></a><a name="operator_eq"></a>COleSafeArray::operator =  
 Questi operatori di assegnazione di overload copiare il valore di origine in questo `COleSafeArray` oggetto.  
  
```  
COleSafeArray& operator=(const COleSafeArray& saSrc);  
COleSafeArray& operator=(const VARIANT& varSrc);  
  COleSafeArray& operator=(LPCVARIANT pSrc);  
COleSafeArray& operator=(const COleVariant& varSrc);
```  
  
### <a name="remarks"></a>Note  
 Seguirà una breve descrizione di ogni operatore:  
  
- **operatore = (** *saSrc* **)** copia esistente `COleSafeArray` in questo oggetto.  
  
- **operatore = (** *varSrc***)** copia esistente **VARIANT** o `COleVariant` matrice in questo oggetto.  
  
- **operatore = (** `pSrc` **)** copie di **VARIANT** oggetto matrice a cui accede `pSrc` in questo oggetto.  
  
##  <a name="a-nameoperatoreqeqa--colesafearrayoperator-"></a><a name="operator_eq_eq"></a>COleSafeArray::operator = =  
 Questo operatore consente di confrontare due matrici ( **SAFEARRAY**, **VARIANT**, `COleVariant`, o `COleSafeArray` matrici) e restituisce zero se sono uguali; in caso contrario, 0.  
  
```  
BOOL operator==(const SAFEARRAY& saSrc) const;  BOOL operator==(LPCSAFEARRAY pSrc) const;  
   
BOOL operator==(const COleSafeArray& saSrc) const;  BOOL operator==(const VARIANT& varSrc) const;  
   
BOOL operator==(LPCVARIANT pSrc) const;  BOOL operator==(const COleVariant& varSrc) const;  ```  
  
### Remarks  
 Two arrays are equal if they have an equal number of dimensions, equal size in each dimension, and equal element values.  
  
##  <a name="operator_lt_lt"></a>  COleSafeArray::operator &lt;&lt;  
 The `COleSafeArray` insertion (<<) operator supports diagnostic dumping and storing of a `COleSafeArray` object to an archive.  
  
```  
Operatore CDumpContext / AFXAPI<( CDumpContext& dc, cdumpcontext&=""></( CDumpContext& dc,>  
    COleSafeArray / saSrc);
```  
  
##  <a name="ptrofindex"></a>  COleSafeArray::PtrOfIndex  
 Returns a pointer to the element specified by the index values.  
  
```  
void PtrOfIndex (long* rgIndices, void** ppvData);
```  
  
### Parameters  
 `rgIndices`  
 An array of index values that identify an element of the array. All indexes for the element must be specified.  
  
 `ppvData`  
 On return, pointer to the element identified by the values in `rgIndices`.  
  
##  <a name="putelement"></a>  COleSafeArray::PutElement  
 Assigns a single element into the array.  
  
```  
void PutElement (long* rgIndices, void* pvData);
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
void Unlock;
```  
  
### Remarks  
 This function is called after access to the data in an array is finished. On error, it throws a [COleException](../../mfc/reference/coleexception-class.md).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleVariant Class](../../mfc/reference/colevariant-class.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)

