---
title: 'Sfondo OLE: contenitori e server'
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
ms.openlocfilehash: 7c3130ab9d8dff6551ef0ecbec43e5422dbdc4c4
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617903"
---
# <a name="ole-background-containers-and-servers"></a>Sfondo OLE: contenitori e server

Un'applicazione contenitore è un'applicazione in grado di incorporare elementi incorporati o collegati nei propri documenti. I documenti gestiti da un'applicazione contenitore devono essere in grado di archiviare e visualizzare i componenti del documento OLE, nonché i dati creati dall'applicazione stessa. Un'applicazione contenitore deve inoltre consentire agli utenti di inserire nuovi elementi o modificare gli elementi esistenti attivando le applicazioni server quando necessario. I requisiti dell'interfaccia utente di un'applicazione contenitore sono elencati nell'articolo [contenitori: problemi dell'interfaccia utente](containers-user-interface-issues.md).

Un'applicazione server o un'applicazione componente è un'applicazione in grado di creare componenti del documento OLE utilizzabili dalle applicazioni contenitore. Le applicazioni server in genere supportano il trascinamento della selezione o la copia dei dati negli Appunti, in modo che un'applicazione contenitore possa inserire i dati come elementi incorporati o collegati. Un'applicazione può essere sia un contenitore che un server.

La maggior parte dei server sono applicazioni autonome o server completi; possono essere eseguite come applicazioni autonome oppure possono essere avviate da un'applicazione contenitore. Un miniserver è un tipo speciale di applicazione server che può essere avviato solo da un contenitore. Non può essere eseguita come applicazione autonoma. I server Microsoft e Microsoft Graph sono esempi di miniservers.

I contenitori e i server non comunicano direttamente. Ma comunicano tramite le librerie di collegamento dinamico (DLL) del sistema OLE. Queste dll forniscono funzioni che i contenitori e i server chiamano e i contenitori e i server forniscono funzioni di callback chiamate dalle dll.

Utilizzando questo mezzo di comunicazione, non è necessario che un contenitore conosca i dettagli di implementazione dell'applicazione server. Consente a un contenitore di accettare gli elementi creati da qualsiasi server senza dover definire i tipi di server con cui può funzionare. Di conseguenza, l'utente di un'applicazione contenitore può sfruttare i vantaggi delle applicazioni e dei formati dati futuri. Se queste nuove applicazioni sono componenti OLE, un documento composto sarà in grado di incorporare elementi creati da tali applicazioni.

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](ole-background.md)<br/>
[Sfondo OLE: implementazione MFC](ole-background-mfc-implementation.md)<br/>
[Contenitori](containers.md)<br/>
[Server](servers.md)<br/>
[Contenitori: elementi client](containers-client-items.md)<br/>
[Server: elementi server](servers-server-items.md)
