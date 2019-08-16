---
title: Classe CComPtrBase
ms.date: 11/04/2016
f1_keywords:
- CComPtrBase
- ATLCOMCLI/ATL::CComPtrBase
- ATLCOMCLI/ATL::CComPtrBase::Advise
- ATLCOMCLI/ATL::CComPtrBase::Attach
- ATLCOMCLI/ATL::CComPtrBase::CoCreateInstance
- ATLCOMCLI/ATL::CComPtrBase::CopyTo
- ATLCOMCLI/ATL::CComPtrBase::Detach
- ATLCOMCLI/ATL::CComPtrBase::IsEqualObject
- ATLCOMCLI/ATL::CComPtrBase::QueryInterface
- ATLCOMCLI/ATL::CComPtrBase::Release
- ATLCOMCLI/ATL::CComPtrBase::SetSite
- ATLCOMCLI/ATL::CComPtrBase::p
helpviewer_keywords:
- CComPtrBase class
ms.assetid: 6dbe9543-dee8-4a97-b02f-dd3a25f4a1a0
ms.openlocfilehash: 689221ec77b21fc8bfaed2e929aee5402a4bc676
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496980"
---
# <a name="ccomptrbase-class"></a>Classe CComPtrBase

Questa classe fornisce una base per le classi di puntatore intelligente che utilizzano routine di memoria basate su COM.

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComPtrBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto a cui fa riferimento il puntatore intelligente.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComPtrBase:: ~ CComPtrBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtrBase::Advise](#advise)|Chiamare questo metodo per creare una connessione tra il `CComPtrBase`punto di connessione di e il sink di un client.|
|[CComPtrBase::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CComPtrBase::CoCreateInstance](#cocreateinstance)|Chiamare questo metodo per creare un oggetto della classe associata a un ID di classe o a un ID di programma specificato.|
|[CComPtrBase::CopyTo](#copyto)|Chiamare questo metodo per copiare il `CComPtrBase` puntatore a un'altra variabile puntatore.|
|[CComPtrBase::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CComPtrBase::IsEqualObject](#isequalobject)|Chiamare questo metodo per verificare se l'oggetto `IUnknown` specificato punta allo stesso oggetto associato `CComPtrBase` all'oggetto.|
|[CComPtrBase::QueryInterface](#queryinterface)|Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.|
|[CComPtrBase:: Release](#release)|Chiamare questo metodo per rilasciare l'interfaccia.|
|[CComPtrBase::SetSite](#setsite)|Chiamare questo metodo per impostare il sito dell' `CComPtrBase` oggetto `IUnknown` sull'oggetto dell'oggetto padre.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtrBase:: operator T *](#operator_t_star)|Operatore cast.|
|[CComPtrBase:: operator!](#operator_not)|Operatore NOT.|
|[& CComPtrBase:: operator](#operator_amp)|Operatore &.|
|[CComPtrBase:: operator *](#operator_star)|Operatore \*.|
|[< CComPtrBase:: operator](#ccomptrbase__operator lt)|Operatore Less-than.|
|[CComPtrBase:: operator = =](#operator_eq_eq)|Operatore di uguaglianza.|
|[CComPtrBase:: operator->](#operator_ptr)|Operatore puntatore a membro.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CComPtrBase::p](#p)|Variabile del membro dati del puntatore.|

## <a name="remarks"></a>Note

Questa classe costituisce la base per altri puntatori intelligenti che usano routine di gestione della memoria COM, ad esempio [CComQIPtr](../../atl/reference/ccomqiptr-class.md) e [CComPtr](../../atl/reference/ccomptr-class.md). Le classi derivate aggiungono costruttori e operatori propri, ma si basano sui metodi `CComPtrBase`forniti da.

## <a name="requirements"></a>Requisiti

**Intestazione:** Atlcomcli. h

##  <a name="advise"></a>  CComPtrBase::Advise

Chiamare questo metodo per creare una connessione tra il `CComPtrBase`punto di connessione di e il sink di un client.

```
HRESULT Advise(
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw) throw();
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
Puntatore all'oggetto del client `IUnknown`.

*iid*<br/>
GUID del punto di connessione. In genere, questo è lo stesso dell'interfaccia in uscita gestita dal punto di connessione.

*pdw*<br/>
Puntatore al cookie che identifica in modo univoco la connessione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere [AtlAdvise](connection-point-global-functions.md#atladvise) .

##  <a name="attach"></a>CComPtrBase:: Connetti

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```
void Attach(T* p2) throw();
```

### <a name="parameters"></a>Parametri

*p2*<br/>
L' `CComPtrBase` oggetto assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Note

`Attach`chiama [CComPtrBase:: Release](#release) sulla variabile membro [CComPtrBase::p](#p) esistente e quindi assegna *P2* a `CComPtrBase::p`. Quando un `CComPtrBase` oggetto acquisisce la proprietà di un puntatore, chiamerà `Release` automaticamente sul puntatore che eliminerà il puntatore e i dati allocati se il conteggio dei riferimenti nell'oggetto passa a 0.

##  <a name="dtor"></a>CComPtrBase:: ~ CComPtrBase

Distruttore.

```
~CComPtrBase() throw();
```

### <a name="remarks"></a>Note

Rilascia l'interfaccia a cui `CComPtrBase`punta.

##  <a name="cocreateinstance"></a>  CComPtrBase::CoCreateInstance

Chiamare questo metodo per creare un oggetto della classe associata a un ID di classe o a un ID di programma specificato.

```
HRESULT CoCreateInstance(
    LPCOLESTR szProgID,
    LPUNKNOWN pUnkOuter = NULL,
    DWORD dwClsContext = CLSCTX_ALL) throw();

HRESULT CoCreateInstance(
    REFCLSID rclsid,
    LPUNKNOWN pUnkOuter = NULL,
    DWORD dwClsContext = CLSCTX_ALL) throw();
```

### <a name="parameters"></a>Parametri

*szProgID*<br/>
Puntatore a un ProgID, utilizzato per recuperare il CLSID.

*pUnkOuter*<br/>
Se NULL, indica che l'oggetto non viene creato come parte di un'aggregazione. Se diverso da null, è un puntatore all' `IUnknown` interfaccia dell'oggetto aggregato (controllo `IUnknown`).

*dwClsContext*<br/>
Contesto in cui viene eseguito il codice che gestisce l'oggetto appena creato.

*rclsid*<br/>
CLSID associato ai dati e al codice che verranno utilizzati per creare l'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, REGDB_E_CLASSNOTREG, CLASS_E_NOAGGREGATION, CO_E_CLASSSTRING o E_NOINTERFACE in caso di errore. Per una descrizione di questi errori, vedere [CoCreateClassInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance) e [CLSIDFromProgID](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromprogid) .

### <a name="remarks"></a>Note

Se viene chiamato il primo form del metodo, [CLSIDFromProgID](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromprogid) viene usato per recuperare il CLSID. Entrambi i moduli chiamano quindi [CoCreateClassInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

Nelle build di debug, si verificherà un errore di asserzione se [CComPtrBase::p](#p) è diverso da null.

##  <a name="copyto"></a>CComPtrBase:: CopyTo

Chiamare questo metodo per copiare il `CComPtrBase` puntatore a un'altra variabile puntatore.

```
HRESULT CopyTo(T** ppT) throw();
```

### <a name="parameters"></a>Parametri

*ppT*<br/>
Indirizzo della variabile che riceverà il `CComPtrBase` puntatore.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, E_POINTER in caso di errore.

### <a name="remarks"></a>Note

Copia il `CComPtrBase` puntatore in *PPT*. Il conteggio dei riferimenti nella variabile membro [CComPtrBase::p](#p) viene incrementato.

Se *PPT* è uguale a null, verrà restituito un errore HRESULT. Nelle build di debug, si verificherà un errore di asserzione se *PPT* è uguale a null.

##  <a name="detach"></a>  CComPtrBase::Detach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Note

Rilascia la proprietà di un puntatore, imposta la variabile membro dati [CComPtrBase::p](#p) su null e restituisce una copia del puntatore.

##  <a name="isequalobject"></a>  CComPtrBase::IsEqualObject

Chiamare questo metodo per verificare se l'oggetto `IUnknown` specificato punta allo stesso oggetto associato `CComPtrBase` all'oggetto.

```
bool IsEqualObject(IUnknown* pOther) throw();
```

### <a name="parameters"></a>Parametri

*pOther*<br/>
Oggetto `IUnknown *` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli oggetti sono identici; in caso contrario, false.

##  <a name="operator_not"></a>CComPtrBase:: operator!

Operatore NOT.

```
bool operator!() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true se il `CComHeapPtr` puntatore è uguale a null; in caso contrario, false.

##  <a name="operator_amp"></a>Operatore CComPtrBase::&amp;

Operatore &.

```
T** operator&() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo dell'oggetto a cui fa riferimento l' `CComPtrBase` oggetto.

##  <a name="operator_star"></a>Operatore CComPtrBase::\*

Operatore \*.

```
T& operator*() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di [CComPtrBase::p](#p); ovvero un puntatore all'oggetto a cui fa riferimento l' `CComPtrBase` oggetto.

Se build di debug, si verificherà un errore di asserzione se [CComPtrBase::p](#p) è diverso da null.

##  <a name="operator_eq_eq"></a>CComPtrBase:: operator = =

Operatore di uguaglianza.

```
bool operator== (T* pT) const throw();
```

### <a name="parameters"></a>Parametri

*pT*<br/>
Puntatore a un oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce true se `CComPtrBase` e *PT* puntano allo stesso oggetto; in caso contrario, false.

##  <a name="operator_ptr"></a>Operatore CComPtrBase:: operator-&gt;

Operatore puntatore a membro.

```
_NoAddRefReleaseOnCComPtr<T>* operator->() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della variabile membro dati [CComPtrBase::p](#p) .

### <a name="remarks"></a>Note

Utilizzare questo operatore per chiamare un metodo in una classe a cui fa riferimento `CComPtrBase` l'oggetto. Nelle build di debug, si verificherà un errore di `CComPtrBase` asserzione se il membro dati punta a null.

##  <a name="operator_lt"></a>Operatore CComPtrBase::&lt;

Operatore Less-than.

```
bool operator<(T* pT) const throw();
```

### <a name="parameters"></a>Parametri

*pT*<br/>
Puntatore a un oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce true se il puntatore gestito dall'oggetto corrente è minore del puntatore al quale viene confrontato.

##  <a name="operator_t_star"></a>Operatore CComPtrBase:: operator T\*

Operatore cast.

```
operator T*() const throw();
```

### <a name="remarks"></a>Note

Restituisce un puntatore al tipo di dati dell'oggetto definito nel modello di classe.

##  <a name="p"></a>CComPtrBase::p

Variabile del membro dati del puntatore.

```
T* p;
```

### <a name="remarks"></a>Note

Questa variabile membro include le informazioni sul puntatore.

##  <a name="queryinterface"></a>  CComPtrBase::QueryInterface

Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.

```
template <class Q> HRESULT QueryInterface(Q
** pp) const throw();
```

### <a name="parameters"></a>Parametri

*Q*<br/>
Tipo di oggetto di cui è richiesto il puntatore di interfaccia.

*pp*<br/>
Indirizzo della variabile di output che riceve il puntatore a interfaccia richiesto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o E_NOINTERFACE in caso di errore.

### <a name="remarks"></a>Note

Questo metodo chiama [IUnknown:: QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q_)).

Nelle build di debug, si verificherà un errore di asserzione se *PP* non è uguale a null.

##  <a name="release"></a>CComPtrBase:: Release

Chiamare questo metodo per rilasciare l'interfaccia.

```
void Release() throw();
```

### <a name="remarks"></a>Note

L'interfaccia viene rilasciata e [CComPtrBase::p](#p) è impostato su null.

##  <a name="setsite"></a>CComPtrBase:: SESITE

Chiamare questo metodo per impostare il sito dell' `CComPtrBase` oggetto `IUnknown` sull'oggetto dell'oggetto padre.

```
HRESULT SetSite(IUnknown* punkParent) throw();
```

### <a name="parameters"></a>Parametri

*punkParent*<br/>
Puntatore all' `IUnknown` interfaccia dell'elemento padre.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Note

Questo metodo chiama [AtlSetChildSite](composite-control-global-functions.md#atlsetchildsite).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
