---
title: Classe CComSafeDeleteCriticalSection | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Init
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Lock
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Term
- ATLCORE/ATL::m_bInitialized
dev_langs:
- C++
helpviewer_keywords:
- CComSafeDeleteCriticalSection class
ms.assetid: 4d2932c4-ba8f-48ec-8664-1db8bed01314
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 939340a60d9448c6fac5f97c606a27182a2bb88b
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50068437"
---
# <a name="ccomsafedeletecriticalsection-class"></a>Classe CComSafeDeleteCriticalSection

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
|[CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSafeDeleteCriticalSection::Init](#init)|Crea e Inizializza un oggetto sezione critica.|
|[CComSafeDeleteCriticalSection::Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|
|[CComSafeDeleteCriticalSection::Term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_bInitialized](#m_binitialized)|Flag se l'oggetto interno `CRITICAL_SECTION` oggetto è stato inizializzato.|

## <a name="remarks"></a>Note

`CComSafeDeleteCriticalSection` deriva dalla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia `CComSafeDeleteCriticalSection` offre meccanismi di sicurezza aggiuntivo rispetto [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).

Quando un'istanza di `CComSafeDeleteCriticalSection` esce dall'ambito o viene esplicitamente eliminato dalla memoria, l'oggetto sezione critica sottostante verrà automaticamente la pulizia se è ancora valido. Inoltre, il [CComSafeDeleteCriticalSection::Term](#term) metodo verrà chiuso normalmente se l'oggetto sezione critica sottostante non è ancora stato allocato o è già stato rilasciato dalla memoria.

Visualizzare [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) per altre informazioni sulle classi di helper sezione critica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComSafeDeleteCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

##  <a name="ccomsafedeletecriticalsection"></a>  CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection

Costruttore.

```
CComSafeDeleteCriticalSection();
```

### <a name="remarks"></a>Note

Imposta il [m_bInitialized](#m_binitialized) membro dati su FALSE.

##  <a name="dtor"></a>  CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection

Distruttore.

```
~CComSafeDeleteCriticalSection() throw();
```

### <a name="remarks"></a>Note

Rilascia l'oggetto interno `CRITICAL_SECTION` oggetto dalla memoria se il [m_bInitialized](#m_binitialized) (membro dati) è impostato su TRUE.

##  <a name="init"></a>  CComSafeDeleteCriticalSection::Init

Chiama l'implementazione della classe base [Init](/visualstudio/debugger/init) e imposta [m_bInitialized](#m_binitialized) su TRUE se ha esito positivo.

```
HRESULT Init() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato del [CComCriticalSection::Init](../../atl/reference/ccomcriticalsection-class.md#init).

##  <a name="lock"></a>  CComSafeDeleteCriticalSection::Lock

Chiama l'implementazione della classe base [blocco](ccomcriticalsection-class.md#lock).

```
HRESULT Lock();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato del [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

### <a name="remarks"></a>Note

Questo metodo presuppone che il [m_bInitialized](#m_binitialized) (membro dati) è impostato su TRUE in fase di inserimento. Se questo condidtion non viene soddisfatta, un'asserzione viene generata nelle build di Debug.

Per altre informazioni sul comportamento della funzione, consultare [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

##  <a name="m_binitialized"></a>  CComSafeDeleteCriticalSection::m_bInitialized

Flag se l'oggetto interno `CRITICAL_SECTION` oggetto è stato inizializzato.

```
bool m_bInitialized;
```

### <a name="remarks"></a>Note

Il `m_bInitialized` membro dati viene utilizzata per tenere traccia di validità dell'oggetto sottostante `CRITICAL_SECTION` oggetto associato ai [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) classe. Sottostante `CRITICAL_SECTION` oggetto non verrà provato di essere rilasciato dalla memoria se questo flag non è impostato su TRUE.

##  <a name="term"></a>  CComSafeDeleteCriticalSection::Term

Chiama l'implementazione della classe base [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term) se l'oggetto interno `CRITICAL_SECTION` oggetto è valido.

```
HRESULT Term() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il risultato del [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term), o S_OK se [m_bInitialized](#m_binitialized) fosse impostato su FALSE in fase di inserimento.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo anche se l'oggetto interno `CRITICAL_SECTION` oggetto non è valido. Questo metodo viene chiamato il distruttore di questa classe se il [m_bInitialized](#m_binitialized) (membro dati) è impostato su TRUE.

## <a name="see-also"></a>Vedere anche

[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
