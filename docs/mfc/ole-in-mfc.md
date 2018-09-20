---
title: OLE in MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, OLE and
- OLE items
- OLE applications [MFC], about OLE
- OLE [MFC]
- OLE containers [MFC], about OLE
- applications [OLE], about OLE
- OLE component object model (COM)
ms.assetid: 5193479d-1239-4697-aea4-e82f92c707ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e43484e5f30191c604f43a2280a8deab6eddd93c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46434947"
---
# <a name="ole-in-mfc"></a>OLE in MFC

Questi articoli illustrano i concetti fondamentali della programmazione con OLE utilizza MFC. MFC fornisce il modo più semplice per scrivere programmi che usano OLE:

- Per usare OLE visual modifica (attivazione sul posto).

- Per lavorare come contenitori OLE o server.

- Per implementare la funzionalità di trascinamento e rilascio.

- Usare i dati di data e ora.

- Per gestire i dati dello stato di MFC moduli, inclusi esportati punti di ingresso DLL (funzione), punti di ingresso all'interfaccia OLE/COM e punti di ingresso di procedura di finestra.

È anche possibile usare [automazione](../mfc/automation.md).

> [!NOTE]
>  Il termine che OLE denota le tecnologie associate al collegamento e incorporamento, tra cui contenitori OLE, i server OLE, gli elementi OLE, attivazione sul posto o modifica visiva, Tracker, trascinamento della selezione e unione di menu. Il termine Active si applica il modello COM (Component Object) e gli oggetti basati su COM, ad esempio i controlli ActiveX. Automazione OLE è ora denominata automazione.

## <a name="in-this-section"></a>In questa sezione

[Sfondo OLE](../mfc/ole-background.md)<br/>
Illustra OLE e fornisce informazioni concettuali su come funziona.

[Attivazione](../mfc/activation-cpp.md)<br/>
Descrive il ruolo dell'attivazione nella modifica di elementi OLE.

[Contenitori](../mfc/containers.md)<br/>
Fornisce collegamenti a uso dei contenitori in OLE.

[Oggetti dati e origini dati](../mfc/data-objects-and-data-sources-ole.md)<br/>
Vengono forniti collegamenti ad argomenti che illustrano l'uso del `COleDataObject` e `COleDataSource` classi.

[Trascinamento della selezione](../mfc/drag-and-drop-ole.md)<br/>
Viene illustrato l'utilizzo di copia e Incolla con OLE.

[Menu e risorse OLE](../mfc/menus-and-resources-ole.md)<br/>
Illustra l'uso di menu e risorse nelle applicazioni OLE MFC documento.

[Registrazione](../mfc/registration.md)<br/>
Descrive l'inizializzazione e installazione del server.

[Server](../mfc/servers.md)<br/>
Viene descritto come creare applicazioni contenitore OLE elementi (o i componenti) per l'uso.

[Tracker](../mfc/trackers.md)<br/>
Vengono fornite informazioni sul `CRectTracker` (classe), che fornisce un'interfaccia grafica per consentire agli utenti di interagire con gli elementi di client OLE.

## <a name="related-sections"></a>Sezioni correlate

[Punti di connessione](../mfc/connection-points.md)<br/>
Viene illustrato come implementare i punti di connessione (precedentemente noti come punti di connessione OLE) usando le classi MFC `CCmdTarget` e `CConnectionPoint`.

[Componenti di contenitore/Server COM](../mfc/containers-advanced-features.md)<br/>
Descrive i passaggi necessari per incorporare funzionalità avanzate facoltative nelle applicazioni contenitore esistenti.

[Modello a oggetti del componente](/windows/desktop/com/the-component-object-model)<br/>
Viene descritto l'utilizzo di OLE senza MFC.

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)

