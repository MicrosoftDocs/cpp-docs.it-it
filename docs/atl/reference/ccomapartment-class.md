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
ms.openlocfilehash: 92db42a45a0863f8b43f7c46da9624e424d1e488
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62246778"
---
# <a name="ccomapartment-class"></a>Classe CComApartment

Questa classe fornisce il supporto per la gestione di un appartamento in un modulo EXE raggruppate in pool di thread.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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
|[CComApartment::Apartment](#apartment)|Contrassegna l'indirizzo iniziale del thread.|
|[CComApartment::GetLockCount](#getlockcount)|Restituisce il conteggio di blocco corrente del thread.|
|[CComApartment::Lock](#lock)|Incrementa il conteggio di blocco del thread.|
|[CComApartment::Unlock](#unlock)|Decrementa il conteggio dei blocchi del thread.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComApartment::m_dwThreadID](#m_dwthreadid)|Contiene l'identificatore del thread.|
|[CComApartment::m_hThread](#m_hthread)|Contiene l'handle del thread.|
|[CComApartment::m_nLockCnt](#m_nlockcnt)|Contiene conteggio dei blocchi correnti del thread.|

## <a name="remarks"></a>Note

`CComApartment` viene utilizzato dagli [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) per gestire un apartment in un modulo EXE raggruppate in pool di thread. `CComApartment` fornisce metodi per incrementare e decrementare il blocco contare su un thread.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="apartment"></a>  CComApartment::Apartment

Contrassegna l'indirizzo iniziale del thread.

```
DWORD Apartment();
```

### <a name="return-value"></a>Valore restituito

Sempre 0.

### <a name="remarks"></a>Note

Viene impostato automaticamente durante [CComAutoThreadModule::Init](../../atl/reference/ccomautothreadmodule-class.md#init).

##  <a name="ccomapartment"></a>  CComApartment::CComApartment

Costruttore.

```
CComApartment();
```

### <a name="remarks"></a>Note

Inizializza la `CComApartment` i membri di dati [m_nLockCnt](#m_nlockcnt) e [m_hThread](#m_hthread).

##  <a name="getlockcount"></a>  CComApartment::GetLockCount

Restituisce il conteggio di blocco corrente del thread.

```
LONG GetLockCount();
```

### <a name="return-value"></a>Valore restituito

Il conteggio dei blocchi sul thread.

##  <a name="lock"></a>  CComApartment::Lock

Incrementa il conteggio di blocco del thread.

```
LONG Lock();
```

### <a name="return-value"></a>Valore restituito

Un valore che può essere utile per la diagnostica o di testing.

### <a name="remarks"></a>Note

Chiamata eseguita dal [CComAutoThreadModule::Lock](../../atl/reference/ccomautothreadmodule-class.md#lock).

Il conteggio dei blocchi sul thread viene utilizzato per scopi statistici.

##  <a name="m_dwthreadid"></a>  CComApartment::m_dwThreadID

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

Contiene conteggio dei blocchi correnti del thread.

```
LONG m_nLockCnt;
```

##  <a name="unlock"></a>  CComApartment::Unlock

Decrementa il conteggio dei blocchi del thread.

```
LONG Unlock();
```

### <a name="return-value"></a>Valore restituito

Un valore che può essere utile per la diagnostica o di testing.

### <a name="remarks"></a>Note

Chiamata eseguita dal [CComAutoThreadModule::Unlock](../../atl/reference/ccomautothreadmodule-class.md#lock).

Il conteggio dei blocchi sul thread viene utilizzato per scopi statistici.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
