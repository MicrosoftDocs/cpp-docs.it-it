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
ms.openlocfilehash: 957fe69b413496af46aa8e19afd45ee41e58b490
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49081773"
---
# <a name="session-object-interfaces"></a>Interfacce dell'oggetto Session

Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto di sessione.  
  
|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IGetDataSource](/previous-versions/windows/desktop/ms709721)|Obbligatorio|Yes|  
|[IOpenRowset](/previous-versions/windows/desktop/ms716946)|Obbligatorio|Yes|  
|[ISessionProperties](/previous-versions/windows/desktop/ms713721)|Obbligatorio|Yes|  
|[IAlterIndex](/previous-versions/windows/desktop/ms714943)|Facoltativo|No|  
|[IAlterTable](/previous-versions/windows/desktop/ms719764)|Facoltativo|No|  
|[IBindResource](/previous-versions/windows/desktop/ms714936)|Facoltativo|No|  
|[ICreateRow](/previous-versions/windows/desktop/ms716832)|Facoltativo|No|  
|[IDBCreateCommand](/previous-versions/windows/desktop/ms711625)|Facoltativo|Yes|  
|[IDBSchemaRowset](/previous-versions/windows/desktop/ms713686)|Facoltativo|Yes|  
|[IIndexDefinition](/previous-versions/windows/desktop/ms711593)|Facoltativo|No|  
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816)|Facoltativo|Yes|  
|[ITableCreation](/previous-versions/windows/desktop/ms713639)|Facoltativo|No|  
|[ITableDefinition](/previous-versions/windows/desktop/ms714277)|Facoltativo|No|  
|[ITableDefinitionWithConstraints](/previous-versions/windows/desktop/ms720947)|Facoltativo|No|  
|[ITransaction](/previous-versions/windows/desktop/ms723053)|Facoltativo|No|  
|[ITransactionJoin](/previous-versions/windows/desktop/ms718071)|Facoltativo|No|  
|[Interfaccia ITransactionLocal](/previous-versions/windows/desktop/ms714893)|Facoltativo|No|  
|[ITransactionObject](/previous-versions/windows/desktop/ms713659)|Facoltativo|No|  
  
L'oggetto sessione crea un oggetto set di righe. Se il provider supporta i comandi, la sessione crea anche un oggetto command (`CCommand`, l'implementazione di OLE DB `TCommand`). L'oggetto comando implementa il `ICommand` interfaccia e viene utilizzato il `ICommand::Execute` metodo per eseguire comandi nel set di righe, come illustrato nella figura seguente.  
  
![Diagramma concettuale del provider](../../data/oledb/media/vc4u551.gif "vc4u551")  
  
## <a name="see-also"></a>Vedere anche  

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)