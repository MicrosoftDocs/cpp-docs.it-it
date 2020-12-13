---
description: 'Altre informazioni su: classe CComSafeDeleteCriticalSection'
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
ms.openlocfilehash: 73e27fb267cbfc8cde248c7ac896d29de2a91f77
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142169"
---
# <a name="ccomsafedeletecriticalsection-class"></a>Classe CComSafeDeleteCriticalSection

Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComSafeDeleteCriticalSection : public CComCriticalSection
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComSafeDeleteCriticalSection:: CComSafeDeleteCriticalSection](#ccomsafedeletecriticalsection)|Costruttore.|
|[CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComSafeDeleteCriticalSection:: init](#init)|Crea e Inizializza un oggetto sezione critica.|
|[CComSafeDeleteCriticalSection:: Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|
|[CComSafeDeleteCriticalSection:: term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|

### <a name="data-members"></a>Membri dei dati

|Membro dei dati|Description|
|-|-|
|[m_bInitialized](#m_binitialized)|Contrassegna se l' `CRITICAL_SECTION` oggetto interno è stato inizializzato.|

## <a name="remarks"></a>Commenti

`CComSafeDeleteCriticalSection` deriva dalla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia, `CComSafeDeleteCriticalSection` fornisce meccanismi di sicurezza aggiuntivi rispetto a [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).

Quando un'istanza di `CComSafeDeleteCriticalSection` esce dall'ambito o viene eliminata in modo esplicito dalla memoria, l'oggetto sezione critica sottostante verrà automaticamente pulito se è ancora valido. Inoltre, il metodo [CComSafeDeleteCriticalSection:: term](#term) si chiude normalmente se l'oggetto della sezione critica sottostante non è ancora stato allocato o è già stato rilasciato dalla memoria.

Per ulteriori informazioni sulle classi helper della sezione critica, vedere [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComSafeDeleteCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="ccomsafedeletecriticalsectionccomsafedeletecriticalsection"></a><a name="ccomsafedeletecriticalsection"></a> CComSafeDeleteCriticalSection:: CComSafeDeleteCriticalSection

Costruttore.

```
CComSafeDeleteCriticalSection();
```

### <a name="remarks"></a>Commenti

Imposta il membro dati [m_bInitialized](#m_binitialized) su false.

## <a name="ccomsafedeletecriticalsectionccomsafedeletecriticalsection"></a><a name="dtor"></a> CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection

Distruttore.

```
~CComSafeDeleteCriticalSection() throw();
```

### <a name="remarks"></a>Commenti

Rilascia l' `CRITICAL_SECTION` oggetto interno dalla memoria se il [m_bInitialized](#m_binitialized) membro dati è impostato su true.

## <a name="ccomsafedeletecriticalsectioninit"></a><a name="init"></a> CComSafeDeleteCriticalSection:: init

Chiama l'implementazione della classe di base di [init](/visualstudio/debugger/init) e imposta [m_bInitialized](#m_binitialized) su true in caso di esito positivo.

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection:: init](../../atl/reference/ccomcriticalsection-class.md#init).

## <a name="ccomsafedeletecriticalsectionlock"></a><a name="lock"></a> CComSafeDeleteCriticalSection:: Lock

Chiama l'implementazione della classe di base del [blocco](ccomcriticalsection-class.md#lock).

```
HRESULT Lock();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection:: Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

### <a name="remarks"></a>Commenti

Questo metodo presuppone che il membro dati [m_bInitialized](#m_binitialized) sia impostato su true alla voce. Se questa condizione non viene soddisfatta, viene generata un'asserzione nelle compilazioni di debug.

Per ulteriori informazioni sul comportamento della funzione, vedere [CComCriticalSection:: Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

## <a name="ccomsafedeletecriticalsectionm_binitialized"></a><a name="m_binitialized"></a> CComSafeDeleteCriticalSection:: m_bInitialized

Contrassegna se l' `CRITICAL_SECTION` oggetto interno è stato inizializzato.

```
bool m_bInitialized;
```

### <a name="remarks"></a>Commenti

Il `m_bInitialized` membro dati viene usato per tenere traccia della validità dell' `CRITICAL_SECTION` oggetto sottostante associato alla classe [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) . `CRITICAL_SECTION`Se questo flag non è impostato su true, non verrà eseguito alcun tentativo di rilasciare l'oggetto sottostante dalla memoria.

## <a name="ccomsafedeletecriticalsectionterm"></a><a name="term"></a> CComSafeDeleteCriticalSection:: term

Chiama l'implementazione della classe di base di [CComCriticalSection:: term](../../atl/reference/ccomcriticalsection-class.md#term) se l' `CRITICAL_SECTION` oggetto interno è valido.

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato di [CComCriticalSection:: term](../../atl/reference/ccomcriticalsection-class.md#term)o S_OK se [m_bInitialized](#m_binitialized) è stato impostato su false alla voce.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo in modo sicuro anche se l' `CRITICAL_SECTION` oggetto interno non è valido. Il distruttore di questa classe chiama questo metodo se il membro dati [m_bInitialized](#m_binitialized) è impostato su true.

## <a name="see-also"></a>Vedi anche

[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
