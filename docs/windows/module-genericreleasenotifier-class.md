---
title: 'Classe Module:: genericreleasenotifier | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Module::GenericReleaseNotifier
dev_langs: C++
helpviewer_keywords: GenericReleaseNotifier class
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c87205d1d52c8273ac7eea55fcc5385810349f1f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="modulegenericreleasenotifier-class"></a>Classe Module::GenericReleaseNotifier
Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto del modulo corrente. Il gestore eventi viene specificato in un'espressione lambda, funtore o puntatore a funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename T  
>  
class GenericReleaseNotifier : public ReleaseNotifier;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo del membro dati che contiene il percorso del gestore dell'evento.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Module::GenericReleaseNotifier::GenericReleaseNotifier](../windows/module-genericreleasenotifier-genericreleasenotifier-constructor.md)|Inizializza una nuova istanza della classe genericreleasenotifier.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Module::GenericReleaseNotifier::Invoke](../windows/module-genericreleasenotifier-invoke-method.md)|Chiama il gestore dell'evento associato all'oggetto genericreleasenotifier corrente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati Module::GenericReleaseNotifier::callback_](../windows/module-genericreleasenotifier-callback-data-member.md)|Contiene l'espressione lambda, un funtore o un puntatore a funzione gestore associato all'oggetto genericreleasenotifier corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ReleaseNotifier`  
  
 `GenericReleaseNotifier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)