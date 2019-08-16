---
title: OLE in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, OLE and
- OLE items
- OLE applications [MFC], about OLE
- OLE [MFC]
- OLE containers [MFC], about OLE
- applications [OLE], about OLE
- OLE component object model (COM)
ms.assetid: 5193479d-1239-4697-aea4-e82f92c707ab
ms.openlocfilehash: 2668d35c24e9d95440a96c5b3eda1fab7bbf3891
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507989"
---
# <a name="ole-in-mfc"></a>OLE in MFC

Questi articoli illustrano le nozioni di base della programmazione OLE con MFC. MFC fornisce il modo più semplice per scrivere programmi che usano OLE:

- Per utilizzare la modifica visiva OLE (attivazione sul posto).

- Per lavorare come contenitori o server OLE.

- Per implementare la funzionalità di trascinamento della selezione.

- Per utilizzare i dati di data e ora.

- Per gestire i dati dello stato dei moduli MFC, inclusi i punti di ingresso delle funzioni DLL esportate, i punti di ingresso dell'interfaccia OLE/COM e i punti di ingresso della routine della finestra.

È anche possibile usare l' [automazione](../mfc/automation.md).

> [!NOTE]
>  Il termine OLE indica le tecnologie associate al collegamento e all'incorporamento, inclusi contenitori OLE, server OLE, elementi OLE, attivazione sul posto (o modifica visiva), Tracker, trascinamento della selezione e Unione di menu. Il termine attivo si applica ai Component Object Model (COM) e agli oggetti basati su COM, ad esempio i controlli ActiveX. L'automazione OLE è ora chiamata automazione.

## <a name="in-this-section"></a>In questa sezione

[Sfondo OLE](../mfc/ole-background.md)<br/>
Viene illustrato OLE e vengono fornite informazioni concettuali sul suo funzionamento.

[Attivazione](../mfc/activation-cpp.md)<br/>
Descrive il ruolo di attivazione nella modifica degli elementi OLE.

[Contenitori](../mfc/containers.md)<br/>
Fornisce collegamenti all'uso di contenitori in OLE.

[Oggetti dati e origini dati](../mfc/data-objects-and-data-sources-ole.md)<br/>
Vengono forniti collegamenti ad argomenti che illustrano l'utilizzo `COleDataObject` delle `COleDataSource` classi e.

[Trascinamento della selezione](../mfc/drag-and-drop-ole.md)<br/>
Viene illustrato l'utilizzo della copia e incolla con OLE.

[Menu e risorse OLE](../mfc/menus-and-resources-ole.md)<br/>
Viene illustrato l'utilizzo di menu e risorse nelle applicazioni documento OLE MFC.

[Registrazione](../mfc/registration.md)<br/>
Descrive l'installazione e l'inizializzazione del server.

[Server](../mfc/servers.md)<br/>
Viene descritto come creare elementi o componenti OLE per l'utilizzo da applicazioni contenitore.

[Tracker](../mfc/trackers.md)<br/>
Fornisce informazioni sulla `CRectTracker` classe, che fornisce un'interfaccia grafica per consentire agli utenti di interagire con gli elementi client OLE.

## <a name="related-sections"></a>Sezioni correlate

[Punti di connessione](../mfc/connection-points.md)<br/>
Viene illustrato come implementare i punti di connessione (noti in precedenza come punti di connessione OLE) `CCmdTarget` utilizzando `CConnectionPoint`le classi MFC e.

[Componenti COM contenitore/server](../mfc/containers-advanced-features.md)<br/>
Vengono descritti i passaggi necessari per incorporare funzionalità avanzate facoltative in applicazioni contenitore esistenti.

[Component Object Model (COM)](/windows/win32/com/the-component-object-model)<br/>
Viene descritto l'utilizzo di OLE senza MFC.

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)
