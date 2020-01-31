---
title: Classe CComSafeDeleteCriticalSection
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
ms.openlocfilehash: da83bc5d0c2ebb79aee07f30069144368169fc26
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821649"
---
# <a name="ccomsafedeletecriticalsection-class"></a>Classe CComSafeDeleteCriticalSection

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComSafeDeleteCriticalSection : public CComCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection](#ccomsafedeletecriticalsection)|Costruttore.|
|[CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComSafeDeleteCriticalSection::Init](#init)|Crea e Inizializza un oggetto sezione critica.|
|[CComSafeDeleteCriticalSection:: Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|
|[CComSafeDeleteCriticalSection::Term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_bInitialized](#m_binitialized)|Contrassegna se l'oggetto `CRITICAL_SECTION` interno è stato inizializzato.|

## <a name="remarks"></a>Note

`CComSafeDeleteCriticalSection` deriva dalla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia, `CComSafeDeleteCriticalSection` fornisce meccanismi di sicurezza aggiuntivi rispetto a [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).

Quando un'istanza di `CComSafeDeleteCriticalSection` esce dall'ambito o viene eliminata in modo esplicito dalla memoria, l'oggetto sezione critica sottostante verrà automaticamente pulito se è ancora valido. Inoltre, il metodo [CComSafeDeleteCriticalSection:: term](#term) si chiude normalmente se l'oggetto della sezione critica sottostante non è ancora stato allocato o è già stato rilasciato dalla memoria.

Per ulteriori informazioni sulle classi helper della sezione critica, vedere [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComSafeDeleteCriticalSection`

## <a name="requirements"></a>Requisiti di

**Intestazione:** atlcore. h

##  <a name="ccomsafedeletecriticalsection"></a>CComSafeDeleteCriticalSection:: CComSafeDeleteCriticalSection

Costruttore.

```
CComSafeDeleteCriticalSection();
```

### <a name="remarks"></a>Note

Imposta il membro dati [m_bInitialized](#m_binitialized) su false.

##  <a name="dtor"></a>CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection

Distruttore.

```
~CComSafeDeleteCriticalSection() throw();
```

### <a name="remarks"></a>Note

Rilascia l'oggetto `CRITICAL_SECTION` interno dalla memoria se il membro dati [m_bInitialized](#m_binitialized) è impostato su true.

##  <a name="init"></a>CComSafeDeleteCriticalSection:: init

Chiama l'implementazione della classe di base di [init](/visualstudio/debugger/init) e imposta [m_bInitialized](#m_binitialized) su true in caso di esito positivo.

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection:: init](../../atl/reference/ccomcriticalsection-class.md#init).

##  <a name="lock"></a>CComSafeDeleteCriticalSection:: Lock

Chiama l'implementazione della classe di base del [blocco](ccomcriticalsection-class.md#lock).

```
HRESULT Lock();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection:: Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

### <a name="remarks"></a>Note

Questo metodo presuppone che il membro dati [m_bInitialized](#m_binitialized) sia impostato su true alla voce. Se questa condizione non viene soddisfatta, viene generata un'asserzione nelle compilazioni di debug.

Per ulteriori informazioni sul comportamento della funzione, vedere [CComCriticalSection:: Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

##  <a name="m_binitialized"></a>CComSafeDeleteCriticalSection:: m_bInitialized

Contrassegna se l'oggetto `CRITICAL_SECTION` interno è stato inizializzato.

```
bool m_bInitialized;
```

### <a name="remarks"></a>Note

Il membro dati `m_bInitialized` viene utilizzato per tenere traccia della validità dell'oggetto `CRITICAL_SECTION` sottostante associato alla classe [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) . Se questo flag non è impostato su TRUE, l'oggetto `CRITICAL_SECTION` sottostante non verrà rilasciato dalla memoria.

##  <a name="term"></a>CComSafeDeleteCriticalSection:: term

Chiama l'implementazione della classe di base di [CComCriticalSection:: term](../../atl/reference/ccomcriticalsection-class.md#term) se l'oggetto `CRITICAL_SECTION` interno è valido.

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection:: term](../../atl/reference/ccomcriticalsection-class.md#term)o S_OK se [m_bInitialized](#m_binitialized) è stato impostato su false alla voce.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo in modo sicuro anche se l'oggetto `CRITICAL_SECTION` interno non è valido. Il distruttore di questa classe chiama questo metodo se il membro dati [m_bInitialized](#m_binitialized) è impostato su true.

## <a name="see-also"></a>Vedere anche

[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
