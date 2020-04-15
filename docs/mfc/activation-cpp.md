---
title: Attivazione (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- OLE server applications [MFC], activation
- OLE items [MFC], visual editing
- activation [MFC]
- OLE [MFC], in-place activation
- OLE [MFC], activation
- in-place activation, embedded and linked items
- activating objects
- visual editing, activation
- visual editing
- documents [MFC], OLE
- embedded objects [MFC]
- OLE [MFC], editing
- in-place activation
- activation [MFC], embedded OLE items
- OLE activation [MFC]
ms.assetid: ed8357d9-e487-4aaa-aa6b-2edc4de25dfa
ms.openlocfilehash: 9f3fba71002a19a0be0e3429a0faeeefb7c65197
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81354177"
---
# <a name="activation-c"></a>Attivazione (C++)

In questo articolo viene illustrato il ruolo dell'attivazione nella modifica visiva degli elementi OLE. Dopo che un utente ha incorporato un elemento OLE in un documento contenitore, potrebbe essere necessario utilizzarlo. A tale scopo, l'utente fa doppio clic sull'elemento, che attiva tale elemento. L'attività più frequente per l'attivazione è la modifica. Molti elementi OLE correnti, se attivati per la modifica, determinano la modifica dei menu e delle barre degli strumenti nella finestra cornice corrente per riflettere quelli appartenenti all'applicazione server che ha creato l'elemento. Questo comportamento, noto come attivazione sul posto, consente all'utente di modificare qualsiasi elemento incorporato in un documento composto senza uscire dalla finestra del documento contenitore.

È anche possibile modificare gli elementi OLE incorporati in una finestra separata. Ciò si verifica se il contenitore o l'applicazione server non supporta l'attivazione sul posto. In questo caso, quando l'utente fa doppio clic su un elemento incorporato, l'applicazione server viene avviata in una finestra separata e l'elemento incorporato viene visualizzato come proprio documento. L'utente modifica l'elemento in questa finestra. Al termine della modifica, l'utente chiude l'applicazione server e torna all'applicazione contenitore.

In alternativa, l'utente può scegliere "Apri modifica" con ** \<l'oggetto>** comando Apri del menu **Modifica.** Questo apre l'oggetto in una finestra separata.

> [!NOTE]
> La modifica di elementi incorporati in una finestra separata era un comportamento standard nella versione 1 di OLE e alcune applicazioni OLE possono supportare solo questo stile di modifica.

L'attivazione sul posto promuove un approccio incentrato sui documenti per la creazione di documenti. L'utente può trattare un documento composto come una singola entità, lavorando su di esso senza passare da un'applicazione all'altra. Tuttavia, l'attivazione sul posto viene utilizzata solo per gli elementi incorporati, non per gli elementi collegati: devono essere modificati in una finestra separata. Ciò è dovuto al fatto che un elemento collegato viene effettivamente archiviato in una posizione diversa. La modifica di un elemento collegato avviene all'interno del contesto effettivo dei dati, ovvero in cui sono archiviati i dati. La modifica di un elemento collegato in una finestra separata ricorda all'utente che i dati appartengono a un altro documento.

MFC non supporta l'attivazione sul posto annidata. Se si compila un'applicazione contenitore/server e tale contenitore/server è incorporato in un altro contenitore e attivato sul posto, non può attivare sul posto gli oggetti incorporati al suo interno.

Ciò che accade a un elemento incorporato quando l'utente fa doppio clic dipende dai verbi definiti per l'elemento. Per informazioni, vedere [Attivazione: Verbi](../mfc/activation-verbs.md).

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Contenitori](../mfc/containers.md)<br/>
[Server](../mfc/servers.md)
