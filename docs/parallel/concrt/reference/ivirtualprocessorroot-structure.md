---
title: Struttura IVirtualProcessorRoot | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IVirtualProcessorRoot
- CONCRTRM/concurrency::IVirtualProcessorRoot
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::Activate
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::Deactivate
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::EnsureAllTasksVisible
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::GetId
dev_langs: C++
helpviewer_keywords: IVirtualProcessorRoot structure
ms.assetid: 5ef371b8-9e4f-4fef-bb0d-49099693dd2b
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1010517799b9878ff88ddbc68a76ff4a0ed6588f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ivirtualprocessorroot-structure"></a>Struttura IVirtualProcessorRoot
Un'astrazione per un thread hardware sulla quale un proxy del thread può eseguire.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IVirtualProcessorRoot : public IExecutionResource;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IVirtualProcessorRoot:: Activate](#activate)|Fa sì che il proxy thread associato all'interfaccia di contesto di esecuzione `pContext` per avviare l'esecuzione in questa radice del processore virtuale.|  
|[IVirtualProcessorRoot:: Deactivate](#deactivate)|Fa sì che il proxy del thread attualmente in esecuzione in questa radice del processore virtuale per interrompere la distribuzione nel contesto di esecuzione. Il proxy thread verrà ripresa l'esecuzione in una chiamata al `Activate` metodo.|  
|[IVirtualProcessorRoot:: EnsureAllTasksVisible](#ensurealltasksvisible)|Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori per diventare visibile a tutti i processori nel sistema. Assicura che un limite di memoria completa è stata eseguita su tutti i processori prima il metodo restituisce.|  
|[IVirtualProcessorRoot:: GetID](#getid)|Restituisce un identificatore univoco per la radice del processore virtuale.|  
  
## <a name="remarks"></a>Note  
 Ogni radice del processore virtuale dispone di una risorsa di esecuzione associate. Il `IVirtualProcessorRoot` interfaccia eredita dal [IExecutionResource](iexecutionresource-structure.md) interfaccia. Più radici del processore virtuale potrebbero corrispondere allo stesso thread hardware sottostante.  
  
 Gestione risorse concede radici del processore virtuale per le utilità di pianificazione in risposta alle richieste di risorse. Un'utilità di pianificazione è possibile utilizzare una radice del processore virtuale per eseguire operazioni attivandola con un contesto di esecuzione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [IExecutionResource](iexecutionresource-structure.md)  
  
 `IVirtualProcessorRoot`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="activate"></a>Metodo IVirtualProcessorRoot:: Activate  
 Fa sì che il proxy thread associato all'interfaccia di contesto di esecuzione `pContext` per avviare l'esecuzione in questa radice del processore virtuale.  
  
```
virtual void Activate(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Interfaccia per il contesto di esecuzione che verrà inviato in questa radice del processore virtuale.  
  
### <a name="remarks"></a>Note  
 Gestione risorse fornirà un proxy del thread se non è associato all'interfaccia di contesto di esecuzione`pContext`  
  
 Il `Activate` metodo può essere utilizzato per avviare l'esecuzione del lavoro in una nuova radice del processore virtuale restituita da Gestione risorse, o per riprendere il proxy del thread in una radice del processore virtuale che è disattivato o sta per disattivare. Vedere [IVirtualProcessorRoot:: Deactivate](#deactivate) per ulteriori informazioni sulla disattivazione. Quando si riprende una radice del processore virtuale disattivata, il parametro `pContext` deve essere lo stesso come parametro consente di disattivare la radice del processore virtuale.  
  
 Una volta una radice del processore virtuale è stata attivata per la prima volta, successive coppie di chiamate a `Deactivate` e `Activate` potrebbe race tra loro. Ciò significa che per il gestore delle risorse per ricevere una chiamata a `Activate` prima della ricezione di `Deactivate` chiamata è stata concepita per.  
  
 Quando si attiva una radice del processore virtuale, si indicano a Gestione risorse che questa radice del processore virtuale è attualmente occupata con lavoro. Se l'utilità di pianificazione non trova alcun lavoro da eseguire in questa radice, si prevede di richiamare il `Deactivate` metodo informare il gestore delle risorse che la radice del processore virtuale è inattiva. Gestione risorse Usa questi dati per il sistema di bilanciamento del carico.  
  
 `invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation`viene generata se l'argomento `pContext` non rappresenta il contesto di esecuzione più di recente è stato inviato da questa radice del processore virtuale.  
  
 L'atto di attivare una radice del processore virtuale incrementa di uno il livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="deactivate"></a>Metodo IVirtualProcessorRoot:: Deactivate  
 Fa sì che il proxy del thread attualmente in esecuzione in questa radice del processore virtuale per interrompere la distribuzione nel contesto di esecuzione. Il proxy thread verrà ripresa l'esecuzione in una chiamata al `Activate` metodo.  
  
```
virtual bool Deactivate(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Il contesto attualmente inviato da questa radice.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano. Il valore `true` indica che il proxy del thread restituito dal `Deactivate` in risposta a una chiamata al metodo di `Activate` metodo. Il valore `false` indica che il proxy del thread restituito dal metodo in risposta a un evento di notifica in Gestione risorse. In una modalità utente pianificabili (UMS) utilità di pianificazione thread, questo indica che gli elementi presenti nell'elenco di completamento dell'utilità di pianificazione e l'utilità di pianificazione è necessaria per gestirli.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per interrompere temporaneamente l'esecuzione di una radice del processore virtuale quando non è possibile trovare alcun lavoro nell'utilità di pianificazione. Una chiamata al `Deactivate` metodo deve provenire dall'interno di `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione con la radice del processore virtuale. In altre parole, il proxy del thread richiamando il `Deactivate` metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo in una radice del processore virtuale che non si eseguono potrebbe causare un comportamento indefinito.  
  
 Una radice del processore virtuale disattivata può essere riattivata con una chiamata al `Activate` con lo stesso argomento passato al metodo di `Deactivate` metodo. L'utilità di pianificazione è responsabile di garantire che le chiamate al `Activate` e `Deactivate` sono associati metodi, ma non sono necessarie per la ricezione in un ordine specifico. Il gestore delle risorse può gestire la ricezione di una chiamata al `Activate` metodo prima di ricevere una chiamata al `Deactivate` metodo a cui era destinata.  
  
 Se si attiva una radice del processore virtuale e il valore restituito dal `Deactivate` metodo è il valore `false`, l'utilità di pianificazione deve eseguire una query nell'elenco di completamento UMS tramite il `IUMSCompletionList::GetUnblockNotifications` metodo agire su tali informazioni e quindi chiamare successivamente il `Deactivate`nuovo metodo. Deve essere ripetuto fino a quando il `Deactivate` metodo restituisce il valore `true`.  
  
 `invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation`Se la radice del processore virtuale non è mai stata attivata, viene generata o l'argomento `pContext` non rappresenta il contesto di esecuzione più di recente è stato inviato da questa radice del processore virtuale.  
  
 L'atto di disattivazione di una radice del processore virtuale diminuisce di uno il livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="ensurealltasksvisible"></a>Metodo IVirtualProcessorRoot:: EnsureAllTasksVisible  
 Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori per diventare visibile a tutti i processori nel sistema. Assicura che un limite di memoria completa è stata eseguita su tutti i processori prima il metodo restituisce.  
  
```
virtual void EnsureAllTasksVisible(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Il contesto viene attualmente inviato da questa radice del processore virtuale.  
  
### <a name="remarks"></a>Note  
 Questo metodo potrebbe risultare utile quando si desidera sincronizzare la disattivazione di una radice del processore virtuale con l'aggiunta di un nuovo lavoro nell'utilità di pianificazione. Per motivi di prestazioni, è possibile decidere di aggiungere elementi di lavoro all'utilità di pianificazione senza eseguire una barriera di memoria, ovvero gli elementi di lavoro aggiunti da un thread in esecuzione in un processore non sono immediatamente visibili a tutti gli altri processori. Tramite questo metodo in combinazione con il `Deactivate` è possibile assicurarsi che l'utilità di pianificazione non disattiva il processore virtuale del metodo principali mentre gli elementi di lavoro presenti nelle raccolte dell'utilità di pianificazione.  
  
 Una chiamata al `EnsureAllTasksVisibleThe` metodo deve provenire dall'interno di `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione con la radice del processore virtuale. In altre parole, il proxy del thread richiamando il `EnsureAllTasksVisible` metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo in una radice del processore virtuale che non si eseguono potrebbe causare un comportamento indefinito.  
  
 `invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation`Se la radice del processore virtuale non è mai stata attivata, viene generata o l'argomento `pContext` non rappresenta il contesto di esecuzione più di recente è stato inviato da questa radice del processore virtuale.  
  
##  <a name="getid"></a>Metodo IVirtualProcessorRoot:: GetID  
 Restituisce un identificatore univoco per la radice del processore virtuale.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore di tipo integer.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
