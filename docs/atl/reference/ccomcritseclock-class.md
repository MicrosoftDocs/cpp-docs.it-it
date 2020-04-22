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
ms.openlocfilehash: 4b2ef093c1142b592ad2a6605a08bd8c34a643ea
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748080"
---
# <a name="ccomcritseclock-class"></a>Classe CComCritSecLock

Questa classe fornisce metodi per bloccare e sbloccare un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
template<class TLock> class CComCritSecLock
```

#### <a name="parameters"></a>Parametri

*Blocco TLock*<br/>
Oggetto da sbloccare e sbloccare.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCritSecLock::CComCritSecLock](#ctor)|Costruttore.|
|[Blocco CComCritSec:: CComCritSecLock](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComCritSecLock::Lock (Blocco)](#lock)|Chiamare questo metodo per bloccare l'oggetto sezione critica.|
|[CComCritSecLock::Sblocca](#unlock)|Chiamare questo metodo per sbloccare l'oggetto sezione critica.|

## <a name="remarks"></a>Osservazioni

Utilizzare questa classe per bloccare e sbloccare gli oggetti in modo più sicuro rispetto alla [classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) o [CComAutoCriticalSection .](../../atl/reference/ccomautocriticalsection-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomcritseclockccomcritseclock"></a><a name="ctor"></a>CComCritSecLock::CComCritSecLock

Costruttore.

```
CComCritSecLock(TLock& cs, bool bInitialLock = true);
```

### <a name="parameters"></a>Parametri

*Cs*<br/>
Oggetto sezione critica.

*bBloccoiniziale*<br/>
Lo stato di blocco iniziale: **true** significa bloccato.

### <a name="remarks"></a>Osservazioni

Inizializza l'oggetto sezione critica.

## <a name="ccomcritseclockccomcritseclock"></a><a name="dtor"></a>Blocco CComCritSec:: CComCritSecLock

Distruttore.

```
~CComCritSecLock() throw();
```

### <a name="remarks"></a>Osservazioni

Sblocca l'oggetto sezione critica.

## <a name="ccomcritseclocklock"></a><a name="lock"></a>CComCritSecLock::Lock (Blocco)

Chiamare questo metodo per bloccare l'oggetto sezione critica.

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'oggetto è stato bloccato correttamente o se si verifica un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Se l'oggetto è già bloccato, si verificherà un errore ASSERT nelle build di debug.

## <a name="ccomcritseclockunlock"></a><a name="unlock"></a>CComCritSecLock::Sblocca

Chiamare questo metodo per sbloccare l'oggetto sezione critica.

```cpp
void Unlock() throw();
```

### <a name="remarks"></a>Osservazioni

Se l'oggetto è già sbloccato, si verificherà un errore ASSERT nelle build di debug.

## <a name="see-also"></a>Vedere anche

[CComCriticalSection (classe)](../../atl/reference/ccomcriticalsection-class.md)<br/>
[CComAutoCriticalSection (classe)](../../atl/reference/ccomautocriticalsection-class.md)
