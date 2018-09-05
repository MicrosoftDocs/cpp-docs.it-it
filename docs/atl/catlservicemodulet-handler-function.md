---
title: 'Funzione CAtlServiceModuleT:: Handler | Microsoft Docs'
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
ms.openlocfilehash: dbc7c74e0fd6fdd34ba9a0c386c028469113c88e
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43767084"
---
# <a name="catlservicemodulethandler-function"></a>Funzione CAtlServiceModuleT:: Handler

`CAtlServiceModuleT::Handler` rappresenta la routine di Gestione controllo servizi (SCM) le chiamate a recuperare lo stato del servizio e assegnargli varie istruzioni (ad esempio, l'arresto o sospensione). Gestione controllo servizi passa un codice operativo da `Handler` per indicare che il servizio deve essere eseguita. Un servizio predefinito generato da ATL gestisce solo l'istruzione di interruzione. Se Gestione controllo servizi passa l'istruzione di interruzione, il servizio indica a Gestione controllo servizi che il programma sta per essere arrestato. Chiama quindi il servizio `PostThreadMessage` per inviare un messaggio quit a se stesso. Questo termina il ciclo di messaggi e il servizio verrà chiuso.

Per gestire più istruzioni, è necessario modificare il `m_status` inizializzare il membro dati nel `CAtlServiceModuleT` costruttore. Questo membro dati indica a Gestione controllo servizi i pulsanti da attivare quando il servizio sia selezionato nell'applicazione del Pannello di controllo servizi.

## <a name="see-also"></a>Vedere anche

[servizi](../atl/atl-services.md)   
[CAtlServiceModuleT:: Handler](../atl/reference/catlservicemodulet-class.md#handler)

