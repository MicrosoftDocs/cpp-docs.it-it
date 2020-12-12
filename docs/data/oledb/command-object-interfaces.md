---
description: 'Altre informazioni su: interfacce oggetto comando'
title: Interfacce per oggetti Command
ms.date: 10/24/2018
helpviewer_keywords:
- command object interfaces [C++]
- command objects [OLE DB]
- OLE DB [C++], command object interfaces
ms.assetid: dacff5ae-252c-4f20-9ad7-4e602cc48536
ms.openlocfilehash: 07dce6a71e7afd3a47c63942d48dd78d758103f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307522"
---
# <a name="command-object-interfaces"></a>Interfacce per oggetti Command

L'oggetto Command utilizza l' `IAccessor` interfaccia per specificare le associazioni dei parametri. Il consumer chiama `IAccessor::CreateAccessor` , passando una matrice di `DBBINDING` strutture. `DBBINDING` contiene informazioni sulle associazioni di colonne, ad esempio tipo e lunghezza. Il provider riceve le strutture e determina il modo in cui devono essere trasferiti i dati e se sono necessarie conversioni.

L' `ICommandText` interfaccia fornisce un modo per specificare un comando di testo. L' `ICommandProperties` interfaccia gestisce tutte le proprietà dei comandi.

## <a name="see-also"></a>Vedi anche

[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
