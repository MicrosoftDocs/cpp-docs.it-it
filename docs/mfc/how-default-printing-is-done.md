---
title: Procedura di stampa predefinita
ms.date: 11/04/2016
helpviewer_keywords:
- default printing
- printing [MFC], default
- defaults, printing
ms.assetid: 0f698459-0fc9-4d43-97da-29cf0f65daa2
ms.openlocfilehash: 5019bcad769c4b7cdb699facef145a21d9b5e11c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508423"
---
# <a name="how-default-printing-is-done"></a>Procedura di stampa predefinita

In questo articolo viene illustrato il processo di stampa predefinito in Windows a livello del framework MFC.

Nelle applicazioni MFC, la classe di visualizzazione dispone di una funzione membro denominata `OnDraw` contenente tutto il codice di disegno. `OnDraw`accetta un puntatore a un oggetto [CDC](../mfc/reference/cdc-class.md) come parametro. L'oggetto `CDC` rappresenta il contesto di dispositivo che deve ricevere l'immagine prodotta da `OnDraw`. Quando la finestra che Visualizza il documento riceve un messaggio [WM_PAINT](/windows/win32/gdi/wm-paint) , il Framework `OnDraw` chiama e passa un contesto di dispositivo per la schermata (un oggetto [CPaintDC](../mfc/reference/cpaintdc-class.md) , che deve essere specifico). Pertanto, l'output di `OnDraw` sarà inviato allo schermo.

Nella programmazione per Windows, l'invio di output alla stampante è molto simile all'invio di output allo schermo. Questo perché la Graphics Device Interface (GDI) di Windows è indipendente dall'hardware. È possibile utilizzare le stesse funzioni GDI per la visualizzazione su schermo o per la stampa utilizzando semplicemente il contesto di dispositivo appropriato. Se l'oggetto `CDC` ricevuto da `OnDraw` rappresenta la stampante, l'output di `OnDraw` sarà inviato alla stampante.

Questo spiega come le applicazioni MFC possono eseguire la stampa semplice senza necessità di operazioni aggiuntive. Il framework si occupa della visualizzazione della finestra di dialogo Stampa e della creazione di un contesto di dispositivo per la stampante. Quando l'utente seleziona il comando Stampa dal menu File, la visualizzazione passa tale contesto di dispositivo a `OnDraw`, che disegna il documento nella stampante.

Tuttavia, esistono alcune differenze significative tra stampa e visualizzazione su schermo. Quando si stampa, è necessario dividere il documento in pagine distinte e visualizzarle una alla volta, anziché mostrare la porzione visibile in una finestra. Si deve quindi tenere conto del formato della carta (ovvero dimensione lettera, legale o busta). È possibile che si desideri stampare con orientamenti diversi, quali l'orientamento orizzontale o verticale. La libreria MFC non può prevedere come l'applicazione gestirà questi problemi, pertanto viene fornito un protocollo per poter aggiungere queste funzionalità.

Il protocollo è descritto nell'articolo relativo ai documenti a più [pagine](../mfc/multipage-documents.md).

## <a name="see-also"></a>Vedere anche

[Stampa](../mfc/printing.md)
