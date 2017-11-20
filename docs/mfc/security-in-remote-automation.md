---
title: Sicurezza nell'automazione remota | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- AllowRemoteActivation [MFC]
- Remote Automation [MFC], security
- activating objects [MFC]
- security [MFC]
- Automation objects [MFC], security options
- object activation [MFC]
- security [MFC], Remote Automation
ms.assetid: 276b300d-c0b5-4bd8-8bf5-0270994b9cfa
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a7ad2d09d45747733bd79fd6fe2a7139cef5269a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="security-in-remote-automation"></a>Sicurezza nell'automazione remota
L'automazione remota supporta un livello di sicurezza di base per consentire a un writer dell'applicazione server (o, piuttosto, l'amministratore) di specificare la modalità di attivazione remota di un oggetto specifico. Tutti gli oggetti di automazione in un sistema specifico possono essere impostati a livello globale in modo che l'attivazione remota sia abilitata o meno. Inoltre, e più spesso, queste funzionalità vengono assegnate a singoli oggetti. Automazione remota utilizza una chiave nelle impostazioni del Registro di sistema di ciascun oggetto, **AllowRemoteActivation**, per determinare se un determinato server può essere attivato in remoto. Se le impostazioni a livello di sistema utilizzano questa modalità, è possibile assegnare questa chiave a tutti gli oggetti nel Registro di sistema e impostare lo stato di ciascun oggetto su "sì" o "no" in base alle proprie esigenze.  
  
 Se il sistema server è in esecuzione su Windows NT o Windows 2000, è possibile utilizzare un altro tipo di sicurezza. In questo caso, l'automazione remota utilizza l'elenco di controllo di accesso (ACL) di NT per specificare quale utente o gruppo o quali gruppi di utenti possono attivare in remoto un determinato server.  
  
 Notare che le opzioni di sicurezza vengono applicate all'intero oggetto; non è possibile impostare gli attributi di una specifica interfaccia o di singole proprietà o metodi sull'oggetto.  
  
 Tutte le opzioni di sicurezza possono essere impostate mediante Remote Automation Connection (RAC) Manager.  
  
## <a name="see-also"></a>Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)

