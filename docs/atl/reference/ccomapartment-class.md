---
title: Classe CComApartment
ms.date: 11/04/2016
f1_keywords:
- CComApartment
- ATLBASE/ATL::CComApartment
- ATLBASE/ATL::CComApartment::CComApartment
- ATLBASE/ATL::CComApartment::Apartment
- ATLBASE/ATL::CComApartment::GetLockCount
- ATLBASE/ATL::CComApartment::Lock
- ATLBASE/ATL::CComApartment::Unlock
- ATLBASE/ATL::CComApartment::m_dwThreadID
- ATLBASE/ATL::CComApartment::m_hThread
- ATLBASE/ATL::CComApartment::m_nLockCnt
helpviewer_keywords:
- apartments in ATL EXE modules
- CComApartment class
ms.assetid: dbc177d7-7ee4-45f2-b563-d578a467ca93
ms.openlocfilehash: 13141d27592f6f40ea7b0529c61baba2fe83a10a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321111"
---
# <a name="ccomapartment-class"></a>Classe CComApartment

Questa classe fornisce il supporto per la gestione di un apartment in un modulo EXE in pool di thread.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CComApartment
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComApartment::CComApartment](#ccomapartment)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComApartment::Appartamento](#apartment)|Contrassegna l'indirizzo iniziale del thread.|
|[CComApartment::GetLockCount](#getlockcount)|Restituisce il conteggio dei blocchi corrente del thread.|
|[CComApartment::Blocco](#lock)|Incrementa il conteggio dei blocchi del thread.|
|[CComApartment::Sblocca](#unlock)|Decrementa il conteggio dei blocchi del thread.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComApartment::m_dwThreadID](#m_dwthreadid)|Contiene l'identificatore del thread.|
|[CComApartment::m_hThread](#m_hthread)|Contiene l'handle del thread.|
|[CComApartment::m_nLockCnt](#m_nlockcnt)|Contiene il conteggio dei blocchi corrente del thread.|

## <a name="remarks"></a>Osservazioni

`CComApartment`viene utilizzato da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) per gestire un apartment in un modulo EXE in pool di thread. `CComApartment`fornisce metodi per incrementare e diminuire il conteggio dei blocchi in un thread.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomapartmentapartment"></a><a name="apartment"></a>CComApartment::Appartamento

Contrassegna l'indirizzo iniziale del thread.

```
DWORD Apartment();
```

### <a name="return-value"></a>Valore restituito

Sempre 0.

### <a name="remarks"></a>Osservazioni

Impostato automaticamente durante [CComAutoThreadModule::Init](../../atl/reference/ccomautothreadmodule-class.md#init).

## <a name="ccomapartmentccomapartment"></a><a name="ccomapartment"></a>CComApartment::CComApartment

Costruttore.

```
CComApartment();
```

### <a name="remarks"></a>Osservazioni

Inizializza i `CComApartment` membri dati [m_nLockCnt](#m_nlockcnt) e [m_hThread](#m_hthread).

## <a name="ccomapartmentgetlockcount"></a><a name="getlockcount"></a>CComApartment::GetLockCount

Restituisce il conteggio dei blocchi corrente del thread.

```
LONG GetLockCount();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei blocchi nel thread.

## <a name="ccomapartmentlock"></a><a name="lock"></a>CComApartment::Blocco

Incrementa il conteggio dei blocchi del thread.

```
LONG Lock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Osservazioni

Chiamato da [CComAutoThreadModule::Lock](../../atl/reference/ccomautothreadmodule-class.md#lock).

Il conteggio dei blocchi nel thread viene utilizzato per scopi statistici.

## <a name="ccomapartmentm_dwthreadid"></a><a name="m_dwthreadid"></a>CComApartment::m_dwThreadID

Contiene l'identificatore del thread.

```
DWORD m_dwThreadID;
```

## <a name="ccomapartmentm_hthread"></a><a name="m_hthread"></a>CComApartment::m_hThread

Contiene l'handle del thread.

```
HANDLE m_hThread;
```

## <a name="ccomapartmentm_nlockcnt"></a><a name="m_nlockcnt"></a>CComApartment::m_nLockCnt

Contiene il conteggio dei blocchi corrente del thread.

```
LONG m_nLockCnt;
```

## <a name="ccomapartmentunlock"></a><a name="unlock"></a>CComApartment::Sblocca

Decrementa il conteggio dei blocchi del thread.

```
LONG Unlock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Osservazioni

Chiamato da [CComAutoThreadModule::Unlock](../../atl/reference/ccomautothreadmodule-class.md#lock).

Il conteggio dei blocchi nel thread viene utilizzato per scopi statistici.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
