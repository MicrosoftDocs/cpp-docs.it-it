---
title: 'Funzione CAtlServiceModuleT:: Handler | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CServiceModule::Handler
- CServiceModule.Handler
- Handler
dev_langs: C++
helpviewer_keywords: Handler method
ms.assetid: 14db5f2a-be87-4774-a296-445cb6fc7b2e
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 00158bbed5318d919c284b91cd651141a35bd441
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlservicemodulethandler-function"></a>Funzione CAtlServiceModuleT:: Handler
`CAtlServiceModuleT::Handler`è la routine chiamate da Gestione controllo servizi (SCM) per recuperare lo stato del servizio e assegnargli varie istruzioni (ad esempio l'arresto o sospensione). Gestione controllo servizi passa un codice operativo da `Handler` per indicare che il servizio deve essere eseguita. Un servizio generato da ATL predefinito gestisce solo l'istruzione stop. Se il server passa l'istruzione di interruzione, il servizio comunica SCM che il programma sta per essere arrestato. Chiama quindi il servizio `PostThreadMessage` per inviare un messaggio quit a se stessa. Questo termina il ciclo di messaggi e il servizio verrà chiuso.  
  
 Per gestire più istruzioni, è necessario modificare il `m_status` inizializzare il membro dati nel `CAtlServiceModuleT` costruttore. Questo membro dati indica SCM i pulsanti da attivare quando il servizio viene selezionato nell'applicazione servizi del Pannello di controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT:: Handler](../atl/reference/catlservicemodulet-class.md#handler)

