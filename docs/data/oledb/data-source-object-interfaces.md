---
title: Interfacce dell'oggetto origine dati | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- data source objects [C++], interfaces
- data source objects [C++]
- interfaces [C++], OLE DB
- interfaces [C++], list of
- OLE DB provider templates [C++], object interfaces
- OLE DB [C++], interfaces
ms.assetid: 929e100c-c08c-4b64-8437-d8d1357226f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1c8aaed0a9f50e20dba5938b9b37425f4caa2bb1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="data-source-object-interfaces"></a>Interfacce dell'oggetto origine dati
Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto origine dati.  
  
|Interfaccia|Obbligatorio?|Implementata dai modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|`IDBCreateSession`|Obbligatorio|Yes|  
|`IDBInitialize`|Obbligatorio|Yes|  
|`IDBProperties`|Obbligatorio|Yes|  
|[IPersist](http://msdn.microsoft.com/library/windows/desktop/ms688695)|Obbligatorio|Yes|  
|[IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Facoltativo|No|  
|`IDBDataSourceAdmin`|Facoltativo|No|  
|`IDBInfo`|Facoltativo|No|  
|[IPersistFile](http://msdn.microsoft.com/library/windows/desktop/ms687223)|Facoltativo|No|  
|`ISupportErrorInfo`|Facoltativo|No|  
  
 L'origine dati oggetto implementa il `IDBProperties`, `IDBInitialize`, e `IDBCreateSession` interfacce tramite ereditarietà. È possibile scegliere di supportare funzionalità aggiuntive che ereditano o che non eredita da una di queste classi di implementazione. Se si desidera supportare la `IDBDataSourceAdmin` interfaccia, è necessario ereditare la `IDBDataSourceAdminImpl` classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)