---
description: 'Altre informazioni su: menu e risorse (OLE)'
title: Menu e risorse (OLE)
ms.date: 11/04/2016
helpviewer_keywords:
- OLE visual editing servers [MFC]
- status bars [MFC], OLE document applications
- visual editing [MFC], application menus and resources
- string tables [MFC], visual editing applications
- OLE containers [MFC], menus and resources
- OLE applications [MFC], menus and resources
- OLE server applications [MFC], menus and resources
- toolbars [MFC], OLE document applications
- string editing [MFC], visual editing applications
- server applications [MFC], OLE menus and resources
- applications [OLE], menus and resources
- menus [MFC], OLE document applications
- in-place activation [MFC], OLE menus and resources
- containers [MFC], OLE container applications
- OLE menus and resources [MFC]
ms.assetid: 52bfa086-7d3d-466f-94c7-c7061f3bdb3a
ms.openlocfilehash: a6ec4f2750a99935cb0113a3ad607be8a80d4bfe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133146"
---
# <a name="menus-and-resources-ole"></a>Menu e risorse (OLE)

In questo gruppo di articoli viene illustrato l'utilizzo di menu e risorse nelle applicazioni per documenti OLE MFC.

La modifica visiva OLE inserisce requisiti aggiuntivi nel menu e in altre risorse fornite dalle applicazioni per documenti OLE perché sono disponibili diverse modalità in cui è possibile avviare e utilizzare sia le applicazioni del contenitore che quelle del server (componente). Ad esempio, un'applicazione server completa può essere eseguita in una delle tre modalità seguenti:

- Autonomo.

- Sul posto, per la modifica di un elemento all'interno del contesto di un contenitore.

- Aperto, per la modifica di un elemento all'esterno del contesto del relativo contenitore, spesso in una finestra separata.

Sono necessari tre layout di menu distinti, uno per ogni possibile modalità dell'applicazione. Le tabelle dei tasti di scelta rapida sono necessarie anche per ogni nuova modalità. Un'applicazione contenitore può supportare l'attivazione sul posto; in tal caso, è necessaria una nuova struttura di menu e le tabelle di tasti di scelta rapida associate.

L'attivazione sul posto richiede che le applicazioni del contenitore e del server debbano negoziare per lo spazio di menu, barre degli strumenti e barre di stato. Tutte le risorse devono essere progettate tenendo presente questo aspetto. I menu [e le risorse](menus-and-resources-menu-merging.md) degli articoli: l'Unione dei menu illustra in dettaglio questo argomento.

A causa di questi problemi, le applicazioni di documento OLE create con la creazione guidata applicazione possono disporre di un massimo di quattro menu e risorse della tabella di tasti di scelta rapida distinti. Questi vengono utilizzati per i motivi seguenti:

|Nome risorsa|Usa|
|-------------------|---------|
|IDR_MAINFRAME|Utilizzato in un'applicazione MDI se nessun file è aperto o in un'applicazione SDI indipendentemente dai file aperti. Si tratta del menu standard utilizzato nelle applicazioni non OLE.|
|tipo di IDR_ \<project>|Utilizzato in un'applicazione MDI se i file sono aperti. Utilizzato quando un'applicazione viene eseguita autonomamente. Si tratta del menu standard utilizzato nelle applicazioni non OLE.|
|IDR_ \<project> TYPE_SRVR_IP|Utilizzato dal server o dal contenitore quando un oggetto è aperto sul posto.|
|IDR_ \<project> TYPE_SRVR_EMB|Utilizzato da un'applicazione server se un oggetto viene aperto senza utilizzare l'attivazione sul posto.|

Ognuno di questi nomi di risorse rappresenta un menu e, in genere, una tabella di tasti di scelta rapida. Un schema simile deve essere utilizzato nelle applicazioni MFC che non vengono create con la creazione guidata applicazione.

Gli articoli seguenti illustrano gli argomenti correlati a contenitori, server e l'Unione dei menu necessari per implementare l'attivazione sul posto:

- [Menu e risorse: aggiunte di contenitori](menus-and-resources-container-additions.md)

- [Menu e risorse: aggiunte server](menus-and-resources-server-additions.md)

- [Menu e risorse: Unione di menu](menus-and-resources-menu-merging.md)

## <a name="see-also"></a>Vedi anche

[OLE](ole-in-mfc.md)
