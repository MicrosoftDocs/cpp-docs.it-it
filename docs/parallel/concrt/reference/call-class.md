---
title: "Classe call | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::call"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "call (classe)"
ms.assetid: 1521970a-1e9c-4b0c-a681-d18e40976f49
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe call
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco della messaggistica `call` è un oggetto `target_block` multi\-origine ordinato che richiama una funzione specificata quando riceve un messaggio.  
  
## Sintassi  
  
```  
template<  
   class _Type,  
   class _FunctorType = std::tr1::function<void(_Type const&)>  
>  
class call : public target_block<multi_link_registry<ISource<_Type>>>;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di payload dei messaggi propagati in questo blocco.  
  
 `_FunctorType`  
 Firma di funzioni accettabili da questo blocco.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore call::call](../Topic/call::call%20Constructor.md)|Di overload.  Costruisce un blocco della messaggistica `call`.|  
|[Distruttore call::~call](../Topic/call::~call%20Destructor.md)|Distrugge il blocco della messaggistica `call`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo call::process\_input\_messages](../Topic/call::process_input_messages%20Method.md)|Consente di eseguire la funzione di chiamata sui messaggi di input.|  
|[Metodo call::process\_message](../Topic/call::process_message%20Method.md)|Consente di elaborare un messaggio che è stato accettato dal blocco della messaggistica `call`.|  
|[Metodo call::propagate\_message](../Topic/call::propagate_message%20Method.md)|Consente di passare in modo asincrono un messaggio da un blocco `ISource` a quello della messaggistica `call`.  Viene richiamato dal metodo `propagate` se chiamato da un blocco di origine.|  
|[Metodo call::send\_message](../Topic/call::send_message%20Method.md)|Consente di passare in modo sincrono un messaggio da un blocco `ISource` a quello della messaggistica `call`.  Viene richiamato dal metodo `send` se chiamato da un blocco di origine.|  
|[Metodo call::supports\_anonymous\_source](../Topic/call::supports_anonymous_source%20Method.md)|Consente di eseguire l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. \(Override di [ITarget::supports\_anonymous\_source](../Topic/ITarget::supports_anonymous_source%20Method.md)\).|  
  
## Note  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 [ITarget](../../../parallel/concrt/reference/itarget-class.md)  
  
 [target\_block](../../../parallel/concrt/reference/target-block-class.md)  
  
 `call`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe transformer](../../../parallel/concrt/reference/transformer-class.md)