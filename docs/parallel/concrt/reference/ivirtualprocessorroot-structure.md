---
title: Struttura IVirtualProcessorRoot | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- IVirtualProcessorRoot
- CONCRTRM/concurrency::IVirtualProcessorRoot
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::Activate
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::Deactivate
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::EnsureAllTasksVisible
- CONCRTRM/concurrency::IVirtualProcessorRoot::IVirtualProcessorRoot::GetId
dev_langs:
- C++
helpviewer_keywords:
- IVirtualProcessorRoot structure
ms.assetid: 5ef371b8-9e4f-4fef-bb0d-49099693dd2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cb34946a9860746bbe96c5ec9bcd96a990c5f281
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022591"
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
|[IVirtualProcessorRoot::Activate](#activate)|Fa sì che il proxy thread associato all'interfaccia contesto esecuzione `pContext` per avviare l'esecuzione in questa radice del processore virtuale.|  
|[IVirtualProcessorRoot:: Deactivate](#deactivate)|Fa sì che il proxy thread attualmente in esecuzione in questa radice del processore virtuale per arrestare l'invio del contesto di esecuzione. Il proxy thread riprende l'esecuzione in una chiamata al `Activate` (metodo).|  
|[IVirtualProcessorRoot::EnsureAllTasksVisible](#ensurealltasksvisible)|Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori siano visibili a tutti i processori nel sistema. Assicura che un limite di memoria completa è stato eseguito su tutti i processori prima che il metodo restituisce.|  
|[IVirtualProcessorRoot::GetId](#getid)|Restituisce un identificatore univoco per la radice del processore virtuale.|  
  
## <a name="remarks"></a>Note  
 Ogni radice del processore virtuale dispone di una risorsa di esecuzione associate. Il `IVirtualProcessorRoot` eredita dall'interfaccia di [IExecutionResource](iexecutionresource-structure.md) interfaccia. Più radici di processori virtuali possono corrispondere a stesso thread hardware sottostante.  
  
 Il gestore delle risorse concede radici di processori virtuali alle utilità di pianificazione in risposta a richieste di risorse. Un'utilità di pianificazione è possibile usare una radice del processore virtuale per eseguire operazioni attivandola con un contesto di esecuzione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [IExecutionResource](iexecutionresource-structure.md)  
  
 `IVirtualProcessorRoot`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="activate"></a>  Metodo IVirtualProcessorRoot:: Activate  
 Fa sì che il proxy thread associato all'interfaccia contesto esecuzione `pContext` per avviare l'esecuzione in questa radice del processore virtuale.  
  
```
virtual void Activate(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*pContext*<br/>
Interfaccia per il contesto di esecuzione che verrà inviato in questa radice del processore virtuale.  
  
### <a name="remarks"></a>Note  
 Il servizio Gestione risorse fornisce un proxy del thread se non è associato all'interfaccia di contesto di esecuzione `pContext`  
  
 Il `Activate` metodo può essere utilizzato per avviare l'esecuzione di lavoro in una nuova radice del processore virtuale restituita da Resource Manager o riprendere il proxy thread in una radice del processore virtuale che è disattivato o sta per disattivare. Visualizzare [IVirtualProcessorRoot:: Deactivate](#deactivate) per altre informazioni sulla disattivazione. Quando si riprende una radice del processore virtuale disattivata, il parametro `pContext` deve essere lo stesso del parametro consente di disattivare la radice del processore virtuale.  
  
 Una volta che una radice del processore virtuale è stata attivata per la prima volta, le coppie successive di chiamate a `Deactivate` e `Activate` potrebbe race tra loro. Ciò significa che è accettabile per Resource Manager per ricevere una chiamata a `Activate` prima che riceva il `Deactivate` chiamata è stata concepita per.  
  
 Quando si attiva una radice del processore virtuale, si indicano a Resource Manager che questa radice del processore virtuale è attualmente occupata con lavoro. Se l'utilità di pianificazione non è possibile trovare alcun lavoro da eseguire in questa radice, è previsto per richiamare il `Deactivate` metodo per informare il gestore di risorse che la radice del processore virtuale è inattiva. Resource Manager usa questi dati per il sistema di bilanciamento del carico.  
  
 `invalid_argument` viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation` viene generata se l'argomento `pContext` non rappresenta il contesto di esecuzione più di recente inviato da questa radice del processore virtuale.  
  
 L'atto di attivare la radice di un processore virtuale aumenta il livello di sottoscrizione del thread di hardware sottostante da uno. Per altre informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="deactivate"></a>  Metodo IVirtualProcessorRoot:: Deactivate  
 Fa sì che il proxy thread attualmente in esecuzione in questa radice del processore virtuale per arrestare l'invio del contesto di esecuzione. Il proxy thread riprende l'esecuzione in una chiamata al `Activate` (metodo).  
  
```
virtual bool Deactivate(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*pContext*<br/>
Il contesto che viene inviato attualmente da questa radice.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano. Un valore pari `true` indica che il proxy del thread restituito dal `Deactivate` in risposta a una chiamata al metodo il `Activate` (metodo). Un valore di `false` indica che il proxy del thread restituito dal metodo in risposta a un evento di notifica di Resource Manager. In una modalità utente pianificabili (UMS) thread dell'utilità di pianificazione, questo indica che gli elementi visualizzate nell'elenco di completamento dell'utilità di pianificazione e l'utilità di pianificazione è necessario per gestirli.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per interrompere temporaneamente l'esecuzione di una radice del processore virtuale quando non è possibile trovare alcuna operazione nell'utilità di pianificazione. Una chiamata ai `Deactivate` metodo deve provenire dall'interno di `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione con la radice del processore virtuale. In altre parole, il proxy thread richiamando il `Deactivate` metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo in una radice del processore virtuale che non si eseguono potrebbe causare un comportamento indefinito.  
  
 Una radice del processore virtuale disattivato può essere riattivata con una chiamata ai `Activate` con lo stesso argomento che è stato passato al metodo il `Deactivate` (metodo). L'utilità di pianificazione è responsabile di garantire che le chiamate al `Activate` e `Deactivate` sono associati metodi, ma non sono necessarie per essere ricevuti in un ordine specifico. Resource Manager può gestire la ricezione di una chiamata ai `Activate` metodo prima di ricevere una chiamata al `Deactivate` metodo è stata concepita per.  
  
 Se si attiva una radice del processore virtuale e il valore restituito dal `Deactivate` metodo è il valore `false`, l'utilità di pianificazione deve eseguire una query tramite l'elenco di completamento UMS il `IUMSCompletionList::GetUnblockNotifications` metodo, agire su tali informazioni e quindi chiamare successivamente il `Deactivate`metodo nuovamente. Deve essere ripetuto fino a quando la `Deactivate` metodo viene restituito il valore `true`.  
  
 `invalid_argument` viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation` Se la radice del processore virtuale non è mai stata attivata, viene generata o l'argomento `pContext` non rappresenta il contesto di esecuzione più di recente inviato da questa radice del processore virtuale.  
  
 L'atto di disattivazione di una radice del processore virtuale riduce il livello di sottoscrizione del thread di hardware sottostante di uno. Per altre informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="ensurealltasksvisible"></a>  Metodo IVirtualProcessorRoot:: EnsureAllTasksVisible  
 Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori siano visibili a tutti i processori nel sistema. Assicura che un limite di memoria completa è stato eseguito su tutti i processori prima che il metodo restituisce.  
  
```
virtual void EnsureAllTasksVisible(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*pContext*<br/>
Il contesto viene attualmente inviato da questa radice del processore virtuale.  
  
### <a name="remarks"></a>Note  
 Questo metodo può risultare utile quando si desidera sincronizzare la disattivazione di una radice del processore virtuale con l'aggiunta di un nuovo lavoro nell'utilità di pianificazione. Per motivi di prestazioni, è possibile decidere di aggiungere elementi di lavoro all'utilità di pianificazione senza eseguire una barriera di memoria, ovvero gli elementi di lavoro aggiunti da un thread in esecuzione in un processore non sono immediatamente visibili a tutti gli altri processori. Con questo metodo in combinazione con il `Deactivate` metodo è possibile assicurarsi che l'utilità di pianificazione non disattiva tutti i relativi processore virtuale radici anche se gli elementi di lavoro sono disponibili nelle raccolte dell'utilità di pianificazione.  
  
 Una chiamata ai `EnsureAllTasksVisibleThe` metodo deve provenire dall'interno di `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione con la radice del processore virtuale. In altre parole, il proxy thread richiamando il `EnsureAllTasksVisible` metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo in una radice del processore virtuale che non si eseguono potrebbe causare un comportamento indefinito.  
  
 `invalid_argument` viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation` Se la radice del processore virtuale non è mai stata attivata, viene generata o l'argomento `pContext` non rappresenta il contesto di esecuzione più di recente inviato da questa radice del processore virtuale.  
  
##  <a name="getid"></a>  Metodo IVirtualProcessorRoot:: GetID  
 Restituisce un identificatore univoco per la radice del processore virtuale.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore di tipo integer.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
