---
title: Interfacce dell'oggetto Session | Documenti Microsoft
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
- session objects [OLE DB]
- session objects [OLE DB], interfaces
- OLE DB provider templates, object interfaces
- interfaces, session object
- interfaces, list of
ms.assetid: ac01a958-6dde-4bd7-8b63-94459e488335
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 71ac196508fc5b5054015bdc161476b75af2a598
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="session-object-interfaces"></a>Interfacce dell'oggetto Session
Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto di sessione.  
  
|Interfaccia|Obbligatorio?|Implementata dai modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IGetDataSource](https://msdn.microsoft.com/en-us/library/ms709721.aspx)|Obbligatorio|Yes|  
|[IOpenRowset](https://msdn.microsoft.com/en-us/library/ms716946.aspx)|Obbligatorio|Yes|  
|[ISessionProperties](https://msdn.microsoft.com/en-us/library/ms713721.aspx)|Obbligatorio|Yes|  
|[IAlterIndex](https://msdn.microsoft.com/en-us/library/ms714943.aspx)|Facoltativo|No|  
|[IAlterTable](https://msdn.microsoft.com/en-us/library/ms719764.aspx)|Facoltativo|No|  
|[IBindResource](https://msdn.microsoft.com/en-us/library/ms714936.aspx)|Facoltativo|No|  
|[ICreateRow](https://msdn.microsoft.com/en-us/library/ms716832.aspx)|Facoltativo|No|  
|[IDBCreateCommand](https://msdn.microsoft.com/en-us/library/ms711625.aspx)|Facoltativo|Yes|  
|[IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx)|Facoltativo|Yes|  
|[IIndexDefinition](https://msdn.microsoft.com/en-us/library/ms711593.aspx)|Facoltativo|No|  
|[ISupportErrorInfo](https://msdn.microsoft.com/en-us/library/ms715816.aspx)|Facoltativo|Yes|  
|[ITableCreation](https://msdn.microsoft.com/en-us/library/ms713639.aspx)|Facoltativo|No|  
|[ITableDefinition](https://msdn.microsoft.com/en-us/library/ms714277.aspx)|Facoltativo|No|  
|[ITableDefinitionWithConstraints](https://msdn.microsoft.com/en-us/library/ms720947.aspx)|Facoltativo|No|  
|[ITransaction](https://msdn.microsoft.com/en-us/library/ms723053.aspx)|Facoltativo|No|  
|[ITransactionJoin](https://msdn.microsoft.com/en-us/library/ms718071.aspx)|Facoltativo|No|  
|[ITransactionLocal](https://msdn.microsoft.com/en-us/library/ms714893.aspx)|Facoltativo|No|  
|[ITransactionObject](https://msdn.microsoft.com/en-us/library/ms713659.aspx)|Facoltativo|No|  
  
 L'oggetto sessione crea un oggetto set di righe. Se il provider supporta i comandi, la sessione crea anche un oggetto command (`CCommand`, implementazione di OLE DB **implementa TCommand**). Implementa l'oggetto comando il `ICommand` interfaccia e utilizza il `ICommand::Execute` metodo per eseguire comandi nel set di righe, come illustrato nella figura seguente.  
  
 ![Diagramma concettuale del provider](../../data/oledb/media/vc4u551.gif "vc4u551")  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)