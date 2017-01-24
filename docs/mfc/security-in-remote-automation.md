---
title: "Sicurezza nell&#39;automazione remota | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attivazione di oggetti"
  - "AllowRemoteActivation"
  - "oggetti di automazione, opzioni di sicurezza"
  - "attivazione oggetti"
  - "Automazione remota, sicurezza"
  - "sicurezza [MFC]"
  - "sicurezza [MFC], automazione remota"
ms.assetid: 276b300d-c0b5-4bd8-8bf5-0270994b9cfa
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sicurezza nell&#39;automazione remota
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'automazione remota supporta un livello di sicurezza di base per consentire a un writer dell'applicazione server \(o, piuttosto, il suo amministratore\) di specificare come un oggetto specifico possa essere attivato in modalità remota.  Tutti gli oggetti di automazione remota in un sistema specificato possono essere impostati a livello globale per "impedire l'attivazione remota" o per "consentire l'attivazione remota".  Inoltre e più spesso, i singoli oggetti possono fornire queste funzionalità.  L'automazione remota utilizza una chiave in ogni impostazione del registro di sistema di oggetto, **AllowRemoteActivation**, per determinare se un server specificato possa essere attivato in modalità remota.  Se le impostazioni a livello di sistema utilizzano questa modalità, allora ad ogni oggetto nel Registro di sistema può essere assegnata questa chiave e il singolo stato di ognuno può essere impostato su "yes" o "no" in base alle proprie esigenze.  
  
 Se il sistema server è in esecuzione su Windows NT o Windows 2000, un tipo alternativo di sicurezza è consentito.  In questo caso, l'automazione remota utilizza l'elenco di controllo di accesso \(ACL\) di NT per specificare che un utente o gruppo o gruppi di utenti possono in modalità remota attivare un server specificato.  
  
 Si noti che le opzioni di sicurezza vengono applicate all'intero oggetto; non è possibile impostare attributi di una specifica interfaccia, o delle singole proprietà o metodi su tale oggetto.  
  
 Le opzioni di sicurezza possono essere impostate mediante l'amministratore di Connessione di Automazione Remota \(RAC\).  
  
## Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)