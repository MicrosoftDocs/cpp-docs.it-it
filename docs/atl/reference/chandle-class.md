---
title: Classe CHandle | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHandle
- ATLBASE/ATL::CHandle
- ATLBASE/ATL::CHandle::CHandle
- ATLBASE/ATL::CHandle::Attach
- ATLBASE/ATL::CHandle::Close
- ATLBASE/ATL::CHandle::Detach
- ATLBASE/ATL::CHandle::m_h
dev_langs:
- C++
helpviewer_keywords:
- CHandle class
ms.assetid: 883e9db5-40ec-4e29-9c74-4dd2ddd2e35d
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: bbc0703ae5eaab01c0819be7e378509c7dc579ef
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="chandle-class"></a>Classe CHandle
Questa classe fornisce metodi per la creazione e utilizzo di un handle di oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CHandle
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::CHandle](#chandle)|Costruttore.|  
|[CHandle:: ~ CHandle](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::Attach](#attach)|Chiamare questo metodo per collegare il `CHandle` oggetto da un handle esistente.|  
|[CHandle::Close](#close)|Chiamare questo metodo per chiudere un `CHandle` oggetto.|  
|[CHandle::Detach](#detach)|Chiamare questo metodo per disconnettere un handle da un `CHandle` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::operator HANDLE](#operator_handle)|Restituisce il valore dell'handle memorizzato.|  
|[CHandle::operator =](#operator_eq)|Operatore di assegnazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::m_h](#m_h)|La variabile membro che contiene l'handle.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CHandle` oggetto può essere utilizzato quando è richiesto un handle: la differenza principale è che il `CHandle` oggetto verrà automaticamente eliminato.  
  
> [!NOTE]
>  Alcune funzioni dell'API verranno utilizzato NULL come un handle vuoto o non valido, mentre altri utilizzano INVALID_HANDLE_VALUE. `CHandle`utilizza solo NULL e viene considerato INVALID_HANDLE_VALUE un handle reale. Se si chiama un'API che possono restituire INVALID_HANDLE_VALUE, è consigliabile controllare questo valore prima di chiamare [CHandle::Attach](#attach) o passarlo al `CHandle` costruttore e invece passare NULL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="attach"></a>CHandle::Attach  
 Chiamare questo metodo per collegare il `CHandle` oggetto da un handle esistente.  
  
```
void Attach(HANDLE h) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `h`  
 `CHandle`assumerà la proprietà dell'handle `h`.  
  
### <a name="remarks"></a>Note  
 Assegna il `CHandle` dell'oggetto per il `h` gestire. Nelle build di debug, verrà generato un ATLASSERT se `h` è NULL. Viene eseguito alcun altro controllo per la validità dell'handle.  
  
##  <a name="chandle"></a>CHandle::CHandle  
 Costruttore.  
  
```
CHandle() throw();
CHandle(CHandle& h) throw();
explicit CHandle(HANDLE h) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `h`  
 Un handle esistente o `CHandle`.  
  
### <a name="remarks"></a>Note  
 Crea un nuovo `CHandle` oggetto, utilizzando facoltativamente un handle esistente o `CHandle` oggetto.  
  
##  <a name="dtor"></a>CHandle:: ~ CHandle  
 Distruttore.  
  
```
~CHandle() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera la `CHandle` oggetto chiamando [CHandle::Close](#close).  
  
##  <a name="close"></a>CHandle::Close  
 Chiamare questo metodo per chiudere un `CHandle` oggetto.  
  
```
void Close() throw();
```  
  
### <a name="remarks"></a>Note  
 Chiude un handle di oggetto aperto. Se l'handle è NULL, verrà invece nel caso **Chiudi** è già stato chiamato, verrà generato un ATLASSERT nelle build di debug.  
  
##  <a name="detach"></a>CHandle::Detach  
 Chiamare questo metodo per disconnettere un handle da un `CHandle` oggetto.  
  
```
HANDLE Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle viene disconnesso.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà dell'handle.  
  
##  <a name="m_h"></a>CHandle::m_h  
 La variabile membro che contiene l'handle.  
  
```
HANDLE m_h;
```  
  
##  <a name="operator_eq"></a>CHandle::operator =  
 L'operatore di assegnazione.  
  
```
CHandle& operator=(CHandle& h) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `h`  
 `CHandle`assumerà la proprietà dell'handle `h`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento al nuovo `CHandle` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il `CHandle` contiene un handle di oggetto, verrà chiusa. Il `CHandle` dell'oggetto passato avrà il relativo riferimento handle impostato su NULL. In questo modo, due `CHandle` oggetti non conterrà mai lo stesso handle attivo.  
  
##  <a name="operator_handle"></a>CHandle::operator HANDLE  
 Restituisce il valore dell'handle memorizzato.  
  
```  
operator HANDLE() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce il valore memorizzato [CHandle::m_h](#m_h).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

