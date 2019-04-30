---
title: 'Sfondo OLE: Contenitori e server'
ms.date: 11/04/2016
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
ms.openlocfilehash: c154562e58cf8f37d77df61556fe25b19ca54c70
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346099"
---
# <a name="ole-background-containers-and-servers"></a>Sfondo OLE: Contenitori e server

Un'applicazione contenitore è un'applicazione che è possibile incorporare elementi incorporati o collegati in dei propri documenti. I documenti gestiti da un'applicazione contenitore devono essere in grado di archiviare e visualizzare i componenti di documenti OLE, nonché i dati creati dall'applicazione stessa. Un'applicazione contenitore deve anche consentire agli utenti di inserire nuovi elementi o modificare quelli esistenti tramite l'attivazione di applicazioni server, se necessario. Nell'articolo sono elencati i requisiti dell'interfaccia utente di un'applicazione contenitore [contenitori: Problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md).

Un'applicazione server o il componente applicazione è un'applicazione in grado di creare componenti del documento OLE per l'utilizzo da applicazioni contenitore. Le applicazioni server in genere supportano trascinamento e rilascio o la copia dei dati negli Appunti in modo che un'applicazione contenitore può inserire i dati come un elemento incorporato o collegato. Un'applicazione può essere sia un contenitore e un server.

La maggior parte dei server sono applicazioni autonome o server completi. essi possono essere eseguiti come applicazioni autonome o può essere avviate da un'applicazione contenitore. Un server ridotto è un tipo speciale di applicazione server che può essere avviata solo da un contenitore. Non può essere eseguito come applicazione autonoma. Server Microsoft Draw e Microsoft Graph sono esempi di server ridotti.

Contenitori e server non comunicano direttamente. Comunicano invece attraverso le librerie a collegamento dinamico del sistema OLE (DLL). Queste DLL forniscono funzioni che chiamano i contenitori e i server e i contenitori e i server forniscono le funzioni di callback che chiamano la DLL.

Usando questa mezzo di comunicazione, un contenitore non è necessario conoscere i dettagli di implementazione dell'applicazione server. Consente un contenitore accettare gli elementi creati da qualsiasi server senza la necessità di definire i tipi di server con cui può funzionare. Di conseguenza, l'utente di un'applicazione contenitore possa sfruttare le applicazioni future e formati di dati. Se le nuove applicazioni sono componenti OLE, un documento composito sarà in grado di incorporare gli elementi creati da tali applicazioni.

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](../mfc/ole-background.md)<br/>
[Sfondo OLE: implementazione MFC](../mfc/ole-background-mfc-implementation.md)<br/>
[Contenitori](../mfc/containers.md)<br/>
[Server](../mfc/servers.md)<br/>
[Contenitori: elementi client](../mfc/containers-client-items.md)<br/>
[Server: elementi server](../mfc/servers-server-items.md)
