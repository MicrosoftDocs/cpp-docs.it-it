---
title: Interpretazione dell'input utente attraverso una visualizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- interpreting user input through views [MFC]
- views [MFC], user interface and input
- input [MFC], view class [MFC]
- CView class [MFC], interpreting user input
- user input [MFC], interpreting through view class [MFC]
ms.assetid: f0302a70-661f-4781-8fe7-78f082bef2a5
ms.openlocfilehash: 43fb903fa169233ce532e41ecdf02c23ab6037c8
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621457"
---
# <a name="interpreting-user-input-through-a-view"></a>Interpretazione dell'input utente attraverso una visualizzazione

Altre funzioni membro della visualizzazione gestiscono e interpretano tutti gli input utente. Si definiscono in genere le funzioni membro del gestore di messaggi nella classe di visualizzazione da elaborare:

- [Messaggi](messages.md) di Windows generati dalle azioni del mouse e della tastiera.

- [Comandi](user-interface-objects-and-command-ids.md) da menu, pulsanti della barra degli strumenti e tasti di scelta rapida.

Queste funzioni membro del gestore di messaggi interpretano le azioni seguenti come input di dati, selezione o modifica, incluso lo stato di trasferimento dei dati da e verso gli Appunti:

- Movimenti del mouse, clic, trascinamento e doppio clic

- Tasti

- Comandi di menu

Quali messaggi di Windows gli handle di visualizzazione dipendono dalle esigenze dell'applicazione.

[Argomenti relativi alla gestione e al mapping dei messaggi](message-handling-and-mapping.md) spiega come assegnare voci di menu e altri oggetti dell'interfaccia utente ai comandi e come associare i comandi alle funzioni del gestore. [Argomenti relativi alla gestione e al mapping dei messaggi](message-handling-and-mapping.md) spiega anche il modo in cui MFC instrada i comandi e invia messaggi Windows standard agli oggetti che contengono gestori.

Ad esempio, è possibile che l'applicazione debba implementare il disegno diretto del mouse nella visualizzazione. Nell'esempio Scribble viene illustrato come gestire i messaggi di WM_LBUTTONDOWN, WM_MOUSEMOVE e WM_LBUTTONUP rispettivamente per iniziare, continuare e terminare il disegno di un segmento di linea. D'altra parte, a volte potrebbe essere necessario interpretare un clic del mouse nella visualizzazione come selezione. La funzione del `OnLButtonDown` gestore della visualizzazione determina se l'utente sta disegnando o selezionando. Se si seleziona, il gestore determina se il clic si trovava all'interno dei limiti di un oggetto della vista e, in caso affermativo, modificare la visualizzazione in modo da visualizzare l'oggetto selezionato.

La visualizzazione potrebbe anche gestire alcuni comandi di menu, ad esempio quelli del menu modifica per tagliare, copiare, incollare o eliminare dati selezionati usando gli Appunti. Tale gestore chiamerebbe alcune delle funzioni membro relative agli Appunti della classe `CWnd` per trasferire un elemento di dati selezionato da o negli Appunti.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle visualizzazioni](using-views.md)
