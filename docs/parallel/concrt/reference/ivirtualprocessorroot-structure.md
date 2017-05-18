---
title: IVirtualProcessorRoot (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
ms.openlocfilehash: 2635f1c18dd61127360b8398ad1b0da03f1666d7
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

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
|[IVirtualProcessorRoot:: Deactivate](#deactivate)|Fa sì che il proxy thread attualmente in esecuzione in questa radice del processore virtuale per interrompere la distribuzione nel contesto di esecuzione. Il proxy thread verrà ripresa l'esecuzione in una chiamata al `Activate` metodo.|  
|[IVirtualProcessorRoot:: EnsureAllTasksVisible](#ensurealltasksvisible)|Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori siano visibili a tutti i processori nel sistema. Assicura che un limite di memoria completa è stata eseguita su tutti i processori prima che il metodo restituisce.|  
|[IVirtualProcessorRoot:: GetID](#getid)|Restituisce un identificatore univoco per la radice del processore virtuale.|  
  
## <a name="remarks"></a>Note  
 Ogni radice del processore virtuale è una risorsa di esecuzione associate. Il `IVirtualProcessorRoot` interfaccia eredita il [IExecutionResource](iexecutionresource-structure.md) interfaccia. Più radici del processore virtuale possono corrispondere al thread di hardware sottostante stesso.  
  
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
 Un'interfaccia al contesto di esecuzione che verrà inviato in questa radice del processore virtuale.  
  
### <a name="remarks"></a>Note  
 Gestione risorse fornirà un proxy del thread se non è associato all'interfaccia di contesto di esecuzione`pContext`  
  
 Il `Activate` metodo può essere utilizzato per avviare l'esecuzione di lavoro in una nuova radice del processore virtuale restituita dal gestore delle risorse o per ripristinare il proxy del thread in una radice del processore virtuale che è disattivato o sta per disattivare. Vedere [IVirtualProcessorRoot:: Deactivate](#deactivate) per ulteriori informazioni sulla disattivazione. Quando si riprende una radice del processore virtuale disattivata, il parametro `pContext` deve corrispondere al parametro utilizzato per disattivare la radice del processore virtuale.  
  
 Dopo una radice del processore virtuale è stata attivata per la prima volta, le coppie successive di chiamate a `Deactivate` e `Activate` potrebbero concorrere tra loro. Ciò significa che per il gestore delle risorse per ricevere una chiamata a `Activate` prima di ricevere il `Deactivate` è stata concepita per chiamata.  
  
 Quando si attiva una radice del processore virtuale, si segnala a Gestione risorse che questa radice del processore virtuale è attualmente occupata con lavoro. Se l'utilità di pianificazione non trova alcun lavoro da eseguire in questa radice, si prevede di richiamare il `Deactivate` metodo che informa il gestore di risorse che la radice del processore virtuale è inattiva. Gestione risorse utilizza questi dati per il sistema di bilanciamento del carico.  
  
 `invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation`viene generata se l'argomento `pContext` non rappresenta il contesto di esecuzione inviato più recentemente da questa radice del processore virtuale.  
  
 L'atto di attivare una radice del processore virtuale aumenta il livello di sottoscrizione del thread di hardware sottostante da uno. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="deactivate"></a>Metodo IVirtualProcessorRoot:: Deactivate  
 Fa sì che il proxy thread attualmente in esecuzione in questa radice del processore virtuale per interrompere la distribuzione nel contesto di esecuzione. Il proxy thread verrà ripresa l'esecuzione in una chiamata al `Activate` metodo.  
  
```
virtual bool Deactivate(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Contesto inviato attualmente da questa radice.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano. Un valore di `true` indica che il proxy del thread restituito dal `Deactivate` in risposta a una chiamata al metodo di `Activate` metodo. Il valore `false` indica che il proxy del thread restituito dal metodo in risposta a un evento di notifica in Gestione risorse. In una modalità utente pianificabili (UMS) thread dell'utilità di pianificazione, questo indica che compaiono alcuni elementi nell'elenco di completamento dell'utilità di pianificazione e l'utilità di pianificazione è necessaria per gestirli.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per interrompere temporaneamente l'esecuzione di una radice del processore virtuale quando non è possibile trovare alcun lavoro nell'utilità di pianificazione. Una chiamata al `Deactivate` metodo deve provenire dall'interno di `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione con la radice del processore virtuale. In altre parole, il proxy thread richiamando il `Deactivate` metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo in una radice del processore virtuale che non si eseguono potrebbe causare un comportamento indefinito.  
  
 Una radice del processore virtuale disattivate può essere riattivata con una chiamata al `Activate` con lo stesso argomento passato al metodo di `Deactivate` metodo. L'utilità di pianificazione è responsabile di garantire che le chiamate al `Activate` e `Deactivate` sono associati metodi, ma non sono necessari per la ricezione in un ordine specifico. Il gestore di risorse in grado di gestire la ricezione di una chiamata al `Activate` metodo prima di ricevere una chiamata al `Deactivate` metodo a cui era destinata.  
  
 Se si attiva una radice del processore virtuale e il valore restituito dal `Deactivate` metodo è il valore `false`, l'utilità di pianificazione deve eseguire una query nell'elenco di completamento UMS tramite il `IUMSCompletionList::GetUnblockNotifications` metodo agire su tali informazioni e quindi chiamare successivamente il `Deactivate` metodo nuovamente. Deve essere ripetuto fino a quando il `Deactivate` metodo restituisce il valore `true`.  
  
 `invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation`Se la radice del processore virtuale non è mai stata attivata, viene generata o l'argomento `pContext` non rappresenta il contesto di esecuzione inviato più recentemente da questa radice del processore virtuale.  
  
 L'atto di disattivazione di una radice del processore virtuale diminuisce di uno il livello di sottoscrizione del thread di hardware sottostante. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="ensurealltasksvisible"></a>Metodo IVirtualProcessorRoot:: EnsureAllTasksVisible  
 Fa sì che i dati archiviati nella gerarchia di memoria dei singoli processori siano visibili a tutti i processori nel sistema. Assicura che un limite di memoria completa è stata eseguita su tutti i processori prima che il metodo restituisce.  
  
```
virtual void EnsureAllTasksVisible(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Contesto inviato attualmente da questa radice del processore virtuale.  
  
### <a name="remarks"></a>Note  
 Questo metodo può risultare utile quando si desidera sincronizzare la disattivazione di una radice del processore virtuale con l'aggiunta di un nuovo lavoro nell'utilità di pianificazione. Per motivi di prestazioni, è possibile decidere di aggiungere elementi di lavoro all'utilità di pianificazione senza eseguire una barriera di memoria, ovvero gli elementi di lavoro aggiunti da un thread in esecuzione in un processore non sono immediatamente visibili a tutti gli altri processori. Utilizzando questo metodo in combinazione con il `Deactivate` le radici di metodo è possibile garantire che l'utilità di pianificazione non disattivi tutte il processore virtuale anche se gli elementi di lavoro sono disponibili nelle raccolte dell'utilità di pianificazione.  
  
 Una chiamata al `EnsureAllTasksVisibleThe` metodo deve provenire dall'interno di `Dispatch` metodo del contesto di esecuzione dell'ultima attivazione con la radice del processore virtuale. In altre parole, il proxy thread richiamando il `EnsureAllTasksVisible` metodo deve essere quello attualmente in esecuzione nella radice del processore virtuale. La chiamata al metodo in una radice del processore virtuale che non si eseguono potrebbe causare un comportamento indefinito.  
  
 `invalid_argument`viene generata se l'argomento `pContext` ha il valore `NULL`.  
  
 `invalid_operation`Se la radice del processore virtuale non è mai stata attivata, viene generata o l'argomento `pContext` non rappresenta il contesto di esecuzione inviato più recentemente da questa radice del processore virtuale.  
  
##  <a name="getid"></a>Metodo IVirtualProcessorRoot:: GetID  
 Restituisce un identificatore univoco per la radice del processore virtuale.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore di tipo integer.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

