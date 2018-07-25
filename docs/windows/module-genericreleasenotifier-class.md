---
title: 'Classe Module:: genericreleasenotifier | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::GenericReleaseNotifier
dev_langs:
- C++
helpviewer_keywords:
- GenericReleaseNotifier class
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c3ba58e08bac36d905fbf874546d7791f2aa3fcb
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33882008"
---
# <a name="modulegenericreleasenotifier-class"></a>Classe Module::GenericReleaseNotifier
Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto del modulo corrente. Il gestore eventi viene specificato in un'espressione lambda, funtore o puntatore a funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
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
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)