---
description: 'Altre informazioni su: classe CComSafeArray'
title: Classe CComSafeArray
ms.date: 05/06/2019
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
ms.openlocfilehash: e25719ffb9817595a1c1cc108a9d9ffc91459fe1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142309"
---
# <a name="ccomsafearray-class"></a>Classe CComSafeArray

Questa classe è un wrapper per la `SAFEARRAY` struttura.

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

|Nome|Description|
|----------|-----------------|
|[CComSafeArray:: CComSafeArray](#ccomsafearray)|Costruttore.|
|[CComSafeArray:: ~ CComSafeArray](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComSafeArray:: Add](#add)|Aggiunge uno o più elementi o una `SAFEARRAY` struttura a un oggetto `CComSafeArray` .|
|[CComSafeArray:: Connetti](#attach)|Connette una `SAFEARRAY` struttura a un `CComSafeArray` oggetto.|
|[CComSafeArray:: CopyFrom](#copyfrom)|Copia il contenuto di una `SAFEARRAY` struttura nell' `CComSafeArray` oggetto.|
|[CComSafeArray:: CopyTo](#copyto)|Crea una copia dell'oggetto `CComSafeArray`.|
|[CComSafeArray::Create](#create)|Crea un oggetto `CComSafeArray`.|
|[CComSafeArray::Destroy](#destroy)|Elimina un oggetto `CComSafeArray` .|
|[CComSafeArray::D etach](#detach)|Scollega un `SAFEARRAY` oggetto da un `CComSafeArray` oggetto.|
|[CComSafeArray:: GetA](#getat)|Recupera un singolo elemento da una matrice unidimensionale.|
|[CComSafeArray:: GetCount](#getcount)|Restituisce il numero di elementi nella matrice.|
|[CComSafeArray:: GetDimensions](#getdimensions)|Restituisce il numero di dimensioni nella matrice.|
|[CComSafeArray:: GetLowerBound](#getlowerbound)|Restituisce il limite inferiore di una determinata dimensione della matrice.|
|[CComSafeArray:: GetSafeArrayPtr](#getsafearrayptr)|Restituisce l'indirizzo del membro dati `m_psa` .|
|[CComSafeArray:: GetType](#gettype)|Restituisce il tipo di dati memorizzati nella matrice.|
|[CComSafeArray:: GetUpperBound](#getupperbound)|Restituisce il limite superiore di una determinata dimensione della matrice.|
|[CComSafeArray:: undimensionable](#issizable)|Verifica se è possibile ridimensionare un oggetto `CComSafeArray` .|
|[CComSafeArray:: MultiDimGetAt](#multidimgetat)|Recupera un singolo elemento da una matrice multidimensionale.|
|[CComSafeArray:: MultiDimSetAt](#multidimsetat)|Imposta il valore di un elemento in una matrice multidimensionale.|
|[CComSafeArray:: Resize](#resize)|Ridimensiona un oggetto `CComSafeArray` .|
|[CComSafeArray:: SetAt](#setat)|Imposta il valore di un elemento in una matrice unidimensionale.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CComSafeArray:: operator LPSAFEARRAY](#operator_lpsafearray)|Esegue il cast di un valore a un `SAFEARRAY` puntatore.|
|[CComSafeArray::operator\[\]](ccomsafearray-class.md#operator_at)|Recupera un elemento da una matrice.|
|[CComSafeArray:: operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComSafeArray:: m_psa](#m_psa)|Questo membro dati include l'indirizzo della `SAFEARRAY` struttura.|

## <a name="remarks"></a>Commenti

`CComSafeArray` fornisce un wrapper per la classe [SAFEARRAY Data Type](/windows/win32/api/oaidl/ns-oaidl-safearray) , semplificando la creazione e la gestione di matrici unidimensionali e multidimensionali di quasi ogni tipo supportato da VARIANT.

`CComSafeArray` semplifica il passaggio delle matrici tra processi e fornisce anche protezione aggiuntiva poiché controlla i valori degli indici della matrice rispetto ai limiti superiore e inferiore.

Il limite inferiore di una classe `CComSafeArray` può iniziare con qualsiasi valore definito dall'utente; tuttavia, le matrici a cui si accede con C++ usano un limite inferiore pari a 0. Altri linguaggi, quali Visual Basic, possono usare altri valori di delimitazione (ad esempio da -10 a 10).

Usare [CComSafeArray::Create](#create) per creare un oggetto `CComSafeArray` e [CComSafeArray::Destroy](#destroy) per eliminarlo.

Una classe `CComSafeArray` può contenere i subset di tipi di dati VARIANT seguenti:

|VARTYPE|Description|
|-------------|-----------------|
|VT_I1|char|
|VT_I2|short|
|VT_I4|INT|
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

## <a name="ccomsafearrayadd"></a><a name="add"></a> CComSafeArray:: Add

Aggiunge uno o più elementi o una `SAFEARRAY` struttura a un oggetto `CComSafeArray` .

```
HRESULT Add(const SAFEARRAY* psaSrc);
HRESULT Add(ULONG ulCount, const T* pT, BOOL bCopy = TRUE);
HRESULT Add(const T& t, BOOL bCopy = TRUE);
```

### <a name="parameters"></a>Parametri

*psaSrc*<br/>
Puntatore a un oggetto `SAFEARRAY`.

*ulCount*<br/>
Numero di oggetti da aggiungere alla matrice.

*pT*<br/>
Puntatore a uno o più oggetti da aggiungere alla matrice.

*t*<br/>
Riferimento all'oggetto da aggiungere alla matrice.

*bCopy*<br/>
Indica se è necessario creare una copia dei dati. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

I nuovi oggetti vengono aggiunti alla fine dell' `SAFEARRAY` oggetto esistente. L'aggiunta di un oggetto a un oggetto multidimensionale `SAFEARRAY` non è supportata. Quando si aggiunge una matrice di oggetti esistente, entrambe le matrici devono contenere elementi dello stesso tipo.

Il flag *bcopy* viene tenuto in considerazione quando gli elementi di tipo BSTR o variant vengono aggiunti a una matrice. Il valore predefinito di TRUE garantisce che venga creata una nuova copia dei dati quando l'elemento viene aggiunto alla matrice.

## <a name="ccomsafearrayattach"></a><a name="attach"></a> CComSafeArray:: Connetti

Connette una `SAFEARRAY` struttura a un `CComSafeArray` oggetto.

```
HRESULT Attach(const SAFEARRAY* psaSrc);
```

### <a name="parameters"></a>Parametri

*psaSrc*<br/>
Puntatore alla `SAFEARRAY` struttura.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Connette una `SAFEARRAY` struttura a un `CComSafeArray` oggetto, rendendo `CComSafeArray` disponibili i metodi esistenti.

## <a name="ccomsafearrayccomsafearray"></a><a name="ccomsafearray"></a> CComSafeArray:: CComSafeArray

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

*associato*<br/>
Struttura `SAFEARRAYBOUND`.

*ulCount*<br/>
Numero di elementi nella matrice.

*lLBound*<br/>
Il valore del limite inferiore; ovvero l'indice del primo elemento nella matrice.

*pBound*<br/>
Puntatore a una `SAFEARRAYBOUND` struttura.

*uDims*<br/>
Numero di dimensioni nella matrice.

*saSrc*<br/>
Riferimento a una `SAFEARRAY` struttura o a un `CComSafeArray` oggetto. In entrambi i casi, il costruttore usa questo riferimento per creare una copia della matrice, in modo che non venga fatto riferimento alla matrice dopo la costruzione.

*psaSrc*<br/>
Puntatore a una `SAFEARRAY` struttura. Il costruttore usa questo indirizzo per creare una copia della matrice, in modo che non venga fatto riferimento alla matrice dopo la costruzione.

### <a name="remarks"></a>Commenti

Crea un oggetto `CComSafeArray`.

## <a name="ccomsafearrayccomsafearray"></a><a name="dtor"></a> CComSafeArray:: ~ CComSafeArray

Distruttore.

```
~CComSafeArray() throw()
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

## <a name="ccomsafearraycopyfrom"></a><a name="copyfrom"></a> CComSafeArray:: CopyFrom

Copia il contenuto di una `SAFEARRAY` struttura nell' `CComSafeArray` oggetto.

```
HRESULT CopyFrom(LPSAFEARRAY* ppArray);
```

### <a name="parameters"></a>Parametri

*ppArray*<br/>
Puntatore all'oggetto `SAFEARRAY` da copiare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Questo metodo copia il contenuto di un `SAFEARRAY` `CComSafeArray` oggetto nell'oggetto corrente. Il contenuto esistente della matrice viene sostituito.

## <a name="ccomsafearraycopyto"></a><a name="copyto"></a> CComSafeArray:: CopyTo

Crea una copia dell'oggetto `CComSafeArray`.

```
HRESULT CopyTo(LPSAFEARRAY* ppArray);
```

### <a name="parameters"></a>Parametri

*ppArray*<br/>
Puntatore a una posizione in cui creare il nuovo oggetto `SAFEARRAY` .

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Questo metodo copia il contenuto di un `CComSafeArray` oggetto in una `SAFEARRAY` struttura.

## <a name="ccomsafearraycreate"></a><a name="create"></a> CComSafeArray:: create

Crea un oggetto `CComSafeArray`.

```
HRESULT Create(const SAFEARRAYBOUND* pBound, UINT uDims = 1);
HRESULT Create(ULONG ulCount = 0, LONG lLBound = 0);
```

### <a name="parameters"></a>Parametri

*pBound*<br/>
Puntatore a un oggetto `SAFEARRAYBOUND`.

*uDims*<br/>
Numero di dimensioni nella matrice.

*ulCount*<br/>
Numero di elementi nella matrice.

*lLBound*<br/>
Il valore del limite inferiore; ovvero l'indice del primo elemento nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Un `CComSafeArray` oggetto può essere creato da una `SAFEARRAYBOUND` struttura esistente e dal numero di dimensioni oppure specificando il numero di elementi nella matrice e il limite inferiore. Se la matrice deve essere accessibile da C++, il limite inferiore dovrebbe essere 0. Altri linguaggi possono consentire altri valori per il limite inferiore, ad esempio Visual Basic supporta matrici con elementi con un intervallo compreso tra-10 e 10.

## <a name="ccomsafearraydestroy"></a><a name="destroy"></a> CComSafeArray::D estroy

Elimina un oggetto `CComSafeArray` .

```
HRESULT Destroy();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Elimina definitivamente un `CComSafeArray` oggetto esistente e tutti i dati in esso contenuti.

## <a name="ccomsafearraydetach"></a><a name="detach"></a> CComSafeArray::D etach

Scollega un `SAFEARRAY` oggetto da un `CComSafeArray` oggetto.

```
LPSAFEARRAY Detach();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore a un `SAFEARRAY` oggetto.

### <a name="remarks"></a>Commenti

Questo metodo disconnette l' `SAFEARRAY` oggetto dall' `CComSafeArray` oggetto.

## <a name="ccomsafearraygetat"></a><a name="getat"></a> CComSafeArray:: GetA

Recupera un singolo elemento da una matrice unidimensionale.

```
T& GetAt(LONG lIndex) const;
```

### <a name="parameters"></a>Parametri

*lIndex*<br/>
Numero di indice del valore nella matrice da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'elemento di matrice obbligatorio.

## <a name="ccomsafearraygetcount"></a><a name="getcount"></a> CComSafeArray:: GetCount

Restituisce il numero di elementi nella matrice.

```
ULONG GetCount(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim*<br/>
Dimensione della matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nella matrice.

### <a name="remarks"></a>Commenti

Se utilizzata con una matrice multidimensionale, questo metodo restituirà il numero di elementi solo in una dimensione specifica.

## <a name="ccomsafearraygetdimensions"></a><a name="getdimensions"></a> CComSafeArray:: GetDimensions

Restituisce il numero di dimensioni nella matrice.

```
UINT GetDimensions() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di dimensioni nella matrice.

## <a name="ccomsafearraygetlowerbound"></a><a name="getlowerbound"></a> CComSafeArray:: GetLowerBound

Restituisce il limite inferiore di una determinata dimensione della matrice.

```
LONG GetLowerBound(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim*<br/>
Dimensione della matrice per la quale ottenere il limite inferiore. Se omesso, il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

Restituisce il limite inferiore.

### <a name="remarks"></a>Commenti

Se il limite inferiore è 0, indica una matrice di tipo C il cui primo elemento è il numero di elemento 0. In caso di errore, ad esempio un argomento di dimensione non valido, questo metodo chiama `AtlThrow` con un HRESULT che descrive l'errore.

## <a name="ccomsafearraygetsafearrayptr"></a><a name="getsafearrayptr"></a> CComSafeArray:: GetSafeArrayPtr

Restituisce l'indirizzo del membro dati `m_psa` .

```
LPSAFEARRAY* GetSafeArrayPtr() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al membro dati [CComSafeArray:: m_psa](#m_psa) .

## <a name="ccomsafearraygettype"></a><a name="gettype"></a> CComSafeArray:: GetType

Restituisce il tipo di dati memorizzati nella matrice.

```
VARTYPE GetType() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il tipo di dati archiviati nella matrice, che può essere uno dei tipi seguenti:

|VARTYPE|Description|
|-------------|-----------------|
|VT_I1|char|
|VT_I2|short|
|VT_I4|INT|
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

## <a name="ccomsafearraygetupperbound"></a><a name="getupperbound"></a> CComSafeArray:: GetUpperBound

Restituisce il limite superiore di una determinata dimensione della matrice.

```
LONG GetUpperBound(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim*<br/>
Dimensione della matrice per la quale ottenere il limite superiore. Se omesso, il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

Restituisce il limite superiore. Questo valore è incluso, ovvero l'indice valido massimo per questa dimensione.

### <a name="remarks"></a>Commenti

In caso di errore, ad esempio un argomento di dimensione non valido, questo metodo chiama `AtlThrow` con un HRESULT che descrive l'errore.

## <a name="ccomsafearrayissizable"></a><a name="issizable"></a> CComSafeArray:: undimensionable

Verifica se è possibile ridimensionare un oggetto `CComSafeArray` .

```
bool IsSizable() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto `CComSafeArray` può essere ridimensionato; in caso contrario, false.

## <a name="ccomsafearraym_psa"></a><a name="m_psa"></a> CComSafeArray:: m_psa

Include l'indirizzo della struttura a cui si `SAFEARRAY` accede.

```
LPSAFEARRAY m_psa;
```

## <a name="ccomsafearraymultidimgetat"></a><a name="multidimgetat"></a> CComSafeArray:: MultiDimGetAt

Recupera un singolo elemento da una matrice multidimensionale.

```
HRESULT MultiDimGetAt(const LONG* alIndex, T& t);
```

### <a name="parameters"></a>Parametri

*alIndex*<br/>
Puntatore a un vettore di indici per ogni dimensione della matrice. La dimensione più a sinistra (più significativa) è `alIndex[0]` .

*t*<br/>
Riferimento ai dati restituiti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

## <a name="ccomsafearraymultidimsetat"></a><a name="multidimsetat"></a> CComSafeArray:: MultiDimSetAt

Imposta il valore di un elemento in una matrice multidimensionale.

```
HRESULT MultiDimSetAt(const LONG* alIndex, const T& t);
```

### <a name="parameters"></a>Parametri

*alIndex*<br/>
Puntatore a un vettore di indici per ogni dimensione della matrice. La dimensione più a destra (meno significativa) è `alIndex` [0].

*T*<br/>
Specifica il valore del nuovo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Si tratta di una versione multidimensionale di [CComSafeArray:: SetAt](#setat).

## <a name="ccomsafearrayoperator-"></a><a name="operator_at"></a> Operatore CComSafeArray:: \[\]

Recupera un elemento da una matrice.

```
T& operator[](long lindex) const;
T& operator[]int nindex) const;
```

### <a name="parameters"></a>Parametri

*lIndex, nIndex*<br/>
Numero di indice dell'elemento obbligatorio nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce l'elemento di matrice appropriato.

### <a name="remarks"></a>Commenti

Esegue una funzione simile a [CComSafeArray:: Geta](#getat). Tuttavia, questo operatore funziona solo con matrici unidimensionali.

## <a name="ccomsafearrayoperator-"></a><a name="operator_eq"></a> CComSafeArray:: operator =

Operatore di assegnazione.

```
ATL::CComSafeArray<T>& operator=(const ATL::CComSafeArray& saSrc);
ATL::CComSafeArray<T>& operator=(const SAFEARRAY* psaSrc);
```

### <a name="parameters"></a>Parametri

*saSrc*<br/>
Riferimento a un oggetto `CComSafeArray`.

*psaSrc*<br/>
Puntatore a un oggetto `SAFEARRAY`.

### <a name="return-value"></a>Valore restituito

Restituisce il tipo di dati memorizzati nella matrice.

## <a name="ccomsafearrayoperator-lpsafearray"></a><a name="operator_lpsafearray"></a> CComSafeArray:: operator LPSAFEARRAY

Esegue il cast di un valore a un `SAFEARRAY` puntatore.

```
operator LPSAFEARRAY() const;
```

### <a name="return-value"></a>Valore restituito

Esegue il cast di un valore a un `SAFEARRAY` puntatore.

## <a name="ccomsafearrayresize"></a><a name="resize"></a> CComSafeArray:: Resize

Ridimensiona un oggetto `CComSafeArray` .

```
HRESULT Resize(const SAFEARRAYBOUND* pBound);
HRESULT Resize(ULONG ulCount, LONG lLBound = 0);
```

### <a name="parameters"></a>Parametri

*pBound*<br/>
Puntatore a una `SAFEARRAYBOUND` struttura che contiene informazioni sul numero di elementi e il limite inferiore di una matrice.

*ulCount*<br/>
Numero richiesto di oggetti nella matrice ridimensionata.

*lLBound*<br/>
Limite inferiore.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Questo metodo ridimensiona solo la dimensione più a destra. Non vengono ridimensionate le matrici che restituiscono `IsResizable` false.

## <a name="ccomsafearraysetat"></a><a name="setat"></a> CComSafeArray:: SetAt

Imposta il valore di un elemento in una matrice unidimensionale.

```
HRESULT SetAt(LONG lIndex, const T& t, BOOL bCopy = TRUE);
```

### <a name="parameters"></a>Parametri

*lIndex*<br/>
Numero di indice dell'elemento di matrice da impostare.

*t*<br/>
Nuovo valore dell'elemento specificato.

*bCopy*<br/>
Indica se è necessario creare una copia dei dati. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

Il flag *bcopy* viene tenuto in considerazione quando gli elementi di tipo BSTR o variant vengono aggiunti a una matrice. Il valore predefinito di TRUE garantisce che venga creata una nuova copia dei dati quando l'elemento viene aggiunto alla matrice.

## <a name="see-also"></a>Vedi anche

[SAFEARRAY Data Type](/windows/win32/api/oaidl/ns-oaidl-safearray)<br/>
[CComSafeArray::Create](#create)<br/>
[CComSafeArray::Destroy](#destroy)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
