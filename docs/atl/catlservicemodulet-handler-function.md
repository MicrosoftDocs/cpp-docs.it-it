---
title: 'Funzione CAtlServiceModuleT:: Handler'
ms.date: 11/04/2016
f1_keywords:
- CServiceModule::Handler
- CServiceModule.Handler
- Handler
helpviewer_keywords:
- Handler method
ms.assetid: 14db5f2a-be87-4774-a296-445cb6fc7b2e
ms.openlocfilehash: 74c52e07f5be4ac16c8f9a20115a623c53f46090
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50553686"
---
# <a name="catlservicemodulethandler-function"></a>Funzione CAtlServiceModuleT:: Handler

`CAtlServiceModuleT::Handler` rappresenta la routine di Gestione controllo servizi (SCM) le chiamate a recuperare lo stato del servizio e assegnargli varie istruzioni (ad esempio, l'arresto o sospensione). Gestione controllo servizi passa un codice operativo da `Handler` per indicare che il servizio deve essere eseguita. Un servizio predefinito generato da ATL gestisce solo l'istruzione di interruzione. Se Gestione controllo servizi passa l'istruzione di interruzione, il servizio indica a Gestione controllo servizi che il programma sta per essere arrestato. Chiama quindi il servizio `PostThreadMessage` per inviare un messaggio quit a se stesso. Questo termina il ciclo di messaggi e il servizio verrà chiuso.

Per gestire più istruzioni, è necessario modificare il `m_status` inizializzare il membro dati nel `CAtlServiceModuleT` costruttore. Questo membro dati indica a Gestione controllo servizi i pulsanti da attivare quando il servizio sia selezionato nell'applicazione del Pannello di controllo servizi.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)<br/>
[CAtlServiceModuleT:: Handler](../atl/reference/catlservicemodulet-class.md#handler)

