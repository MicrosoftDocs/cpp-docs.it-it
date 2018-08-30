---
title: Interfacce dell'oggetto di origine dati | Microsoft Docs
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
ms.openlocfilehash: 25fca5e7e51789aceef8fb92cf48cc238a8e26fa
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43195997"
---
# <a name="data-source-object-interfaces"></a>Interfacce dell'oggetto origine dati
Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto origine dati.  
  
|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|`IDBCreateSession`|Obbligatorio|Yes|  
|`IDBInitialize`|Obbligatorio|Yes|  
|`IDBProperties`|Obbligatorio|Yes|  
|[IPersist](/windows/desktop/api/objidl/nn-objidl-ipersist)|Obbligatorio|Yes|  
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Facoltativo|No|  
|`IDBDataSourceAdmin`|Facoltativo|No|  
|`IDBInfo`|Facoltativo|No|  
|[IPersistFile](/windows/desktop/api/objidl/nn-objidl-ipersistfile)|Facoltativo|No|  
|`ISupportErrorInfo`|Facoltativo|No|  
  
 L'origine dati oggetto implementa la `IDBProperties`, `IDBInitialize`, e `IDBCreateSession` interfacce attraverso l'ereditarietà. È possibile scegliere di supportare funzionalità aggiuntive grazie all'eredità o che non eredita da una di queste classi di implementazione. Se si desidera supportare le `IDBDataSourceAdmin` interfaccia, è necessario ereditare dal `IDBDataSourceAdminImpl` classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)