---
title: 'Sfondo OLE: strategie di implementazione'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE [MFC], development strategy
- OLE applications [MFC], implementing OLE
- applications [OLE], implementing OLE
ms.assetid: 0875ddae-99df-488c-82c6-164074a81058
ms.openlocfilehash: 90517f9b37872dd7de0ce1a2d08da94c93e6f8f8
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619894"
---
# <a name="ole-background-implementation-strategies"></a>Sfondo OLE: strategie di implementazione

A seconda dell'applicazione, esistono quattro strategie di implementazione possibili per l'aggiunta del supporto OLE:

- Si scrive una nuova applicazione.

   Questa situazione richiede in genere il minor lavoro. Si esegue la Creazione guidata applicazione MFC e si seleziona Funzionalità Avanzate o Supporto documenti compositi per creare una struttura applicazione. Per informazioni su queste opzioni e sulle relative operazioni, vedere l'articolo [creazione di un programma exe MFC](reference/mfc-application-wizard.md).

- Si dispone di un programma creato con la versione 2.0 o successiva della libreria MFC che non supporta OLE.

   Creare una nuova applicazione con la Creazione guidata applicazione MFC come menzionato in precedenza, quindi copiare e incollare il codice dalla nuova applicazione nell'applicazione esistente. Questa tecnica funziona per i server, i contenitori o le applicazioni automatiche. Vedere l'esempio MFC [Scribble](../overview/visual-cpp-samples.md) per un esempio di questa strategia.

- Si dispone di un programma della libreria MFC che implementa il supporto OLE versione 1.0.

   Vedere la [Nota tecnica MFC 41](tn041-mfc-ole1-migration-to-mfc-ole-2.md) per questa strategia di conversione.

- Si dispone di un'applicazione che non è stata scritta utilizzando le classi Microsoft Foundation che potrebbe aver implementato o meno il supporto OLE.

   Questa situazione richiede il lavoro maggiore. Un approccio consiste nel creare una nuova applicazione, come descritto nella prima strategia, quindi copiarvi e incollarvi il codice personale esistente. Se il proprio codice esistente è scritto in C, potrebbe essere necessario modificarlo in modo da poterlo compilare come codice C++. Se il codice C chiama le API Windows, non è necessario modificarlo per utilizzare le classi di Microsoft Foundation. Questo approccio richiederà probabilmente alcune modifiche alla struttura del programma per supportare l'architettura documento/visualizzazione utilizzata nelle versioni 2.0 e successive delle classi di Microsoft Foundation. Per ulteriori informazioni su questa architettura, vedere la [Nota tecnica 25](tn025-document-view-and-frame-creation.md).

Una volta decisa la strategia, è necessario leggere gli articoli [contenitori](containers.md) o [Server](servers.md) (a seconda del tipo di applicazione che si sta scrivendo) o esaminare i programmi di esempio o entrambi. Gli esempi OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md) illustrano come implementare rispettivamente i vari aspetti di contenitori e server. In vari punti in questi articoli verrà fatto riferimento ad alcune funzioni riportate in questi esempi come esempi delle tecniche che vengono trattate.

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](ole-background.md)<br/>
[Contenitori: implementazione di un contenitore](containers-implementing-a-container.md)<br/>
[Server: implementazione di un server](servers-implementing-a-server.md)<br/>
[Creazione guidata applicazione MFC](reference/mfc-application-wizard.md)
