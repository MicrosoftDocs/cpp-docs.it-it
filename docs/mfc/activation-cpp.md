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
ms.openlocfilehash: 47640a59180348bd3513013b65029a775545e211
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619177"
---
# <a name="activation-c"></a>Attivazione (C++)

In questo articolo viene illustrato il ruolo di attivazione nella modifica visiva degli elementi OLE. Una volta che un utente ha incorporato un elemento OLE in un documento contenitore, potrebbe essere necessario utilizzarlo. A tale scopo, l'utente fa doppio clic sull'elemento, che attiva tale elemento. L'attività più frequente per l'attivazione è la modifica. Molti elementi OLE correnti, quando vengono attivati per la modifica, determinano la modifica dei menu e delle barre degli strumenti nella finestra cornice corrente per riflettere quelli che appartengono all'applicazione server che ha creato l'elemento. Questo comportamento, noto come attivazione sul posto, consente all'utente di modificare qualsiasi elemento incorporato in un documento composto senza uscire dalla finestra del documento contenitore.

È anche possibile modificare gli elementi OLE incorporati in una finestra separata. Questo problema si verifica se il contenitore o l'applicazione server non supporta l'attivazione sul posto. In questo caso, quando l'utente fa doppio clic su un elemento incorporato, l'applicazione server viene avviata in una finestra separata e l'elemento incorporato viene visualizzato come documento. L'utente modifica l'elemento in questa finestra. Al termine della modifica, l'utente chiude l'applicazione server e torna all'applicazione contenitore.

In alternativa, l'utente può scegliere "Apri modifica" con il comando ** \<object> Apri** nel menu **modifica** . Verrà aperto l'oggetto in una finestra separata.

> [!NOTE]
> La modifica di elementi incorporati in una finestra separata è il comportamento standard della versione 1 di OLE e alcune applicazioni OLE possono supportare solo questo stile di modifica.

L'attivazione sul posto promuove un approccio incentrato sui documenti alla creazione del documento. L'utente può trattare un documento composto come una singola entità, lavorando su di esso senza passare da un'applicazione all'altra. Tuttavia, l'attivazione sul posto viene usata solo per gli elementi incorporati, non per gli elementi collegati: devono essere modificati in una finestra separata. Questo è dovuto al fatto che un elemento collegato viene effettivamente archiviato in una posizione diversa. La modifica di un elemento collegato si verifica all'interno del contesto effettivo dei dati, ovvero la posizione in cui vengono archiviati i dati. Se si modifica un elemento collegato in una finestra separata, viene ricordato all'utente che i dati appartengono a un altro documento.

MFC non supporta l'attivazione sul posto nidificata. Se si compila un'applicazione contenitore/server e il contenitore/server è incorporato in un altro contenitore e attivato sul posto, non è possibile attivare sul posto gli oggetti incorporati all'interno di esso.

Cosa accade a un elemento incorporato quando l'utente fa doppio clic su di esso dipende dai verbi definiti per l'elemento. Per informazioni, vedere [attivazione: verbi](activation-verbs.md).

## <a name="see-also"></a>Vedere anche

[OLE](ole-in-mfc.md)<br/>
[Contenitori](containers.md)<br/>
[Server](servers.md)
