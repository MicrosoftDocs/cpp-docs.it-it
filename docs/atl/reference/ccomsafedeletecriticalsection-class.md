---
title: Classe CComSafeDeleteCriticalSection | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Init
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Lock
- ATLCORE/ATL::CComSafeDeleteCriticalSection::Term
- ATLCORE/ATL::m_bInitialized
dev_langs: C++
helpviewer_keywords: CComSafeDeleteCriticalSection class
ms.assetid: 4d2932c4-ba8f-48ec-8664-1db8bed01314
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c9887a64131b8e7153ca54f73007386003c87ac1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ccomsafedeletecriticalsection-class"></a>Classe CComSafeDeleteCriticalSection
Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComSafeDeleteCriticalSection : public CComCriticalSection
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection](#ccomsafedeletecriticalsection)|Costruttore.|  
|[CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeDeleteCriticalSection::Init](#init)|Crea e Inizializza un oggetto sezione critica.|  
|[CComSafeDeleteCriticalSection::Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|  
|[CComSafeDeleteCriticalSection::Term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_bInitialized](#m_binitialized)|Flag se interno **CRITICAL_SECTION** oggetto è stato inizializzato.|  
  
## <a name="remarks"></a>Note  
 `CComSafeDeleteCriticalSection`deriva dalla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). Tuttavia, `CComSafeDeleteCriticalSection` fornisce meccanismi di sicurezza aggiuntive su [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).  
  
 Quando un'istanza di `CComSafeDeleteCriticalSection` esce dall'ambito o viene esplicitamente eliminato dalla memoria, l'oggetto sezione critica sottostante verrà automaticamente eseguita la pulizia se è ancora valido. Inoltre, il [CComSafeDeleteCriticalSection::Term](#term) metodo verrà chiuso normalmente se l'oggetto sezione critica sottostante non è ancora stato allocato o è già stato rilasciato dalla memoria.  
  
 Vedere [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) per ulteriori informazioni sulle classi helper sezione critica.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 `CComSafeDeleteCriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
##  <a name="ccomsafedeletecriticalsection"></a>CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection  
 Costruttore.  
  
```
CComSafeDeleteCriticalSection();
```  
  
### <a name="remarks"></a>Note  
 Imposta il [m_bInitialized](#m_binitialized) un membro dati **false**.  
  
##  <a name="dtor"></a>CComSafeDeleteCriticalSection:: ~ CComSafeDeleteCriticalSection  
 Distruttore.  
  
```
~CComSafeDeleteCriticalSection() throw();
```  
  
### <a name="remarks"></a>Note  
 Rilascia interno **CRITICAL_SECTION** dalla memoria dell'oggetto se di [m_bInitialized](#m_binitialized) membro dati è impostato su **true**.  
  
##  <a name="init"></a>CComSafeDeleteCriticalSection::Init  
 Chiama l'implementazione della classe di base di [Init](/visualstudio/debugger/init) e imposta [m_bInitialized](#m_binitialized) a **true** se ha esito positivo.  
  
```
HRESULT Init() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il risultato di [CComCriticalSection::Init](../../atl/reference/ccomcriticalsection-class.md#init).  
  
##  <a name="lock"></a>CComSafeDeleteCriticalSection::Lock  
Chiama l'implementazione della classe di base di [blocco](ccomcriticalsection-class.md#lock).  

  
```
HRESULT Lock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il risultato di [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).  
  
### <a name="remarks"></a>Note  
 Questo metodo presuppone che il [m_bInitialized](#m_binitialized) membro dati è impostato su **true** al momento dell'accesso. Se questo condidtion non viene soddisfatta, un'asserzione viene generata nelle build di Debug.  
  
 Per ulteriori informazioni sul comportamento della funzione, fare riferimento a [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).  
  
##  <a name="m_binitialized"></a>CComSafeDeleteCriticalSection::m_bInitialized  
 Flag se interno **CRITICAL_SECTION** oggetto è stato inizializzato.  
  
```
bool m_bInitialized;
```  
  
### <a name="remarks"></a>Note  
 Il **m_bInitialized** membro dati viene utilizzato per tenere traccia di validità dell'oggetto sottostante **CRITICAL_SECTION** oggetto associato di [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) classe. Sottostante **CRITICAL_SECTION** oggetto non verrà provato verrà rilasciata dalla memoria se questo flag non è impostato su **true**.  
  
##  <a name="term"></a>CComSafeDeleteCriticalSection::Term  
 Chiama l'implementazione della classe di base di [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term) se interno **CRITICAL_SECTION** oggetto è valido.  
  
```
HRESULT Term() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il risultato di [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term), o **S_OK** se [m_bInitialized](#m_binitialized) è stato impostato su **false** al momento dell'accesso.  
  
### <a name="remarks"></a>Note  
 È possibile chiamare questo metodo anche se l'oggetto interno **CRITICAL_SECTION** oggetto non è valido. Il distruttore di questa classe chiama questo metodo se il [m_bInitialized](#m_binitialized) membro dati è impostato su **true**.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
