---
title: Classe task_continuation_context | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- task_continuation_context
- PPLTASKS/concurrency::task_continuation_context
- PPLTASKS/concurrency::task_continuation_context::get_current_winrt_context
- PPLTASKS/concurrency::task_continuation_context::use_arbitrary
- PPLTASKS/concurrency::task_continuation_context::use_current
- PPLTASKS/concurrency::task_continuation_context::use_default
- PPLTASKS/concurrency::task_continuation_context::use_synchronous_execution
dev_langs:
- C++
helpviewer_keywords:
- task_continuation_context class
ms.assetid: 1fb5a76a-3682-45c2-a615-8b6b527741f0
caps.latest.revision: 15
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 8afd599e5ee489500d7f8c498d03c91ace6b99ed
ms.lasthandoff: 03/17/2017

---
# <a name="taskcontinuationcontext-class"></a>Classe task_continuation_context
La classe `task_continuation_context` consente di specificare dove eseguire una continuazione. È utile usare questa classe solo da un'app di Windows Store. Per le app non di Windows Store, il contesto di esecuzione della continuazione attività è determinato dal runtime e non è configurabile.  
  
## <a name="syntax"></a>Sintassi  
  
```
class task_continuation_context : public details::_ContextCallback;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_current_winrt_context](#get_current_winrt_context)|Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto del thread corrente winrt.|  
|[use_arbitrary](#use_arbitrary)|Crea un contesto di continuazione delle attività che consente al runtime di scegliere il contesto di esecuzione per una continuazione.|  
|[use_current](#use_current)|Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione corrente.|  
|[use_default](#use_default)|Crea il contesto di continuazione di attività predefinito.|  
|[use_synchronous_execution](#use_synchronous_execution)|Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione sincrona.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_ContextCallback`  
  
 `task_continuation_context`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ppltasks. h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="get_current_winrt_context"></a>get_current_winrt_context
 Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto del thread corrente WinRT.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static task_continuation_context get_current_winrt_context();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Contesto del thread di Windows Runtime corrente. Restituisce un task_continuation_context vuoto se chiamato da un contesto di Runtime non Windows.  
  
## <a name="remarks"></a>Note  
 Il `get_current_winrt_context` metodo acquisisce il contesto del chiamante Windows Runtime thread. Restituisce un contesto vuoto per i chiamanti non Windows Runtime.  
  
 Il valore restituito da `get_current_winrt_context` può essere utilizzato per indicare al Runtime che la continuazione deve essere eseguito nel modello di apartment del contesto acquisito (vs Apartment MTA), indipendentemente dal fatto che l'attività precedente è un apartment compatibile con. Un'attività è un'attività che annulla il wrapping di Windows Runtime apartment `IAsyncInfo` interfaccia o un'attività che discende da tale attività.  
  
 Questo metodo è simile al `use_current` (metodo), ma è anche disponibile nel codice C++ nativo senza C + + supporto delle estensioni CX. È progettato per utilizzato da utenti esperti scrittura C + + / codice di libreria indipendente dalla CX nativa e i chiamanti di Windows Runtime. A meno che questa funzionalità è necessaria, si consiglia di `use_current` metodo, che è disponibile solo per C + + client CX.  
  
  
##  <a name="use_arbitrary"></a>use_arbitrary 

 Crea un contesto di continuazione delle attività che consente al runtime di scegliere il contesto di esecuzione per una continuazione.  
  
```
static task_continuation_context use_arbitrary();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un contesto di continuazione di attività che rappresenta un percorso arbitrario.  
  
### <a name="remarks"></a>Note  
 Quando viene utilizzato il contesto di continuazione la continuazione verrà eseguita in un contesto in cui che il runtime sceglie anche se l'attività precedente è compatibile con apartment.  
  
 `use_arbitrary`può essere utilizzato per disattivare il comportamento predefinito per una continuazione da un'attività di conoscenza apartment creata in un STA.  
  
 Questo metodo è disponibile solo per le applicazioni Windows Store.  
  
##  <a name="use_current"></a>use_current 

 Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione corrente.  
  
```
static task_continuation_context use_current();
```  
  
### <a name="return-value"></a>Valore restituito  
 Contesto di esecuzione corrente.  
  
### <a name="remarks"></a>Note  
 Questo metodo acquisisce il contesto del chiamante Windows Runtime in modo che le continuazioni possono essere eseguite in un apartment a destra.  
  
 Il valore restituito da `use_current` può essere utilizzato per indicare al Runtime che la continuazione deve essere eseguito nel contesto acquisito (vs Apartment MTA) indipendentemente dal fatto che sia o meno dell'attività precedente apartment compatibile con. Un'attività è un'attività che annulla il wrapping di Windows Runtime apartment `IAsyncInfo` interfaccia o un'attività che discende da tale attività.  
  
 Questo metodo è disponibile solo per le applicazioni Windows Store.  
  
##  <a name="use_default"></a>use_default 

 Crea il contesto di continuazione di attività predefinito.  
  
```
static task_continuation_context use_default();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il contesto di continuazione predefinite.  
  
### <a name="remarks"></a>Note  
 Viene utilizzato il contesto predefinito se non si specifica un contesto di continuazione quando si chiama il `then` metodo. In applicazioni di Windows per Windows 7 e versioni precedenti, nonché applicazioni desktop su Windows 8 e versioni successive, il runtime determina in cui verranno eseguito continuazioni di attività. Tuttavia, in un'applicazione Windows Store, il contesto di continuazione predefinite per una continuazione per un'attività di supporto apartment è l'apartment in `then` viene richiamato.  
  
 Un'attività è un'attività che annulla il wrapping di Windows Runtime apartment `IAsyncInfo` interfaccia o un'attività che discende da tale attività. Pertanto, se si pianifica una continuazione per un'attività di supporto apartment in un apartment a thread singolo Windows Runtime, la continuazione verrà eseguito in tale STA.  
  
 Una continuazione da un'attività di supporto apartment non verrà eseguito in un contesto in cui che il Runtime sceglie.  

## <a name="use_synchronous_execution"></a>task_continuation_context::use_synchronous_execution  
Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione sincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static task_continuation_context use_synchronous_execution();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il contesto di esecuzione sincrona.  
  
## <a name="remarks"></a>Note  
 Il `use_synchronous_execution` metodo impone l'attività di continuazione per eseguire in modo sincrono nel contesto, causando il completamento dell'attività precedente.  
  
 Se l'attività precedente è già completato quando la continuazione è connessa, la continuazione verrà eseguita in modo sincrono al contesto che collega la continuazione.  
  
 
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

