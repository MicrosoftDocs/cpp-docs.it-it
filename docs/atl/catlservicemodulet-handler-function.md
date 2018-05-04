---
title: 'Funzione CAtlServiceModuleT:: Handler | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- CServiceModule::Handler
- CServiceModule.Handler
- Handler
dev_langs:
- C++
helpviewer_keywords:
- Handler method
ms.assetid: 14db5f2a-be87-4774-a296-445cb6fc7b2e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a0c0386cd17e7a33628790520e356c706f9743b9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="catlservicemodulethandler-function"></a>Funzione CAtlServiceModuleT:: Handler
`CAtlServiceModuleT::Handler` è la routine che chiama Gestione controllo servizi (SCM) per recuperare lo stato del servizio e assegnargli varie istruzioni (ad esempio l'arresto o sospensione). Gestione controllo servizi passa un codice operativo da `Handler` per indicare che il servizio deve essere eseguita. Un servizio generato da ATL predefinito gestisce solo l'istruzione stop. Se il server passa l'istruzione di interruzione, il servizio comunica SCM che il programma sta per essere arrestato. Chiama quindi il servizio `PostThreadMessage` per inviare un messaggio quit a se stessa. Questo termina il ciclo di messaggi e il servizio verrà chiuso.  
  
 Per gestire più istruzioni, è necessario modificare il `m_status` inizializzare il membro dati nel `CAtlServiceModuleT` costruttore. Questo membro dati indica SCM i pulsanti da attivare quando il servizio viene selezionato nell'applicazione servizi del Pannello di controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT:: Handler](../atl/reference/catlservicemodulet-class.md#handler)

