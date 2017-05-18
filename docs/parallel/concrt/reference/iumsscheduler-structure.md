---
title: IUMSScheduler (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler::IUMSScheduler::SetCompletionList
dev_langs:
- C++
helpviewer_keywords:
- IUMSScheduler structure
ms.assetid: 3a500225-4e02-4849-bb56-d744865f5870
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 58ca59224b5d9cdeb282562349642736a1b22c74
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="iumsscheduler-structure"></a>Struttura IUMSScheduler
Interfaccia a un'astrazione di un'utilità di pianificazione di lavoro che vuole che Gestione risorse del runtime di concorrenza passi thread UMS pianificabili in modalità utente. Gestione risorse usa questa interfaccia per comunicare con le utilità di pianificazione dei thread UMS.  L'interfaccia `IUMSScheduler` eredita dall'interfaccia `IScheduler`.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IUMSScheduler : public IScheduler;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IUMSScheduler:: SetCompletionList](#setcompletionlist)|Assegna un `IUMSCompletionList` interfaccia a un'utilità di pianificazione di thread UMS.|  
  
## <a name="remarks"></a>Note  
 Se si implementa un'utilità di pianificazione personalizzata che comunica con Gestione risorse, e si desidera thread UMS vengano passati all'utilità di pianificazione anziché i thread Win32 comuni, è necessario fornire un'implementazione del `IUMSScheduler` interfaccia. Inoltre, impostare il valore del criterio per la chiave di criteri dell'utilità di pianificazione `SchedulerKind` da `UmsThreadDefault`. Se i criteri specificano il thread pianificabili in modalità utente, il `IScheduler` interfaccia che viene passato come parametro per il [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) metodo deve essere un `IUMSScheduler` interfaccia.  
  
 Il gestore di risorse è in grado di passare thread UMS solo nei sistemi operativi che dispongono della funzionalità UMS. sistemi operativi a 64 bit con versione Windows 7 e versioni successive supportano thread UMS. Se si creano criteri dell'utilità di pianificazione con il `SchedulerKind` chiave impostato sul valore `UmsThreadDefault` e la piattaforma sottostante non supporta UMS, il valore di `SchedulerKind` chiave tale politica verrà modificato il valore `ThreadScheduler`. Ti consigliamo di leggere nuovamente questo valore del criterio prima che prevede la ricezione di thread UMS.  
  
 Il `IUMSScheduler` interfaccia è un'estremità di un canale di comunicazione tra un'utilità di pianificazione e Gestione risorse di bidirezionale. L'altra estremità è rappresentata dal `IResourceManager` e `ISchedulerProxy` interfacce che vengono implementate da Gestione risorse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [IScheduler](ischeduler-structure.md)  
  
 `IUMSScheduler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="setcompletionlist"></a>Metodo IUMSScheduler:: SetCompletionList  
 Assegna un `IUMSCompletionList` interfaccia a un'utilità di pianificazione di thread UMS.  
  
```
virtual void SetCompletionList(_Inout_ IUMSCompletionList* pCompletionList) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pCompletionList`  
 L'interfaccia dell'elenco di completamento per l'utilità di pianificazione. Esiste un unico elenco per utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Il gestore di risorse richiama questo metodo nell'utilità di pianificazione che specifica che il thread pianificabili in modalità utente, la richiesta dopo che l'utilità di pianificazione ha richiesto un'allocazione iniziale di risorse. L'utilità di pianificazione è possibile utilizzare il `IUMSCompletionList` interfaccia per determinare quando sono stati sbloccati i proxy del thread UMS. È valido solo per accedere a questa interfaccia da un proxy del thread in esecuzione in una radice del processore virtuale assegnata all'utilità di pianificazione UMS.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [IScheduler (struttura)](ischeduler-structure.md)   
 [IUMSCompletionList (struttura)](iumscompletionlist-structure.md)   
 [Struttura IResourceManager](iresourcemanager-structure.md)

