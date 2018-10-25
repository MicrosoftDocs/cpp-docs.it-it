---
title: 'Sfondo OLE: Strategie di implementazione | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE [MFC], development strategy
- OLE applications [MFC], implementing OLE
- applications [OLE], implementing OLE
ms.assetid: 0875ddae-99df-488c-82c6-164074a81058
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ae49db47905f38c4b614609a7a4b73c4597292e3
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50075910"
---
# <a name="ole-background-implementation-strategies"></a>Sfondo OLE: strategie di implementazione

A seconda dell'applicazione, esistono quattro strategie di implementazione possibili per l'aggiunta del supporto OLE:

- Si scrive una nuova applicazione.

   Questa situazione richiede in genere il minor lavoro. Si esegue la Creazione guidata applicazione MFC e si seleziona Funzionalità Avanzate o Supporto documenti compositi per creare una struttura applicazione. Per informazioni su queste opzioni e le operazioni eseguite, vedere l'articolo [creazione di un programma EXE MFC](../mfc/reference/mfc-application-wizard.md).

- Si dispone di un programma creato con la versione 2.0 o successiva della libreria MFC che non supporta OLE.

   Creare una nuova applicazione con la Creazione guidata applicazione MFC come menzionato in precedenza, quindi copiare e incollare il codice dalla nuova applicazione nell'applicazione esistente. Questa tecnica funziona per i server, i contenitori o le applicazioni automatiche. Vedere il MFC [SCRIBBLE](../visual-cpp-samples.md) esempio per un esempio di questa strategia.

- Si dispone di un programma della libreria MFC che implementa il supporto OLE versione 1.0.

   Visualizzare [Nota tecnica 41 MFC](../mfc/tn041-mfc-ole1-migration-to-mfc-ole-2.md) per questa strategia di conversione.

- Si dispone di un'applicazione che non è stata scritta utilizzando le classi Microsoft Foundation che potrebbe aver implementato o meno il supporto OLE.

   Questa situazione richiede il lavoro maggiore. Un approccio consiste nel creare una nuova applicazione, come descritto nella prima strategia, quindi copiarvi e incollarvi il codice personale esistente. Se il proprio codice esistente è scritto in C, potrebbe essere necessario modificarlo in modo da poterlo compilare come codice C++. Se il codice C chiama le API Windows, non è necessario modificarlo per utilizzare le classi di Microsoft Foundation. Questo approccio richiederà probabilmente alcune modifiche alla struttura del programma per supportare l'architettura documento/visualizzazione utilizzata nelle versioni 2.0 e successive delle classi di Microsoft Foundation. Per altre informazioni su questa architettura, vedere [Nota tecnica 25](../mfc/tn025-document-view-and-frame-creation.md).

Dopo aver scelto una strategia, si consiglia di leggere il [contenitori](../mfc/containers.md) oppure [server](../mfc/servers.md) articoli (a seconda del tipo di applicazione che sta scrivendo) o esaminare i programmi di esempio o entrambi. Gli esempi OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md) illustrano come implementare i vari aspetti dei contenitori e server, rispettivamente. In vari punti in questi articoli verrà fatto riferimento ad alcune funzioni riportate in questi esempi come esempi delle tecniche che vengono trattate.

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](../mfc/ole-background.md)<br/>
[Contenitori: implementazione di un contenitore](../mfc/containers-implementing-a-container.md)<br/>
[Server: implementazione di un server](../mfc/servers-implementing-a-server.md)<br/>
[Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)

