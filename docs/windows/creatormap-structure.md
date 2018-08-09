---
title: CreatorMap (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreatorMap
- implements/Microsoft::WRL::Details::CreatorMap
dev_langs:
- C++
helpviewer_keywords:
- CreatorMap structure
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 173b41c6d36d36b7d8a0f4e7b024e845eec6ae4a
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650505"
---
# <a name="creatormap-structure"></a>CreatorMap (struttura)
Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
struct CreatorMap;  
```  
  
## <a name="remarks"></a>Note  
 Contiene informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.  
  
 **CreatorMap** contiene le informazioni seguenti:  
  
-   Come inizializzare, registrare e annullare la registrazione di oggetti.  
  
-   Come confrontare i dati di attivazione a seconda di una factory di Windows Runtime o COM classica.  
  
-   Informazioni sul nome factory della cache e il server per un'interfaccia.  
  
## <a name="members"></a>Membri  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati CreatorMap::activationId](../windows/creatormap-activationid-data-member.md)|Rappresenta un ID di oggetto identificato da un ID di classe COM classico o un nome di Windows Runtime.|  
|[Membro dati CreatorMap::factoryCache](../windows/creatormap-factorycache-data-member.md)|Contiene il puntatore per la cache della factory per la **CreatorMap**.|  
|[Membro dati CreatorMap::factoryCreator](../windows/creatormap-factorycreator-data-member.md)|Crea una factory per l'oggetto specificato **CreatorMap**.|  
|[Membro dati CreatorMap::serverName](../windows/creatormap-servername-data-member.md)|Archivia il nome del server per il **CreatorMap**.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CreatorMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)