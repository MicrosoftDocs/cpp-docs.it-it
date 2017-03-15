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
- concrtrm/concurrency::DispatchState
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
ms.sourcegitcommit: fa774c7f025b581d65c28d65d83e22ff2d798230
ms.openlocfilehash: 46c2219464e57da4931596e970199549405d02ec
ms.lasthandoff: 02/24/2017

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
|[Costruttore DispatchState:: DispatchState](#ctor)|Costruisce un nuovo oggetto `DispatchState`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati DispatchState:: M_dispatchstatesize](#m_dispatchstatesize)|Dimensione della struttura, viene utilizzato per il controllo delle versioni.|  
|[Membro dati DispatchState:: M_fispreviouscontextasynchronouslyblocked](#m_fispreviouscontextasynchronouslyblocked)|Indica se questo contesto è stato attivato il `Dispatch` metodo perché il contesto precedente bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS e viene impostata sul valore `0` per tutti gli altri contesti di esecuzione.|  
|[Membro dati DispatchState:: M_reserved](#m_reserved)|Bit riservati per il passaggio di informazioni future.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `DispatchState`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namectora--dispatchstatedispatchstate-constructor"></a><a name="ctor"></a>Costruttore DispatchState:: DispatchState  
 Costruisce un nuovo oggetto `DispatchState`.  
  
```
DispatchState();
```  
  
##  <a name="a-namemdispatchstatesizea--dispatchstatemdispatchstatesize-data-member"></a><a name="m_dispatchstatesize"></a>Membro dati DispatchState:: M_dispatchstatesize  
 Dimensione della struttura, viene utilizzato per il controllo delle versioni.  
  
```
unsigned long m_dispatchStateSize;
```  
  
##  <a name="a-namemfispreviouscontextasynchronouslyblockeda--dispatchstatemfispreviouscontextasynchronouslyblocked-data-member"></a><a name="m_fispreviouscontextasynchronouslyblocked"></a>Membro dati DispatchState:: M_fispreviouscontextasynchronouslyblocked  
 Indica se questo contesto è stato attivato il `Dispatch` metodo perché il contesto precedente bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS e viene impostata sul valore `0` per tutti gli altri contesti di esecuzione.  
  
```
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```  
  
##  <a name="a-namemreserveda--dispatchstatemreserved-data-member"></a><a name="m_reserved"></a>Membro dati DispatchState:: M_reserved  
 Bit riservati per il passaggio di informazioni future.  
  
```
unsigned int m_reserved : 31;
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

