---
title: 'Sfondo OLE: Contenitori e server | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- OLE full-server applications [MFC]
- server applications [MFC], communication with containers
- full-server [MFC]
- server applications [MFC], requirements
- server applications [MFC], defined
- OLE server applications [MFC], about server applications
- server applications [MFC], full-server vs. mini-server
- OLE server applications [MFC], mini-server applications
- OLE containers [MFC], container applications
- containers [MFC], OLE container applications
- server applications [MFC]
ms.assetid: dafbb31d-096c-4654-b774-12900d832919
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b3c6f3c15b0ea398ec621ba5f6e34a9fb6e0aae8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-background-containers-and-servers"></a>Sfondo OLE: contenitori e server
Un'applicazione contenitore è un'applicazione che è possibile incorporare elementi incorporati o collegati dei propri documenti. I documenti gestiti da un'applicazione contenitore devono essere in grado di archiviare e visualizzare i componenti di documenti OLE, nonché i dati creati dall'applicazione stessa. Un'applicazione contenitore deve inoltre consentire agli utenti di inserire nuovi elementi o modificare quelli esistenti tramite l'attivazione di applicazioni server, se necessario. In questo articolo sono elencati i requisiti di interfaccia utente di un'applicazione contenitore [contenitori: problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md).  
  
 Un'applicazione server o componente è un'applicazione che è possibile creare componenti documento OLE per l'utilizzo da applicazioni contenitore. Applicazioni server supportano in genere trascinamento o la copia dei dati negli Appunti in modo che un'applicazione contenitore può inserire i dati come un elemento incorporato o collegato. Un'applicazione può essere sia un contenitore e un server.  
  
 La maggior parte dei server sono applicazioni autonome o server completi. possono essere eseguiti come applicazioni autonome o può essere avviate da un'applicazione contenitore. Un server ridotto è un tipo speciale di applicazione server che può essere avviata solo da un contenitore. Non può essere eseguito come applicazione autonoma. Server Microsoft Draw e Microsoft Graph sono esempi di server ridotti.  
  
 Contenitori e server non comunicano direttamente. Invece, comunicano tramite le librerie di collegamento dinamico sistema OLE (DLL). Queste DLL forniscono le funzioni che chiamano contenitori e server e i contenitori e server forniscono le funzioni di callback che chiamano la DLL.  
  
 Utilizza questa modalità di comunicazione, un contenitore non è necessario conoscere i dettagli di implementazione dell'applicazione server. Consente a un contenitore accettare gli elementi creati da qualsiasi server senza la necessità di definire i tipi di server con cui può funzionare. Di conseguenza, l'utente di un'applicazione contenitore può sfruttare le applicazioni future e formati di dati. Se le nuove applicazioni sono componenti OLE, un documento composito sarà in grado di incorporare gli elementi creati da tali applicazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Sfondo OLE](../mfc/ole-background.md)   
 [Sfondo OLE: Implementazione MFC](../mfc/ole-background-mfc-implementation.md)   
 [Contenitori](../mfc/containers.md)   
 [Server](../mfc/servers.md)   
 [Contenitori: Elementi Client](../mfc/containers-client-items.md)   
 [Server: elementi server](../mfc/servers-server-items.md)

