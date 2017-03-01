---
title: Classe CComCritSecLock | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CComCritSecLock
- ATL.CComCritSecLock<TLock>
- ATL::CComCritSecLock<TLock>
- ATL.CComCritSecLock
- CComCritSecLock
dev_langs:
- C++
helpviewer_keywords:
- CComCritSecLock class
ms.assetid: 223152a1-86c3-4ef9-89a7-f455fe791b0e
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 71b9ab8b11adc946656c2192c2f0f06555ef1254
ms.lasthandoff: 02/24/2017

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
  
##  <a name="a-namectora--ccomcritseclockccomcritseclock"></a><a name="ctor"></a>CComCritSecLock::CComCritSecLock  
 Costruttore.  
  
```
CComCritSecLock(TLock& cs, bool bInitialLock = true);
```  
  
### <a name="parameters"></a>Parametri  
 *cs*  
 Oggetto sezione critica.  
  
 `bInitialLock`  
 Lo stato di blocco iniziale: **true** significa bloccato.  
  
### <a name="remarks"></a>Note  
 Inizializza l'oggetto sezione critica.  
  
##  <a name="a-namedtora--ccomcritseclockccomcritseclock"></a><a name="dtor"></a>CComCritSecLock:: ~ CComCritSecLock  
 Distruttore.  
  
```
~CComCritSecLock() throw();
```  
  
### <a name="remarks"></a>Note  
 Sblocca l'oggetto sezione critica.  
  
##  <a name="a-namelocka--ccomcritseclocklock"></a><a name="lock"></a>CComCritSecLock::Lock  
 Chiamare questo metodo per bloccare l'oggetto sezione critica.  
  
```
HRESULT Lock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'oggetto stato è stato bloccato o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto è già bloccato, si verificherà un errore di ASSERZIONE nelle build di debug.  
  
##  <a name="a-nameunlocka--ccomcritseclockunlock"></a><a name="unlock"></a>CComCritSecLock::Unlock  
 Chiamare questo metodo per sbloccare l'oggetto sezione critica.  
  
```
void Unlock() throw();
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto è già sbloccata, si verificherà un errore di ASSERZIONE nelle build di debug.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)   
 [Classe CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)

