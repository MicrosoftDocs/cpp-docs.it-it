---
title: Classe CComApartment | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- apartments in ATL EXE modules
- CComApartment class
ms.assetid: dbc177d7-7ee4-45f2-b563-d578a467ca93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 88e08d50cec36366df2423d31082b97d41b5061f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ccomapartment-class"></a>Classe CComApartment
Questa classe fornisce supporto per la gestione di un appartamento in un modulo EXE pool di thread.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[CComApartment::GetLockCount](#getlockcount)|Restituisce conteggio dei blocchi del thread corrente.|  
|[CComApartment::Lock](#lock)|Incrementa il conteggio di blocco del thread.|  
|[CComApartment::Unlock](#unlock)|Decrementa conteggio dei blocchi del thread.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComApartment::m_dwThreadID](#m_dwthreadid)|Contiene l'identificatore del thread.|  
|[CComApartment::m_hThread](#m_hthread)|Contiene l'handle del thread.|  
|[CComApartment::m_nLockCnt](#m_nlockcnt)|Contiene conteggio dei blocchi del thread corrente.|  
  
## <a name="remarks"></a>Note  
 `CComApartment` viene utilizzato [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) per gestire un apartment di un modulo EXE pool di thread. `CComApartment` fornisce metodi per l'incremento e decremento del blocco contare su un thread.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="apartment"></a>  CComApartment::Apartment  
 Contrassegna l'indirizzo iniziale del thread.  
  
```
DWORD Apartment();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
 Viene impostato automaticamente durante [CComAutoThreadModule::Init](../../atl/reference/ccomautothreadmodule-class.md#init).  
  
##  <a name="ccomapartment"></a>  CComApartment::CComApartment  
 Costruttore.  
  
```
CComApartment();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il `CComApartment` membri dati [m_nLockCnt](#m_nlockcnt) e [m_hThread](#m_hthread).  
  
##  <a name="getlockcount"></a>  CComApartment::GetLockCount  
 Restituisce conteggio dei blocchi del thread corrente.  
  
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
 Chiamato da [CComAutoThreadModule::Lock](../../atl/reference/ccomautothreadmodule-class.md#lock).  
  
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
 Contiene conteggio dei blocchi del thread corrente.  
  
```
LONG m_nLockCnt;
```  
  
##  <a name="unlock"></a>  CComApartment::Unlock  
 Decrementa conteggio dei blocchi del thread.  
  
```
LONG Unlock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o di testing.  
  
### <a name="remarks"></a>Note  
 Chiamato da [CComAutoThreadModule::Unlock](../../atl/reference/ccomautothreadmodule-class.md#lock).  
  
 Il conteggio dei blocchi sul thread viene utilizzato per scopi statistici.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
