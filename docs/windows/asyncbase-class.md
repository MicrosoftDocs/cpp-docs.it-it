---
title: "Classe AsyncBase | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsyncBase (classe)"
ms.assetid: 64259b9b-f427-4ffd-a611-e7a2f82362b2
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe AsyncBase
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Implementa la macchina a stati asincrona di Windows Runtime.  
  
## Sintassi  
  
```  
  
template <  
   typename TComplete,  
   typename TProgress = Details::Nil,  
   AsyncResultType resultType = SingleResult  
>  
class AsyncBase : public AsyncBase< TComplete, Details::Nil, resultType >;  
  
template <  
   typename TComplete,  
   AsyncResultType resultType  
>  
class AsyncBase< TComplete, Details::Nil, resultType > : public Microsoft::WRL::Implements< IAsyncInfo >;  
```  
  
#### Parametri  
 `TComplete`  
 Un gestore di eventi che è chiamato quando un'operazione asincrona viene completata.  
  
 `TProgress`  
 Un gestore eventi che viene chiamato quando un'operazione asincrona di esecuzione indica lo stato corrente dell'operazione.  
  
 `resultType`  
 Uno dei valori enumerati [AsyncResultType](../windows/asyncresulttype-enumeration.md).  Per impostazione predefinita, SingleResult.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore AsyncBase::AsyncBase](../windows/asyncbase-asyncbase-constructor.md)|Inizializza un'istanza della classe AsyncBase.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo AsyncBase::Cancel](../windows/asyncbase-cancel-method.md)|Annulla un'operazione asincrona.|  
|[Metodo AsyncBase::Close](../windows/asyncbase-close-method.md)|Chiude l'operazione asincrona.|  
|[Metodo AsyncBase::FireCompletion](../windows/asyncbase-firecompletion-method.md)|Richiama il gestore eventi di completamento, o reimposta il delegato interno di stato.|  
|[Metodo AsyncBase::FireProgress](../windows/asyncbase-fireprogress-method.md)|Richiama il gestore eventi dello stato di avanzamento corrente.|  
|[Metodo AsyncBase::get\_ErrorCode](../windows/asyncbase-get-errorcode-method.md)|Recupera il codice di errore per l'operazione asincrona corrente.|  
|[Metodo AsyncBase::get\_Id](../windows/asyncbase-get-id-method.md)|Richiama la gestione dell'operazione asincrona.|  
|[Metodo AsyncBase::get\_Status](../windows/asyncbase-get-status-method.md)|Ritorna un valore che indica lo stato dell'operazione asincrona.|  
|[Metodo AsyncBase::GetOnComplete](../windows/asyncbase-getoncomplete-method.md)|Copia l'indirizzo del gestore eventi dello stato di completamento corrente alla variabile specificata.|  
|[Metodo AsyncBase::GetOnProgress](../windows/asyncbase-getonprogress-method.md)|Copia l'indirizzo del gestore eventi dello stato di avanzamento corrente alla variabile specificata.|  
|[Metodo AsyncBase::put\_Id](../windows/asyncbase-put-id-method.md)|Setta la gestione dell'operazione asincrona.|  
|[Metodo AsyncBase::PutOnComplete](../windows/asyncbase-putoncomplete-method.md)|Imposta l'indirizzo del gestore eventi di stato al valore specificato.|  
|[Metodo AsyncBase::PutOnProgress](../windows/asyncbase-putonprogress-method.md)|Imposta l'indirizzo del gestore eventi di stato al valore specificato.|  
|[Metodo AsyncBase::Start](../windows/asyncbase-start-method.md)|Icomincia l'operazione asincrona.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo AsyncBase::CheckValidStateForDelegateCall](../windows/asyncbase-checkvalidstatefordelegatecall-method.md)|Verifica se le proprietà di delegati possono essere modificate nello stato corrente asincrono.|  
|[Metodo AsyncBase::CheckValidStateForResultsCall](../windows/asyncbase-checkvalidstateforresultscall-method.md)|Verifica se i risultati di un'operazione asincrona possono essere raccolti nello stato corrente asincrono.|  
|[Metodo AsyncBase::ContinueAsyncOperation](../windows/asyncbase-continueasyncoperation-method.md)|Determina se l'operazione asincrona debba continuare o debba arrestarsi.|  
|[Metodo AsyncBase::CurrentStatus](../windows/asyncbase-currentstatus-method.md)|Ottiene lo stato dell'operazione asincrona corrente.|  
|[Metodo AsyncBase::ErrorCode](../windows/asyncbase-errorcode-method.md)|Recupera il codice di errore per l'operazione asincrona corrente.|  
|[Metodo AsyncBase::OnCancel](../windows/asyncbase-oncancel-method.md)|Se sottoposto a override in una classe derivata, annulla un'operazione asincrona .|  
|[Metodo AsyncBase::OnClose](../windows/asyncbase-onclose-method.md)|Se sottoposto a override in una classe derivata, chiude un'operazione asincrona.|  
|[Metodo AsyncBase::OnStart](../windows/asyncbase-onstart-method.md)|Se sottoposto a override in una classe derivata, avvia un'operazione asincrona .|  
|[Metodo AsyncBase::TryTransitionToCompleted](../windows/asyncbase-trytransitiontocompleted-method.md)|Indica se la corrente operazione asincrona ha finito.|  
|[Metodo AsyncBase::TryTransitionToError](../windows/asyncbase-trytransitiontoerror-method.md)|Indica se il codice di errore specificato può modificare lo stato di errore interno.|  
  
## Gerarchia di ereditarietà  
 `AsyncBase`  
  
 `AsyncBase`  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)