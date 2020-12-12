---
description: 'Altre informazioni su: funzione funzione CAtlServiceModuleT:: Start'
title: 'Funzione funzione CAtlServiceModuleT:: Start'
ms.date: 11/04/2016
helpviewer_keywords:
- Start method
ms.assetid: b5193a23-41bc-42d2-8d55-3eb43dc62238
ms.openlocfilehash: cfdae47f88c7957a4470da3129f3d3e071614276
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148317"
---
# <a name="catlservicemoduletstart-function"></a>Funzione funzione CAtlServiceModuleT:: Start

Quando il servizio viene eseguito, `_tWinMain` chiama `CAtlServiceModuleT::WinMain` , che a sua volta chiama `CAtlServiceModuleT::Start` .

`CAtlServiceModuleT::Start` Configura una matrice di `SERVICE_TABLE_ENTRY` strutture che mappano ogni servizio alla relativa funzione di avvio. Questa matrice viene quindi passata alla funzione API Win32 [Impossibile eseguire StartServiceCtrlDispatcher](/windows/win32/api/winsvc/nf-winsvc-startservicectrldispatcherw). In teoria, un file EXE potrebbe gestire più servizi e la matrice potrebbe avere più `SERVICE_TABLE_ENTRY` strutture. Attualmente, tuttavia, un servizio generato da ATL supporta solo un servizio per ogni file EXE. Pertanto, la matrice ha una singola voce che contiene il nome del servizio e `_ServiceMain` come funzione di avvio. `_ServiceMain` è una funzione membro statica di `CAtlServiceModuleT` che chiama la funzione membro non statica `ServiceMain` .

> [!NOTE]
> L'errore di `StartServiceCtrlDispatcher` per la connessione a gestione controllo servizi (SCM) significa probabilmente che il programma non è in esecuzione come servizio. In questo caso, il programma chiama `CAtlServiceModuleT::Run` direttamente, in modo che il programma possa essere eseguito come server locale. Per ulteriori informazioni sull'esecuzione del programma come server locale, vedere Suggerimenti per il [debug](../atl/debugging-tips.md).

## <a name="see-also"></a>Vedi anche

[Services](../atl/atl-services.md)<br/>
[Funzione CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)
