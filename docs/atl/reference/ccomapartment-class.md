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
ms.openlocfilehash: 5f4c7fc356e61210e9b99bf9989b1bb3f0abc98a
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821675"
---
# <a name="ccomapartment-class"></a>Classe CComApartment

Questa classe fornisce supporto per la gestione di un Apartment in un modulo EXE in pool di thread.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CComApartment
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComApartment::CComApartment](#ccomapartment)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComApartment::Apartment](#apartment)|Contrassegna l'indirizzo iniziale del thread.|
|[CComApartment::GetLockCount](#getlockcount)|Restituisce il conteggio dei blocchi corrente del thread.|
|[CComApartment:: Lock](#lock)|Incrementa il conteggio dei blocchi del thread.|
|[CComApartment::Unlock](#unlock)|Decrementa il conteggio dei blocchi del thread.|

### <a name="public-data-members"></a>Membri dati pubblici

|Name|Descrizione|
|----------|-----------------|
|[CComApartment::m_dwThreadID](#m_dwthreadid)|Contiene l'identificatore del thread.|
|[CComApartment::m_hThread](#m_hthread)|Contiene l'handle del thread.|
|[CComApartment::m_nLockCnt](#m_nlockcnt)|Contiene il conteggio dei blocchi corrente del thread.|

## <a name="remarks"></a>Note

`CComApartment` viene usato da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) per gestire un Apartment in un modulo exe in pool di thread. `CComApartment` fornisce metodi per incrementare e decrementare il numero di blocchi in un thread.

## <a name="requirements"></a>Requisiti di

**Intestazione:** atlbase. h

##  <a name="apartment"></a>CComApartment:: Apartment

Contrassegna l'indirizzo iniziale del thread.

```
DWORD Apartment();
```

### <a name="return-value"></a>Valore restituito

Sempre 0.

### <a name="remarks"></a>Note

Impostato automaticamente durante [CComAutoThreadModule:: init](../../atl/reference/ccomautothreadmodule-class.md#init).

##  <a name="ccomapartment"></a>CComApartment:: CComApartment

Costruttore.

```
CComApartment();
```

### <a name="remarks"></a>Note

Inizializza i membri dati `CComApartment` [m_nLockCnt](#m_nlockcnt) e [m_hThread](#m_hthread).

##  <a name="getlockcount"></a>  CComApartment::GetLockCount

Restituisce il conteggio dei blocchi corrente del thread.

```
LONG GetLockCount();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei blocchi sul thread.

##  <a name="lock"></a>CComApartment:: Lock

Incrementa il conteggio dei blocchi del thread.

```
LONG Lock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Note

Chiamata eseguita da [CComAutoThreadModule:: Lock](../../atl/reference/ccomautothreadmodule-class.md#lock).

Il numero di blocchi sul thread viene utilizzato per scopi statistici.

##  <a name="m_dwthreadid"></a>CComApartment:: m_dwThreadID

Contiene l'identificatore del thread.

```
DWORD m_dwThreadID;
```

##  <a name="m_hthread"></a>  CComApartment::m_hThread

Contiene l'handle del thread.

```
HANDLE m_hThread;
```

##  <a name="m_nlockcnt"></a>  CComApartment::m_nLockCnt

Contiene il conteggio dei blocchi corrente del thread.

```
LONG m_nLockCnt;
```

##  <a name="unlock"></a>CComApartment:: Unlock

Decrementa il conteggio dei blocchi del thread.

```
LONG Unlock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Note

Chiamata eseguita da [CComAutoThreadModule:: Unlock](../../atl/reference/ccomautothreadmodule-class.md#lock).

Il numero di blocchi sul thread viene utilizzato per scopi statistici.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
