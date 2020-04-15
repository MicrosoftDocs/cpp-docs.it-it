---
title: Funzione CAtlServiceModuleT::StartCAtlServiceModuleT::Start Function
ms.date: 11/04/2016
helpviewer_keywords:
- Start method
ms.assetid: b5193a23-41bc-42d2-8d55-3eb43dc62238
ms.openlocfilehash: 50054bbb34bcc31a1d11dd8bfab797f98e4e82f0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317283"
---
# <a name="catlservicemoduletstart-function"></a>Funzione CAtlServiceModuleT::StartCAtlServiceModuleT::Start Function

Quando il servizio `_tWinMain` viene `CAtlServiceModuleT::WinMain`eseguito, `CAtlServiceModuleT::Start`chiama , che a sua volta chiama .

`CAtlServiceModuleT::Start`imposta una matrice `SERVICE_TABLE_ENTRY` di strutture che mappano ogni servizio alla relativa funzione di avvio. Questa matrice viene quindi passata alla funzione API Win32, [StartServiceCtrlDispatcher](/windows/win32/api/winsvc/nf-winsvc-startservicectrldispatcherw). In teoria, un file EXE potrebbe gestire `SERVICE_TABLE_ENTRY` più servizi e l'array potrebbe avere più strutture. Attualmente, tuttavia, un servizio generato da ATL supporta un solo servizio per EXE. Pertanto, la matrice ha una singola `_ServiceMain` voce che contiene il nome del servizio e come funzione di avvio. `_ServiceMain`è una funzione `CAtlServiceModuleT` membro statica che chiama `ServiceMain`la funzione membro non statica, .

> [!NOTE]
> `StartServiceCtrlDispatcher` La mancata connessione al gestore di controllo del servizio (SCM) probabilmente significa che il programma non è in esecuzione come servizio. In questo caso, `CAtlServiceModuleT::Run` il programma chiama direttamente in modo che il programma possa essere eseguito come server locale. Per ulteriori informazioni sull'esecuzione del programma come server locale, vedere [Suggerimenti per il debug](../atl/debugging-tips.md).

## <a name="see-also"></a>Vedere anche

[Services](../atl/atl-services.md)<br/>
[CAtlServiceModuleT::Start](../atl/reference/catlservicemodulet-class.md#start)
