---
title: Interfacce dell'oggetto di comando | Microsoft Docs
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
ms.openlocfilehash: 8176bad2921edd22edaab1688e38bc7de275b0bb
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50074800"
---
# <a name="command-object-interfaces"></a>Interfacce dell'oggetto Command

L'oggetto comando Usa il `IAccessor` interfaccia per specificare le associazioni di parametro. Il consumer chiama `IAccessor::CreateAccessor`, passando una matrice di `DBBINDING` strutture. `DBBINDING` contiene informazioni sulle associazioni di colonna (ad esempio tipo e lunghezza). Il provider riceve le strutture e determina come devono essere trasferiti i dati e se sono necessarie conversioni.

Il `ICommandText` interfaccia fornisce un modo per specificare un comando di testo. Il `ICommandProperties` interfaccia gestisce tutte le proprietà dei comandi.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)