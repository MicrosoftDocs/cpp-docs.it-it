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
ms.openlocfilehash: ee4ce32ed4ae04bc3b390af5cf104b8a0af599f8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497286"
---
# <a name="ccomcriticalsection-class"></a>Classe CComCriticalSection

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComCriticalSection
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCriticalSection::CComCriticalSection](#ccomcriticalsection)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComCriticalSection::Init](#init)|Crea e Inizializza un oggetto sezione critica.|
|[CComCriticalSection:: Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|
|[CComCriticalSection::Term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|
|[CComCriticalSection:: Unlock](#unlock)|Rilascia la proprietà dell'oggetto sezione critica.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CComCriticalSection::m_sec](#m_sec)|Oggetto CRITICAL_SECTION.|

## <a name="remarks"></a>Note

`CComCriticalSection`è simile alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), con la differenza che è necessario inizializzare e rilasciare in modo esplicito la sezione critica.

In genere si usa `CComCriticalSection` il nome **typedef** [CriticalSection](ccommultithreadmodel-class.md#criticalsection). Questo nome fa `CComCriticalSection` riferimento al momento in cui viene utilizzato [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) .

Per un modo più sicuro per usare questa classe, vedere la [classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md) anziché chiamare `Lock` direttamente e `Unlock` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

##  <a name="ccomcriticalsection"></a>CComCriticalSection:: CComCriticalSection

Costruttore.

```
CComCriticalSection() throw();
```

### <a name="remarks"></a>Note

Imposta il membro dati [m_sec](#m_sec) su null.

##  <a name="init"></a>CComCriticalSection:: init

Chiama la funzione Win32 [InitializeCriticalSection](/windows/win32/api/synchapi/nf-synchapi-initializecriticalsection), che Inizializza l'oggetto sezione critico contenuto nel membro dati [m_sec](#m_sec) .

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, E_OUTOFMEMORY o E_FAIL in caso di errore.

##  <a name="lock"></a>CComCriticalSection:: Lock

Chiama la funzione Win32 [EnterCriticalSection](/windows/win32/api/synchapi/nf-synchapi-entercriticalsection), che attende fino a quando il thread non può assumere la proprietà dell'oggetto sezione critica contenuto nel membro dati [m_sec](#m_sec) .

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, E_OUTOFMEMORY o E_FAIL in caso di errore.

### <a name="remarks"></a>Note

L'oggetto sezione critica deve prima essere inizializzato con una chiamata al metodo [init](#init) . Al termine dell'esecuzione del codice protetto, il thread deve chiamare [Unlock](#unlock) per rilasciare la proprietà della sezione critica.

##  <a name="m_sec"></a>CComCriticalSection:: m_sec

Contiene un oggetto sezione critico utilizzato da tutti i `CComCriticalSection` metodi.

```
CRITICAL_SECTION m_sec;
```

##  <a name="term"></a>CComCriticalSection:: term

Chiama la funzione Win32 [DeleteCriticalSection](/windows/win32/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse usate dall'oggetto sezione critica contenuto nel membro dati [m_sec](#m_sec) .

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Una `Term` volta chiamato, la sezione critica non può più essere utilizzata per la sincronizzazione.

##  <a name="unlock"></a>CComCriticalSection:: Unlock

Chiama la funzione Win32 [LeaveCriticalSection](/windows/win32/api/synchapi/nf-synchapi-leavecriticalsection), che rilascia la proprietà dell'oggetto sezione critica contenuto nel membro dati [m_sec](#m_sec) .

```
HRESULT Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Per ottenere prima di tutto la proprietà, il thread deve chiamare il metodo [Lock](#lock) . Ogni chiamata a `Lock` richiede una chiamata corrispondente a `Unlock` per rilasciare la proprietà della sezione critica.

## <a name="see-also"></a>Vedere anche

[Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)
