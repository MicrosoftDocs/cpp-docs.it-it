---
title: 'Funzione CAtlServiceModuleT:: | Documenti Microsoft'
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
ms.openlocfilehash: 9936090793890b1e33f0d5e29787d65f378afa84
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="catlservicemoduletservicemain-function"></a>Funzione CAtlServiceModuleT::
Gestione controllo servizi (SCM) chiama `ServiceMain` quando si apre l'applicazione servizi del Pannello di controllo, selezionare il servizio e fare clic su **avviare**.  
  
 Dopo il server chiama `ServiceMain`, un servizio necessario assegnare SCM una funzione del gestore. Questa funzione consente di ottenere lo stato del servizio e passare le istruzioni specifiche (ad esempio, la sospensione o arresto) Gestione controllo servizi. Gestione controllo servizi ottiene questa funzione quando il servizio passa **handler** alla funzione API Win32, [RegisterServiceCtrlHandler](http://msdn.microsoft.com/library/windows/desktop/ms685054). (**Handler** è una funzione membro statico che chiama la funzione membro non statico [gestore](../atl/reference/catlservicemodulet-class.md#handler).)  
  
 All'avvio, un servizio deve inoltre informare il server di stato corrente. Questa operazione viene eseguita passando **SERVICE_START_PENDING** alla funzione API Win32, [SetServiceStatus](http://msdn.microsoft.com/library/windows/desktop/ms686241).  
  
 `ServiceMain` quindi chiama `CAtlExeModuleT::InitializeCom`, che chiama la funzione API Win32 [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279). Per impostazione predefinita, `InitializeCom` passa il **COINIT_MULTITHREADED** flag per la funzione. Questo flag indica che il programma deve essere un server a thread libero.  
  
 A questo punto, `CAtlServiceModuleT::Run` viene chiamato per eseguire il lavoro principale del servizio. **Eseguire** continua l'esecuzione fino a quando non viene arrestato il servizio.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT::](../atl/reference/catlservicemodulet-class.md#servicemain)

