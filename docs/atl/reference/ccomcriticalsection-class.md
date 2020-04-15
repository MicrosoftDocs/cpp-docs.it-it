---
title: CComCriticalSection (classe)
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
ms.openlocfilehash: f3991d217fbc201bd428ed2522a5c4c25e074928
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327972"
---
# <a name="ccomcriticalsection-class"></a>CComCriticalSection (classe)

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCriticalSection::CComCriticalSection](#ccomcriticalsection)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCriticalSection::Init](#init)|Crea e inizializza un oggetto sezione critica.|
|[CComCriticalSection::Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|
|[CComCriticalSection::Term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|
|[CComCriticalSection::Unlock](#unlock)|Rilascia la proprietà dell'oggetto sezione critica.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCriticalSection::m_sec](#m_sec)|Oggetto CRITICAL_SECTION.|

## <a name="remarks"></a>Osservazioni

`CComCriticalSection`è simile alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), con la differenza che è necessario inizializzare e rilasciare in modo esplicito la sezione critica.

In genere, `CComCriticalSection` si utilizza tramite il nome **typedef** [CriticalSection](ccommultithreadmodel-class.md#criticalsection). Questo nome `CComCriticalSection` fa riferimento quando viene utilizzato [CComMultiThreadModel.This](../../atl/reference/ccommultithreadmodel-class.md) name references when CComMultiThreadModel is being used.

Vedere [CComCritSecLock classe](../../atl/reference/ccomcritseclock-class.md) per un modo più `Lock` `Unlock` sicuro di utilizzare questa classe rispetto alla chiamata e direttamente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="ccomcriticalsectionccomcriticalsection"></a><a name="ccomcriticalsection"></a>CComCriticalSection::CComCriticalSection

Costruttore.

```
CComCriticalSection() throw();
```

### <a name="remarks"></a>Osservazioni

Imposta il membro dati [m_sec](#m_sec) su NULL.

## <a name="ccomcriticalsectioninit"></a><a name="init"></a>CComCriticalSection::Init

Chiama la funzione Win32 [InitializeCriticalSection](/windows/win32/api/synchapi/nf-synchapi-initializecriticalsection), che inizializza l'oggetto sezione critica contenuto nel membro dati [m_sec.](#m_sec)

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, E_OUTOFMEMORY o E_FAIL in caso di errore.

## <a name="ccomcriticalsectionlock"></a><a name="lock"></a>CComCriticalSection::Lock

Chiama la funzione Win32 [EnterCriticalSection](/windows/win32/api/synchapi/nf-synchapi-entercriticalsection), che attende che il thread possa assumere la proprietà dell'oggetto sezione critica contenuto nel membro dati [m_sec.](#m_sec)

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo, E_OUTOFMEMORY o E_FAIL in caso di errore.

### <a name="remarks"></a>Osservazioni

L'oggetto sezione critica deve prima essere inizializzato con una chiamata al [Init](#init) metodo. Al termine dell'esecuzione del codice protetto, il thread deve chiamare [Unlock](#unlock) per rilasciare la proprietà della sezione critica.

## <a name="ccomcriticalsectionm_sec"></a><a name="m_sec"></a>CComCriticalSection::m_sec

Contiene un oggetto sezione critica `CComCriticalSection` utilizzato da tutti i metodi.

```
CRITICAL_SECTION m_sec;
```

## <a name="ccomcriticalsectionterm"></a><a name="term"></a>CComCriticalSection::Term

Chiama la funzione Win32 [DeleteCriticalSection](/windows/win32/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse utilizzate dall'oggetto sezione critica contenuto nel membro dati [m_sec.](#m_sec)

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Una `Term` volta chiamato, la sezione critica non può più essere utilizzata per la sincronizzazione.

## <a name="ccomcriticalsectionunlock"></a><a name="unlock"></a>CComCriticalSection::Unlock

Chiama la funzione Win32 [LeaveCriticalSection](/windows/win32/api/synchapi/nf-synchapi-leavecriticalsection), che rilascia la proprietà dell'oggetto sezione critica contenuto nel membro dati [m_sec.](#m_sec)

```
HRESULT Unlock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per ottenere prima la proprietà, il thread deve chiamare il [Lock](#lock) metodo. Ogni chiamata `Lock` a richiede `Unlock` una chiamata corrispondente a rilasciare la proprietà della sezione critica.

## <a name="see-also"></a>Vedere anche

[CComFakeCriticalSection (classe)](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)
