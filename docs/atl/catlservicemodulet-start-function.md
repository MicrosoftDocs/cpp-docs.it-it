---
title: 'Funzione funzione CAtlServiceModuleT:: Start'
ms.date: 11/04/2016
helpviewer_keywords:
- Start method
ms.assetid: b5193a23-41bc-42d2-8d55-3eb43dc62238
ms.openlocfilehash: e6de15f40e89bfffba504db04ee7a16b2a68cac9
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491671"
---
# <a name="catlservicemoduletstart-function"></a>Funzione funzione CAtlServiceModuleT:: Start

Quando il servizio viene eseguito, `_tWinMain` chiama `CAtlServiceModuleT::WinMain`, che a sua volta `CAtlServiceModuleT::Start`chiama.

`CAtlServiceModuleT::Start`Configura una matrice di `SERVICE_TABLE_ENTRY` strutture che mappano ogni servizio alla relativa funzione di avvio. Questa matrice viene quindi passata alla funzione API Win32 [Impossibile eseguire StartServiceCtrlDispatcher](/windows/win32/api/winsvc/nf-winsvc-startservicectrldispatcherw). In teoria, un file exe potrebbe gestire più servizi e la matrice potrebbe avere `SERVICE_TABLE_ENTRY` più strutture. Attualmente, tuttavia, un servizio generato da ATL supporta solo un servizio per ogni file EXE. Pertanto, la matrice ha una singola voce che contiene il nome del servizio `_ServiceMain` e come funzione di avvio. `_ServiceMain`è una funzione membro statica di `CAtlServiceModuleT` che chiama la `ServiceMain`funzione membro non statica.

> [!NOTE]
>  L'errore `StartServiceCtrlDispatcher` di per la connessione a gestione controllo servizi (SCM) significa probabilmente che il programma non è in esecuzione come servizio. In questo caso, il programma chiama `CAtlServiceModuleT::Run` direttamente, in modo che il programma possa essere eseguito come server locale. Per ulteriori informazioni sull'esecuzione del programma come server locale, vedere Suggerimenti per il [debug](../atl/debugging-tips.md).

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)<br/>
[Funzione CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)
