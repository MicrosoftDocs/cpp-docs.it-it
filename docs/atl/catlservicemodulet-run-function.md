---
title: Funzione CAtlServiceModuleT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CServiceModule::Run
- CServiceModule.Run
- CSecurityDescriptor
dev_langs:
- C++
helpviewer_keywords:
- ATL services, security
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7ff3efe9298b7a2c11e7f83ef58640b2947519b8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlservicemoduletrun-function"></a>CAtlServiceModuleT (funzione)
**Eseguire** contiene chiamate al `PreMessageLoop`, `RunMessageLoop`, e `PostMessageLoop`. Dopo la chiamata `PreMessageLoop` Archivia prima l'ID del thread. del servizio Questo ID verrà utilizzato dal servizio per la chiusura inviando un **WM_QUIT** messaggio utilizzando la funzione API Win32, [PostThreadMessage](http://msdn.microsoft.com/library/windows/desktop/ms644946).  
  
 `PreMessageLoop`chiama quindi `InitializeSecurity`. Per impostazione predefinita, `InitializeSecurity` chiamate [CoInitializeSecurity](http://msdn.microsoft.com/library/windows/desktop/ms693736) con il descrittore di sicurezza impostato su NULL, il che significa che qualsiasi utente che disponga dell'accesso all'oggetto.  
  
 Se si desidera il servizio per specificare la propria sicurezza, eseguire l'override `PreMessageLoop` e non chiamare `InitializeSecurity`, COM verrà quindi determinare le impostazioni di sicurezza dal Registro di sistema. È un modo pratico per configurare le impostazioni del Registro di sistema con il [DCOMCNFG](../atl/dcomcnfg.md) utilità illustrato più avanti in questa sezione.  
  
 Dopo aver specificata di sicurezza, l'oggetto è registrato con COM in modo che i nuovi client può connettersi al programma. Infine, il programma indica Gestione controllo servizi (SCM) che è in esecuzione e avvia un ciclo di messaggi. Il programma rimane in esecuzione fino a quando non invia un messaggio di uscita durante l'arresto del servizio.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [Classe CSecurityDesc](../atl/reference/csecuritydesc-class.md)   
 [Classe IDSR](../atl/reference/csid-class.md)   
 [Classe CDacl](../atl/reference/cdacl-class.md)   
 [CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md#run)

