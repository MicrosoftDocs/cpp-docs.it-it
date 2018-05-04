---
title: Classe CComCritSecLock | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComCritSecLock
- ATLBASE/ATL::CComCritSecLock
- ATLBASE/ATL::CComCritSecLock::CComCritSecLock
- ATLBASE/ATL::CComCritSecLock::Lock
- ATLBASE/ATL::CComCritSecLock::Unlock
dev_langs:
- C++
helpviewer_keywords:
- CComCritSecLock class
ms.assetid: 223152a1-86c3-4ef9-89a7-f455fe791b0e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 98b6eb7a8e6df16134573b55a7c9666befe4e4a1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ccomcritseclock-class"></a>Classe CComCritSecLock
Questa classe fornisce metodi per bloccare e sbloccare un oggetto sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class TLock> class CComCritSecLock
```  
  
#### <a name="parameters"></a>Parametri  
 *TLock*  
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
 Utilizzare questa classe per bloccare e sbloccare gli oggetti in modo più sicuro rispetto a con il [classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) o [CComAutoCriticalSection classe](../../atl/reference/ccomautocriticalsection-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="ctor"></a>  CComCritSecLock::CComCritSecLock  
 Costruttore.  
  
```
CComCritSecLock(TLock& cs, bool bInitialLock = true);
```  
  
### <a name="parameters"></a>Parametri  
 *cs*  
 L'oggetto sezione critica.  
  
 `bInitialLock`  
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
 Restituisce S_OK se l'oggetto è stato bloccato o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto è già bloccato, si verificherà un errore di ASSERZIONE nelle build di debug.  
  
##  <a name="unlock"></a>  CComCritSecLock::Unlock  
 Chiamare questo metodo per sbloccare l'oggetto sezione critica.  
  
```
void Unlock() throw();
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto è già sbloccata, si verificherà un errore di ASSERZIONE nelle build di debug.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)   
 [Classe CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)
