---
title: 'Funzione CAtlServiceModuleT:: | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ServiceMain
- CServiceModule::ServiceMain
- CServiceModule.ServiceMain
dev_langs:
- C++
helpviewer_keywords:
- ServiceMain method
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 633e9bc4689ced93e1c22151b32654f7ae9d7ece
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlservicemoduletservicemain-function"></a>Funzione CAtlServiceModuleT::
Gestione controllo servizi (SCM) chiama `ServiceMain` quando si apre l'applicazione servizi del Pannello di controllo, selezionare il servizio e fare clic su **avviare**.  
  
 Dopo il server chiama `ServiceMain`, un servizio necessario assegnare SCM una funzione del gestore. Questa funzione consente di ottenere lo stato del servizio e passare le istruzioni specifiche (ad esempio, la sospensione o arresto) Gestione controllo servizi. Gestione controllo servizi ottiene questa funzione quando il servizio passa **handler** alla funzione API Win32, [RegisterServiceCtrlHandler](http://msdn.microsoft.com/library/windows/desktop/ms685054). (**Handler** è una funzione membro statico che chiama la funzione membro non statico [gestore](../atl/reference/catlservicemodulet-class.md#handler).)  
  
 All'avvio, un servizio deve inoltre informare il server di stato corrente. Questa operazione viene eseguita passando **SERVICE_START_PENDING** alla funzione API Win32, [SetServiceStatus](http://msdn.microsoft.com/library/windows/desktop/ms686241).  
  
 `ServiceMain`chiama quindi `CAtlExeModuleT::InitializeCom`, che chiama la funzione API Win32 [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279). Per impostazione predefinita, `InitializeCom` passa il **COINIT_MULTITHREADED** flag per la funzione. Questo flag indica che il programma deve essere un server a thread libero.  
  
 A questo punto, `CAtlServiceModuleT::Run` viene chiamato per eseguire il lavoro principale del servizio. **Eseguire** continua l'esecuzione fino a quando il servizio viene arrestato.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT::](../atl/reference/catlservicemodulet-class.md#servicemain)

