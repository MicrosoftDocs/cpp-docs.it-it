---
title: Interfacce per oggetti Session | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- session objects [OLE DB]
- session objects [OLE DB], interfaces
- OLE DB provider templates, object interfaces
- interfaces, session object
- interfaces, list of
ms.assetid: ac01a958-6dde-4bd7-8b63-94459e488335
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 01d08fb35a1e954aad07153f63ad3ed34282570d
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39337846"
---
# <a name="session-object-interfaces"></a>Interfacce dell'oggetto Session
Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto di sessione.  
  
|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IGetDataSource](https://msdn.microsoft.com/library/ms709721.aspx)|Obbligatorio|Yes|  
|[IOpenRowset](https://msdn.microsoft.com/library/ms716946.aspx)|Obbligatorio|Yes|  
|[ISessionProperties](https://msdn.microsoft.com/library/ms713721.aspx)|Obbligatorio|Yes|  
|[IAlterIndex](https://msdn.microsoft.com/library/ms714943.aspx)|Facoltativo|No|  
|[IAlterTable](https://msdn.microsoft.com/library/ms719764.aspx)|Facoltativo|No|  
|[IBindResource](https://msdn.microsoft.com/library/ms714936.aspx)|Facoltativo|No|  
|[ICreateRow](https://msdn.microsoft.com/library/ms716832.aspx)|Facoltativo|No|  
|[IDBCreateCommand](https://msdn.microsoft.com/library/ms711625.aspx)|Facoltativo|Yes|  
|[IDBSchemaRowset](https://msdn.microsoft.com/library/ms713686.aspx)|Facoltativo|Yes|  
|[IIndexDefinition](https://msdn.microsoft.com/library/ms711593.aspx)|Facoltativo|No|  
|[ISupportErrorInfo](https://msdn.microsoft.com/library/ms715816.aspx)|Facoltativo|Yes|  
|[ITableCreation](https://msdn.microsoft.com/library/ms713639.aspx)|Facoltativo|No|  
|[ITableDefinition](https://msdn.microsoft.com/library/ms714277.aspx)|Facoltativo|No|  
|[ITableDefinitionWithConstraints](https://msdn.microsoft.com/library/ms720947.aspx)|Facoltativo|No|  
|[ITransaction](https://msdn.microsoft.com/library/ms723053.aspx)|Facoltativo|No|  
|[ITransactionJoin](https://msdn.microsoft.com/library/ms718071.aspx)|Facoltativo|No|  
|[Interfaccia ITransactionLocal](https://msdn.microsoft.com/library/ms714893.aspx)|Facoltativo|No|  
|[ITransactionObject](https://msdn.microsoft.com/library/ms713659.aspx)|Facoltativo|No|  
  
 L'oggetto sessione crea un oggetto set di righe. Se il provider supporta i comandi, la sessione crea anche un oggetto command (`CCommand`, l'implementazione di OLE DB `TCommand`). L'oggetto comando implementa il `ICommand` interfaccia e viene utilizzato il `ICommand::Execute` metodo per eseguire comandi nel set di righe, come illustrato nella figura seguente.  
  
 ![Diagramma concettuale del provider](../../data/oledb/media/vc4u551.gif "vc4u551")  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)