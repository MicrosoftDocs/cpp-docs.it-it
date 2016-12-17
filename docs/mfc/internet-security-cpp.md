---
title: "Sicurezza Internet (C++) | Microsoft Docs"
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
  - "sicurezza dell'accesso al codice [C++], considerazioni sulla sicurezza di Internet"
  - "firma del codice [C++]"
  - "firma del codice [C++], sicurezza Internet"
  - "firme digitali, sicurezza Internet"
  - "applicazioni Internet, sicurezza"
  - "sandbox"
  - "sicurezza [MFC]"
  - "sicurezza [MFC], Internet"
  - "sicurezza delle applicazioni Web"
  - "sicurezza delle applicazioni Web, approcci alla sicurezza di Internet"
ms.assetid: bf0da697-81bc-41f0-83fa-d7f82ed83df8
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sicurezza Internet (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sicurezza del codice è una domanda importante per gli sviluppatori e agli utenti di applicazioni internet.  Vi sono rischi: il codice dannoso, il codice cui è stato alterato e il codice di siti sconosciuti o crea.  
  
 Esistono due approcci base alla sicurezza durante lo sviluppo per internet.  Il primo è denominato "sandboxing". In questo modo, un'applicazione è limitata a un particolare set di API e sono esclusi da tali potenzialmente non sicuri come I\/O di file in cui un programma può eliminare i dati di un computer.  Il secondo viene implementato utilizzando le firme digitali.  Questo approccio è denominato "shrinkwrap" per internet.  Il codice è verificato e firmarli con tecnologia chiave pubblica e la chiave privata.  Prima di essere eseguito, la firma digitale è verificata per garantire che il codice provenga da un'origine autenticata nota e che non è stato alterato poiché è stato firmato.  
  
 Nel primo caso, si ritiene l'applicazione non arrecherà alcuni danni e attendibili dell'origine dell'applicazione.  Nel secondo, le firme digitali vengono utilizzate per verificare l'autenticità.  La firma di L è uno standard del settore utilizzato per identificare e fornire dettagli sull'editore del codice.  La tecnologia è basata su standard, ad esempio RSA e lo X.509.  I browser in genere consentono agli utenti di scegliere se desidera scaricare ed eseguire il codice di origine sconosciuta.  
  
 Informazioni aggiuntive sulla firma del codice e altre misure di sicurezza sono disponibili nel sito web.  Le informazioni possono accedere al sito del gruppo di lavoro web di MSDN Online a [http:\/\/msdn.microsoft.com\/](http://msdn.microsoft.com/)l, oppure con World Wide Web Consortium [http:\/\/www.w3.org\/](http://www.w3.org/)\).  
  
## Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)