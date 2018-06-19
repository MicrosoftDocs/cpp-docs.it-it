---
title: CreatorMap (struttura) | Documenti Microsoft
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
ms.openlocfilehash: a6113737d7463354ffa273ced61b190246f63a83
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33873284"
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
 **Intestazione:** Implements  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)