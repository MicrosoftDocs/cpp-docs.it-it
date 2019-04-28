---
title: Interfacce dell'oggetto Command
ms.date: 10/24/2018
helpviewer_keywords:
- command object interfaces [C++]
- command objects [OLE DB]
- OLE DB [C++], command object interfaces
ms.assetid: dacff5ae-252c-4f20-9ad7-4e602cc48536
ms.openlocfilehash: 755c44cf8d0cb5bf5066197bfd0ead3e0f25e1f9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62216369"
---
# <a name="command-object-interfaces"></a>Interfacce dell'oggetto Command

L'oggetto comando Usa il `IAccessor` interfaccia per specificare le associazioni di parametro. Il consumer chiama `IAccessor::CreateAccessor`, passando una matrice di `DBBINDING` strutture. `DBBINDING` contiene informazioni sulle associazioni di colonna (ad esempio tipo e lunghezza). Il provider riceve le strutture e determina come devono essere trasferiti i dati e se sono necessarie conversioni.

Il `ICommandText` interfaccia fornisce un modo per specificare un comando di testo. Il `ICommandProperties` interfaccia gestisce tutte le proprietà dei comandi.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
