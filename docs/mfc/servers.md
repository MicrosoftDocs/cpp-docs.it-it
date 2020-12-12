---
description: 'Altre informazioni su: Server'
title: Server
ms.date: 11/04/2016
helpviewer_keywords:
- OLE server applications [MFC]
- OLE server applications [MFC], activation
- full-server
- servers
- mini-server
- OLE server applications [MFC], server types
- server applications [MFC]
ms.assetid: e45172e8-eae3-400a-8139-0fa009a42fdc
ms.openlocfilehash: 5e9a9dd7cbb1ab237712b5ad0c84e3114a119ee3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217302"
---
# <a name="servers"></a>Server

Un'applicazione server (o applicazione componente) crea elementi o componenti OLE per l'uso da parte delle applicazioni contenitore. Un'applicazione server di modifica visiva supporta anche la modifica visiva o l'attivazione sul posto. Un altro tipo di server OLE è un [server di automazione](../mfc/automation-servers.md). Alcune applicazioni server supportano solo la creazione di elementi incorporati; altri supportano la creazione di elementi incorporati e collegati. Alcuni supportano solo il collegamento, sebbene questo sia raro. Tutte le applicazioni server devono supportare l'attivazione da parte di applicazioni contenitore quando l'utente desidera modificare un elemento. Un'applicazione può essere sia un contenitore che un server. In altre parole, può incorporare i dati nei documenti e creare dati che possono essere incorporati come elementi nei documenti di altre applicazioni.

Un miniserver è un tipo speciale di applicazione server che può essere avviato solo da un contenitore. Microsoft disegni e Microsoft Graph sono esempi di miniservers. Un miniserver non archivia i documenti come file su disco. Ma legge i documenti da e li scrive negli elementi dei documenti appartenenti ai contenitori. Di conseguenza, un miniserver supporta solo l'incorporamento e non il collegamento.

Un server completo può essere eseguito come applicazione autonoma o avviato da un'applicazione contenitore. Un server completo può archiviare i documenti come file su disco. Può supportare solo l'incorporamento, l'incorporamento e il collegamento o solo il collegamento. L'utente di un'applicazione contenitore può creare un elemento incorporato scegliendo il comando taglia o copia nel server e il comando Incolla nel contenitore. Viene creato un elemento collegato scegliendo il comando Copy nel server e il comando Incolla collegamento nel contenitore. In alternativa, l'utente può creare un elemento incorporato o collegato utilizzando la finestra di dialogo Inserisci oggetto.

Nella tabella seguente sono riepilogate le caratteristiche dei diversi tipi di server:

### <a name="server-characteristics"></a>Caratteristiche del server

|Tipo di server|Supporta più istanze|Elementi per documento|Documenti per istanza|
|--------------------|---------------------------------|------------------------|----------------------------|
|Miniserver|Sì|1|1|
|Server SDI completo|Sì|1 (se il collegamento è supportato, 1 o più)|1|
|Server MDI completo|No (non obbligatorio)|1 (se il collegamento è supportato, 1 o più)|0 o più|

Un'applicazione server deve supportare più contenitori contemporaneamente, nel caso in cui venga utilizzato più di un contenitore per modificare un elemento incorporato o collegato. Se il server è un'applicazione SDI (o un miniserver con un'interfaccia della finestra di dialogo), più istanze del server devono essere in grado di essere eseguite simultaneamente. In questo modo un'istanza separata dell'applicazione può gestire ogni richiesta del contenitore.

Se il server è un'applicazione MDI, può creare una nuova finestra figlio MDI ogni volta che un contenitore deve modificare un elemento. In questo modo, una singola istanza dell'applicazione può supportare più contenitori.

L'applicazione server deve indicare alle DLL di sistema OLE cosa fare se un'istanza del server è già in esecuzione quando un altro contenitore richiede i servizi: se deve avviare una nuova istanza del server o indirizzare tutte le richieste dei contenitori a un'istanza del server.

Per ulteriori informazioni sui server, vedere:

- [Server: implementazione di un server](../mfc/servers-implementing-a-server.md)

- [Server: implementazione di documenti server](../mfc/servers-implementing-server-documents.md)

- [Server: implementazione di finestre cornice In-Place](../mfc/servers-implementing-in-place-frame-windows.md)

- [Server: elementi server](../mfc/servers-server-items.md)

- [Server: problemi di User-Interface](../mfc/servers-user-interface-issues.md)

## <a name="see-also"></a>Vedi anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Contenitori](../mfc/containers.md)<br/>
[Contenitori: funzionalità avanzate](../mfc/containers-advanced-features.md)<br/>
[Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Registrazione](../mfc/registration.md)<br/>
[Server di automazione](../mfc/automation-servers.md)
