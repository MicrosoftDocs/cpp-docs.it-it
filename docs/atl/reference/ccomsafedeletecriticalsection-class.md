---
title: CComSafeDeleteCriticalSection (classe)
ms.date: 11/04/2016
f1_keywords:
- CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Init
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Lock
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Term
- ATLCORE/ATL::m_bInitialized
helpviewer_keywords:
- CComSafeDeleteCriticalSection class
ms.assetid: 4d2932c4-ba8f-48ec-8664-1db8bed01314
ms.openlocfilehash: cb0dc440fc0e79e0023b5fbd6e4ca2345d031d3d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327375"
---
# <a name="ccomsafedeletecriticalsection-class"></a>CComSafeDeleteCriticalSection (classe)

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComSafeDeleteCriticalSection : public CComCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection](#ccomsafedeletecriticalsection)|Costruttore.|
|[CComSafeDeleteCriticalSection:: CComSafeDeleteCriticalSection](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeDeleteCriticalSection::Init (Sezione CComSafeDeleteCriticalSection):Init (informazioni in base alle proprietà del](#init)|Crea e inizializza un oggetto sezione critica.|
|[CComSafeDeleteCriticalSection::Lock (CComSafeDeleteCriticalSection::Lock)](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|
|[CComSafeDeleteCriticalSection::Term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_bInitialized](#m_binitialized)|Contrassegna se `CRITICAL_SECTION` l'oggetto interno è stato inizializzato.|

## <a name="remarks"></a>Osservazioni

`CComSafeDeleteCriticalSection`deriva dalla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia, `CComSafeDeleteCriticalSection` fornisce meccanismi di sicurezza aggiuntivi su [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).

Quando un'istanza esce `CComSafeDeleteCriticalSection` dall'ambito o viene eliminata in modo esplicito dalla memoria, l'oggetto sezione critica sottostante verrà automaticamente eliminato se è ancora valido. Inoltre, il [metodo CComSafeDeleteCriticalSection::Term](#term) verrà chiuso normalmente se l'oggetto sezione critica sottostante non è ancora stato allocato o è già stato rilasciato dalla memoria.

Vedere [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) per ulteriori informazioni sulle classi helper di sezione critica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComSafeDeleteCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="ccomsafedeletecriticalsectionccomsafedeletecriticalsection"></a><a name="ccomsafedeletecriticalsection"></a>CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection

Costruttore.

```
CComSafeDeleteCriticalSection();
```

### <a name="remarks"></a>Osservazioni

Imposta il membro dati [m_bInitialized](#m_binitialized) su FALSE.

## <a name="ccomsafedeletecriticalsectionccomsafedeletecriticalsection"></a><a name="dtor"></a>CComSafeDeleteCriticalSection:: CComSafeDeleteCriticalSection

Distruttore.

```
~CComSafeDeleteCriticalSection() throw();
```

### <a name="remarks"></a>Osservazioni

Rilascia l'oggetto interno `CRITICAL_SECTION` dalla memoria se il membro dati [m_bInitialized](#m_binitialized) è impostato su TRUE.

## <a name="ccomsafedeletecriticalsectioninit"></a><a name="init"></a>CComSafeDeleteCriticalSection::Init (Sezione CComSafeDeleteCriticalSection):Init (informazioni in base alle proprietà del

Chiama l'implementazione della classe base di [Init](/visualstudio/debugger/init) e imposta [m_bInitialized](#m_binitialized) true in caso di esito positivo.

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection::Init](../../atl/reference/ccomcriticalsection-class.md#init).

## <a name="ccomsafedeletecriticalsectionlock"></a><a name="lock"></a>CComSafeDeleteCriticalSection::Lock (CComSafeDeleteCriticalSection::Lock)

Chiama l'implementazione della classe base di [Lock](ccomcriticalsection-class.md#lock).

```
HRESULT Lock();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

### <a name="remarks"></a>Osservazioni

Questo metodo presuppone che il membro dati [m_bInitialized](#m_binitialized) sia impostato su TRUE al momento dell'immissione. Se questa condizione non viene soddisfatta, nelle compilazioni di debug viene generata un'asserzione.

Per ulteriori informazioni sul comportamento della funzione, fare riferimento a [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

## <a name="ccomsafedeletecriticalsectionm_binitialized"></a><a name="m_binitialized"></a>CComSafeDeleteCriticalSection::m_bInitialized

Contrassegna se `CRITICAL_SECTION` l'oggetto interno è stato inizializzato.

```
bool m_bInitialized;
```

### <a name="remarks"></a>Osservazioni

Il `m_bInitialized` membro dati viene utilizzato per `CRITICAL_SECTION` tenere traccia della validità dell'oggetto sottostante associato alla classe [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) . L'oggetto sottostante `CRITICAL_SECTION` non tenterà di essere rilasciato dalla memoria se questo flag non è impostato su TRUE.

## <a name="ccomsafedeletecriticalsectionterm"></a><a name="term"></a>CComSafeDeleteCriticalSection::Term

Chiama l'implementazione della classe base di [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term) se l'oggetto interno `CRITICAL_SECTION` è valido.

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term)o S_OK se [m_bInitialized](#m_binitialized) è stato impostato su FALSE al momento dell'immissione.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo anche `CRITICAL_SECTION` se l'oggetto interno non è valido. Il distruttore di questa classe chiama questo metodo se il membro dati [m_bInitialized](#m_binitialized) è impostato su TRUE.

## <a name="see-also"></a>Vedere anche

[CComCriticalSection (classe)](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
