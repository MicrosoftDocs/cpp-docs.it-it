---
title: Struttura IUMSScheduler | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler
- CONCRTRM/concurrency::IUMSScheduler::IUMSScheduler::SetCompletionList
dev_langs: C++
helpviewer_keywords: IUMSScheduler structure
ms.assetid: 3a500225-4e02-4849-bb56-d744865f5870
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 82795e3494267f953875136bb29c701c93dbc934
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 Se si implementa un'utilità di pianificazione personalizzata che comunica con il gestore delle risorse e si desidera che i thread UMS vengano passati all'utilità di pianificazione anziché i thread Win32 normale, è necessario fornire un'implementazione del `IUMSScheduler` interfaccia. Inoltre, è necessario impostare il valore dei criteri per le chiavi dei criteri dell'utilità di pianificazione `SchedulerKind` da `UmsThreadDefault`. Se i criteri specificano i thread UMS, il `IScheduler` interfaccia che viene passato come parametro per il [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) metodo deve essere un `IUMSScheduler` interfaccia.  
  
 Il gestore delle risorse è in grado di passare i thread UMS solo nei sistemi operativi che dispongono della funzionalità UMS. sistemi operativi a 64 bit con Windows 7 e versioni successive supporta i thread UMS. Se si crea un criterio di pianificazione con il `SchedulerKind` chiave impostato sul valore `UmsThreadDefault` e la piattaforma sottostante non supporta UMS, il valore della `SchedulerKind` chiave su tale criterio verrà modificato il valore `ThreadScheduler`. Ti consigliamo di leggere nuovamente questo valore dei criteri prima dell'attesa di ricevere i thread UMS.  
  
 Il `IUMSScheduler` interfaccia è un'estremità di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e Gestione risorse. L'altra estremità è rappresentata dal `IResourceManager` e `ISchedulerProxy` interfacce, che vengono implementate da Gestione risorse.  
  
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
 L'interfaccia dell'elenco di completamento dell'utilità di pianificazione. È presente un unico elenco per utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Il gestore delle risorse verrà richiamare questo metodo nell'utilità di pianificazione che specifica che la richiesta thread UMS, dopo che l'utilità di pianificazione ha richiesto un'allocazione iniziale di risorse. L'utilità di pianificazione è possibile utilizzare il `IUMSCompletionList` interfaccia per determinare quando sono stati sbloccati i proxy del thread UMS. È valido solo per accedere a questa interfaccia da un proxy del thread in esecuzione in una radice del processore virtuale assegnata all'utilità di pianificazione UMS.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [Struttura IScheduler](ischeduler-structure.md)   
 [Struttura IUMSCompletionList](iumscompletionlist-structure.md)   
 [Struttura IResourceManager](iresourcemanager-structure.md)
