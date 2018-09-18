---
title: 'Funzione CAtlServiceModuleT:: | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- ServiceMain
- CServiceModule::ServiceMain
- CServiceModule.ServiceMain
dev_langs:
- C++
helpviewer_keywords:
- ServiceMain method
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ae357caad88e128fe9f3742887781d0096efe2c9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46058588"
---
# <a name="catlservicemoduletservicemain-function"></a>Funzione CAtlServiceModuleT::

Gestione controllo servizi (SCM) chiama `ServiceMain` quando si apre l'applicazione servizi del Pannello di controllo, selezionare il servizio e fare clic su **avviare**.

Dopo il gestore SCM chiama `ServiceMain`, un servizio necessario dare il gestore SCM una funzione del gestore. Questa funzione consente a Gestione controllo servizi ottenere lo stato del servizio e passare le istruzioni specifiche (ad esempio, la sospensione o l'arresto). Gestione controllo servizi ottiene questa funzione quando il servizio ha esito positivo `_Handler` alla funzione API Win32 [RegisterServiceCtrlHandler](/windows/desktop/api/winsvc/nf-winsvc-registerservicectrlhandlera). (`_Handler` è una funzione membro statico che chiama la funzione membro non statiche [gestore](../atl/reference/catlservicemodulet-class.md#handler).)

All'avvio, un servizio deve anche informare il gestore SCM del relativo stato corrente. A tale scopo, alla funzione API Win32, passato SERVICE_START_PENDING [SetServiceStatus](/windows/desktop/api/winsvc/nf-winsvc-setservicestatus).

`ServiceMain` quindi chiama `CAtlExeModuleT::InitializeCom`, che chiama la funzione API Win32 [CoInitializeEx](/windows/desktop/api/combaseapi/nf-combaseapi-coinitializeex). Per impostazione predefinita, `InitializeCom` passa il flag COINIT_MULTITHREADED alla funzione. Questo flag indica che il programma deve essere un server a thread libero.

A questo punto, `CAtlServiceModuleT::Run` viene chiamato per eseguire il lavoro principale del servizio. `Run` continua l'esecuzione fino a quando il servizio viene arrestato.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)<br/>
[CAtlServiceModuleT::](../atl/reference/catlservicemodulet-class.md#servicemain)

