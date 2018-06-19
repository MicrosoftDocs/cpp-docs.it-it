---
title: Struttura IExecutionContext | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5c194dc7ecd4af0092dd304b17a8230cda6a8598
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33692899"
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
|[IExecutionContext::Dispatch](#dispatch)|Il metodo che viene chiamato quando inizia l'esecuzione di un particolare contesto di esecuzione di un proxy del thread. Deve essere la routine principale di lavoro dell'utilità di pianificazione.|  
|[IExecutionContext::GetId](#getid)|Restituisce un identificatore univoco per il contesto di esecuzione.|  
|[IExecutionContext::GetProxy](#getproxy)|Restituisce un'interfaccia per il proxy del thread che sta eseguendo il contesto.|  
|[IExecutionContext::GetScheduler](#getscheduler)|Restituisce un'interfaccia per l'utilità di pianificazione a cui appartiene questo contesto di esecuzione.|  
|[IExecutionContext::SetProxy](#setproxy)|Associa questo contesto di esecuzione di un proxy del thread. Il proxy thread associato richiama questo metodo poco prima di iniziare l'esecuzione del contesto di `Dispatch` metodo.|  
  
## <a name="remarks"></a>Note  
 Se si implementa un'utilità di pianificazione personalizzata che si interfaccia con Gestione risorse del Runtime di concorrenza, sarà necessario implementare la `IExecutionContext` interfaccia. I thread creati da Gestione risorse di operare per conto dell'utilità di pianificazione tramite l'esecuzione di `IExecutionContext::Dispatch` metodo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IExecutionContext`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dispatch"></a>  Metodo IExecutionContext:: dispatch  
 Il metodo che viene chiamato quando inizia l'esecuzione di un particolare contesto di esecuzione di un proxy del thread. Deve essere la routine principale di lavoro dell'utilità di pianificazione.  
  
```
virtual void Dispatch(_Inout_ DispatchState* pDispatchState) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pDispatchState`  
 Puntatore allo stato in cui è stato inviato il contesto di esecuzione. Per ulteriori informazioni sullo stato di distribuzione, vedere [DispatchState](dispatchstate-structure.md).  
  
##  <a name="getid"></a>  Metodo IExecutionContext:: GetID  
 Restituisce un identificatore univoco per il contesto di esecuzione.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore univoco di tipo integer.  
  
### <a name="remarks"></a>Note  
 È consigliabile utilizzare il metodo `GetExecutionContextId` per ottenere un identificatore univoco per l'oggetto che implementa il `IExecutionContext` interfaccia, prima di utilizzare l'interfaccia come parametro ai metodi forniti da Gestione risorse. Devono restituire lo stesso identificatore quando il `GetId` funzione viene richiamata.  
  
 Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.  
  
##  <a name="getproxy"></a>  Metodo IExecutionContext:: GetProxy  
 Restituisce un'interfaccia per il proxy del thread che sta eseguendo il contesto.  
  
```
virtual IThreadProxy* GetProxy() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia di `IThreadProxy`. Se il proxy di thread del contesto di esecuzione non è stato inizializzato con una chiamata a `SetProxy`, la funzione deve restituire `NULL`.  
  
### <a name="remarks"></a>Note  
 Verrà richiamato il gestore delle risorse di `SetProxy` metodo in un contesto di esecuzione, con un `IThreadProxy` interfaccia come parametro, prima di inserire il `Dispatch` metodo nel contesto del. È necessario archiviare in questo argomento e restituirlo nelle chiamate a `GetProxy()`.  
  
##  <a name="getscheduler"></a>  Metodo IExecutionContext:: GetScheduler  
 Restituisce un'interfaccia per l'utilità di pianificazione a cui appartiene questo contesto di esecuzione.  
  
```
virtual IScheduler* GetScheduler() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia di `IScheduler`.  
  
### <a name="remarks"></a>Note  
 È necessario inizializzare il contesto di esecuzione con un valore valido `IScheduler` interfaccia prima di utilizzarlo come parametro per i metodi forniti da Gestione risorse.  
  
##  <a name="setproxy"></a>  Metodo IExecutionContext:: SetProxy  
 Associa questo contesto di esecuzione di un proxy del thread. Il proxy thread associato richiama questo metodo poco prima di iniziare l'esecuzione del contesto di `Dispatch` metodo.  
  
```
virtual void SetProxy(_Inout_ IThreadProxy* pThreadProxy) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pThreadProxy`  
 Un'interfaccia per il proxy del thread che sta per entrare il `Dispatch` metodo in questo contesto di esecuzione.  
  
### <a name="remarks"></a>Note  
 È necessario salvare il parametro `pThreadProxy` e restituirlo in una chiamata al `GetProxy` metodo. Il gestore delle risorse garantisce che il proxy thread associato al contesto di esecuzione non verrà modificato mentre è in esecuzione il proxy del thread di `Dispatch` metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Struttura IScheduler](ischeduler-structure.md)   
 [Struttura IThreadProxy](ithreadproxy-structure.md)
