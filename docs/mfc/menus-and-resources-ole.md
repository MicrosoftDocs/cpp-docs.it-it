---
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
ms.openlocfilehash: 4e8f8c7fa8e24349a741b99822f13d5473373e17
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62225467"
---
# <a name="menus-and-resources-ole"></a>Menu e risorse (OLE)

Questo gruppo di articoli illustra l'uso di menu e risorse nelle applicazioni OLE MFC documento.

OLE modifica visiva inserisce i requisiti aggiuntivi nel menu e altre risorse fornite da applicazioni documento OLE perché sono presenti un numero di contenitore in cui entrambe le modalità e le applicazioni server (componente) possono essere avviate e utilizzate. Ad esempio, un'applicazione server completo possa eseguire in una qualsiasi delle tre modalità:

- Evento autonomo.

- Disponibile per la modifica di un elemento all'interno del contesto di un contenitore.

- Aperta per la modifica di un elemento all'esterno del contesto del relativo contenitore, spesso in una finestra separata.

Questa operazione richiede tre layout di menu separati, uno per ogni modalità possibili dell'applicazione. Le tabelle di tasti di scelta rapida sono inoltre necessari per ogni nuova modalità. Un'applicazione contenitore può o potrebbe non supportare l'attivazione sul posto; in caso affermativo, richiede una nuova struttura di menu e tasti di scelta rapida associato.

L'attivazione sul posto richiede che le applicazioni contenitore e il server devono negoziare lo spazio barra dei menu della barra degli strumenti e lo stato. Tutte le risorse devono essere progettate con questo a mente. L'articolo [menu e risorse: Se si uniscono menu](../mfc/menus-and-resources-menu-merging.md) illustra in dettaglio in questo argomento.

A causa di questi problemi, le applicazioni documento OLE create con la creazione guidata applicazione possono avere fino a quattro menu separati e delle risorse di tabelle di tasti di scelta rapida. Questi vengono usati per i motivi seguenti:

|Nome della risorsa|Usa|
|-------------------|---------|
|IDR_MAINFRAME|Usato in un'applicazione MDI se è aperto alcun file o in un'applicazione SDI indipendentemente dal file aperti. Si tratta del menu standard usato nelle applicazioni non OLE.|
|IDR_\<project>TYPE|Se i file sono aperti, usato in un'applicazione MDI. Utilizzato quando è in esecuzione un'applicazione autonoma. Si tratta del menu standard usato nelle applicazioni non OLE.|
|IDR_\<project>TYPE_SRVR_IP|Utilizzato per il server o il contenitore quando è aperto un oggetto sul posto.|
|IDR_\<project>TYPE_SRVR_EMB|Usato da un'applicazione server se un oggetto viene aperto senza usare l'attivazione sul posto.|

Ognuno di questi nomi di risorse rappresenta un menu di scelta e, in genere, una tabella di tasti di scelta rapida. Uno schema analogo deve essere utilizzato in applicazioni MFC che non vengono create con la creazione guidata applicazione.

Gli articoli seguenti illustrano gli argomenti relativi a contenitori, i server e l'unione necessari per implementare l'attivazione sul posto di menu:

- [Menu e risorse: aggiunta di contenitori](../mfc/menus-and-resources-container-additions.md)

- [Menu e risorse: aggiunta di server](../mfc/menus-and-resources-server-additions.md)

- [Menu e risorse: unione di menu](../mfc/menus-and-resources-menu-merging.md)

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)
