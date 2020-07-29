---
title: Classe CComCriticalSection
ms.date: 11/04/2016
f1_keywords:
- CComCriticalSection
- ATLCORE/ATL::CComCriticalSection
- ATLCORE/ATL::CComCriticalSection::CComCriticalSection
- ATLCORE/ATL::CComCriticalSection::Init
- ATLCORE/ATL::CComCriticalSection::Lock
- ATLCORE/ATL::CComCriticalSection::Term
- ATLCORE/ATL::CComCriticalSection::Unlock
- ATLCORE/ATL::CComCriticalSection::m_sec
helpviewer_keywords:
- CComCriticalSection class
ms.assetid: 44e1edd2-90be-4bfe-9739-58e8b419e7d1
ms.openlocfilehash: 8cf590052dee9d0303ccfb102296fc66038aec57
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224305"
---
# <a name="ccomcriticalsection-class"></a>Classe CComCriticalSection

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCriticalSection:: CComCriticalSection](#ccomcriticalsection)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCriticalSection:: init](#init)|Crea e Inizializza un oggetto sezione critica.|
|[CComCriticalSection:: Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|
|[CComCriticalSection:: term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|
|[CComCriticalSection:: Unlock](#unlock)|Rilascia la proprietà dell'oggetto sezione critica.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCriticalSection:: m_sec](#m_sec)|Oggetto CRITICAL_SECTION.|

## <a name="remarks"></a>Osservazioni

`CComCriticalSection`è simile alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), con la differenza che è necessario inizializzare e rilasciare in modo esplicito la sezione critica.

In genere si usa `CComCriticalSection` il **`typedef`** nome [CriticalSection](ccommultithreadmodel-class.md#criticalsection). Questo nome fa riferimento `CComCriticalSection` al momento in cui viene utilizzato [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) .

Per un modo più sicuro per usare questa classe, vedere la [classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md) anziché chiamare `Lock` `Unlock` direttamente e.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="ccomcriticalsectionccomcriticalsection"></a><a name="ccomcriticalsection"></a>CComCriticalSection:: CComCriticalSection

Costruttore.

```
CComCriticalSection() throw();
```

### <a name="remarks"></a>Osservazioni

Imposta il membro dati [m_sec](#m_sec) su null.

## <a name="ccomcriticalsectioninit"></a><a name="init"></a>CComCriticalSection:: init

Chiama la funzione Win32 [InitializeCriticalSection](/windows/win32/api/synchapi/nf-synchapi-initializecriticalsection), che Inizializza l'oggetto sezione critico contenuto nel membro dati [m_sec](#m_sec) .

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, E_OUTOFMEMORY o E_FAIL in caso di errore.

## <a name="ccomcriticalsectionlock"></a><a name="lock"></a>CComCriticalSection:: Lock

Chiama la funzione Win32 [EnterCriticalSection](/windows/win32/api/synchapi/nf-synchapi-entercriticalsection), che attende fino a quando il thread non può assumere la proprietà dell'oggetto sezione critica contenuto nel [m_sec](#m_sec) membro dati.

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, E_OUTOFMEMORY o E_FAIL in caso di errore.

### <a name="remarks"></a>Osservazioni

L'oggetto sezione critica deve prima essere inizializzato con una chiamata al metodo [init](#init) . Al termine dell'esecuzione del codice protetto, il thread deve chiamare [Unlock](#unlock) per rilasciare la proprietà della sezione critica.

## <a name="ccomcriticalsectionm_sec"></a><a name="m_sec"></a>CComCriticalSection:: m_sec

Contiene un oggetto sezione critico utilizzato da tutti i `CComCriticalSection` metodi.

```
CRITICAL_SECTION m_sec;
```

## <a name="ccomcriticalsectionterm"></a><a name="term"></a>CComCriticalSection:: term

Chiama la funzione Win32 [DeleteCriticalSection](/windows/win32/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse usate dall'oggetto sezione critica contenuto nel membro dati [m_sec](#m_sec) .

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Una volta `Term` chiamato, la sezione critica non può più essere utilizzata per la sincronizzazione.

## <a name="ccomcriticalsectionunlock"></a><a name="unlock"></a>CComCriticalSection:: Unlock

Chiama la funzione Win32 [LeaveCriticalSection](/windows/win32/api/synchapi/nf-synchapi-leavecriticalsection), che rilascia la proprietà dell'oggetto sezione critica contenuto nel membro dati [m_sec](#m_sec) .

```
HRESULT Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per ottenere prima di tutto la proprietà, il thread deve chiamare il metodo [Lock](#lock) . Ogni chiamata a `Lock` richiede una chiamata corrispondente a `Unlock` per rilasciare la proprietà della sezione critica.

## <a name="see-also"></a>Vedere anche

[Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)
