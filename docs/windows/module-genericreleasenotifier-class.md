---
title: "Classe Module::GenericReleaseNotifier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::GenericReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GenericReleaseNotifier (classe)"
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe Module::GenericReleaseNotifier
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore dell'evento è indicato da un'espressione lambda, funtore o puntatore a funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename T  
>  
class GenericReleaseNotifier : public ReleaseNotifier;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo del membro dati che contiene il percorso del gestore eventi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier](../windows/module-genericreleasenotifier-genericreleasenotifier-constructor.md)|Inizializza una nuova istanza della classe genericreleasenotifier.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Genericreleasenotifier:: Invoke (metodo)](../windows/module-genericreleasenotifier-invoke-method.md)|Chiama il gestore dell'evento associato all'oggetto genericreleasenotifier corrente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati Module::GenericReleaseNotifier::callback_](../windows/module-genericreleasenotifier-callback-data-member.md)|Contiene l'espressione lambda, funtore o puntatore a funzione gestore associato all'oggetto genericreleasenotifier corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ReleaseNotifier`  
  
 `GenericReleaseNotifier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)