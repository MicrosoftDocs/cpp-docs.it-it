---
title: Classe task_continuation_context | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 41cd6fa1dd219eb7179209839f0176deff43345c
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="taskcontinuationcontext-class"></a>Classe task_continuation_context
La classe `task_continuation_context` consente di specificare dove eseguire una continuazione. È utile solo utilizzare questa classe da un'app di Windows Runtime. Per le app non di Windows Runtime, il contesto di esecuzione della continuazione attività è determinato dal runtime e non è configurabile.  
  
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

## <a name="get_current_winrt_context"></a> get_current_winrt_context
 Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto del thread corrente WinRT.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static task_continuation_context get_current_winrt_context();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Contesto del thread di Windows Runtime corrente. Restituisce un task_continuation_context vuoto se chiamato da un contesto non di Windows Runtime.  
  
## <a name="remarks"></a>Note  
 Il `get_current_winrt_context` metodo acquisisce il contesto del chiamante Windows Runtime thread. Restituisce un contesto vuoto per i chiamanti non di Windows Runtime.  
  
 Il valore restituito da `get_current_winrt_context` può essere utilizzato per indicare al Runtime che la continuazione deve essere eseguito nel modello di apartment del contesto acquisito (STA e MTA), indipendentemente dal fatto che l'attività precedente è compatibile con un apartment. Un'attività è un'attività che annulla il wrapping Windows Runtime apartment `IAsyncInfo` interfaccia o un'attività che discende da tale attività.  
  
 Questo metodo è simile al `use_current` (metodo), ma è disponibile anche nel codice C++ nativo senza C + + supporto delle estensioni CX. Si è destinato agli utenti avanzati utilizzato da scrittura C + + codice di libreria indipendente dalla CX nativa e i chiamanti di Windows Runtime. A meno che questa funzionalità è necessaria, è consigliabile la `use_current` metodo, che è disponibile solo per C + + client CX.  
  
  
##  <a name="use_arbitrary"></a> use_arbitrary 

 Crea un contesto di continuazione delle attività che consente al runtime di scegliere il contesto di esecuzione per una continuazione.  
  
```
static task_continuation_context use_arbitrary();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un contesto di continuazione di attività che rappresenta una posizione arbitraria.  
  
### <a name="remarks"></a>Note  
 Quando viene utilizzato il contesto di continuazione la continuazione verrà eseguita in un contesto in cui che il runtime sceglie anche se l'attività precedente è un apartment a conoscenza.  
  
 `use_arbitrary` Consente di disattivare il comportamento predefinito per una continuazione per un'attività di conoscenza apartment creata in un STA.  
  
 Questo metodo è disponibile solo per App di Windows Runtime.  
  
##  <a name="use_current"></a> use_current 

 Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione corrente.  
  
```
static task_continuation_context use_current();
```  
  
### <a name="return-value"></a>Valore restituito  
 Contesto di esecuzione corrente.  
  
### <a name="remarks"></a>Note  
 Questo metodo acquisisce il contesto del chiamante Windows Runtime in modo che le continuazioni possono essere eseguite nell'apartment a destra.  
  
 Il valore restituito da `use_current` può essere utilizzato per indicare che la continuazione deve essere eseguito nel contesto acquisito (vs STA MTA) indipendentemente dal fatto che l'attività precedente è un apartment compatibile con il Runtime. Un'attività è un'attività che annulla il wrapping Windows Runtime apartment `IAsyncInfo` interfaccia o un'attività che discende da tale attività.  
  
 Questo metodo è disponibile solo per App di Windows Runtime.  
  
##  <a name="use_default"></a> use_default 

 Crea il contesto di continuazione di attività predefinito.  
  
```
static task_continuation_context use_default();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il contesto di continuazione predefinite.  
  
### <a name="remarks"></a>Note  
 Viene utilizzato il contesto predefinito se non si specifica un contesto di continuazione quando si chiama il `then` metodo. In applicazioni di Windows per Windows 7 e versioni precedenti, nonché le applicazioni desktop in Windows 8 e versioni successive, il runtime determina cui continuazioni di attività non verranno eseguita. Tuttavia, in un'app di Windows Runtime, il contesto di continuazione predefinite per una continuazione per un'attività di supporto apartment è apartment dove `then` viene richiamato.  
  
 Un'attività è un'attività che annulla il wrapping Windows Runtime apartment `IAsyncInfo` interfaccia o un'attività che discende da tale attività. Di conseguenza, se si pianifica una continuazione per un'attività di supporto apartment in un Apartment di Runtime di Windows, la continuazione verrà eseguita in tale STA.  
  
 Una continuazione di un'attività di conoscenza apartment non verrà eseguiti in un contesto in cui che il Runtime sceglie.  

## <a name="use_synchronous_execution"></a> task_continuation_context::use_synchronous_execution  
Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione sincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static task_continuation_context use_synchronous_execution();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il contesto di esecuzione sincrona.  
  
## <a name="remarks"></a>Note  
 Il `use_synchronous_execution` metodo forza l'attività di continuazione da eseguire in modo sincrono nel contesto, che causa il completamento dell'attività precedente.  
  
 Se l'attività precedente è già completato quando la continuazione è connessa, la continuazione viene eseguita in modo sincrono nel contesto in cui si collega la continuazione.  
  
 
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
