---
description: 'Altre informazioni su: funzione CAtlServiceModuleT:: Handler function'
title: 'Funzione funzione CAtlServiceModuleT:: handler'
ms.date: 11/04/2016
helpviewer_keywords:
- Handler method
ms.assetid: 14db5f2a-be87-4774-a296-445cb6fc7b2e
ms.openlocfilehash: 934c612b6fdfd47bb9966536cc335da58fbd38c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148369"
---
# <a name="catlservicemodulethandler-function"></a>Funzione funzione CAtlServiceModuleT:: handler

`CAtlServiceModuleT::Handler` è la routine chiamata da Gestione controllo servizi per recuperare lo stato del servizio e fornire diverse istruzioni (ad esempio l'arresto o la sospensione). SCM passa il codice di un'operazione a `Handler` per indicare le operazioni che il servizio deve eseguire. Un servizio generato da ATL predefinito gestisce solo l'istruzione Stop. Se SCM supera l'istruzione Stop, il servizio indica al gestore SCM che il programma sta per essere arrestato. Il servizio chiama quindi `PostThreadMessage` per inviare un messaggio QUIT a se stesso. Questa operazione interrompe il ciclo di messaggi e il servizio si chiuderà.

Per gestire più istruzioni, è necessario modificare il `m_status` membro dati inizializzato nel `CAtlServiceModuleT` costruttore. Questo membro dati indica a SCM quali pulsanti abilitare quando il servizio è selezionato nell'applicazione del pannello di controllo dei servizi.

## <a name="see-also"></a>Vedi anche

[Services](../atl/atl-services.md)<br/>
[Funzione CAtlServiceModuleT:: handler](../atl/reference/catlservicemodulet-class.md#handler)
