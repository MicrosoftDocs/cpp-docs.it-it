---
title: "Classe Module::ReleaseNotifier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::ReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseNotifier (classe)"
ms.assetid: 17249cd1-4d88-42e3-8146-da9e942d12bd
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe Module::ReleaseNotifier
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class ReleaseNotifier;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Releasenotifier:: ~ ReleaseNotifier distruttore](../windows/module-releasenotifier-tilde-releasenotifier-destructor.md)|Deinitializes l'istanza corrente della classe Module.|  
|[Costruttore Module::ReleaseNotifier::ReleaseNotifier](../windows/module-releasenotifier-releasenotifier-constructor.md)|Inizializza una nuova istanza della classe Module.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Releasenotifier:: Invoke (metodo)](../windows/module-releasenotifier-invoke-method.md)|Quando implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.|  
|[Module::ReleaseNotifier::Release](../windows/module-releasenotifier-release.md)|Elimina l'oggetto Module corrente se l'oggetto è stato costruito con un parametro di `true`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ReleaseNotifier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)