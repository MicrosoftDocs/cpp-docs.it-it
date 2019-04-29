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
ms.openlocfilehash: a6009e5209ce71c6eed28faff2f55792a64de408
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392934"
---
# <a name="activation-c"></a>Attivazione (C++)

Questo articolo illustra il ruolo dell'attivazione in modifica visiva degli elementi OLE. Dopo che un utente dispone di un elemento OLE incorporato in un documento contenitore, potrebbe essere necessario da usare. A tale scopo, l'utente fa doppio clic sull'elemento che consente di attivare tale elemento. L'attività più frequente per l'attivazione sta modificando. Molti elementi OLE correnti, quando attivata per la modifica, determinano i menu e barre degli strumenti nella finestra cornice corrente per riflettere quelle appartenenti all'applicazione server che ha creato l'elemento. Questo comportamento, noto come attivazione sul posto, consente all'utente di modificare qualsiasi elemento incorporato in un documento composito senza uscire dalla finestra del documento contenitore.

È anche possibile modificare gli elementi OLE incorporati in una finestra separata. Ciò si verifica se l'applicazione del contenitore o del server non supporta l'attivazione sul posto. In questo caso, quando l'utente fa doppio clic su un elemento incorporato, viene avviata l'applicazione server in una finestra separata e l'elemento incorporato viene visualizzato come un documento. L'utente modifica l'elemento in questa finestra. Se la modifica è stata completata, l'utente chiude l'applicazione server e restituisce all'applicazione contenitore.

In alternativa, l'utente può scegliere "modifica aperte" con il  **\<oggetto > aprire** comando il **modifica** menu. Verrà aperto l'oggetto in una finestra separata.

> [!NOTE]
>  Modifica elementi incorporati in una finestra separata è il comportamento standard nella versione 1 di OLE e alcune applicazioni OLE possono supportare solo questo stile di modifica.

Attivazione sul posto promuove un approccio incentrato sul documento per la creazione del documento. Gli utenti possono considerare un documento composito come singola entità, è in uso senza dover passare tra le applicazioni. Tuttavia, l'attivazione sul posto viene usato solo per gli elementi incorporati, non per gli elementi collegati: che devono essere modificati in una finestra separata. Questo avviene perché un elemento collegato viene effettivamente archiviato in una posizione diversa. Le modifiche a un elemento collegato viene eseguita all'interno del contesto effettivo dei dati, vale a dire, dove sono archiviati i dati. Modifica di un elemento collegato in una finestra separata ricorda all'utente che i dati appartengono a un altro documento.

MFC non supporta l'attivazione sul posto annidato. Se si compila un'applicazione contenitore/server e che contenitore/server è incorporato in un altro contenitore e attivato sul posto, non è posto attivare oggetti incorporati.

Cosa accade a un elemento incorporato quando l'utente fa doppio clic su varia a seconda dei verbi definiti per l'elemento. Per informazioni, vedere [attivazione: Verbi](../mfc/activation-verbs.md).

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Contenitori](../mfc/containers.md)<br/>
[Server](../mfc/servers.md)
