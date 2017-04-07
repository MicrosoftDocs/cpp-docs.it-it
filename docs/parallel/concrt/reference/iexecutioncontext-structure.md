---
title: IExecutionContext (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IExecutionContext
- CONCRTRM/concurrency::IExecutionContext
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::Dispatch
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::GetId
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::GetProxy
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::GetScheduler
- CONCRTRM/concurrency::IExecutionContext::IExecutionContext::SetProxy
dev_langs:
- C++
helpviewer_keywords:
- IExecutionContext structure
ms.assetid: f3108089-ecda-4b07-86db-3efae60c31e0
caps.latest.revision: 18
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
ms.openlocfilehash: 4c4301d7afe46249d6d67ab2a6ec0a9fc2c7935e
ms.lasthandoff: 03/17/2017

---
# <a name="iexecutioncontext-structure"></a>Struttura IExecutionContext
Un'interfaccia a un contesto di esecuzione che può essere in esecuzione su un processore virtuale specificato e il cui contesto può essere cambiato cooperativamente.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IExecutionContext;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IExecutionContext:: dispatch](#dispatch)|Il metodo che viene chiamato quando un proxy di thread inizia l'esecuzione di un particolare contesto di esecuzione. Deve essere la routine principale di lavoro dell'utilità di pianificazione.|  
|[IExecutionContext:: GetID](#getid)|Restituisce un identificatore univoco per il contesto di esecuzione.|  
|[IExecutionContext:: GetProxy](#getproxy)|Restituisce un'interfaccia per il proxy del thread che sta eseguendo il contesto.|  
|[IExecutionContext:: GetScheduler](#getscheduler)|Restituisce un'interfaccia per l'utilità di pianificazione a cui appartiene questo contesto di esecuzione.|  
|[IExecutionContext:: SetProxy](#setproxy)|Associa questo contesto di esecuzione di un proxy del thread. Il proxy thread associato richiama questo metodo subito prima di iniziare l'esecuzione del contesto `Dispatch` metodo.|  
  
## <a name="remarks"></a>Note  
 Se si implementa un'utilità di pianificazione personalizzata che si interfaccia con Gestione risorse del Runtime di concorrenza, è necessario implementare il `IExecutionContext` interfaccia. I thread creati da Gestione risorse di operare per conto dell'utilità di pianificazione tramite l'esecuzione di `IExecutionContext::Dispatch` metodo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IExecutionContext`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dispatch"></a>Metodo IExecutionContext:: dispatch  
 Il metodo che viene chiamato quando un proxy di thread inizia l'esecuzione di un particolare contesto di esecuzione. Deve essere la routine principale di lavoro dell'utilità di pianificazione.  
  
```
virtual void Dispatch(_Inout_ DispatchState* pDispatchState) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pDispatchState`  
 Puntatore allo stato in cui è stato inviato questo contesto di esecuzione. Per ulteriori informazioni sullo stato di distribuzione, vedere [DispatchState](dispatchstate-structure.md).  
  
##  <a name="getid"></a>Metodo IExecutionContext:: GetID  
 Restituisce un identificatore univoco per il contesto di esecuzione.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore univoco di tipo integer.  
  
### <a name="remarks"></a>Note  
 È consigliabile utilizzare il metodo `GetExecutionContextId` per ottenere un identificatore univoco per l'oggetto che implementa il `IExecutionContext` interfaccia, prima di utilizzare l'interfaccia come parametro ai metodi forniti da Gestione risorse. Devono restituire lo stesso identificatore quando il `GetId` funzione viene richiamata.  
  
 Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.  
  
##  <a name="getproxy"></a>Metodo IExecutionContext:: GetProxy  
 Restituisce un'interfaccia per il proxy del thread che sta eseguendo il contesto.  
  
```
virtual IThreadProxy* GetProxy() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia di `IThreadProxy`. Se il proxy di thread del contesto di esecuzione non è stato inizializzato con una chiamata a `SetProxy`, la funzione deve restituire `NULL`.  
  
### <a name="remarks"></a>Note  
 Richiama il gestore di risorse il `SetProxy` metodo in un contesto di esecuzione, con un `IThreadProxy` interfaccia come parametro, prima di inserire il `Dispatch` metodo nel contesto di. È prevista per archiviare questo argomento e restituito nelle chiamate a `GetProxy()`.  
  
##  <a name="getscheduler"></a>Metodo IExecutionContext:: GetScheduler  
 Restituisce un'interfaccia per l'utilità di pianificazione a cui appartiene questo contesto di esecuzione.  
  
```
virtual IScheduler* GetScheduler() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia di `IScheduler`.  
  
### <a name="remarks"></a>Note  
 È necessario inizializzare il contesto di esecuzione con un oggetto valido `IScheduler` interfaccia prima di utilizzarlo come parametro ai metodi forniti da Gestione risorse.  
  
##  <a name="setproxy"></a>Metodo IExecutionContext:: SetProxy  
 Associa questo contesto di esecuzione di un proxy del thread. Il proxy thread associato richiama questo metodo subito prima di iniziare l'esecuzione del contesto `Dispatch` metodo.  
  
```
virtual void SetProxy(_Inout_ IThreadProxy* pThreadProxy) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pThreadProxy`  
 Un'interfaccia per il proxy del thread che sta per immettere il `Dispatch` metodo in questo contesto di esecuzione.  
  
### <a name="remarks"></a>Note  
 È prevista per salvare il parametro `pThreadProxy` e restituirlo in una chiamata al `GetProxy` metodo. Gestione risorse garantisce che il proxy thread associato al contesto di esecuzione non verrà modificati mentre il proxy thread è in esecuzione il `Dispatch` metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [IScheduler (struttura)](ischeduler-structure.md)   
 [Struttura IThreadProxy](ithreadproxy-structure.md)

