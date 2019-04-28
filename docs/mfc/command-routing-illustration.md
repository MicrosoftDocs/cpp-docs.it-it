---
title: Illustrazione del routing dei comandi
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, command routing
- command handling [MFC], routing commands
- command routing [MFC], OnCmdMsg handler
ms.assetid: 4b7b4741-565f-4878-b076-fd85c670f87f
ms.openlocfilehash: 56d131151f2284f12a3b46a9acd3cfbd3c8b0f47
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62164878"
---
# <a name="command-routing-illustration"></a>Illustrazione del routing dei comandi

Per illustrare questo concetto, si consideri un messaggio di comando da una voce di menu nel menu di modifica di un'applicazione MDI Cancella tutto. Si supponga che la funzione del gestore per questo comando risulta essere una funzione membro di classe documento dell'applicazione. Ecco come comando raggiunge il gestore dopo che l'utente sceglie la voce di menu:

1. La finestra cornice principale riceve il messaggio di comando prima di tutto.

1. La finestra cornice MDI principale offre la finestra figlio MDI attiva l'opportunità di gestire il comando.

1. Il routing standard di una finestra cornice figlio MDI consente la visualizzazione al prompt dei comandi prima di verificare la propria mappa messaggi.

1. La vista prima controlla la propria mappa messaggi e non trovare alcun gestore, indirizza il comando al documento associato.

1. Il documento controlla propria mappa messaggi e trova un gestore. La funzione membro in questo documento viene chiamata e il routing viene interrotta.

Se il documento non aveva un gestore, avrebbe inoltrato il comando al modello del documento. Restituisce quindi il comando per la visualizzazione e quindi la finestra cornice. Infine, la finestra cornice verrà archiviati propria mappa messaggi. Se tale controllo non è riuscito anche, il comando verrà indirizzato tornare alla finestra cornice MDI principale e quindi all'oggetto applicazione, ovvero la destinazione finale dei comandi non gestiti.

## <a name="see-also"></a>Vedere anche

[Chiamata di un gestore dal framework](../mfc/how-the-framework-calls-a-handler.md)
