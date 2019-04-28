---
title: Classe CComSafeArray
ms.date: 11/04/2016
f1_keywords:
- CComSafeArray
- ATLSAFE/ATL::CComSafeArray
- ATLSAFE/ATL::CComSafeArray::CComSafeArray
- ATLSAFE/ATL::CComSafeArray::Add
- ATLSAFE/ATL::CComSafeArray::Attach
- ATLSAFE/ATL::CComSafeArray::CopyFrom
- ATLSAFE/ATL::CComSafeArray::CopyTo
- ATLSAFE/ATL::CComSafeArray::Create
- ATLSAFE/ATL::CComSafeArray::Destroy
- ATLSAFE/ATL::CComSafeArray::Detach
- ATLSAFE/ATL::CComSafeArray::GetAt
- ATLSAFE/ATL::CComSafeArray::GetCount
- ATLSAFE/ATL::CComSafeArray::GetDimensions
- ATLSAFE/ATL::CComSafeArray::GetLowerBound
- ATLSAFE/ATL::CComSafeArray::GetSafeArrayPtr
- ATLSAFE/ATL::CComSafeArray::GetType
- ATLSAFE/ATL::CComSafeArray::GetUpperBound
- ATLSAFE/ATL::CComSafeArray::IsSizable
- ATLSAFE/ATL::CComSafeArray::MultiDimGetAt
- ATLSAFE/ATL::CComSafeArray::MultiDimSetAt
- ATLSAFE/ATL::CComSafeArray::Resize
- ATLSAFE/ATL::CComSafeArray::SetAt
- ATLSAFE/ATL::CComSafeArray::m_psa
helpviewer_keywords:
- CComSafeArray class
ms.assetid: ee349aef-33db-4c85-bd08-5d86a3c9d53a
ms.openlocfilehash: 0262764c950b01acdb610873a995a9a6fd912997
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62259443"
---
# <a name="ccomsafearray-class"></a>Classe CComSafeArray

Questa classe è un wrapper per il `SAFEARRAY` struttura.

## <a name="syntax"></a>Sintassi

```
template <typename T, VARTYPE _vartype = _ATL_AutomationType<T>::type>
class CComSafeArray
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da memorizzare nella matrice.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeArray::CComSafeArray](#ccomsafearray)|Costruttore.|
|[CComSafeArray::~CComSafeArray](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeArray::Add](#add)|Aggiunge uno o più elementi, o un `SAFEARRAY` struttura, a un `CComSafeArray`.|
|[CComSafeArray::Attach](#attach)|Associa un `SAFEARRAY` struttura di un `CComSafeArray` oggetto.|
|[CComSafeArray::CopyFrom](#copyfrom)|Copia il contenuto di un `SAFEARRAY` strutturare nel `CComSafeArray` oggetto.|
|[CComSafeArray::CopyTo](#copyto)|Crea una copia dell'oggetto `CComSafeArray` .|
|[CComSafeArray::Create](#create)|Crea un oggetto `CComSafeArray`.|
|[CComSafeArray::Destroy](#destroy)|Elimina un oggetto `CComSafeArray`.|
|[CComSafeArray::Detach](#detach)|Scollega un `SAFEARRAY` da un `CComSafeArray` oggetto.|
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
|[CComSafeArray::operator LPSAFEARRAY](#operator_lpsafearray)|Esegue il cast di un valore per un `SAFEARRAY` puntatore.|
|[CComSafeArray::operator\[\]](ccomsafearray-class.md#operator_at)|Recupera un elemento da una matrice.|
|[CComSafeArray::operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeArray::m_psa](#m_psa)|Questo membro dati contiene l'indirizzo del `SAFEARRAY` struttura.|

## <a name="remarks"></a>Note

`CComSafeArray` fornisce un wrapper per la classe [SAFEARRAY Data Type](/windows/desktop/api/oaidl/ns-oaidl-tagsafearray) , semplificando la creazione e la gestione di matrici unidimensionali e multidimensionali di quasi ogni tipo supportato da VARIANT.

`CComSafeArray` semplifica il passaggio delle matrici tra processi e fornisce anche protezione aggiuntiva poiché controlla i valori degli indici della matrice rispetto ai limiti superiore e inferiore.

Il limite inferiore di una classe `CComSafeArray` può iniziare con qualsiasi valore definito dall'utente; tuttavia, le matrici a cui si accede con C++ usano un limite inferiore pari a 0. Altri linguaggi, quali Visual Basic, possono usare altri valori di delimitazione (ad esempio da -10 a 10).

Usare [CComSafeArray::Create](#create) per creare un oggetto `CComSafeArray` e [CComSafeArray::Destroy](#destroy) per eliminarlo.

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

[!code-cpp[NVC_ATL_Utilities#75](../../atl/codesnippet/cpp/ccomsafearray-class_1.cpp)]

##  <a name="add"></a>  CComSafeArray::Add

Aggiunge uno o più elementi, o un `SAFEARRAY` struttura, a un `CComSafeArray`.

```
HRESULT Add(const SAFEARRAY* psaSrc);
HRESULT Add(ULONG ulCount, const T* pT, BOOL bCopy = TRUE);
HRESULT Add(const T& t, BOOL bCopy = TRUE);
```

### <a name="parameters"></a>Parametri

*psaSrc*<br/>
Puntatore a un oggetto `SAFEARRAY` .

*ulCount*<br/>
Il numero di oggetti da aggiungere alla matrice.

*pT*<br/>
Puntatore a uno o più oggetti da aggiungere alla matrice.

*t*<br/>
Un riferimento all'oggetto da aggiungere alla matrice.

*bCopy*<br/>
Indica se è necessario creare una copia dei dati. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

I nuovi oggetti vengono aggiunti alla fine dell'oggetto esistente `SAFEARRAY` oggetto. Aggiunta di un oggetto a un oggetto multidimensionale `SAFEARRAY` oggetto non è supportato. Quando si aggiunge una matrice di oggetti, entrambe le matrici devono contenere elementi dello stesso tipo.

Il *bCopy* flag viene presa in considerazione quando gli elementi di tipo BSTR o variante vengono aggiunti a una matrice. Il valore predefinito true assicura che viene creata una nuova copia dei dati quando l'elemento viene aggiunto alla matrice.

##  <a name="attach"></a>  CComSafeArray::Attach

Associa un `SAFEARRAY` struttura di un `CComSafeArray` oggetto.

```
HRESULT Attach(const SAFEARRAY* psaSrc);
```

### <a name="parameters"></a>Parametri

*psaSrc*<br/>
Un puntatore al `SAFEARRAY` struttura.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Associa un `SAFEARRAY` struttura di un `CComSafeArray` oggetto, rendendo esistente `CComSafeArray` metodi disponibili.

##  <a name="ccomsafearray"></a>  CComSafeArray::CComSafeArray

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

*bound*<br/>
Struttura `SAFEARRAYBOUND`.

*ulCount*<br/>
Numero di elementi nella matrice.

*lLBound*<br/>
Il valore limite inferiore. vale a dire, l'indice del primo elemento nella matrice.

*pBound*<br/>
Un puntatore a un `SAFEARRAYBOUND` struttura.

*uDims*<br/>
Numero di dimensioni della matrice.

*saSrc*<br/>
Un riferimento a un `SAFEARRAY` struttura o `CComSafeArray` oggetto. In entrambi i casi il costruttore Usa questo riferimento per creare una copia della matrice, in modo che la matrice non viene fatto riferimento dopo la costruzione.

*psaSrc*<br/>
Un puntatore a un `SAFEARRAY` struttura. Il costruttore Usa questo indirizzo per creare una copia della matrice, in modo che la matrice non viene fatto riferimento dopo la costruzione.

### <a name="remarks"></a>Note

Crea un oggetto `CComSafeArray`.

##  <a name="dtor"></a>  CComSafeArray::~CComSafeArray

Distruttore.

```
~CComSafeArray() throw()
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate.

##  <a name="copyfrom"></a>  CComSafeArray::CopyFrom

Copia il contenuto di un `SAFEARRAY` strutturare nel `CComSafeArray` oggetto.

```
HRESULT CopyFrom(LPSAFEARRAY* ppArray);
```

### <a name="parameters"></a>Parametri

*ppArray*<br/>
Puntatore al `SAFEARRAY` da copiare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questo metodo copia il contenuto di un `SAFEARRAY` nell'insieme corrente `CComSafeArray` oggetto. Il contenuto esistente della matrice viene sostituito.

##  <a name="copyto"></a>  CComSafeArray::CopyTo

Crea una copia dell'oggetto `CComSafeArray` .

```
HRESULT CopyTo(LPSAFEARRAY* ppArray);
```

### <a name="parameters"></a>Parametri

*ppArray*<br/>
Un puntatore a un percorso in cui creare il nuovo `SAFEARRAY`.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questo metodo copia il contenuto di un `CComSafeArray` dell'oggetto in un `SAFEARRAY` struttura.

##  <a name="create"></a>  CComSafeArray::Create

Crea un oggetto `CComSafeArray`.

```
HRESULT Create(const SAFEARRAYBOUND* pBound, UINT uDims = 1);
HRESULT Create(ULONG ulCount = 0, LONG lLBound = 0);
```

### <a name="parameters"></a>Parametri

*pBound*<br/>
Puntatore a un oggetto `SAFEARRAYBOUND` .

*uDims*<br/>
Il numero di dimensioni nella matrice.

*ulCount*<br/>
Numero di elementi nella matrice.

*lLBound*<br/>
Il valore limite inferiore. vale a dire, l'indice del primo elemento nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Oggetto `CComSafeArray` oggetto può essere creato da un oggetto esistente `SAFEARRAYBOUND` struttura e il numero di dimensioni, oppure specificando il numero di elementi nella matrice e il limite inferiore. Se la matrice è possibile accedere da Visual C++, il limite inferiore deve essere 0. Altri linguaggi potrebbero consentire altri valori per il limite inferiore (ad esempio, Visual Basic supporta matrici con elementi con un intervallo, ad esempio -10 a 10).

##  <a name="destroy"></a>  CComSafeArray::Destroy

Elimina un oggetto `CComSafeArray`.

```
HRESULT Destroy();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Elimina definitivamente un oggetto esistente `CComSafeArray` oggetto e tutti i dati in essa contenuti.

##  <a name="detach"></a>  CComSafeArray::Detach

Scollega un `SAFEARRAY` da un `CComSafeArray` oggetto.

```
LPSAFEARRAY Detach();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore a un `SAFEARRAY` oggetto.

### <a name="remarks"></a>Note

Questo metodo consente di scollegare il `SAFEARRAY` dall'oggetto di `CComSafeArray` oggetto.

##  <a name="getat"></a>  CComSafeArray::GetAt

Recupera un singolo elemento da una matrice unidimensionale.

```
T& GetAt(LONG lIndex) const;
```

### <a name="parameters"></a>Parametri

*lIndex*<br/>
Numero di indice del valore della matrice da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'elemento della matrice obbligatorio.

##  <a name="getcount"></a>  CComSafeArray::GetCount

Restituisce il numero di elementi nella matrice.

```
ULONG GetCount(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim*<br/>
Le dimensioni della matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nella matrice.

### <a name="remarks"></a>Note

Se usato con una matrice multidimensionale, questo metodo restituirà il numero di elementi in una determinata dimensione.

##  <a name="getdimensions"></a>  CComSafeArray::GetDimensions

Restituisce il numero di dimensioni nella matrice.

```
UINT GetDimensions() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di dimensioni nella matrice.

##  <a name="getlowerbound"></a>  CComSafeArray::GetLowerBound

Restituisce il limite inferiore di una determinata dimensione della matrice.

```
LONG GetLowerBound(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim*<br/>
La dimensione di matrice per cui ottenere il limite inferiore. Se omesso, il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

Restituisce il limite inferiore.

### <a name="remarks"></a>Note

Se il limite inferiore è 0, questo indica una matrice di tipo C il cui primo elemento è il numero di elementi 0. In caso di errore, ad esempio, un argomento di dimensione non è valido, questo metodo chiama `AtlThrow` con un valore HRESULT che descrive l'errore.

##  <a name="getsafearrayptr"></a>  CComSafeArray::GetSafeArrayPtr

Restituisce l'indirizzo del membro dati `m_psa` .

```
LPSAFEARRAY* GetSafeArrayPtr() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore per il [CComSafeArray::m_psa](#m_psa) (membro dati).

##  <a name="gettype"></a>  CComSafeArray::GetType

Restituisce il tipo di dati memorizzati nella matrice.

```
VARTYPE GetType() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il tipo di dati archiviati nella matrice, che può essere uno qualsiasi dei tipi seguenti:

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

##  <a name="getupperbound"></a>  CComSafeArray::GetUpperBound

Restituisce il limite superiore di una determinata dimensione della matrice.

```
LONG GetUpperBound(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim*<br/>
La dimensione di matrice per cui ottenere il limite superiore. Se omesso, il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

Restituisce il limite superiore. Questo valore è inclusivo, l'indice massimo valido per questa dimensione.

### <a name="remarks"></a>Note

In caso di errore, ad esempio, un argomento di dimensione non è valido, questo metodo chiama `AtlThrow` con un valore HRESULT che descrive l'errore.

##  <a name="issizable"></a>  CComSafeArray::IsSizable

Verifica se è possibile ridimensionare un oggetto `CComSafeArray` .

```
bool IsSizable() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il `CComSafeArray` può essere ridimensionato, FALSE se non è possibile.

##  <a name="m_psa"></a>  CComSafeArray::m_psa

Contiene l'indirizzo del `SAFEARRAY` struttura accessibile.

```
LPSAFEARRAY m_psa;
```

##  <a name="multidimgetat"></a>  CComSafeArray::MultiDimGetAt

Recupera un singolo elemento da una matrice multidimensionale.

```
HRESULT MultiDimGetAt(const LONG* alIndex, T& t);
```

### <a name="parameters"></a>Parametri

*alIndex*<br/>
Puntatore a un vettore di indici per ogni dimensione della matrice. La dimensione più a sinistra (più significativa) è `alIndex[0]`.

*t*<br/>
Riferimento ai dati restituiti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="multidimsetat"></a>  CComSafeArray::MultiDimSetAt

Imposta il valore di un elemento in una matrice multidimensionale.

```
HRESULT MultiDimSetAt(const LONG* alIndex, const T& t);
```

### <a name="parameters"></a>Parametri

*alIndex*<br/>
Puntatore a un vettore di indici per ogni dimensione della matrice. La dimensione (meno significativa) all'estrema destra è `alIndex`[0].

*T*<br/>
Specifica il valore del nuovo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questa è una versione di multidimensionale [CComSafeArray::SetAt](#setat).

##  <a name="operator_at"></a>  CComSafeArray::operator \[\]

Recupera un elemento da una matrice.

```
T& operator[](long lindex) const;
T& operator[]int nindex) const;
```

### <a name="parameters"></a>Parametri

*lIndex, nIndex*<br/>
Numero di indice dell'elemento richiesto nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce l'elemento di matrice appropriata.

### <a name="remarks"></a>Note

Esegue una funzione simile ai [CComSafeArray::GetAt](#getat), ma questo operatore funziona solo con le matrici unidimensionali.

##  <a name="operator_eq"></a>  CComSafeArray::operator =

Operatore di assegnazione.

```
ATL::CComSafeArray<T>& operator=(const ATL::CComSafeArray& saSrc);
ATL::CComSafeArray<T>& operator=(const SAFEARRAY* psaSrc);
```

### <a name="parameters"></a>Parametri

*saSrc*<br/>
Riferimento a un oggetto `CComSafeArray`.

*psaSrc*<br/>
Puntatore a un oggetto `SAFEARRAY` .

### <a name="return-value"></a>Valore restituito

Restituisce il tipo di dati memorizzati nella matrice.

##  <a name="operator_lpsafearray"></a>  CComSafeArray::operator LPSAFEARRAY

Esegue il cast di un valore per un `SAFEARRAY` puntatore.

```
operator LPSAFEARRAY() const;
```

### <a name="return-value"></a>Valore restituito

Esegue il cast di un valore per un `SAFEARRAY` puntatore.

##  <a name="resize"></a>  CComSafeArray::Resize

Ridimensiona un oggetto `CComSafeArray` .

```
HRESULT Resize(const SAFEARRAYBOUND* pBound);
HRESULT Resize(ULONG ulCount, LONG lLBound = 0);
```

### <a name="parameters"></a>Parametri

*pBound*<br/>
Un puntatore a un `SAFEARRAYBOUND` struttura che contiene informazioni sul numero di elementi e il limite inferiore della matrice.

*ulCount*<br/>
Il numero richiesto di oggetti nella matrice ridimensionato.

*lLBound*<br/>
Il limite inferiore.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Questo metodo viene ridimensionata solo la dimensione più a destra. Non verrà ridimensionate le matrici che restituiscono `IsResizable` come FALSE.

##  <a name="setat"></a>  CComSafeArray::SetAt

Imposta il valore di un elemento in una matrice unidimensionale.

```
HRESULT SetAt(LONG lIndex, const T& t, BOOL bCopy = TRUE);
```

### <a name="parameters"></a>Parametri

*lIndex*<br/>
Numero di indice dell'elemento della matrice da impostare.

*t*<br/>
Il nuovo valore dell'elemento specificato.

*bCopy*<br/>
Indica se è necessario creare una copia dei dati. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Il *bCopy* flag viene presa in considerazione quando gli elementi di tipo BSTR o variante vengono aggiunti a una matrice. Il valore predefinito true assicura che viene creata una nuova copia dei dati quando l'elemento viene aggiunto alla matrice.

## <a name="see-also"></a>Vedere anche

[SAFEARRAY Data Type](/windows/desktop/api/oaidl/ns-oaidl-tagsafearray)<br/>
[CComSafeArray::Create](#create)<br/>
[CComSafeArray::Destroy](#destroy)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
