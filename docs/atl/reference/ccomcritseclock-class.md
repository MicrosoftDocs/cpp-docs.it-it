---
title: Classe CComCritSecLock
ms.date: 11/04/2016
f1_keywords:
- CComCritSecLock
- ATLBASE/ATL::CComCritSecLock
- ATLBASE/ATL::CComCritSecLock::CComCritSecLock
- ATLBASE/ATL::CComCritSecLock::Lock
- ATLBASE/ATL::CComCritSecLock::Unlock
helpviewer_keywords:
- CComCritSecLock class
ms.assetid: 223152a1-86c3-4ef9-89a7-f455fe791b0e
ms.openlocfilehash: 045e64504707fa8978c8236b376037d9f57bf12c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261232"
---
# <a name="ccomcritseclock-class"></a>Classe CComCritSecLock

Questa classe fornisce metodi per bloccare e sbloccare un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
template<class TLock> class CComCritSecLock
```

#### <a name="parameters"></a>Parametri

*TLock*<br/>
Oggetto da bloccare e sbloccare.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCritSecLock::CComCritSecLock](#ctor)|Costruttore.|
|[CComCritSecLock:: ~ CComCritSecLock](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCritSecLock::Lock](#lock)|Chiamare questo metodo per bloccare l'oggetto sezione critica.|
|[CComCritSecLock::Unlock](#unlock)|Chiamare questo metodo per sbloccare l'oggetto sezione critica.|

## <a name="remarks"></a>Note

Utilizzare questa classe per bloccare e sbloccare gli oggetti in modo più sicuro rispetto a con la [classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) oppure [classe CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="ctor"></a>  CComCritSecLock::CComCritSecLock

Costruttore.

```
CComCritSecLock(TLock& cs, bool bInitialLock = true);
```

### <a name="parameters"></a>Parametri

*cs*<br/>
Oggetto sezione critica.

*bInitialLock*<br/>
Lo stato del blocco iniziale: **true** significa bloccato.

### <a name="remarks"></a>Note

Inizializza l'oggetto sezione critica.

##  <a name="dtor"></a>  CComCritSecLock:: ~ CComCritSecLock

Distruttore.

```
~CComCritSecLock() throw();
```

### <a name="remarks"></a>Note

Sblocca l'oggetto sezione critica.

##  <a name="lock"></a>  CComCritSecLock::Lock

Chiamare questo metodo per bloccare l'oggetto sezione critica.

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'oggetto è stato bloccato o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Se l'oggetto è già bloccato, si verificherà un errore di ASSERZIONE nelle build di debug.

##  <a name="unlock"></a>  CComCritSecLock::Unlock

Chiamare questo metodo per sbloccare l'oggetto sezione critica.

```
void Unlock() throw();
```

### <a name="remarks"></a>Note

Se l'oggetto è già sbloccato, si verificherà un errore di ASSERZIONE nelle build di debug.

## <a name="see-also"></a>Vedere anche

[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Classe CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)
