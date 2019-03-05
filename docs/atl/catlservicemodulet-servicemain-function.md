---
title: 'Funzione CAtlServiceModuleT::'
ms.date: 11/04/2016
f1_keywords:
- ServiceMain
- CServiceModule::ServiceMain
- CServiceModule.ServiceMain
helpviewer_keywords:
- ServiceMain method
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
ms.openlocfilehash: 32bdea1eb39c91ddb58def72bd16acc2f16ab936
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295422"
---
# <a name="catlservicemoduletservicemain-function"></a>Funzione CAtlServiceModuleT::

Gestione controllo servizi (SCM) chiama `ServiceMain` quando si apre l'applicazione servizi del Pannello di controllo, selezionare il servizio e fare clic su **avviare**.

Dopo il gestore SCM chiama `ServiceMain`, un servizio necessario dare il gestore SCM una funzione del gestore. Questa funzione consente a Gestione controllo servizi ottenere lo stato del servizio e passare le istruzioni specifiche (ad esempio, la sospensione o l'arresto). Gestione controllo servizi ottiene questa funzione quando il servizio ha esito positivo `_Handler` alla funzione API Win32 [RegisterServiceCtrlHandler](/windows/desktop/api/winsvc/nf-winsvc-registerservicectrlhandlera). (`_Handler` è una funzione membro statico che chiama la funzione membro non statiche [gestore](../atl/reference/catlservicemodulet-class.md#handler).)

All'avvio, un servizio deve anche informare il gestore SCM del relativo stato corrente. A tale scopo, alla funzione API Win32, passato SERVICE_START_PENDING [SetServiceStatus](/windows/desktop/api/winsvc/nf-winsvc-setservicestatus).

`ServiceMain` quindi chiama `CAtlExeModuleT::InitializeCom`, che chiama la funzione API Win32 [CoInitializeEx](/windows/desktop/api/combaseapi/nf-combaseapi-coinitializeex). Per impostazione predefinita, `InitializeCom` passa il flag COINIT_MULTITHREADED alla funzione. Questo flag indica che il programma deve essere un server a thread libero.

A questo punto, `CAtlServiceModuleT::Run` viene chiamato per eseguire il lavoro principale del servizio. `Run` continua l'esecuzione fino a quando il servizio viene arrestato.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)<br/>
[CAtlServiceModuleT::ServiceMain](../atl/reference/catlservicemodulet-class.md#servicemain)
