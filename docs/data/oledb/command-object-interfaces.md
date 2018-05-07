---
title: Interfacce dell'oggetto comando | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- command object interfaces [C++]
- command objects [OLE DB]
- OLE DB [C++], command object interfaces
ms.assetid: dacff5ae-252c-4f20-9ad7-4e602cc48536
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9c597cc30e23ffce2787eac6c13f6ba8c53f96c1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="command-object-interfaces"></a>Interfacce dell'oggetto Command
L'oggetto comando Usa il `IAccessor` interfaccia per specificare le associazioni di parametri. Il consumer chiama `IAccessor::CreateAccessor`, passando una matrice di `DBBINDING` strutture. `DBBINDING` contiene informazioni sulle associazioni di colonna (ad esempio tipo e lunghezza). Il provider riceve le strutture e determina come devono essere trasferiti i dati e se le conversioni sono necessarie.  
  
 Il `ICommandText` interfaccia fornisce un modo per specificare un comando di testo. Il `ICommandProperties` interfaccia gestisce tutte le proprietà di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)