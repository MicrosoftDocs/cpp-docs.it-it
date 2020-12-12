---
description: 'Altre informazioni su: Server: implementazione di un server'
title: 'Server: implementazione di un server'
ms.date: 11/04/2016
helpviewer_keywords:
- servers, implementing
- OLE server applications [MFC], implementing OLE servers
ms.assetid: 5bd57e8e-3b23-4f23-9597-496fac2d24b5
ms.openlocfilehash: 3ced10f88ce062ab571841610ba4b000571835b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217380"
---
# <a name="servers-implementing-a-server"></a>Server: implementazione di un server

Questo articolo illustra il codice creato dalla creazione guidata applicazione MFC per un'applicazione server di modifica visiva. Se non si utilizza la creazione guidata applicazione, in questo articolo vengono elencate le aree in cui è necessario scrivere il codice per implementare un'applicazione server.

Se si utilizza la creazione guidata applicazione per creare una nuova applicazione server, viene fornita una quantità significativa di codice specifico per il server. Se si aggiunge la funzionalità del server di modifica visiva a un'applicazione esistente, è necessario duplicare il codice fornito dalla procedura guidata dell'applicazione prima di aggiungere il resto del codice server necessario.

Il codice del server fornito dalla procedura guidata dell'applicazione rientra in diverse categorie:

- Definizione delle risorse del server:

  - La risorsa di menu utilizzata quando il server sta modificando un elemento incorporato nella relativa finestra.

  - Le risorse del menu e della barra degli strumenti utilizzate quando il server è attivo sul posto.

  Per altre informazioni su queste risorse, vedere [menu e risorse: aggiunte al server](../mfc/menus-and-resources-server-additions.md).

- Definizione di una classe di elementi derivata da `COleServerItem` . Per ulteriori informazioni sugli elementi del server, vedere Servers [: Server Items](../mfc/servers-server-items.md).

- Modifica della classe di base della classe Document in `COleServerDoc` . Per ulteriori informazioni, vedere [Server: implementazione di documenti server](../mfc/servers-implementing-server-documents.md).

- Definizione di una classe della finestra cornice derivata da `COleIPFrameWnd` . Per altri dettagli, vedere [Server: implementing In-Place frame Windows](../mfc/servers-implementing-in-place-frame-windows.md).

- Creazione di una voce per l'applicazione server nel database di registrazione di Windows e registrazione della nuova istanza del server con il sistema OLE. Per informazioni su questo argomento, vedere [registrazione](../mfc/registration.md).

- Inizializzazione e avvio dell'applicazione server. Per informazioni su questo argomento, vedere [registrazione](../mfc/registration.md).

Per ulteriori informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerDoc](../mfc/reference/coleserverdoc-class.md)e [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md) in riferimenti alla *libreria di classi*.

## <a name="see-also"></a>Vedi anche

[Server](../mfc/servers.md)<br/>
[Contenitori](../mfc/containers.md)<br/>
[Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Registrazione](../mfc/registration.md)
