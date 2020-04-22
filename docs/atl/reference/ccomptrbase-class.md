---
title: CComPtrBase (classe)
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
ms.openlocfilehash: 9c62cc912b3fea3ea68390882bdda37cbfb25a7e
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747768"
---
# <a name="ccomptrbase-class"></a>CComPtrBase (classe)

Questa classe fornisce una base per le classi di puntatori intelligenti che utilizzano routine di memoria basate su COM.

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComPtrBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto a cui fare riferimento il puntatore intelligente.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtrBase:: CComPtrBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtrBase::Advise](#advise)|Chiamare questo metodo per creare `CComPtrBase`una connessione tra il punto di connessione 's e sink di un client.|
|[CComPtrBase::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CComPtrBase::CoCreateInstance](#cocreateinstance)|Chiamare questo metodo per creare un oggetto della classe associata a un ID di classe o di programma specificato.|
|[CComPtrBase::CopyTo](#copyto)|Chiamare questo metodo `CComPtrBase` per copiare il puntatore a un'altra variabile puntatore.|
|[CComPtrBase::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[Oggetto CComPtrBase::IsEqualObject](#isequalobject)|Chiamare questo metodo per `IUnknown` verificare se l'oggetto `CComPtrBase` specificato punta allo stesso oggetto associato all'oggetto.|
|[CComPtrBase::QueryInterface](#queryinterface)|Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.|
|[CComPtrBase::Release](#release)|Chiamare questo metodo per rilasciare l'interfaccia.|
|[CComPtrBase::SetSite](#setsite)|Chiamare questo metodo per impostare il sito dell'oggetto `CComPtrBase` per l'oggetto `IUnknown` dell'oggetto padre.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtrBase::operatore T](#operator_t_star)|Operatore di cast.|
|[CComPtrBase::operatore !](#operator_not)|L'operatore NOT.|
|[CComPtrBase::operatore &](#operator_amp)|Operatore &.|
|[CComPtrBase::operatore](#operator_star)|Operatore \*.|
|[CComPtrBase::operatore <](#ccomptrbase__operator lt)|Operatore minore di.|
|[CComPtrBase::operatore](#operator_eq_eq)|Operatore di uguaglianza.|
|[CComPtrBase::operator ->](#operator_ptr)|Operatore puntatore a membri.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtrBase::p](#p)|Variabile membro dati puntatore.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce la base per altri puntatori intelligenti che utilizzano routine di gestione della memoria COM, ad esempio [CComQIPtr](../../atl/reference/ccomqiptr-class.md) e [CComPtr](../../atl/reference/ccomptr-class.md). Le classi derivate aggiungono i propri costruttori e `CComPtrBase`operatori, ma si basano sui metodi forniti da .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcomcli.h

## <a name="ccomptrbaseadvise"></a><a name="advise"></a>CComPtrBase::Advise

Chiamare questo metodo per creare `CComPtrBase`una connessione tra il punto di connessione 's e sink di un client.

```
HRESULT Advise(
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw) throw();
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
Puntatore all'oggetto `IUnknown`.

*Iid*<br/>
GUID del punto di connessione. In genere, si tratta dello stesso interfaccia in uscita gestita dal punto di connessione.

*Pdw*<br/>
Puntatore al cookie che identifica in modo univoco la connessione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [AtlAdvise.](connection-point-global-functions.md#atladvise)

## <a name="ccomptrbaseattach"></a><a name="attach"></a>CComPtrBase::Attach

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```cpp
void Attach(T* p2) throw();
```

### <a name="parameters"></a>Parametri

*p2*<br/>
L'oggetto `CComPtrBase` assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Osservazioni

`Attach`chiama [CComPtrBase::Release](#release) sulla variabile membro [CComPtrBase::p](#p) esistente, `CComPtrBase::p`quindi assegna *p2* a . Quando `CComPtrBase` un oggetto assume la proprietà di `Release` un puntatore, chiamerà automaticamente il puntatore che eliminerà il puntatore e tutti i dati allocati se il conteggio dei riferimenti sull'oggetto diventa 0.

## <a name="ccomptrbaseccomptrbase"></a><a name="dtor"></a>CComPtrBase:: CComPtrBase

Distruttore.

```
~CComPtrBase() throw();
```

### <a name="remarks"></a>Osservazioni

Rilascia l'interfaccia `CComPtrBase`a cui punta .

## <a name="ccomptrbasecocreateinstance"></a><a name="cocreateinstance"></a>CComPtrBase::CoCreateInstance

Chiamare questo metodo per creare un oggetto della classe associata a un ID di classe o di programma specificato.

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

*szProgID (IDProg)*<br/>
Puntatore a un ProgID, utilizzato per recuperare il CLSID.

*pUnkOuter*<br/>
Se NULL, indica che l'oggetto non viene creato come parte di un'aggregazione. Se diverso da NULL, è un puntatore all'interfaccia dell'oggetto `IUnknown` aggregato (il controllo `IUnknown`).

*dwClsContext*<br/>
Contesto in cui verrà eseguito il codice che gestisce l'oggetto appena creato.

*rclsid*<br/>
CLSID associato ai dati e al codice che verranno utilizzati per creare l'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o REGDB_E_CLASSNOTREG, CLASS_E_NOAGGREGATION CO_E_CLASSSTRING o E_NOINTERFACE in caso di errore. Vedere [CoCreateClassInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance) e [CLSIDFromProgID](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromprogid) per una descrizione di questi errori.

### <a name="remarks"></a>Osservazioni

Se viene chiamato il primo form del metodo, viene utilizzato [CLSIDFromProgID](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromprogid) per recuperare il CLSID. Entrambi i form chiamano quindi [CoCreateClassInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

Nelle build di debug, si verificherà un errore di asserzione se [CComPtrBase::p](#p) non è uguale a NULL.

## <a name="ccomptrbasecopyto"></a><a name="copyto"></a>CComPtrBase::CopyTo

Chiamare questo metodo `CComPtrBase` per copiare il puntatore a un'altra variabile puntatore.

```
HRESULT CopyTo(T** ppT) throw();
```

### <a name="parameters"></a>Parametri

*Ppt*<br/>
Indirizzo della variabile che `CComPtrBase` riceverà il puntatore.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo E_POINTER in caso di errore.

### <a name="remarks"></a>Osservazioni

Copia il `CComPtrBase` puntatore *in ppT*. Il conteggio dei riferimenti nella variabile membro [CComPtrBase::p](#p) viene incrementato.

Se *ppT* è uguale a NULL, verrà restituito un HRESULT di errore. Nelle build di debug, si verificherà un errore di asserzione se *ppT* è uguale a NULL.

## <a name="ccomptrbasedetach"></a><a name="detach"></a>CComPtrBase::Detach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Osservazioni

Rilascia la proprietà di un puntatore, imposta la variabile del membro dati [CComPtrBase::p](#p) su NULL e restituisce una copia del puntatore.

## <a name="ccomptrbaseisequalobject"></a><a name="isequalobject"></a>Oggetto CComPtrBase::IsEqualObject

Chiamare questo metodo per `IUnknown` verificare se l'oggetto `CComPtrBase` specificato punta allo stesso oggetto associato all'oggetto.

```
bool IsEqualObject(IUnknown* pOther) throw();
```

### <a name="parameters"></a>Parametri

*pAltro*<br/>
Oggetto `IUnknown *` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli oggetti sono identici, false in caso contrario.

## <a name="ccomptrbaseoperator-"></a><a name="operator_not"></a>CComPtrBase::operatore !

L'operatore NOT.

```
bool operator!() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce true `CComHeapPtr` se il puntatore è uguale a NULL, false in caso contrario.

## <a name="ccomptrbaseoperator-amp"></a><a name="operator_amp"></a>CComPtrBase::operatore&amp;

Operatore &.

```
T** operator&() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo dell'oggetto `CComPtrBase` a cui punta l'oggetto.

## <a name="ccomptrbaseoperator-"></a><a name="operator_star"></a>CComPtrBase::operatore\*

Operatore \*.

```
T& operator*() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore di [CComPtrBase::p](#p); ovvero un puntatore all'oggetto a `CComPtrBase` cui fa riferimento l'oggetto.

Se le build di debug, si verificherà un errore di asserzione se [CComPtrBase::p](#p) non è uguale a NULL.

## <a name="ccomptrbaseoperator-"></a><a name="operator_eq_eq"></a>CComPtrBase::operatore

Operatore di uguaglianza.

```
bool operator== (T* pT) const throw();
```

### <a name="parameters"></a>Parametri

*Pt*<br/>
Puntatore a un oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce `CComPtrBase` true se e *pT* puntano allo stesso oggetto, false in caso contrario.

## <a name="ccomptrbaseoperator--gt"></a><a name="operator_ptr"></a>CComPtrBase::operatore -&gt;

Operatore puntatore a membro.

```
_NoAddRefReleaseOnCComPtr<T>* operator->() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della variabile membro dati [CComPtrBase::p.](#p)

### <a name="remarks"></a>Osservazioni

Utilizzare questo operatore per chiamare un metodo `CComPtrBase` in una classe a cui punta l'oggetto. Nelle build di debug, si verificherà un errore di asserzione se il `CComPtrBase` membro dati punta a NULL.

## <a name="ccomptrbaseoperator-lt"></a><a name="operator_lt"></a>CComPtrBase::operatore&lt;

Operatore minore di.

```
bool operator<(T* pT) const throw();
```

### <a name="parameters"></a>Parametri

*Pt*<br/>
Puntatore a un oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce true se il puntatore gestito dall'oggetto corrente è minore del puntatore con cui viene confrontato.

## <a name="ccomptrbaseoperator-t"></a><a name="operator_t_star"></a>CComPtrBase::operatore T\*

Operatore di cast.

```
operator T*() const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce un puntatore al tipo di dati dell'oggetto definito nel modello di classe.

## <a name="ccomptrbasep"></a><a name="p"></a>CComPtrBase::p

Variabile membro dati puntatore.

```
T* p;
```

### <a name="remarks"></a>Osservazioni

Questa variabile membro contiene le informazioni sul puntatore.

## <a name="ccomptrbasequeryinterface"></a><a name="queryinterface"></a>CComPtrBase::QueryInterface

Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.

```
template <class Q> HRESULT QueryInterface(Q
** pp) const throw();
```

### <a name="parameters"></a>Parametri

*D*<br/>
Tipo di oggetto il cui puntatore a interfaccia è obbligatorio.

*Pp*<br/>
Indirizzo della variabile di output che riceve il puntatore a interfaccia richiesto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o E_NOINTERFACE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [IUnknown::QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)).

Nelle build di debug, si verificherà un errore di asserzione se *pp* non è uguale a NULL.

## <a name="ccomptrbaserelease"></a><a name="release"></a>CComPtrBase::Release

Chiamare questo metodo per rilasciare l'interfaccia.

```cpp
void Release() throw();
```

### <a name="remarks"></a>Osservazioni

L'interfaccia viene rilasciata e [CComPtrBase::p](#p) è impostato su NULL.

## <a name="ccomptrbasesetsite"></a><a name="setsite"></a>CComPtrBase::SetSite

Chiamare questo metodo per impostare il sito dell'oggetto `CComPtrBase` per l'oggetto `IUnknown` dell'oggetto padre.

```
HRESULT SetSite(IUnknown* punkParent) throw();
```

### <a name="parameters"></a>Parametri

*punkPadre*<br/>
Puntatore all'interfaccia `IUnknown` dell'elemento padre.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [AtlSetChildSite](composite-control-global-functions.md#atlsetchildsite).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
