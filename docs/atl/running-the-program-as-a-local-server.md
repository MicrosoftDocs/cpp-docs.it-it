---
title: "Running the Program as a Local Server | Microsoft Docs"
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
  - "ATL services, running as local servers"
  - "debug [ATL], running services as local server"
ms.assetid: eb9701e6-e2a8-4666-897f-0c893aec8ac7
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Running the Program as a Local Server
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se eseguire il programma come servizio è utile, è possibile modificare il Registro di sistema in modo da eseguire il programma come server locale normale.  Rinominare semplicemente il valore `LocalService` nel AppID a `_LocalService` e assicurarsi che la chiave `LocalServer32` nel CLSID è impostato correttamente.  Notare che utilizzando DCOMCNFG da specificare che l'applicazione deve essere eseguita in un computer diverso rinominare la chiave `LocalServer32` a `_LocalServer32`\). Eseguendo il programma come server locale richiede alcuni secondi piùavvio perché la chiamata a **StartServiceCtrlDispatcher** in `CAtlServiceModuleT::Start` richiede alcuni secondi prima di bloccarsi.  
  
## Vedere anche  
 [Debugging Tips](../atl/debugging-tips.md)