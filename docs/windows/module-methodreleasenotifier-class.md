---
title: 'Classe Module:: methodreleasenotifier | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::MethodReleaseNotifier
dev_langs:
- C++
helpviewer_keywords:
- MethodReleaseNotifier class
ms.assetid: 5c2902be-964b-488f-9f1c-adf504995cbc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 217e58f73130922d45f0d303e1e91858e8c2272f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880827"
---
# <a name="modulemethodreleasenotifier-class"></a>Classe Module::MethodReleaseNotifier
Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto del modulo corrente. Il gestore dell'evento è specificato da un oggetto e il relativo membro puntatore al metodo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
class MethodReleaseNotifier : public ReleaseNotifier;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo dell'oggetto la cui funzione membro è il gestore dell'evento.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier](../windows/module-methodreleasenotifier-methodreleasenotifier-constructor.md)|Inizializza una nuova istanza della classe methodreleasenotifier.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Module::MethodReleaseNotifier::Invoke](../windows/module-methodreleasenotifier-invoke-method.md)|Chiama il gestore dell'evento associato all'oggetto methodreleasenotifier corrente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati Module::MethodReleaseNotifier::method_](../windows/module-methodreleasenotifier-method-data-member.md)|Contiene un puntatore al gestore dell'evento per l'oggetto methodreleasenotifier corrente.|  
|[Membro dati Module::MethodReleaseNotifier::object_](../windows/module-methodreleasenotifier-object-data-member.md)|Contiene un puntatore all'oggetto la cui funzione membro è il gestore eventi per l'oggetto methodreleasenotifier corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ReleaseNotifier`  
  
 `MethodReleaseNotifier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)