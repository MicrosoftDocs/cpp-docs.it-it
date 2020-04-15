---
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
ms.openlocfilehash: d1e72d364858ea31541d574ed77bdc8ccca7d748
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327398"
---
# <a name="ccomsafearray-class"></a>Classe CComSafeArray

Questa classe è un `SAFEARRAY` wrapper per la struttura.

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
|[CComSafeArray:: CComSafeArray](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeArray::Aggiunta](#add)|Aggiunge uno o più `SAFEARRAY` elementi o `CComSafeArray`una struttura a un oggetto .|
|[CComSafeArray::Attach](#attach)|Associa una `SAFEARRAY` struttura a `CComSafeArray` un oggetto.|
|[CComSafeArray::CopiaDa](#copyfrom)|Copia il contenuto `SAFEARRAY` di una `CComSafeArray` struttura nell'oggetto.|
|[CComSafeArray::CopiaA](#copyto)|Crea una copia dell'oggetto `CComSafeArray`.|
|[CComSafeArray::Create](#create)|Crea un oggetto `CComSafeArray`.|
|[CComSafeArray::Destroy](#destroy)|Elimina un oggetto `CComSafeArray` .|
|[CComSafeArray::Detach](#detach)|Stacca `SAFEARRAY` un `CComSafeArray` da un oggetto.|
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
|[CComSafeArray::Ridimensiona](#resize)|Ridimensiona un oggetto `CComSafeArray` .|
|[CComSafeArray::SetAt](#setat)|Imposta il valore di un elemento in una matrice unidimensionale.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeArray::operatorE LPSAFEARRAY](#operator_lpsafearray)|Esegue il cast `SAFEARRAY` di un valore a un puntatore.|
|[CComSafeArray::operator\[\]](ccomsafearray-class.md#operator_at)|Recupera un elemento da una matrice.|
|[CComSafeArray::operatore](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeArray::m_psa](#m_psa)|Questo membro dati contiene `SAFEARRAY` l'indirizzo della struttura.|

## <a name="remarks"></a>Osservazioni

`CComSafeArray` fornisce un wrapper per la classe [SAFEARRAY Data Type](/windows/win32/api/oaidl/ns-oaidl-safearray) , semplificando la creazione e la gestione di matrici unidimensionali e multidimensionali di quasi ogni tipo supportato da VARIANT.

`CComSafeArray` semplifica il passaggio delle matrici tra processi e fornisce anche protezione aggiuntiva poiché controlla i valori degli indici della matrice rispetto ai limiti superiore e inferiore.

Il limite inferiore di una classe `CComSafeArray` può iniziare con qualsiasi valore definito dall'utente; tuttavia, le matrici a cui si accede con C++ usano un limite inferiore pari a 0. Altri linguaggi, quali Visual Basic, possono usare altri valori di delimitazione (ad esempio da -10 a 10).

Usare [CComSafeArray::Create](#create) per creare un oggetto `CComSafeArray` e [CComSafeArray::Destroy](#destroy) per eliminarlo.

Una classe `CComSafeArray` può contenere i subset di tipi di dati VARIANT seguenti:

|VARTYPE|Descrizione|
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

## <a name="ccomsafearrayadd"></a><a name="add"></a>CComSafeArray::Aggiunta

Aggiunge uno o più `SAFEARRAY` elementi o `CComSafeArray`una struttura a un oggetto .

```
HRESULT Add(const SAFEARRAY* psaSrc);
HRESULT Add(ULONG ulCount, const T* pT, BOOL bCopy = TRUE);
HRESULT Add(const T& t, BOOL bCopy = TRUE);
```

### <a name="parameters"></a>Parametri

*psaSrc*<br/>
Puntatore a un oggetto `SAFEARRAY`.

*ulCount (conteggio)*<br/>
Numero di oggetti da aggiungere alla matrice.

*Pt*<br/>
Puntatore a uno o più oggetti da aggiungere alla matrice.

*T*<br/>
Un riferimento all'oggetto da aggiungere alla matrice.

*(Impostazioni di copia)*<br/>
Indica se è necessario creare una copia dei dati. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

I nuovi oggetti vengono aggiunti alla `SAFEARRAY` fine dell'oggetto esistente. L'aggiunta di `SAFEARRAY` un oggetto a un oggetto multidimensionale non è supportata. Quando si aggiunge una matrice esistente di oggetti, entrambe le matrici devono contenere elementi dello stesso tipo.

Il *flag bCopy* viene preso in considerazione quando elementi di tipo BSTR o VARIANT vengono aggiunti a una matrice. Il valore predefinito TRUE assicura che venga creata una nuova copia dei dati quando l'elemento viene aggiunto alla matrice.

## <a name="ccomsafearrayattach"></a><a name="attach"></a>CComSafeArray::Attach

Associa una `SAFEARRAY` struttura a `CComSafeArray` un oggetto.

```
HRESULT Attach(const SAFEARRAY* psaSrc);
```

### <a name="parameters"></a>Parametri

*psaSrc*<br/>
Puntatore alla `SAFEARRAY` struttura.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Associa una `SAFEARRAY` struttura a `CComSafeArray` un oggetto, `CComSafeArray` rendendo disponibili i metodi esistenti.

## <a name="ccomsafearrayccomsafearray"></a><a name="ccomsafearray"></a>CComSafeArray::CComSafeArray

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

*Associato*<br/>
Struttura `SAFEARRAYBOUND`.

*ulCount (conteggio)*<br/>
Numero di elementi nella matrice.

*lLBound (invisa"*<br/>
Valore del limite inferiore; vale a dire, l'indice del primo elemento nella matrice.

*pBound (Legato)*<br/>
Puntatore a `SAFEARRAYBOUND` una struttura.

*uDim*<br/>
Numero di dimensioni nella matrice.

*saSrc*<br/>
Riferimento a `SAFEARRAY` una `CComSafeArray` struttura o a un oggetto. In entrambi i casi il costruttore utilizza questo riferimento per creare una copia della matrice, pertanto la matrice non viene fatto riferimento dopo la costruzione.

*psaSrc*<br/>
Puntatore a `SAFEARRAY` una struttura. Il costruttore utilizza questo indirizzo per creare una copia della matrice, pertanto la matrice non viene fatto riferimento dopo la costruzione.

### <a name="remarks"></a>Osservazioni

Crea un oggetto `CComSafeArray`.

## <a name="ccomsafearrayccomsafearray"></a><a name="dtor"></a>CComSafeArray:: CComSafeArray

Distruttore.

```
~CComSafeArray() throw()
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="ccomsafearraycopyfrom"></a><a name="copyfrom"></a>CComSafeArray::CopiaDa

Copia il contenuto `SAFEARRAY` di una `CComSafeArray` struttura nell'oggetto.

```
HRESULT CopyFrom(LPSAFEARRAY* ppArray);
```

### <a name="parameters"></a>Parametri

*libreria di file ppArray*<br/>
Puntatore `SAFEARRAY` all'oggetto da copiare.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo copia il `SAFEARRAY` contenuto di `CComSafeArray` un nell'oggetto corrente. Il contenuto esistente della matrice viene sostituito.

## <a name="ccomsafearraycopyto"></a><a name="copyto"></a>CComSafeArray::CopiaA

Crea una copia dell'oggetto `CComSafeArray`.

```
HRESULT CopyTo(LPSAFEARRAY* ppArray);
```

### <a name="parameters"></a>Parametri

*libreria di file ppArray*<br/>
Puntatore a una posizione in `SAFEARRAY`cui creare il nuovo oggetto .

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo copia il `CComSafeArray` contenuto di `SAFEARRAY` un oggetto in una struttura.

## <a name="ccomsafearraycreate"></a><a name="create"></a>CComSafeArray::Create

Crea un oggetto `CComSafeArray`.

```
HRESULT Create(const SAFEARRAYBOUND* pBound, UINT uDims = 1);
HRESULT Create(ULONG ulCount = 0, LONG lLBound = 0);
```

### <a name="parameters"></a>Parametri

*pBound (Legato)*<br/>
Puntatore a un oggetto `SAFEARRAYBOUND`.

*uDim*<br/>
Numero di dimensioni nella matrice.

*ulCount (conteggio)*<br/>
Numero di elementi nella matrice.

*lLBound (invisa"*<br/>
Valore del limite inferiore; vale a dire, l'indice del primo elemento nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Un `CComSafeArray` oggetto può essere `SAFEARRAYBOUND` creato da una struttura esistente e dal numero di dimensioni oppure specificando il numero di elementi nella matrice e il limite inferiore. Se l'accesso alla matrice deve essere eseguito da C, il limite inferiore deve essere 0. Altri linguaggi possono consentire altri valori per il limite inferiore (ad esempio, Visual Basic supporta le matrici con elementi con un intervallo, ad esempio da -10 a 10).

## <a name="ccomsafearraydestroy"></a><a name="destroy"></a>CComSafeArray::Destroy

Elimina un oggetto `CComSafeArray` .

```
HRESULT Destroy();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Elimina un `CComSafeArray` oggetto esistente e tutti i dati in esso contenuti.

## <a name="ccomsafearraydetach"></a><a name="detach"></a>CComSafeArray::Detach

Stacca `SAFEARRAY` un `CComSafeArray` da un oggetto.

```
LPSAFEARRAY Detach();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `SAFEARRAY` puntatore a un oggetto.

### <a name="remarks"></a>Osservazioni

Questo metodo scollega `SAFEARRAY` l'oggetto dall'oggetto. `CComSafeArray`

## <a name="ccomsafearraygetat"></a><a name="getat"></a>CComSafeArray::GetAt

Recupera un singolo elemento da una matrice unidimensionale.

```
T& GetAt(LONG lIndex) const;
```

### <a name="parameters"></a>Parametri

*Lindex*<br/>
Numero di indice del valore nella matrice da restituire.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'elemento di matrice richiesto.

## <a name="ccomsafearraygetcount"></a><a name="getcount"></a>CComSafeArray::GetCount

Restituisce il numero di elementi nella matrice.

```
ULONG GetCount(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim (in com.: 5).*<br/>
Dimensione della matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di elementi nella matrice.

### <a name="remarks"></a>Osservazioni

Se utilizzato con una matrice multidimensionale, questo metodo restituirà il numero di elementi solo in una dimensione specifica.

## <a name="ccomsafearraygetdimensions"></a><a name="getdimensions"></a>CComSafeArray::GetDimensions

Restituisce il numero di dimensioni nella matrice.

```
UINT GetDimensions() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di dimensioni nella matrice.

## <a name="ccomsafearraygetlowerbound"></a><a name="getlowerbound"></a>CComSafeArray::GetLowerBound

Restituisce il limite inferiore di una determinata dimensione della matrice.

```
LONG GetLowerBound(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim (in com.: 5).*<br/>
Dimensione della matrice per la quale ottenere il limite inferiore. Se omesso, il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

Restituisce il limite inferiore.

### <a name="remarks"></a>Osservazioni

Se il limite inferiore è 0, ciò indica una matrice di tipo C il cui primo elemento è il numero di elemento 0. In caso di errore, ad esempio un argomento di `AtlThrow` dimensione non valido, questo metodo chiama con un HRESULT che descrive l'errore.

## <a name="ccomsafearraygetsafearrayptr"></a><a name="getsafearrayptr"></a>CComSafeArray::GetSafeArrayPtr

Restituisce l'indirizzo del membro dati `m_psa` .

```
LPSAFEARRAY* GetSafeArrayPtr() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al membro dati [CComSafeArray::m_psa.](#m_psa)

## <a name="ccomsafearraygettype"></a><a name="gettype"></a>CComSafeArray::GetType

Restituisce il tipo di dati memorizzati nella matrice.

```
VARTYPE GetType() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il tipo di dati archiviati nella matrice, che può essere uno dei seguenti tipi:

|VARTYPE|Descrizione|
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

## <a name="ccomsafearraygetupperbound"></a><a name="getupperbound"></a>CComSafeArray::GetUpperBound

Restituisce il limite superiore di una determinata dimensione della matrice.

```
LONG GetUpperBound(UINT uDim = 0) const;
```

### <a name="parameters"></a>Parametri

*uDim (in com.: 5).*<br/>
Dimensione della matrice per la quale ottenere il limite superiore. Se omesso, il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

Restituisce il limite superiore. Questo valore è inclusivo, l'indice massimo valido per questa dimensione.

### <a name="remarks"></a>Osservazioni

In caso di errore, ad esempio un argomento di `AtlThrow` dimensione non valido, questo metodo chiama con un HRESULT che descrive l'errore.

## <a name="ccomsafearrayissizable"></a><a name="issizable"></a>CComSafeArray::IsSizable

Verifica se è possibile ridimensionare un oggetto `CComSafeArray` .

```
bool IsSizable() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE `CComSafeArray` se l'oggetto può essere ridimensionato, FALSE se non è possibile.

## <a name="ccomsafearraym_psa"></a><a name="m_psa"></a>CComSafeArray::m_psa

Contiene l'indirizzo `SAFEARRAY` della struttura a cui si accede.

```
LPSAFEARRAY m_psa;
```

## <a name="ccomsafearraymultidimgetat"></a><a name="multidimgetat"></a>CComSafeArray::MultiDimGetAt

Recupera un singolo elemento da una matrice multidimensionale.

```
HRESULT MultiDimGetAt(const LONG* alIndex, T& t);
```

### <a name="parameters"></a>Parametri

*Indice di al*<br/>
Puntatore a un vettore di indici per ogni dimensione nella matrice. La dimensione più a sinistra `alIndex[0]`(più significativa) è .

*T*<br/>
Riferimento ai dati restituiti.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="ccomsafearraymultidimsetat"></a><a name="multidimsetat"></a>CComSafeArray::MultiDimSetAt

Imposta il valore di un elemento in una matrice multidimensionale.

```
HRESULT MultiDimSetAt(const LONG* alIndex, const T& t);
```

### <a name="parameters"></a>Parametri

*Indice di al*<br/>
Puntatore a un vettore di indici per ogni dimensione nella matrice. La dimensione più a destra `alIndex`(meno significativa) è [0].

*T*<br/>
Specifica il valore del nuovo elemento.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Si tratta di una versione multidimensionale di [CComSafeArray::SetAt](#setat).

## <a name="ccomsafearrayoperator-"></a><a name="operator_at"></a>CComSafeArray::operatore\[\]

Recupera un elemento da una matrice.

```
T& operator[](long lindex) const;
T& operator[]int nindex) const;
```

### <a name="parameters"></a>Parametri

*lIndex, nIndice*<br/>
Numero di indice dell'elemento richiesto nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce l'elemento della matrice appropriato.

### <a name="remarks"></a>Osservazioni

Esegue una funzione simile a [CComSafeArray::GetAt](#getat), tuttavia questo operatore funziona solo con matrici unidimensionali.

## <a name="ccomsafearrayoperator-"></a><a name="operator_eq"></a>CComSafeArray::operatore

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

## <a name="ccomsafearrayoperator-lpsafearray"></a><a name="operator_lpsafearray"></a>CComSafeArray::operatorE LPSAFEARRAY

Esegue il cast `SAFEARRAY` di un valore a un puntatore.

```
operator LPSAFEARRAY() const;
```

### <a name="return-value"></a>Valore restituito

Esegue il cast `SAFEARRAY` di un valore a un puntatore.

## <a name="ccomsafearrayresize"></a><a name="resize"></a>CComSafeArray::Ridimensiona

Ridimensiona un oggetto `CComSafeArray` .

```
HRESULT Resize(const SAFEARRAYBOUND* pBound);
HRESULT Resize(ULONG ulCount, LONG lLBound = 0);
```

### <a name="parameters"></a>Parametri

*pBound (Legato)*<br/>
Puntatore a `SAFEARRAYBOUND` una struttura che contiene informazioni sul numero di elementi e sul limite inferiore di una matrice.

*ulCount (conteggio)*<br/>
Numero richiesto di oggetti nella matrice ridimensionata.

*lLBound (invisa"*<br/>
Limite inferiore.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo ridimensiona solo la dimensione più a destra. Non ridimensionerà le `IsResizable` matrici che restituiscono come FALSE.

## <a name="ccomsafearraysetat"></a><a name="setat"></a>CComSafeArray::SetAt

Imposta il valore di un elemento in una matrice unidimensionale.

```
HRESULT SetAt(LONG lIndex, const T& t, BOOL bCopy = TRUE);
```

### <a name="parameters"></a>Parametri

*Lindex*<br/>
Numero di indice dell'elemento della matrice da impostare.

*T*<br/>
Nuovo valore dell'elemento specificato.

*(Impostazioni di copia)*<br/>
Indica se è necessario creare una copia dei dati. Il valore predefinito è TRUE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Il *flag bCopy* viene preso in considerazione quando elementi di tipo BSTR o VARIANT vengono aggiunti a una matrice. Il valore predefinito TRUE assicura che venga creata una nuova copia dei dati quando l'elemento viene aggiunto alla matrice.

## <a name="see-also"></a>Vedere anche

[SAFEARRAY Data Type](/windows/win32/api/oaidl/ns-oaidl-safearray)<br/>
[CComSafeArray::Create](#create)<br/>
[CComSafeArray::Destroy](#destroy)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
