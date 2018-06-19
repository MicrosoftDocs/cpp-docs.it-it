---
title: 'Classe Module:: releasenotifier | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::ReleaseNotifier
dev_langs:
- C++
helpviewer_keywords:
- ReleaseNotifier class
ms.assetid: 17249cd1-4d88-42e3-8146-da9e942d12bd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 76edb403fae12dd8b6221d8bd6ec82424bc5a4f7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878392"
---
# <a name="modulereleasenotifier-class"></a>Classe Module::ReleaseNotifier
Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class ReleaseNotifier;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Distruttore Module::ReleaseNotifier::~ReleaseNotifier](../windows/module-releasenotifier-tilde-releasenotifier-destructor.md)|Deinizializza l'istanza corrente della classe Module:: releasenotifier.|  
|[Costruttore Module::ReleaseNotifier::ReleaseNotifier](../windows/module-releasenotifier-releasenotifier-constructor.md)|Inizializza una nuova istanza della classe Module:: releasenotifier.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Module::ReleaseNotifier::Invoke](../windows/module-releasenotifier-invoke-method.md)|Quando implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.|  
|[Module::ReleaseNotifier::Release](../windows/module-releasenotifier-release.md)|Elimina l'oggetto Module corrente se l'oggetto è stato costruito con un parametro di `true`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ReleaseNotifier`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Module](../windows/module-class.md)