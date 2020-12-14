---
description: 'Altre informazioni su: OLE in MFC'
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
ms.openlocfilehash: 125a2ad8e900747d859c03b57df33f2e7e5f1c28
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244095"
---
# <a name="ole-in-mfc"></a>OLE in MFC

Questi articoli illustrano le nozioni di base della programmazione OLE con MFC. MFC fornisce il modo più semplice per scrivere programmi che usano OLE:

- Per utilizzare la modifica visiva OLE (attivazione sul posto).

- Per lavorare come contenitori o server OLE.

- Per implementare la funzionalità di trascinamento della selezione.

- Per utilizzare i dati di data e ora.

- Per gestire i dati dello stato dei moduli MFC, inclusi i punti di ingresso delle funzioni DLL esportate, i punti di ingresso dell'interfaccia OLE/COM e i punti di ingresso della routine della finestra.

È anche possibile usare l' [automazione](automation.md).

> [!NOTE]
> Il termine OLE indica le tecnologie associate al collegamento e all'incorporamento, inclusi contenitori OLE, server OLE, elementi OLE, attivazione sul posto (o modifica visiva), Tracker, trascinamento della selezione e Unione di menu. Il termine attivo si applica ai Component Object Model (COM) e agli oggetti basati su COM, ad esempio i controlli ActiveX. L'automazione OLE è ora chiamata automazione.

## <a name="in-this-section"></a>Contenuto della sezione

[Sfondo OLE](ole-background.md)<br/>
Viene illustrato OLE e vengono fornite informazioni concettuali sul suo funzionamento.

[Activation](activation-cpp.md)<br/>
Descrive il ruolo di attivazione nella modifica degli elementi OLE.

[Contenitori](containers.md)<br/>
Fornisce collegamenti all'uso di contenitori in OLE.

[Oggetti dati e origini dati](data-objects-and-data-sources-ole.md)<br/>
Vengono forniti collegamenti ad argomenti che illustrano l'utilizzo `COleDataObject` delle `COleDataSource` classi e.

[Trascinamento della selezione](drag-and-drop-ole.md)<br/>
Viene illustrato l'utilizzo della copia e incolla con OLE.

[Menu e risorse OLE](menus-and-resources-ole.md)<br/>
Viene illustrato l'utilizzo di menu e risorse nelle applicazioni documento OLE MFC.

[Registrazione](registration.md)<br/>
Descrive l'installazione e l'inizializzazione del server.

[Server](servers.md)<br/>
Viene descritto come creare elementi o componenti OLE per l'utilizzo da applicazioni contenitore.

[Tracker](trackers.md)<br/>
Fornisce informazioni sulla `CRectTracker` classe, che fornisce un'interfaccia grafica per consentire agli utenti di interagire con gli elementi client OLE.

## <a name="related-sections"></a>Sezioni correlate

[Punti di connessione](connection-points.md)<br/>
Viene illustrato come implementare i punti di connessione (noti in precedenza come punti di connessione OLE) utilizzando le classi MFC `CCmdTarget` e `CConnectionPoint` .

[Componenti COM contenitore/server](containers-advanced-features.md)<br/>
Vengono descritti i passaggi necessari per incorporare funzionalità avanzate facoltative in applicazioni contenitore esistenti.

[Component Object Model (COM)](/windows/win32/com/the-component-object-model)<br/>
Viene descritto l'utilizzo di OLE senza MFC.

## <a name="see-also"></a>Vedi anche

[Concetti](mfc-concepts.md)
