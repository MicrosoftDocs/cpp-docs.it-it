---
title: Classe CComSafeArray | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComSafeArray
dev_langs:
- C++
helpviewer_keywords:
- CComSafeArray class
ms.assetid: ee349aef-33db-4c85-bd08-5d86a3c9d53a
caps.latest.revision: 26
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: e78c0cb7a0e2fb6cc1e1ac4bba9186d4beee98b4
ms.lasthandoff: 02/24/2017

---
# <a name="ccomsafearray-class"></a>Classe CComSafeArray
La classe è un wrapper della struttura **SAFEARRAY** .  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T, VARTYPE _vartype = _ATL_AutomationType<T>::type>
class CComSafeArray
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo di dati da memorizzare nella matrice.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::CComSafeArray](#ccomsafearray)|Costruttore.|  
|[CComSafeArray:: ~ CComSafeArray](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::Add](#add)|Aggiunge uno o più elementi o una struttura **SAFEARRAY** a `CComSafeArray`.|  
|[CComSafeArray::Attach](#attach)|Collega una struttura **SAFEARRAY** a un oggetto `CComSafeArray` .|  
|[CComSafeArray::CopyFrom](#copyfrom)|Copia il contenuto di una struttura **SAFEARRAY** nell'oggetto `CComSafeArray` .|  
|[CComSafeArray::CopyTo](#copyto)|Crea una copia dell'oggetto `CComSafeArray`.|  
|[CComSafeArray::Create](#create)|Crea un oggetto `CComSafeArray`.|  
|[CComSafeArray::Destroy](#destroy)|Elimina un oggetto `CComSafeArray`.|  
|[CComSafeArray::Detach](#detach)|Scollega una struttura **SAFEARRAY** da un oggetto `CComSafeArray` .|  
|[CComSafeArray::GetAt](#getat)|Recupera un singolo elemento da una matrice unidimensionale.|  
|[CComSafeArray::GetCount](#getcount)|Restituisce il numero di elementi nella matrice.|  
|[CComSafeArray::GetDimensions](#getdimensions)|Restituisce il numero di dimensioni nella matrice.|  
|[CComSafeArray::GetLowerBound](#getlowerbound)|Restituisce il limite inferiore di una determinata dimensione della matrice.|  
|[CComSafeArray::GetSafeArrayPtr](#getsafearrayptr)|Restituisce l'indirizzo del membro dati `m_psa` .|  
|[CComSafeArray::GetType](#gettype)|Restituisce il tipo di dati memorizzati nella matrice.|  
|[CComSafeArray::GetUpperBound](#getupperbound)|Restituisce il limite superiore di una determinata dimensione della matrice.|  
|[CComSafeArray::IsSizable](#issizable)|Verifica se è possibile ridimensionare un oggetto `CComSafeArray` .|  
|[CComSafeArray::MultiDimGetAt](#multidimgetat)|Recupera un singolo elemento da una matrice multidimensionale.|  
|[CComSafeArray::MultiDimSetAt](#multidimsetat)|Imposta il valore di un elemento in una matrice multidimensionale.|  
|[CComSafeArray::Resize](#resize)|Ridimensiona un oggetto `CComSafeArray` .|  
|[CComSafeArray::SetAt](#setat)|Imposta il valore di un elemento in una matrice unidimensionale.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::operator LPSAFEARRAY](#operator_lpsafearray)|Esegue il cast di un valore in un puntatore **SAFEARRAY** .|  
|[CComSafeArray::operator\[\]](ccomsafearray-class.md#operator_at)|Recupera un elemento da una matrice.|  
|[CComSafeArray::operator =](#operator_eq)|Operatore di assegnazione.|  

  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::m_psa](#m_psa)|Questo membro dati contiene l'indirizzo della struttura **SAFEARRAY** .|  
  
## <a name="remarks"></a>Note  
 `CComSafeArray`fornisce un wrapper per il [tipo di dati SAFEARRAY](http://msdn.microsoft.com/en-us/9ec8025b-4763-4526-ab45-390c5d8b3b1e) (classe), rendendo sufficiente per creare e gestire le matrici unidimensionali e multidimensionali di quasi qualsiasi tipo supportato variante.  
  
 `CComSafeArray` semplifica il passaggio delle matrici tra processi e fornisce anche protezione aggiuntiva poiché controlla i valori degli indici della matrice rispetto ai limiti superiore e inferiore.  
  
 Il limite inferiore di una classe `CComSafeArray` può iniziare con qualsiasi valore definito dall'utente; tuttavia, le matrici a cui si accede con C++ usano un limite inferiore pari a 0. Altri linguaggi, quali Visual Basic, possono usare altri valori di delimitazione (ad esempio da -10 a 10).  
  
 Utilizzare [CComSafeArray::Create](#create) per creare un `CComSafeArray` oggetto, e [CComSafeArray::Destroy](#destroy) per eliminarlo.  
  
 Una classe `CComSafeArray` può contenere i subset di tipi di dati VARIANT seguenti:  
  
|VARTYPE|Descrizione|  
|-------------|-----------------|  
|VT_I1|char|  
|VT_I2|short|  
|VT_I4|int|  
|VT_I4|long|  
|VT_I8|longlong|  
|VT_UI1|byte|  
|VT_UI2|ushort|  
|VT_UI4|uint|  
|VT_UI4|ulong|  
|VT_UI8|ulonglong|  
|VT_R4|float|  
|VT_R8|double|  
|VT_DECIMAL|Puntatore decimale|  
|VT_VARIANT|Puntatore Variant|  
|VT_CY|Currency (tipo di dati)|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsafe.h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[&#75; NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccomsafearray-class_1.cpp)]  
  
##  <a name="a-nameadda--ccomsafearrayadd"></a><a name="add"></a>CComSafeArray::Add  
 Aggiunge uno o più elementi o una struttura **SAFEARRAY** a `CComSafeArray`.  
  
```
HRESULT Add(const SAFEARRAY* psaSrc);
HRESULT Add(ULONG ulCount, const T* pT, BOOL bCopy = TRUE);
HRESULT Add(const T& t, BOOL bCopy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `psaSrc`  
 Un puntatore a un **SAFEARRAY** oggetto.  
  
 `ulCount`  
 Il numero di oggetti da aggiungere alla matrice.  
  
 *pT*  
 Un puntatore a una o più oggetti da aggiungere alla matrice.  
  
 *t*  
 Un riferimento all'oggetto da aggiungere alla matrice.  
  
 `bCopy`  
 Indica se deve essere creata una copia dei dati. Il valore predefinito è **TRUE**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 I nuovi oggetti vengono aggiunti alla fine dell'oggetto esistente **SAFEARRAY** oggetto. Aggiunta di un oggetto a un oggetto multidimensionale **SAFEARRAY** oggetto non è supportato. Quando si aggiunge una matrice di oggetti, entrambe le matrici devono contenere elementi dello stesso tipo.  
  
 Il `bCopy` flag viene presa in considerazione quando gli elementi di tipo `BSTR` o **VARIANT** vengono aggiunti a una matrice. Il valore predefinito di **TRUE** garantisce che viene eseguita una copia di nuovo i dati quando l'elemento viene aggiunto alla matrice.  
  
##  <a name="a-nameattacha--ccomsafearrayattach"></a><a name="attach"></a>CComSafeArray::Attach  
 Collega una struttura **SAFEARRAY** a un oggetto `CComSafeArray` .  
  
```
HRESULT Attach(const SAFEARRAY* psaSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `psaSrc`  
 Un puntatore per il **SAFEARRAY** struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Collega un **SAFEARRAY** struttura in un `CComSafeArray` oggetto, semplificandone esistente `CComSafeArray` metodi disponibili.  
  
##  <a name="a-nameccomsafearraya--ccomsafearrayccomsafearray"></a><a name="ccomsafearray"></a>CComSafeArray::CComSafeArray  
 Costruttore.  
  
```
CComSafeArray();
CComSafeArray(const SAFEARRAYBOUND& bound);
CComSafeArray(ULONG  ulCount, LONG lLBound = 0);
CComSafeArray(const SAFEARRAYBOUND* pBound, UINT uDims = 1);
CComSafeArray(const CComSafeArray& saSrc);
CComSafeArray(const SAFEARRAY& saSrc);
CComSafeArray(const SAFEARRAY* psaSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `bound`  
 Oggetto **SAFEARRAYBOUND** struttura.  
  
 `ulCount`  
 Numero di elementi nella matrice.  
  
 `lLBound`  
 Il valore limite inferiore. ovvero, l'indice del primo elemento nella matrice.  
  
 `pBound`  
 Un puntatore a un **SAFEARRAYBOUND** struttura.  
  
 `uDims`  
 Il numero di dimensioni della matrice.  
  
 `saSrc`  
 Un riferimento a un **SAFEARRAY** struttura o `CComSafeArray` oggetto. In entrambi i casi il costruttore utilizza il riferimento per creare una copia della matrice, pertanto la matrice non viene fatto riferimento dopo la costruzione.  
  
 `psaSrc`  
 Un puntatore a un **SAFEARRAY** struttura. Il costruttore utilizza questo indirizzo per creare una copia della matrice, pertanto la matrice non viene fatto riferimento dopo la costruzione.  
  
### <a name="remarks"></a>Note  
 Crea un oggetto `CComSafeArray`.  
  
##  <a name="a-namedtora--ccomsafearrayccomsafearray"></a><a name="dtor"></a>CComSafeArray:: ~ CComSafeArray  
 Distruttore.  
  
```
~CComSafeArray() throw()
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="a-namecopyfroma--ccomsafearraycopyfrom"></a><a name="copyfrom"></a>CComSafeArray::CopyFrom  
 Copia il contenuto di una struttura **SAFEARRAY** nell'oggetto `CComSafeArray` .  
  
```
HRESULT CopyFrom(LPSAFEARRAY* ppArray);
```  
  
### <a name="parameters"></a>Parametri  
 `ppArray`  
 Puntatore al **SAFEARRAY** da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo copia il contenuto di un **SAFEARRAY** in corrente `CComSafeArray` oggetto. Il contenuto esistente della matrice viene sostituito.  
  
##  <a name="a-namecopytoa--ccomsafearraycopyto"></a><a name="copyto"></a>CComSafeArray::CopyTo  
 Crea una copia dell'oggetto `CComSafeArray`.  
  
```
HRESULT CopyTo(LPSAFEARRAY* ppArray);
```  
  
### <a name="parameters"></a>Parametri  
 `ppArray`  
 Un puntatore a un percorso in cui creare il nuovo **SAFEARRAY**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo copia il contenuto di un `CComSafeArray` dell'oggetto in un **SAFEARRAY** struttura.  
  
##  <a name="a-namecreatea--ccomsafearraycreate"></a><a name="create"></a>CComSafeArray::Create  
 Crea un oggetto `CComSafeArray`.  
  
```
HRESULT Create(const SAFEARRAYBOUND* pBound, UINT uDims = 1);
HRESULT Create(ULONG ulCount = 0, LONG lLBound = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pBound`  
 Un puntatore a un **SAFEARRAYBOUND** oggetto.  
  
 `uDims`  
 Il numero di dimensioni della matrice.  
  
 `ulCount`  
 Numero di elementi nella matrice.  
  
 `lLBound`  
 Il valore limite inferiore. ovvero, l'indice del primo elemento nella matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Oggetto `CComSafeArray` oggetto può essere creato da un oggetto esistente **SAFEARRAYBOUND** struttura e il numero di dimensioni o specificando il numero di elementi nella matrice e il limite inferiore. Se la matrice è possibile accedere da Visual C++, il limite inferiore deve essere 0. Altri linguaggi potrebbero consentire altri valori per il limite inferiore (ad esempio, Visual Basic supporta matrici con elementi con un intervallo compreso tra -10-10).  
  
##  <a name="a-namedestroya--ccomsafearraydestroy"></a><a name="destroy"></a>CComSafeArray::Destroy  
 Elimina un oggetto `CComSafeArray`.  
  
```
HRESULT Destroy();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Elimina un oggetto esistente `CComSafeArray` oggetto e tutti i dati in esso contenuti.  
  
##  <a name="a-namedetacha--ccomsafearraydetach"></a><a name="detach"></a>CComSafeArray::Detach  
 Scollega una struttura **SAFEARRAY** da un oggetto `CComSafeArray` .  
  
```
LPSAFEARRAY Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a un **SAFEARRAY** oggetto.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuoverà il **SAFEARRAY** oggetto di `CComSafeArray` oggetto.  
  
##  <a name="a-namegetata--ccomsafearraygetat"></a><a name="getat"></a>CComSafeArray::GetAt  
 Recupera un singolo elemento da una matrice unidimensionale.  
  
```
T& GetAt(LONG lIndex) const;
```  
  
### <a name="parameters"></a>Parametri  
 `lIndex`  
 Numero di indice del valore nella matrice da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento all'elemento della matrice necessaria.  
  
##  <a name="a-namegetcounta--ccomsafearraygetcount"></a><a name="getcount"></a>CComSafeArray::GetCount  
 Restituisce il numero di elementi nella matrice.  
  
```
ULONG GetCount(UINT uDim = 0) const;
```  
  
### <a name="parameters"></a>Parametri  
 `uDim`  
 La dimensione della matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di elementi nella matrice.  
  
### <a name="remarks"></a>Note  
 Quando si utilizza una matrice multidimensionale, questo metodo restituirà il numero di elementi in una determinata dimensione.  
  
##  <a name="a-namegetdimensionsa--ccomsafearraygetdimensions"></a><a name="getdimensions"></a>CComSafeArray::GetDimensions  
 Restituisce il numero di dimensioni nella matrice.  
  
```
UINT GetDimensions() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di dimensioni nella matrice.  
  
##  <a name="a-namegetlowerbounda--ccomsafearraygetlowerbound"></a><a name="getlowerbound"></a>CComSafeArray::GetLowerBound  
 Restituisce il limite inferiore di una determinata dimensione della matrice.  
  
```
LONG GetLowerBound(UINT uDim = 0) const;
```  
  
### <a name="parameters"></a>Parametri  
 `uDim`  
 La dimensione della matrice per cui ottenere il limite inferiore. Se omesso, il valore predefinito è 0.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite inferiore.  
  
### <a name="remarks"></a>Note  
 Se il limite inferiore è 0, indica una matrice di tipo C, il cui primo elemento è il numero di elementi 0. In caso di errore, ad esempio, un argomento di dimensione non valido, questo metodo chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
##  <a name="a-namegetsafearrayptra--ccomsafearraygetsafearrayptr"></a><a name="getsafearrayptr"></a>CComSafeArray::GetSafeArrayPtr  
 Restituisce l'indirizzo del membro dati `m_psa` .  
  
```
LPSAFEARRAY* GetSafeArrayPtr() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il [CComSafeArray::m_psa](#m_psa) (membro dati).  
  
##  <a name="a-namegettypea--ccomsafearraygettype"></a><a name="gettype"></a>CComSafeArray::GetType  
 Restituisce il tipo di dati memorizzati nella matrice.  
  
```
VARTYPE GetType() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il tipo di dati archiviati nella matrice, che può essere uno qualsiasi dei seguenti tipi:  
  
|VARTYPE|Descrizione|  
|-------------|-----------------|  
|VT_I1|char|  
|VT_I2|short|  
|VT_I4|int|  
|VT_I4|long|  
|VT_I8|longlong|  
|VT_UI1|byte|  
|VT_UI2|ushort|  
|VT_UI4|uint|  
|VT_UI4|ulong|  
|VT_UI8|ulonglong|  
|VT_R4|float|  
|VT_R8|double|  
|VT_DECIMAL|Puntatore decimale|  
|VT_VARIANT|Puntatore Variant|  
|VT_CY|Currency (tipo di dati)|  
  
##  <a name="a-namegetupperbounda--ccomsafearraygetupperbound"></a><a name="getupperbound"></a>CComSafeArray::GetUpperBound  
 Restituisce il limite superiore di una determinata dimensione della matrice.  
  
```
LONG GetUpperBound(UINT uDim = 0) const;
```  
  
### <a name="parameters"></a>Parametri  
 `uDim`  
 La dimensione della matrice per cui ottenere il limite superiore. Se omesso, il valore predefinito è 0.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite superiore. Questo valore è compreso il massimo indice valido per la dimensione.  
  
### <a name="remarks"></a>Note  
 In caso di errore, ad esempio, un argomento di dimensione non valido, questo metodo chiama `AtlThrow` con un HRESULT che descrive l'errore.  
  
##  <a name="a-nameissizablea--ccomsafearrayissizable"></a><a name="issizable"></a>CComSafeArray::IsSizable  
 Verifica se è possibile ridimensionare un oggetto `CComSafeArray` .  
  
```
bool IsSizable() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il `CComSafeArray` può essere ridimensionata, **false** se non è possibile.  
  
##  <a name="a-namempsaa--ccomsafearraympsa"></a><a name="m_psa"></a>CComSafeArray::m_psa  
 Contiene l'indirizzo di **SAFEARRAY** struttura accesso.  
  
```
LPSAFEARRAY m_psa;
```  
  
##  <a name="a-namemultidimgetata--ccomsafearraymultidimgetat"></a><a name="multidimgetat"></a>CComSafeArray::MultiDimGetAt  
 Recupera un singolo elemento da una matrice multidimensionale.  
  
```
HRESULT MultiDimGetAt(const LONG* alIndex, T& t);
```  
  
### <a name="parameters"></a>Parametri  
 `alIndex`  
 Puntatore a un vettore di indici per ogni dimensione della matrice. La dimensione più a sinistra (più significativi) `alIndex`[0] *.*  
  
 *t*  
 Riferimento ai dati restituiti.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
##  <a name="a-namemultidimsetata--ccomsafearraymultidimsetat"></a><a name="multidimsetat"></a>CComSafeArray::MultiDimSetAt  
 Imposta il valore di un elemento in una matrice multidimensionale.  
  
```
HRESULT MultiDimSetAt(const LONG* alIndex, const T& t);
```  
  
### <a name="parameters"></a>Parametri  
 `alIndex`  
 Puntatore a un vettore di indici per ogni dimensione della matrice. La dimensione (meno significativa) a destra è `alIndex`[0].  
  
 *T*  
 Specifica il valore del nuovo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa è una versione multidimensionali di [CComSafeArray::SetAt](#setat).  
  
##  <a name="a-nameoperatorata--ccomsafearrayoperator-"></a><a name="operator_at"></a>CComSafeArray::operator\[\]  
 Recupera un elemento da una matrice.  
  
```
T& operator[](long lindex) const;
T& operator[]int nindex) const;
```  
  
### <a name="parameters"></a>Parametri  
 *lIndex, nIndex*  
 Numero di indice dell'elemento richiesto nella matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'elemento di matrice appropriato.  
  
### <a name="remarks"></a>Note  
 Esegue una funzione simile a [CComSafeArray::GetAt](#getat), ma questo operatore funziona solo con le matrici unidimensionali.  
  
##  <a name="a-nameoperatoreqa--ccomsafearrayoperator-"></a><a name="operator_eq"></a>CComSafeArray::operator =  
 Operatore di assegnazione.  
  
```
ATL::CComSafeArray<T>& operator=(const ATL::CComSafeArray& saSrc);
ATL::CComSafeArray<T>& operator=(const SAFEARRAY* psaSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `saSrc`  
 Riferimento a un oggetto `CComSafeArray`.  
  
 `psaSrc`  
 Un puntatore a un **SAFEARRAY** oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il tipo di dati memorizzati nella matrice.  
  
##  <a name="a-nameoperatorlpsafearraya--ccomsafearrayoperator-lpsafearray"></a><a name="operator_lpsafearray"></a>CComSafeArray::operator LPSAFEARRAY  
 Esegue il cast di un valore in un puntatore **SAFEARRAY** .  
  
```
operator LPSAFEARRAY() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Esegue il cast di un valore in un puntatore **SAFEARRAY** .  
  
##  <a name="a-nameresizea--ccomsafearrayresize"></a><a name="resize"></a>CComSafeArray::Resize  
 Ridimensiona un oggetto `CComSafeArray` .  
  
```
HRESULT Resize(const SAFEARRAYBOUND* pBound);
HRESULT Resize(ULONG ulCount, LONG lLBound = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pBound`  
 Un puntatore a un **SAFEARRAYBOUND** struttura che contiene informazioni sul numero di elementi e il limite inferiore della matrice.  
  
 `ulCount`  
 Il numero richiesto di oggetti nella matrice ridimensionata.  
  
 `lLBound`  
 Il limite inferiore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo ridimensiona solo la dimensione più a destra. Non verrà ridimensionate che restituiscono matrici **IsResizable** come **false**.  
  
##  <a name="a-namesetata--ccomsafearraysetat"></a><a name="setat"></a>CComSafeArray::SetAt  
 Imposta il valore di un elemento in una matrice unidimensionale.  
  
```
HRESULT SetAt(LONG lIndex, const T& t, BOOL bCopy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `lIndex`  
 Numero di indice dell'elemento della matrice da impostare.  
  
 *t*  
 Il nuovo valore dell'elemento specificato.  
  
 `bCopy`  
 Indica se deve essere creata una copia dei dati. Il valore predefinito è **TRUE**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Il `bCopy` flag viene presa in considerazione quando gli elementi di tipo `BSTR` o **VARIANT** vengono aggiunti a una matrice. Il valore predefinito di **TRUE** garantisce che viene eseguita una copia di nuovo i dati quando l'elemento viene aggiunto alla matrice.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipo di dati SAFEARRAY](http://msdn.microsoft.com/en-us/9ec8025b-4763-4526-ab45-390c5d8b3b1e)   
 [CComSafeArray::Create](#create)   
 [CComSafeArray::Destroy](#destroy)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

