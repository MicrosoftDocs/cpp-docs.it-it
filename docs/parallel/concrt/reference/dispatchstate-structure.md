---
title: DispatchState (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- DispatchState
- CONCRTRM/concurrency::DispatchState
- CONCRTRM/concurrency::DispatchState::DispatchState::DispatchState
- CONCRTRM/concurrency::DispatchState::DispatchState::m_dispatchStateSize
- CONCRTRM/concurrency::DispatchState::DispatchState::m_fIsPreviousContextAsynchronouslyBlocked
- CONCRTRM/concurrency::DispatchState::DispatchState::m_reserved
dev_langs:
- C++
helpviewer_keywords:
- DispatchState structure
ms.assetid: 8c52546e-1650-48a0-985f-7e4a0fc26a90
caps.latest.revision: 17
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: a617d1f1d7f68c00c7011daffc6ba59f08c43a1e
ms.lasthandoff: 03/17/2017

---
# <a name="dispatchstate-structure"></a>Struttura DispatchState
La struttura `DispatchState` è usata per trasferire lo stato al metodo `IExecutionContext::Dispatch`. Descrive le circostanze in cui il metodo `Dispatch` viene richiamato su un'interfaccia `IExecutionContext`.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct DispatchState;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[DispatchState:: DispatchState](#ctor)|Costruisce un nuovo oggetto `DispatchState`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[DispatchState:: M_dispatchstatesize](#m_dispatchstatesize)|Dimensione della struttura, viene utilizzato per il controllo delle versioni.|  
|[DispatchState:: M_fispreviouscontextasynchronouslyblocked](#m_fispreviouscontextasynchronouslyblocked)|Indica se questo contesto è stato attivato il `Dispatch` metodo perché il contesto precedente bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS e viene impostata sul valore `0` per tutti gli altri contesti di esecuzione.|  
|[DispatchState:: M_reserved](#m_reserved)|Bit riservati per il passaggio di informazioni future.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `DispatchState`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>Costruttore DispatchState:: DispatchState  
 Costruisce un nuovo oggetto `DispatchState`.  
  
```
DispatchState();
```  
  
##  <a name="m_dispatchstatesize"></a>Membro dati DispatchState:: M_dispatchstatesize  
 Dimensione della struttura, viene utilizzato per il controllo delle versioni.  
  
```
unsigned long m_dispatchStateSize;
```  
  
##  <a name="m_fispreviouscontextasynchronouslyblocked"></a>Membro dati DispatchState:: M_fispreviouscontextasynchronouslyblocked  
 Indica se questo contesto è stato attivato il `Dispatch` metodo perché il contesto precedente bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS e viene impostata sul valore `0` per tutti gli altri contesti di esecuzione.  
  
```
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```  
  
##  <a name="m_reserved"></a>Membro dati DispatchState:: M_reserved  
 Bit riservati per il passaggio di informazioni future.  
  
```
unsigned int m_reserved : 31;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

