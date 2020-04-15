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
ms.openlocfilehash: 2594531df63bcd62cdaec44fbc3668ea68990922
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366902"
---
# <a name="ole-in-mfc"></a>OLE in MFC

In questi articoli vengono illustrati i concetti fondamentali della programmazione OLE tramite MFC. MFC fornisce il modo più semplice per scrivere programmi che utilizzano OLE:

- Per utilizzare la modifica visiva OLE (attivazione sul posto).

- Per lavorare come contenitori OLE o server.

- Per implementare la funzionalità di trascinamento della selezione.

- Per utilizzare i dati di data e ora.

- Per gestire i dati di stato dei moduli MFC, inclusi i punti di ingresso delle funzioni DLL esportate, i punti di ingresso dell'interfaccia OLE/COM e i punti di ingresso delle routine della finestra.

È inoltre possibile utilizzare [l'automazione](../mfc/automation.md).

> [!NOTE]
> Il termine OLE indica le tecnologie associate al collegamento e all'incorporamento, inclusi contenitori OLE, server OLE, elementi OLE, attivazione sul posto (o modifica visiva), rilevamenti, trascinamento della selezione e unione di menu. Il termine Active si applica al modello COM (Component Object Model) e agli oggetti basati su COM, ad esempio i controlli ActiveX. L'automazione OLE è ora denominata automazione.

## <a name="in-this-section"></a>Contenuto della sezione

[Sfondo OLE](../mfc/ole-background.md)<br/>
Vengono illustrate le informazioni OLE e vengono fornite informazioni concettuali sul funzionamento.

[Activation](../mfc/activation-cpp.md)<br/>
Viene descritto il ruolo dell'attivazione nella modifica degli elementi OLE.

[Contenitori](../mfc/containers.md)<br/>
Vengono forniti collegamenti all'utilizzo di contenitori in OLE.

[Data Objects and Data Sources](../mfc/data-objects-and-data-sources-ole.md)<br/>
Vengono forniti collegamenti ad argomenti `COleDataObject` che `COleDataSource` illustrano l'utilizzo delle classi e .

[Trascinamento e rilascio](../mfc/drag-and-drop-ole.md)<br/>
Viene illustrato l'utilizzo delle operazioni di copia e incolla con OLE.

[Menu e risorse OLE](../mfc/menus-and-resources-ole.md)<br/>
Viene illustrato l'utilizzo di menu e risorse nelle applicazioni documento OLE MFC.

[Registrazione](../mfc/registration.md)<br/>
Vengono illustrate l'installazione e l'inizializzazione del server.

[Server](../mfc/servers.md)<br/>
Viene descritto come creare elementi OLE (o componenti) per l'utilizzo da parte delle applicazioni contenitore.

[Tracker](../mfc/trackers.md)<br/>
Fornisce informazioni `CRectTracker` sulla classe , che fornisce un'interfaccia grafica per consentire agli utenti di interagire con gli elementi client OLE.

## <a name="related-sections"></a>Sezioni correlate

[Punti di connessione](../mfc/connection-points.md)<br/>
Viene illustrato come implementare i punti di connessione (precedentemente `CCmdTarget` `CConnectionPoint`noti come punti di connessione OLE) utilizzando le classi MFC e .

[Componenti COM contenitore/server](../mfc/containers-advanced-features.md)<br/>
Vengono descritti i passaggi necessari per incorporare funzionalità avanzate facoltative nelle applicazioni contenitore esistenti.

[Component Object Model (COM)](/windows/win32/com/the-component-object-model)<br/>
Viene descritto l'utilizzo di OLE senza MFC.

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)
