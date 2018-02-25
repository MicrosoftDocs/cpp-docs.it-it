---
title: Interfacce dell'oggetto origine dati | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c0a045657b80ddaf70792d1c7f617b0e1f7c0b4a
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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