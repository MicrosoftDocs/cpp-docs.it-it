---
title: Interfacce dell'oggetto comando | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- command object interfaces [C++]
- command objects [OLE DB]
- OLE DB [C++], command object interfaces
ms.assetid: dacff5ae-252c-4f20-9ad7-4e602cc48536
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3d83f0a14562985386f0f1f75cfcd99518fea6f5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-object-interfaces"></a>Interfacce dell'oggetto Command
L'oggetto comando Usa il `IAccessor` interfaccia per specificare le associazioni di parametri. Il consumer chiama `IAccessor::CreateAccessor`, passando una matrice di `DBBINDING` strutture. `DBBINDING`contiene informazioni sulle associazioni di colonna (ad esempio tipo e lunghezza). Il provider riceve le strutture e determina come devono essere trasferiti i dati e se le conversioni sono necessarie.  
  
 Il `ICommandText` interfaccia fornisce un modo per specificare un comando di testo. Il `ICommandProperties` interfaccia gestisce tutte le proprietà di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)