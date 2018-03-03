---
title: CreatorMap (struttura) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreatorMap
- implements/Microsoft::WRL::Details::CreatorMap
dev_langs:
- C++
helpviewer_keywords:
- CreatorMap structure
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a941f052527b3617772bcb18b2092fdc35ea3a22
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creatormap-structure"></a>CreatorMap (struttura)
Supporta l'infrastruttura di libreria di modelli di Windows Runtime C++ e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CreatorMap;  
```  
  
## <a name="remarks"></a>Note  
 Contiene informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.  
  
 CreatorMap contiene le informazioni seguenti:  
  
-   Come inizializzare, registrare e annullare la registrazione di oggetti.  
  
-   Come confrontare i dati di attivazione in base a una factory classica COM o Windows Runtime.  
  
-   Informazioni sul nome factory della cache e il server per un'interfaccia.  
  
## <a name="members"></a>Membri  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati CreatorMap::activationId](../windows/creatormap-activationid-data-member.md)|Rappresenta un ID di oggetto che è identificato da un ID di classe COM classico o un nome di Windows Runtime.|  
|[Membro dati CreatorMap::factoryCache](../windows/creatormap-factorycache-data-member.md)|Archivia il puntatore per la cache della factory per la CreatorMap.|  
|[Membro dati CreatorMap::factoryCreator](../windows/creatormap-factorycreator-data-member.md)|Crea una factory per il CreatorMap specificato.|  
|[Membro dati CreatorMap::serverName](../windows/creatormap-servername-data-member.md)|Archivia il nome del server per il CreatorMap.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CreatorMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)