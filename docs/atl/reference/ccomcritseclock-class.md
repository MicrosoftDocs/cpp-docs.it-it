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
ms.openlocfilehash: fd2904f67d84db42d6b35aa4e505b063d6ea9a9f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224292"
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
|[CComCritSecLock:: Lock](#lock)|Chiamare questo metodo per bloccare l'oggetto sezione critica.|
|[CComCritSecLock:: Unlock](#unlock)|Chiamare questo metodo per sbloccare l'oggetto sezione critica.|

## <a name="remarks"></a>Osservazioni

Usare questa classe per bloccare e sbloccare gli oggetti in modo più sicuro rispetto alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) o alla [classe CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccomcritseclockccomcritseclock"></a><a name="ctor"></a>CComCritSecLock::CComCritSecLock

Costruttore.

```
CComCritSecLock(TLock& cs, bool bInitialLock = true);
```

### <a name="parameters"></a>Parametri

*CS*<br/>
Oggetto della sezione critica.

*bInitialLock*<br/>
Stato di blocco iniziale: **`true`** indica bloccato.

### <a name="remarks"></a>Osservazioni

Inizializza l'oggetto sezione critica.

## <a name="ccomcritseclockccomcritseclock"></a><a name="dtor"></a>CComCritSecLock:: ~ CComCritSecLock

Distruttore.

```
~CComCritSecLock() throw();
```

### <a name="remarks"></a>Osservazioni

Sblocca l'oggetto sezione critica.

## <a name="ccomcritseclocklock"></a><a name="lock"></a>CComCritSecLock:: Lock

Chiamare questo metodo per bloccare l'oggetto sezione critica.

```
HRESULT Lock() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'oggetto è stato bloccato correttamente oppure un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Se l'oggetto è già bloccato, si verificherà un errore di ASSERZIONe nelle compilazioni di debug.

## <a name="ccomcritseclockunlock"></a><a name="unlock"></a>CComCritSecLock:: Unlock

Chiamare questo metodo per sbloccare l'oggetto sezione critica.

```cpp
void Unlock() throw();
```

### <a name="remarks"></a>Osservazioni

Se l'oggetto è già sbloccato, si verificherà un errore di ASSERZIONe nelle compilazioni di debug.

## <a name="see-also"></a>Vedere anche

[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Classe CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)
